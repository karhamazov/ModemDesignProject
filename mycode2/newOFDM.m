% source: https://www.mathworks.com/examples/matlab-communications/mw/comm_product-OFDMvsUFMCExample-ufmc-vs-ofdm-modulation

clc; close all; 
clear;

s = rng(211); 
%% Parameters
numFFT = 512;        % number of FFT points
subbandSize = 20;    % must be > 1
numSubbands = 10;    % numSubbands*subbandSize <= numFFT
subbandOffset = 156; % numFFT/2-subbandSize*numSubbands/2 for band center

% Dolph-Chebyshev window design parameters
filterLen = 43;      % similar to cyclic prefix length
slobeAtten = 40;     % sidelobe attenuation, dB

bitsPerSubCarrier = 4;   % 2: 4QAM, 4: 16QAM, 6: 64QAM, 8: 256QAM
snrdB = 15;              % SNR in dB

%% QAM Modulation
% QAM Symbol mapper
qamMapper = comm.RectangularQAMModulator('ModulationOrder', ...
    2^bitsPerSubCarrier, 'BitInput', true, ...
    'NormalizationMethod', 'Average power');
inpData = zeros(bitsPerSubCarrier*subbandSize, numSubbands);
txSig = complex(zeros(numFFT+filterLen-1, 1));


%% OFDM Modulation
 bitsIn = randi([0 1], bitsPerSubCarrier*subbandSize*numSubbands, 1);
 
%inpData = reshape(bitsIn,[80 10]);

symbolsIn = step(qamMapper,bitsIn);
offset = subbandOffset;

symbolsInOFDM = [zeros(offset, 1); symbolsIn; ...
                 zeros(numFFT-offset-subbandSize*numSubbands, 1)];
             
ifftOut = sqrt(numFFT).*ifft(ifftshift(symbolsInOFDM));
%% Channel 
txSig = ifftOut;
% AWGN
rxSig = awgn(txSig, snrdB, 'measured');
rxSig2 = rxSig;
 figure('name','Checking Effect of Freq Offset');
% Frequency Offset
freqO = 5; % hz

% rxSig = step(H,rxSig);
N = 1:length(rxSig);
CFOvector = [];
for i = N
    CFOvector(i) = exp(1j*2*pi*freqO/i);
end
rxSig = rxSig.*CFOvector.';
n = 5000;
 subplot(2,1,1);
 plot(linspace(-1000/2,1000/2,n),abs(fftshift(fft(rxSig2,n)))); title('Without Offsets');
 subplot(2,1,2);
 plot(linspace(-1000/2,1000/2,n),abs(fftshift(fft(rxSig,n)))); title('With Offsets');

%% OFDM Demodulation
fftOut = fftshift(fft(rxSig))/sqrt(numFFT);
symbolsOutOFDM = fftOut(offset+1:end);
symbolsOut = symbolsOutOFDM(1:(end - (numFFT-offset-subbandSize*numSubbands) ));

%% QAM Demodulation
hDemod = comm.RectangularQAMDemodulator('ModulationOrder', ...
    2^bitsPerSubCarrier, 'BitOutput', true, ...
    'NormalizationMethod', 'Average power');

bitsOut = step(hDemod,symbolsOut);

hError = comm.ErrorRate;

errorStats = step(hError,bitsIn,bitsOut);

%% Results


% PSD
[psd,f] = periodogram(ifftOut, rectwin(length(ifftOut)), numFFT*2, ...
                      1, 'centered');
hFig1 = figure;
plot(f,10*log10(psd));
grid on
axis([-0.5 0.5 -100 20]);
xlabel('Normalized frequency');
ylabel('PSD (dBW/Hz)')
title(['OFDM, ' num2str(numSubbands*subbandSize) ' Subcarriers'])
set(hFig1, 'Position', figposition([46 50 25 30]));

% PAPR
PAPR2 = comm.CCDF('PAPROutputPort', true, 'PowerUnits', 'dBW');
[~,~,paprOFDM] = step(PAPR2,ifftOut);
disp(['PAPR for OFDM = ' num2str(paprOFDM) ' dB']);

% BER
fprintf('\nError rate = %f\nNumber of errors = %d\nNumber of bits = %d\n', ...
errorStats)
%% Myresults
