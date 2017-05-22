#define S_FUNCTION_LEVEL               2
#define S_FUNCTION_NAME                commqpsktxrx_cgxe
#include "simstruc.h"
#include "commqpsktxrx_cgxe.h"
#define MDL_START

static void mdlStart(SimStruct* S)
{
  unsigned int success;
  success = cgxe_commqpsktxrx_method_dispatcher(S, SS_CALL_MDL_START, NULL);
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }
}

#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  mexPrintf("ERROR: Calling model mdlInitializeConditions method directly.\n");
}

#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  mexPrintf("ERROR: Calling model mdlUpdate method directly.\n");
}

static void mdlOutputs(SimStruct* S, int_T tid)
{
  mexPrintf("ERROR: Calling model mdlOutputs method directly.\n");
}

static void mdlTerminate(SimStruct *S)
{
  mexPrintf("ERROR: Calling model mdlTerminate method directly.\n");
}

static void mdlInitializeSizes(SimStruct *S)
{
}

static void mdlInitializeSampleTimes(SimStruct *S)
{
}

static mxArray* cgxe_get_supported_modules(void)
{
  mxArray* mxModules = mxCreateCellMatrix(5, 1);
  mxArray* mxChksum = NULL;
  uint32_T* checksumData = NULL;
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 422886498;
  checksumData[1] = 72668788;
  checksumData[2] = 1007540051;
  checksumData[3] = 932251377;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1387913735;
  checksumData[1] = 1221901417;
  checksumData[2] = 1231118403;
  checksumData[3] = 3982328420;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2040379297;
  checksumData[1] = 2798664239;
  checksumData[2] = 1989066636;
  checksumData[3] = 2151939687;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2357652797;
  checksumData[1] = 3624488560;
  checksumData[2] = 874232320;
  checksumData[3] = 2247315856;
  mxSetCell(mxModules, 3, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3421317113;
  checksumData[1] = 2372826822;
  checksumData[2] = 1768074624;
  checksumData[3] = 1892211286;
  mxSetCell(mxModules, 4, mxChksum);
  return mxModules;
}

static int cgxe_process_get_checksums(int nlhs, mxArray* plhs[], int nrhs, const
  mxArray* prhs[])
{
  const char* checksumFields[] = { "modules", "model", "makefile", "target",
    "overall" };

  mxArray* mxChecksum = mxCreateStructMatrix(1, 1, 5, checksumFields);
  mxSetField(mxChecksum, 0, "modules", cgxe_get_supported_modules());

  {
    mxArray* mxModelChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxModelChksum);
    checksumData[0] = 828409933;
    checksumData[1] = 1102037714;
    checksumData[2] = 2098608735;
    checksumData[3] = 372563212;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 3576792822;
    checksumData[1] = 559906604;
    checksumData[2] = 3781575512;
    checksumData[3] = 1998707372;
    mxSetField(mxChecksum, 0, "makefile", mxMakefileChksum);
  }

  {
    mxArray* mxTargetChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxTargetChksum);
    checksumData[0] = 4201015399;
    checksumData[1] = 462648460;
    checksumData[2] = 3089484632;
    checksumData[3] = 1933583925;
    mxSetField(mxChecksum, 0, "target", mxTargetChksum);
  }

  {
    mxArray* mxOverallChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxOverallChksum);
    checksumData[0] = 3624959659;
    checksumData[1] = 1672158758;
    checksumData[2] = 3557337361;
    checksumData[3] = 3491164022;
    mxSetField(mxChecksum, 0, "overall", mxOverallChksum);
  }

  plhs[0] = mxChecksum;
  return 1;
}

static int cgxe_mex_unlock_call(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  while (mexIsLocked()) {
    mexUnlock();
  }

  return 1;
}

