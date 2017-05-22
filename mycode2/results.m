clc; clear; %close all;


snrRange = -10:2:80;
ber_OFDM = []; ber_UFMC = [];
freqO = 0.8;
for i = snrRange
   ber_OFDM(end+1) = berOFDM(i,freqO);
   ber_UFMC(end+1) = berUFMC(i,freqO); 
end

figure('name',num2str(freqO));

semilogy(snrRange,ber_OFDM,'ro--');
hold on;
semilogy(snrRange, ber_UFMC,'bx--');

title('Comparison of Bit Error Rates');

xlabel('SnR in dB');

ylabel('Bit Error Rate');
grid on;

legend on;
legend({'OFDM','UFMC'},'FontSize',12,'TextColor','blue');
axis([-10 30 10^-4 1]);