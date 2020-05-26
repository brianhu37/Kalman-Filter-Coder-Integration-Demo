/*
 * _coder_multiply_info.c
 *
 * Code generation for function '_coder_multiply_info'
 *
 */

/* Include files */
#include "_coder_multiply_info.h"
#include "emlrt.h"
#include "rt_nonfinite.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void);

/* Function Definitions */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[9] = {
    "789ced594d4f1341181e4c21c604c4839a688ce895a4c3a721de4a295829b4da059a1003d3dda1bb656766d9d92a78817fe09ff0a037bd79f0079818130ef85f"
    "f0e66edb29d3d2ba852d2b907d936dfbe6d9edf33eefbbf374b2057de9a53e00c0907b98ee71f8145463d03d7ebac0702d05374073b4e27df5f7012937a5f3fb",
    "410c1cefd7ae13b877fd877aae32eae05da796504470e34a8d118322ea287b160636e6cc7c8bb52ab26598583108cecbc9b2979179096a241ee47d4eea58ddce"
    "5708b0757e52a12927d57e787128e9fdb37fa237d6a61f322efa415af48a18aee7025f4fbd493e872b1cdb1c166d0351bd02e730df7698059790bd8d1d839646",
    "72362b63d5e13099c888042e2293203ae22a73b03d9276fb58b29163303a32870983a4623a8665ee353ec4495d9fc7bf1b50df1d1f7d02c7c4dc208e3b04bea1"
    "63d3c2b6d467efbccd73d6d11a9dea1021f8be05d49df7e113f87a3a53a88ed69d963b16e28d0973b89450328959f87a626c620c418731b3c876a1db24681a45",
    "489063a222641687a7fa16275df5ed76973ae47759c720b8595daffddaefbe4e7cc73e7cc7e7e00344fd142a5f3dfe179fbcfe8e7deec3767cf73af089fb50e0"
    "884d5a2f72657d32bbf5acbc905998e05b98244feac8f9f0f8d501a4bcdd7abbe8ef97d7f379fa7859d6f341401d0f7d74085c659acb6db83f163645665c475c",
    "b111e516e3b8a99ecd80f5c4a4bcb99e5835577564cb7c41e7a8f8e817f899e7e81da3d5aec151d13628b7ad36c8b07c647e285c5f3e506b4b38f2e5eef8ee76"
    "e013f7a1c0b3e9c4ccb84eb36baf88552c2495d599d5e40e887cf9baf9f2231f1d026ff1e512761a0693b5c0d5f5e5551ffd02ef8d2f37b7cd1b65e4cbbde113",
    "71557db9dbfd727e2ba3e1b5b2929ae678617ca5b8aaf3959d68bf7ce9d673d0fbe1be8f0e81b7f8b2a161ea18ce5e603f6e8d4e7588107c5f02eace49793b3e"
    "81f7667ea25d7112966f7c2d84fcdce2e3afa350f9ea71dd7d589ba12fcb744a2f2c4e95e6df8da3547e36379eba3e3efca3c3f5ddf61175f87ed147815fc0fe",
    "f889ca08617443f51ea78b67e7bdda2f3ff6d125f0565fe6b315c374d274b942b06da83ddb2fcbff6b34d73350cdb9414b26eedd5c4b3efa057ea6b97277538f"
    "355873e7daab37e6d376ddd245f707372c9f897f3e0a77ff7cebc1f730f9445c77df7e3f66198b3ca566e772c6bc3eadcc248ad3d9c8b723dfaee797c5b73556",
    "2946beedaf2bf2ed5a44befd6f1ebf3a809487e9db7f01f4ddd546", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 8936U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * epFieldName[6] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs", "FullPath", "TimeStamp" };

  mxArray *xInputs;
  const char * propFieldName[4] = { "Version", "ResolvedFunctions",
    "EntryPoints", "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 6, epFieldName);
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("multiply"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "C:\\Users\\brianhu\\Desktop\\Marketing Projects\\CAL Project\\Kalman Filter Integration Demo\\multiply\\multiply.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737937.72143518517));
  xResult = emlrtCreateStructMatrix(1, 1, 4, propFieldName);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.8.0.1323502 (R2020a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_multiply_info.c) */