static SimStruct* cgxe_unpack_simstruct(const mxArray *mxS)
{
  int *intPtr = (int*)malloc(sizeof(SimStruct*));
  int nEl = sizeof(SimStruct*)/sizeof(int);
  double *dblPtr = mxGetPr(mxS);
  int el;
  SimStruct *S;
  for (el=0; el < nEl; el++) {
    intPtr[el] = (int)(dblPtr[el]);
  }

  S = *((SimStruct**)intPtr);
  free(intPtr);
  return S;
}

static int cgxe_get_sim_state(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  unsigned int success;
  SimStruct *S = cgxe_unpack_simstruct(prhs[1]);
  success = cgxe_commqpsktxrx_method_dispatcher(S, SS_CALL_MDL_GET_SIM_STATE,
    (void *) (plhs));
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }

  return 1;
}

static int cgxe_set_sim_state(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  unsigned int success;
  SimStruct *S = cgxe_unpack_simstruct(prhs[1]);
  success = cgxe_commqpsktxrx_method_dispatcher(S, SS_CALL_MDL_SET_SIM_STATE,
    (void *) prhs[2]);
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }

  return 1;
}

static int cgxe_get_BuildInfoUpdate(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(tpChksum, "6ATbE87Fg43sKpJ4PB5SIF") == 0) {
    extern mxArray *cgxe_6ATbE87Fg43sKpJ4PB5SIF_BuildInfoUpdate(void);
    plhs[0] = cgxe_6ATbE87Fg43sKpJ4PB5SIF_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "xuWUxYjSgKTr1UwD3dwTrB") == 0) {
    extern mxArray *cgxe_xuWUxYjSgKTr1UwD3dwTrB_BuildInfoUpdate(void);
    plhs[0] = cgxe_xuWUxYjSgKTr1UwD3dwTrB_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "Uci8vaWUJjlOQLHt7jcgoE") == 0) {
    extern mxArray *cgxe_Uci8vaWUJjlOQLHt7jcgoE_BuildInfoUpdate(void);
    plhs[0] = cgxe_Uci8vaWUJjlOQLHt7jcgoE_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "51kbyQVPDkrPJnyVpDcu4F") == 0) {
    extern mxArray *cgxe_51kbyQVPDkrPJnyVpDcu4F_BuildInfoUpdate(void);
    plhs[0] = cgxe_51kbyQVPDkrPJnyVpDcu4F_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "dUm4flaFffo2LNCqX1KSJF") == 0) {
    extern mxArray *cgxe_dUm4flaFffo2LNCqX1KSJF_BuildInfoUpdate(void);
    plhs[0] = cgxe_dUm4flaFffo2LNCqX1KSJF_BuildInfoUpdate();
    return 1;
  }

  return 0;
}

#define PROCESS_MEX_SFUNCTION_CMD_LINE_CALL

static int ProcessMexSfunctionCmdLineCall(int nlhs, mxArray* plhs[], int nrhs,
  const mxArray* prhs[])
{
  char commandName[64];
  if (nrhs < 1 || !mxIsChar(prhs[0]))
    return 0;
  mxGetString(prhs[0], commandName, sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName, "get_checksums") == 0) {
    return cgxe_process_get_checksums(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "mex_unlock") == 0) {
    return cgxe_mex_unlock_call(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_sim_state") == 0) {
    return cgxe_get_sim_state(nlhs, plhs, nrhs, prhs);
  }

  if ((strcmp(commandName, "NameResolution") == 0)||
      (strcmp(commandName, "AutoInfer") == 0)) {
    if (nrhs < 2 || !mxIsChar(prhs[1]))
      return 0;
    return cgxe_commqpsktxrx_autoInfer_dispatcher(prhs[1], plhs, commandName);
  }

  if (strcmp(commandName, "set_sim_state") == 0) {
    return cgxe_set_sim_state(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_BuildInfoUpdate") == 0) {
    return cgxe_get_BuildInfoUpdate(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "mex_initialize") == 0) {
    cgxe_commqpsktxrx_initializer();
    return 1;
  }

  if (strcmp(commandName, "mex_terminate") == 0) {
    cgxe_commqpsktxrx_terminator();
    return 1;
  }

  return 0;
}

#include "simulink.c"
