/* Include files */

#include "commqpsktxrx_cgxe.h"
#include "m_6ATbE87Fg43sKpJ4PB5SIF.h"
#include "m_xuWUxYjSgKTr1UwD3dwTrB.h"
#include "m_Uci8vaWUJjlOQLHt7jcgoE.h"
#include "m_51kbyQVPDkrPJnyVpDcu4F.h"
#include "m_dUm4flaFffo2LNCqX1KSJF.h"

static unsigned int cgxeModelInitialized = 0;
emlrtContext emlrtContextGlobal = { true, true, EMLRT_VERSION_INFO, NULL, "",
  NULL, false, { 0, 0, 0, 0 }, NULL };

void *emlrtRootTLSGlobal = NULL;
char cgxeRtErrBuf[4096];

/* CGXE Glue Code */
void cgxe_commqpsktxrx_initializer(void)
{
  if (cgxeModelInitialized == 0) {
    cgxeModelInitialized = 1;
    emlrtRootTLSGlobal = NULL;
    emlrtCreateSimulinkRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
      false, 0);
  }
}

void cgxe_commqpsktxrx_terminator(void)
{
  if (cgxeModelInitialized != 0) {
    cgxeModelInitialized = 0;
    emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
    emlrtRootTLSGlobal = NULL;
  }
}

unsigned int cgxe_commqpsktxrx_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 422886498 &&
      ssGetChecksum1(S) == 72668788 &&
      ssGetChecksum2(S) == 1007540051 &&
      ssGetChecksum3(S) == 932251377) {
    method_dispatcher_6ATbE87Fg43sKpJ4PB5SIF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1387913735 &&
      ssGetChecksum1(S) == 1221901417 &&
      ssGetChecksum2(S) == 1231118403 &&
      ssGetChecksum3(S) == 3982328420) {
    method_dispatcher_xuWUxYjSgKTr1UwD3dwTrB(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2040379297 &&
      ssGetChecksum1(S) == 2798664239 &&
      ssGetChecksum2(S) == 1989066636 &&
      ssGetChecksum3(S) == 2151939687) {
    method_dispatcher_Uci8vaWUJjlOQLHt7jcgoE(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2357652797 &&
      ssGetChecksum1(S) == 3624488560 &&
      ssGetChecksum2(S) == 874232320 &&
      ssGetChecksum3(S) == 2247315856) {
    method_dispatcher_51kbyQVPDkrPJnyVpDcu4F(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3421317113 &&
      ssGetChecksum1(S) == 2372826822 &&
      ssGetChecksum2(S) == 1768074624 &&
      ssGetChecksum3(S) == 1892211286) {
    method_dispatcher_dUm4flaFffo2LNCqX1KSJF(S, method, data);
    return 1;
  }

  return 0;
}

int cgxe_commqpsktxrx_autoInfer_dispatcher(const mxArray* prhs, mxArray* lhs[],
  const char* commandName)
{
  char sid[64];
  mxGetString(prhs,sid, sizeof(sid)/sizeof(char));
  sid[(sizeof(sid)/sizeof(char)-1)] = '\0';
  if (strcmp(sid, "commqpsktxrx:1536") == 0 ) {
    return autoInfer_dispatcher_6ATbE87Fg43sKpJ4PB5SIF(lhs, commandName);
  }

  mxGetString(prhs,sid, sizeof(sid)/sizeof(char));
  sid[(sizeof(sid)/sizeof(char)-1)] = '\0';
  if (strcmp(sid, "commqpsktxrx:1539") == 0 ) {
    return autoInfer_dispatcher_xuWUxYjSgKTr1UwD3dwTrB(lhs, commandName);
  }

  mxGetString(prhs,sid, sizeof(sid)/sizeof(char));
  sid[(sizeof(sid)/sizeof(char)-1)] = '\0';
  if (strcmp(sid, "commqpsktxrx:1559") == 0 ) {
    return autoInfer_dispatcher_Uci8vaWUJjlOQLHt7jcgoE(lhs, commandName);
  }

  mxGetString(prhs,sid, sizeof(sid)/sizeof(char));
  sid[(sizeof(sid)/sizeof(char)-1)] = '\0';
  if (strcmp(sid, "commqpsktxrx:1558") == 0 ) {
    return autoInfer_dispatcher_51kbyQVPDkrPJnyVpDcu4F(lhs, commandName);
  }

  mxGetString(prhs,sid, sizeof(sid)/sizeof(char));
  sid[(sizeof(sid)/sizeof(char)-1)] = '\0';
  if (strcmp(sid, "commqpsktxrx:1523") == 0 ) {
    return autoInfer_dispatcher_dUm4flaFffo2LNCqX1KSJF(lhs, commandName);
  }

  return 0;
}
