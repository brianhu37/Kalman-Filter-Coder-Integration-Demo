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
    "789ced594d4f1341181e0c186302d6839a688ce895a4c3a721de4a295829b4da024d8881e9eed0ddb233b3ec6c15bcc03ff04f78d09bde3cf8034c8c0907fc2f"
    "7873b7db29d385baa5ad2b34fb26dbeddb87dde77ddeb7f374b28081f4f2000060c4390ce7387a026a31ec1c3f1c20e6a5e01a680e3f3e503f5f977243fafb21",
    "30084e0ebceb04ee5effbe9e2b8cda78cff6128a086e5ca932a25344edc2be8981853933de60b5866ceb062ee804e7e564c5cdc8820435121772df2735acece4"
    "ab04581a3fadd090935a3fdc3892f4fe3e38d53b784e3f645cf483f8f48a88f9f08dd4ebe433b8cab1c561c9d211d5aa701ef31d9b997019593bd8d669793467",
    "b10a566c0e93898c48e0123208a2a38e321b5ba369a78f650bd93aa3a3f3983048aa86ad9bc67ee34d9cd4f5b9f5ec75a9ef76803e8163626c12db1902dfd4b0"
    "6162abfeb9a863abc33afcd1aa0e1182ef6b877ce2d6f9003e816fa433c5da689d69396321ee983087cb89422631075f4d8e4f8e2368336694d81e749a040dbd",
    "0409b20d5482cce4f04cdfe2a449c7568b3a6fb5a9433ecb3a86c18dda7a1d527f0db4e23b09e03be9800f10e563a87cf5f85f7cf2fa3b09f81e9ec777b7055f"
    "cc872336653ecf55b4a9ecf6d3ca626671926f63923cad2317c01354079072b98eb0ee2fafe74efa7859d6f361973a1e04e810b8c254875b777e2c2c8a8cb886",
    "78c142949b8ce3a67ab6baac6750ca9bebf110454396ccd7ed1c0b01fa057ee139bac758ad6b704cb40dca6df30619968f2c8c84ebcb878ab784235f6e8fef4e"
    "0bbe980fcfa613b3131acdaebf2466a9982caccdae257741e4cbfde6cb0f037408dce7cb656c370c266b82abebcb6b01fa05de1b5f6e6e9b3bcac8977bc327e2",
    "aafa72bbfbe5fc7646c5eb95426a86e3c589d5d29ac65777a3fdf2a55bcfdd7e1fee05e810b8cf977515535bb7f7bbf6637fb4aa4384e0fbdc219fb8754ecacf"
    "e313786fe627da152761f9c69762c8cf2d3efc3c0e95af1efdeec3ea2c7d51a1d35a7169babcf07602a5f273b98954fff8f0f716d7b7db47d4e2fe311ffe0ff6",
    "c78f154608a39b8afb385d3c3befd57ef951802e81fb7d99cf5575c34ed3952ac196aef46cbf2cff5fa3b91e0fe13a2d1bb877732d07e817f885e6ca9d4d3d56"
    "a1e7cedeab3be6b376edeba2f3831b96cfc43f1d87bb7fbe79ff5b987c22faddb7df8d9bfa124f29d9f99cbea0cd146613a5996ce4db916fd7cf97c5b755562d",
    "45be1dac2bf26d2f22dffe3b4f501d40cac3f4ed3f5892bd5e", "" };

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
                (737938.40121527773));
  xResult = emlrtCreateStructMatrix(1, 1, 4, propFieldName);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.8.0.1323502 (R2020a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_multiply_info.c) */
