/*
 * _coder_kalman_loop_info.c
 *
 * Code generation for function '_coder_kalman_loop_info'
 *
 */

/* Include files */
#include "_coder_kalman_loop_info.h"
#include "emlrt.h"
#include "rt_nonfinite.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void);

/* Function Definitions */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[32] = {
    "789ced5d5b6c2357199ed21655d06d53d4420195dd85f28056c4973889532424dfe3f81edb4936db928cc7c7f6c473f3ccd8b1fd52bf508aba529128e2ad0281"
    "44a9fa50dea8a8d420150995167a57e109a9e52221548907b42004d81e9facedf5ecd89ec949e6f4fc52369efd33e7fbffffe47cf3e73f97a16e89266ea128ea",
    "aeee17d7fd7afe81de15459deb7efda6fb7181d2e463d4a88ceb6f197c5f1abae6867efe76ea36eadaa3da7d50dfbbffc9c135230a2a68aada8540f3e0f8cea2"
    "c8b3022da8b9960428192822d700c5bea6c47220c7f2203b7c91ec5df1e121d5f1454fd5fb1ca800a69aadf3945c51ae5bc80d5ff4e3d1935f0ff9fbaf47affb",
    "7bdb84780ceb613cca63fe425918d35f093d1278c8915780ac380a324b0b95ba230894aa2a4a8e042d5781ca0ae50b69593c008caa3802be38bc70c4688ea785"
    "0b5dcf54205f8876e35896699515850b41c08b8e6a5fbdc789a2b4c8f7fdead92199f4eb4e03bfa05e432ff56d8371edfdfcbe49fc8febe26b9aa2582f70e03a",
    "9ed97eac18f80bf527dd8f5a241779a338de3da55fc3df87fd3a47ddd11faf5ff5bcdbffdf4978d70cf0aecd817778dfb71e468907e5b4f09a3aed4dfabd9c84"
    "779f0edec2983ecc155b87f9a0cb25644ade38a3049a75b9366447da00c7c80e6ae87ad80e54ed0f8fef79e26887f13d8f5fb7eafaa569400b8cc4d12cdeacbc",
    "fc8c49bc882edea8fe4a34bed3efba6e6f74c3cef7ba01288e842f17f7f91d9b6ea7db493b5451e40a62d30178cec1b105074fab1c5d70806ec7a88e6ea4869e"
    "9f7a71b28a27a4bfbd8d9477a927cebd8e146f2076e5dd4febe02d8ce9e34a28c1aa8d952a1b673c52dabdea5fe562ebf8f0ae5dc7afd9febfdfc06ea867c462",
    "97ced92ed9cb02cd2d0ab45c6605a65235cbb7e3a2670714887734271e6c7a7fe87a121ed4cfd45f4a859641d1d18fd5e0df5ef75dd23e5e82d1731c47cff8f9"
    "68156fdcf91e621efed013458a3710dc79b8eccdf8d74a2e6fd2b7be55d84d466af4aabbedc787878f74eec76d5c4febcfedbafe689a12278a32757a79eff326",
    "f1a2ba78a37a73cfcd525d70f423d57d726a828a2716df47cbbb1dee31ddfa14e1ddf979b79d7035020c53897079b015e29d9ef48ab412c18777ed3e8e3b26ed"
    "3f6f603fd48fe5c1ace2afb39c1a1592751ec82c736a3c6cb66e34757dff249e9be35144589f58fc29627efec4e75e448907057b7e764a6c4c0931a9609a0d57",
    "96735e5f61391522fc8c0b3f7fdec07ea81fe36785a1395a5e8459b2f93c795cf4ec8102f17e3e271e6c3a6f8007f533f75fefeb0642bea4c56da82fb1cd97ff"
    "f40f01251e14dcf9782b550bd6657f3ce813566a97bda01148955a18d529eccec7df3169ff570cec87fa313ea625896b65fbe412ae0b4c6fd6302aa4399a81eb",
    "6426adeb98c7bebb87ae27d907f5a581157b155a2876136aabf2e982013ed45bc3d7fa61851d8f8a6f9e780b719db9be7e0d29de4070e7ef95ea72753bbb5314"
    "0adceeda86a8ec5e4efb598cea1d1fb5f13dad5f77e8faa56958459168590176ad372775f146f5669ebbbd08f59ebc3056bd3e42c517afbe82987fc1abef21c5",
    "1b08eefc5b0b889be9958273d3bb9ed82c3a2b5bab752e1724fc7bd6f9b763d2afb352e798979f499de3c6efa4ce812f4fe35ee7b0ebbab853aa6f30bd2d393e"
    "a198a5d5ba4cab20d494e8ee15db1eaf6fec9bb40ff5fc20dae7ad7e1851d73354d4eb97efffc1d791e20d04779e8eb8dac1d5727637a76ec7da6d560c2f2b0d",
    "06a3f5cb1fb5f13dad5fb70d5d8ffaa5694a758eb3120f753d6343176f546f453da3172bd4fcfbfd1f21ce93d7008d120f0aeefc7be0ceeec4e972a99ade0824"
    "76f3f1cb4d762d1320fc7bd6f9b763d2aff3067e413d595747d6d599c123ebea3421ebea666b1f57de7edca45f170dfc82faf1f51d8a0264758be6d8be553e19",
    "f2db69f1f79149bc5d833840bd45f30c37840f75befd7bc47569eaa95f3490e20dc4aebc3ded39198584bada56b70e2ba55c3beb2a162467d693a1f0e1ed239d"
    "fb711bd764dd862664dd86b57864dd862664ddc66ced1fe9dc6f57deed98f487d4376eee3fa96f588347ea1b9a90fac66ced9b1ddf60e87a521ca1fee4f8fa22",
    "abb0da19731c655dbe6c74ae460fb464211e9ee76af4d6ddf42385fc5c8d7fd6de419b2f2fdff31c52bc81e0cebf87d1551768465aadcac692945a29013597a4"
    "c3f8f0afddc771c7a4fd243fbeb9ff243fb6068fe4c79a90fc78b6f631c98f0b625d282a9475bcfd80815f507f036ff7cf83067280ebda4a59973f1bade363ba",
    "94480de199dd87b265e03fd45bd3afa3614359770e7ded4db43c9d7cf89728f1a0e0ced361219ef6fbb6936d966fa60ea4229f52932db2beeeccf3f4be49bf8c"
    "f2d9ae493cdd3c3d1e36fbf70f8af5cd83bf7ffa9142bddee2c37710e7c999377e82120f0aeefceb09af445b25b195886cb90e2b4d56e0453e41f264c2bf5d56",
    "6105c2bfd3f12f2b10feb5160f0aeefc9b4dbb0f787fa815290632f43648a85b07a93c46e7151de9dc6fd77517fb26fd21bcab09e1dde9f008ef6a427877b6f6"
    "8f74ee27bc4bea0da4de4078771c8fd41bac69dfaee70eed9bb49bece3d084ece3980e8fece3d084ece398ad7dbbf26bc7a4dd5f30b01beabba6ec7533b4bd92",
    "2873a228ed890d209738f170afbf05db7c7e3b2e7af640b1eaef91fda1eb4978506faadfb43f4f6e123f74ef3d7d7609f1fa862b2f6751e241c19d8f9558a819"
    "0ab6dbe98da6db93703b03199fcb8951befb579dfba78de3633aed2f8ce94f7a5c5fbcf90fec55002701195d7d80554aec709ccdfebe7ec620ce503fbe2e4e28",
    "826654502d7bfe860dec80fab9fabbc436415112bbd63b7af143993f233fef8dbbeb2194785070e76b9794db5d17184fb2291c34c2ce64488e342318f1b55dc7"
    "af64d2ee730676433dab08da9e03b525010a1ddf5b5d0f4e19f80bf5e6fb69285e08f769a0e65beaad171248f106823bdfc6966352dab55e2d56caa0b64e1fae",
    "6654de83d13e3a921f93f9ba497864bece5a3c325fa70999af9bad7dc2cf27c7cf641d1b59c746f8f964f919f7756c66f76f5474da5f18d35fe90fe2bc0264c5"
    "5190595aa8d41d41a0545551722468b90a5456285fe80ef203c0a88a23e08bc30b478cee8e63a137f055205f886a67fef45eb577210878d151edab4b7dedf5f9",
    "23b3bf1ff718f805f5bdc702afb23c508e1f0123f1dd9fd38e71d1b3038a55fb9bb30678506f8697454971dc10b70141a3e293db8b88cf09e2996790e20d0477"
    "7ea6c525693d7d50594a95560e22f1885b29011ea3fdcdb88ce78e493fe67cff69855672322d2892a880117bf64dda83fadc899c81ff506fcd7af1e1b0691d89",
    "8a47c277a1e5e50ea30d61c2cbd3e14d7bce7c2aeaf3ba2a426a3bc34b859d406ecbbb15a851849771e3e539cf032a03f598605212655f5e467b1ed068d850ae"
    "bf20bc7cb278c8ea19a578116c1fe442cb0a88b8f285ad8a92af917cf9cc8de7d35a8f560482caaaad53ab5f98ad2ba787ae27e141bd45e7b30dc2856eddf2cf",
    "7610d72d7efcdadb48f106823b0f17bdc2c681e0a9ecc43ce5f0a18b0e65fd691746f37e66ebcab44efb0b63fa13c88f2f3222cf8b8236b1a78cf9d531e9d779"
    "03bfa09e9c7b4cce3d368347ce3dd6849c7b3c5bfb67f6bda753f0765d017bd7ff7fd4af8e49bfa6dd1f38c6db058e5616357b822cafd8b7ceb163e03fd45b93",
    "575feac5cd713d6ee8f2ebab0ce2fcfa7b7ffc2f52bc81e0ced3c0e9ad8322cb8637562faf099e2ab77a98ae61b44f9bf0b4a5f9759fa77b76c9a0d4fb6cdb7d"
    "dc970df0a0de4a9e1e8a1bf2f73d259f465c97fee44bf7a2c483823b5f33d9cd786cb5a2c677c3057fb4adf80f3756bc7ec2d7b8f3f59cf3877dae512b32502a",
    "2257a4ec9b576f1bf80ff556f2f571dc10d63f5e7fea0db43c7defdd2fa1c483823b4f278a5b6ba9a4b71e096f1493353195ce07db4b18d53f7059d761f7f943"
    "0889fa1cbaf4d035993f348f47e60f3521f387b3b58febbe947d937e199d03ca7345b6d1a515bbf22f8a7d81bde7278c13ea7d810f7e19f1b91acbea2a52bc81",
    "e0cebfada5b837d2385cf33556c4da863f1b6e6e9792189dab81eb38b6eebce5ae1132dbb42bcfc675f146f556bc3f5c8b14da7d242f3c8778bdc52bdf7d1a25"
    "1e14dc79b6596e84d2972fa70f034a616bbd20f260ad90c4a82e7c66ff5ed5e5d98bfd8fc8e70746eb0c5c5d11b906b08eef51f3ef899d1f37b1ce300817c27a",
    "ef6fb388eb0c2f5cfd1552bc8160cfbf79ef6aaa950fc4dc1e10f685961251afc061b45fe448e7feb3f91ea7e3717c71f0c9dd748ffad331e9cf9cf37170fabf"
    "c9d005c5459d1e2fdb6c3e6e103787163784fcfcdcff7e87363ffec38b3f44890705777ecee5d773d5a60b1c2c2f05848a738d0f6d56ca18f133eee3795a3f6e",
    "d5f543d374e146e266166f56deb5c77b637a6f7fea460ae5be8ff711d77bdffd7b0d29de40eccab3d39e67510df9cbfea6b81b97569848c125c73652fe04850f"
    "cfda75fc764cda7ddec06ea827fbf1c87e3c3378643f9e26643fde6ced7f5479f9b3067643fd182f2b0ccdd1f222cc86cde7c3e3a2670f9433bf8e70f2df2d5a",
    "dc067d38ecc7be8e9d56f1c6071f20ce8f9f67af22c51b08ee3c1c2b679b99e86663291302592e2cc7b23b8d20467508bbf2f0e326edfea281dd503fc6c3b424"
    "71ad6c9f54c27581e9ad8a1b8da764d2aebb87ae27d905f5a501fa5e85168addc4d9aabaff15037ca8b7869f278413314fa3ae63743ef5a084120f0aee3c7d70",
    "18a96cfb94f576f150ca6d6e30f46a36bf82d17a8a239dfbed3aaecdf2f7970cfc81fa71fe6e886cd127cb742bccd1aa0a0456288fd8b53fa75de3326d3e7d34"
    "271e6cfa61033ca8b7a85f27840fedfab7abf7bc8536afeefce53f48f106823b5fb737d69702796987cf145245df4e693dd1e453eb84afcf2a5f774cfa7356ea",
    "1e101af5fa0b52f720750f3bf133ee758f239dfba78de3233aed2f8ce9ad5e1f7748cbc29ed24dbbea5cffc086535eafdc33a79f425bc5cbb39e53716412ef1b"
    "067e43fd89cc130ea287f2bcfb3bdf435ceff8e66b51947850eccacfd3aedb60f3a56cac964fb73cdbc188d71f4d384146a4083fc3a6705bbf3ced399d377f9d",
    "ab7deb1cfb43d793f0a0fea4df978b8a579e5d7a132d4f5f79398b120f8a5d797ada7c4989859aa160bb9dde68ba3d09b73390f1b99c18ade320e7594cf6cbf0"
    "3c8b3aa7b212d73aad7ac6eb26f1785dbc51fdc9f51b8ce0f1877ea503d9bca1e75da4fcfced27fffd6794785070e7e7e50893a2a59ac0840ab514176dba3385",
    "350f46750edcc739791ff619ab4793f76193f76153e47dd8d3b6ff7f7aaeed8a", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 73160U, &nameCaptureInfo);
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
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("kalman_loop"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "C:\\Users\\brianhu\\Desktop\\Marketing Projects\\CAL Project\\Kalman Filter Integration Demo\\kalman_loop.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737932.71240740735));
  xResult = emlrtCreateStructMatrix(1, 1, 4, propFieldName);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.8.0.1323502 (R2020a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_kalman_loop_info.c) */
