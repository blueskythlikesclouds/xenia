// Generated with `xb buildshaders`.
#if 0
; SPIR-V
; Version: 1.0
; Generator: Khronos Glslang Reference Front End; 10
; Bound: 25175
; Schema: 0
               OpCapability Shader
          %1 = OpExtInstImport "GLSL.std.450"
               OpMemoryModel Logical GLSL450
               OpEntryPoint GLCompute %5663 "main" %gl_GlobalInvocationID
               OpExecutionMode %5663 LocalSize 8 8 1
               OpMemberDecorate %_struct_1014 0 Offset 0
               OpMemberDecorate %_struct_1014 1 Offset 8
               OpMemberDecorate %_struct_1014 2 Offset 12
               OpDecorate %_struct_1014 Block
               OpDecorate %gl_GlobalInvocationID BuiltIn GlobalInvocationId
               OpDecorate %_runtimearr_v4uint ArrayStride 16
               OpMemberDecorate %_struct_1972 0 NonReadable
               OpMemberDecorate %_struct_1972 0 Offset 0
               OpDecorate %_struct_1972 BufferBlock
               OpDecorate %3271 DescriptorSet 0
               OpDecorate %3271 Binding 0
               OpDecorate %gl_WorkGroupSize BuiltIn WorkgroupSize
       %void = OpTypeVoid
       %1282 = OpTypeFunction %void
       %bool = OpTypeBool
     %v2bool = OpTypeVector %bool 2
       %uint = OpTypeInt 32 0
     %v2uint = OpTypeVector %uint 2
     %uint_2 = OpConstant %uint 2
     %uint_1 = OpConstant %uint 1
       %1837 = OpConstantComposite %v2uint %uint_2 %uint_1
     %uint_0 = OpConstant %uint 0
       %1807 = OpConstantComposite %v2uint %uint_0 %uint_0
       %1828 = OpConstantComposite %v2uint %uint_1 %uint_1
       %1816 = OpConstantComposite %v2uint %uint_1 %uint_0
    %uint_80 = OpConstant %uint 80
    %uint_16 = OpConstant %uint 16
       %2719 = OpConstantComposite %v2uint %uint_80 %uint_16
        %int = OpTypeInt 32 1
%_struct_1014 = OpTypeStruct %v2uint %uint %uint
%_ptr_PushConstant__struct_1014 = OpTypePointer PushConstant %_struct_1014
       %4495 = OpVariable %_ptr_PushConstant__struct_1014 PushConstant
      %int_1 = OpConstant %int 1
%_ptr_PushConstant_uint = OpTypePointer PushConstant %uint
      %int_2 = OpConstant %int 2
      %int_0 = OpConstant %int 0
  %uint_1023 = OpConstant %uint 1023
    %uint_10 = OpConstant %uint 10
     %uint_3 = OpConstant %uint 3
  %uint_4096 = OpConstant %uint 4096
    %uint_13 = OpConstant %uint 13
  %uint_4095 = OpConstant %uint 4095
     %uint_4 = OpConstant %uint 4
       %1855 = OpConstantComposite %v2uint %uint_0 %uint_4
       %1856 = OpConstantComposite %v2uint %uint_4 %uint_1
     %uint_5 = OpConstant %uint 5
  %uint_2047 = OpConstant %uint 2047
%_ptr_PushConstant_v2uint = OpTypePointer PushConstant %v2uint
     %v3uint = OpTypeVector %uint 3
%_ptr_Input_v3uint = OpTypePointer Input %v3uint
%gl_GlobalInvocationID = OpVariable %_ptr_Input_v3uint Input
%_ptr_Input_uint = OpTypePointer Input %uint
       %1834 = OpConstantComposite %v2uint %uint_3 %uint_0
     %v4uint = OpTypeVector %uint 4
%_runtimearr_v4uint = OpTypeRuntimeArray %v4uint
%_struct_1972 = OpTypeStruct %_runtimearr_v4uint
%_ptr_Uniform__struct_1972 = OpTypePointer Uniform %_struct_1972
       %3271 = OpVariable %_ptr_Uniform__struct_1972 Uniform
%_ptr_Uniform_v4uint = OpTypePointer Uniform %v4uint
     %uint_8 = OpConstant %uint 8
%gl_WorkGroupSize = OpConstantComposite %v3uint %uint_8 %uint_8 %uint_1
       %1870 = OpConstantComposite %v2uint %uint_3 %uint_3
       %5663 = OpFunction %void None %1282
      %15110 = OpLabel
               OpSelectionMerge %19578 None
               OpSwitch %uint_0 %11880
      %11880 = OpLabel
      %22245 = OpAccessChain %_ptr_PushConstant_uint %4495 %int_1
      %15627 = OpLoad %uint %22245
      %22700 = OpAccessChain %_ptr_PushConstant_uint %4495 %int_2
      %20824 = OpLoad %uint %22700
      %20561 = OpBitwiseAnd %uint %15627 %uint_1023
      %20073 = OpShiftRightLogical %uint %15627 %uint_10
       %7177 = OpBitwiseAnd %uint %20073 %uint_3
      %23023 = OpBitwiseAnd %uint %15627 %uint_4096
      %20495 = OpINotEqual %bool %23023 %uint_0
       %8141 = OpShiftRightLogical %uint %15627 %uint_13
      %24990 = OpBitwiseAnd %uint %8141 %uint_4095
       %8814 = OpCompositeConstruct %v2uint %20824 %20824
       %8841 = OpShiftRightLogical %v2uint %8814 %1855
      %22507 = OpShiftLeftLogical %v2uint %1828 %1856
      %18608 = OpISub %v2uint %22507 %1828
      %18743 = OpBitwiseAnd %v2uint %8841 %18608
      %22404 = OpShiftLeftLogical %v2uint %18743 %1870
      %23019 = OpIMul %v2uint %22404 %1828
      %12819 = OpShiftRightLogical %uint %20824 %uint_5
      %16204 = OpBitwiseAnd %uint %12819 %uint_2047
      %19017 = OpAccessChain %_ptr_PushConstant_v2uint %4495 %int_0
      %23788 = OpLoad %v2uint %19017
      %13183 = OpCompositeConstruct %v2uint %7177 %7177
      %21741 = OpUGreaterThanEqual %v2bool %13183 %1837
      %22612 = OpSelect %v2uint %21741 %1828 %1807
      %23890 = OpAccessChain %_ptr_Input_uint %gl_GlobalInvocationID %uint_0
      %19209 = OpLoad %uint %23890
      %20350 = OpCompositeExtract %uint %22612 0
      %15478 = OpShiftLeftLogical %uint %16204 %20350
      %15379 = OpUGreaterThanEqual %bool %19209 %15478
               OpSelectionMerge %17447 DontFlatten
               OpBranchConditional %15379 %21992 %17447
      %21992 = OpLabel
               OpBranch %19578
      %17447 = OpLabel
      %14637 = OpLoad %v3uint %gl_GlobalInvocationID
      %20690 = OpVectorShuffle %v2uint %14637 %14637 0 1
       %9909 = OpShiftLeftLogical %v2uint %20690 %1834
      %24302 = OpShiftLeftLogical %v2uint %23019 %22612
      %21348 = OpIAdd %v2uint %9909 %24302
      %20172 = OpUGreaterThanEqual %v2bool %1807 %1837
       %8903 = OpSelect %v2uint %20172 %1828 %1807
      %10430 = OpShiftLeftLogical %v2uint %21348 %8903
      %16475 = OpShiftRightLogical %v2uint %1807 %1816
      %13071 = OpBitwiseAnd %v2uint %16475 %1828
      %20272 = OpIAdd %v2uint %10430 %13071
      %21145 = OpIMul %v2uint %2719 %1828
      %14725 = OpShiftRightLogical %v2uint %21145 %1807
      %19799 = OpUDiv %v2uint %20272 %14725
      %20390 = OpCompositeExtract %uint %19799 1
      %11046 = OpIMul %uint %20390 %20561
      %24665 = OpCompositeExtract %uint %19799 0
      %21536 = OpIAdd %uint %11046 %24665
       %8742 = OpIAdd %uint %24990 %21536
       %6459 = OpIMul %v2uint %19799 %14725
      %14279 = OpISub %v2uint %20272 %6459
               OpSelectionMerge %18756 None
               OpBranchConditional %20495 %11888 %18756
      %11888 = OpLabel
      %16985 = OpCompositeExtract %uint %14725 0
      %13307 = OpShiftRightLogical %uint %16985 %uint_1
      %22207 = OpCompositeExtract %uint %14279 0
      %15197 = OpBitcast %int %22207
      %15736 = OpUGreaterThanEqual %bool %22207 %13307
               OpSelectionMerge %21237 None
               OpBranchConditional %15736 %22228 %7940
      %22228 = OpLabel
      %22920 = OpBitcast %int %13307
      %17199 = OpSNegate %int %22920
               OpBranch %21237
       %7940 = OpLabel
      %16658 = OpBitcast %int %13307
               OpBranch %21237
      %21237 = OpLabel
      %10046 = OpPhi %int %17199 %22228 %16658 %7940
      %11983 = OpIAdd %int %15197 %10046
      %17709 = OpBitcast %uint %11983
      %21574 = OpCompositeInsert %v2uint %17709 %14279 0
               OpBranch %18756
      %18756 = OpLabel
      %17360 = OpPhi %v2uint %14279 %17447 %21574 %21237
      %24023 = OpCompositeExtract %uint %21145 0
      %22303 = OpCompositeExtract %uint %21145 1
      %13170 = OpIMul %uint %24023 %22303
      %14551 = OpIMul %uint %8742 %13170
       %6805 = OpCompositeExtract %uint %17360 1
      %23526 = OpCompositeExtract %uint %14725 0
      %22886 = OpIMul %uint %6805 %23526
       %6886 = OpCompositeExtract %uint %17360 0
       %9696 = OpIAdd %uint %22886 %6886
      %19199 = OpShiftLeftLogical %uint %9696 %uint_0
       %6535 = OpIAdd %uint %14551 %19199
      %21961 = OpShiftRightLogical %uint %6535 %uint_2
      %17379 = OpVectorShuffle %v4uint %23788 %23788 0 0 0 0
       %7737 = OpAccessChain %_ptr_Uniform_v4uint %3271 %int_0 %21961
               OpStore %7737 %17379
      %11457 = OpIAdd %uint %21961 %uint_1
      %25174 = OpAccessChain %_ptr_Uniform_v4uint %3271 %int_0 %11457
               OpStore %25174 %17379
               OpBranch %19578
      %19578 = OpLabel
               OpReturn
               OpFunctionEnd
#endif

const uint32_t resolve_clear_32bpp_cs[] = {
    0x07230203, 0x00010000, 0x0008000A, 0x00006257, 0x00000000, 0x00020011,
    0x00000001, 0x0006000B, 0x00000001, 0x4C534C47, 0x6474732E, 0x3035342E,
    0x00000000, 0x0003000E, 0x00000000, 0x00000001, 0x0006000F, 0x00000005,
    0x0000161F, 0x6E69616D, 0x00000000, 0x00000F48, 0x00060010, 0x0000161F,
    0x00000011, 0x00000008, 0x00000008, 0x00000001, 0x00050048, 0x000003F6,
    0x00000000, 0x00000023, 0x00000000, 0x00050048, 0x000003F6, 0x00000001,
    0x00000023, 0x00000008, 0x00050048, 0x000003F6, 0x00000002, 0x00000023,
    0x0000000C, 0x00030047, 0x000003F6, 0x00000002, 0x00040047, 0x00000F48,
    0x0000000B, 0x0000001C, 0x00040047, 0x000007DC, 0x00000006, 0x00000010,
    0x00040048, 0x000007B4, 0x00000000, 0x00000019, 0x00050048, 0x000007B4,
    0x00000000, 0x00000023, 0x00000000, 0x00030047, 0x000007B4, 0x00000003,
    0x00040047, 0x00000CC7, 0x00000022, 0x00000000, 0x00040047, 0x00000CC7,
    0x00000021, 0x00000000, 0x00040047, 0x00000AC7, 0x0000000B, 0x00000019,
    0x00020013, 0x00000008, 0x00030021, 0x00000502, 0x00000008, 0x00020014,
    0x00000009, 0x00040017, 0x0000000F, 0x00000009, 0x00000002, 0x00040015,
    0x0000000B, 0x00000020, 0x00000000, 0x00040017, 0x00000011, 0x0000000B,
    0x00000002, 0x0004002B, 0x0000000B, 0x00000A10, 0x00000002, 0x0004002B,
    0x0000000B, 0x00000A0D, 0x00000001, 0x0005002C, 0x00000011, 0x0000072D,
    0x00000A10, 0x00000A0D, 0x0004002B, 0x0000000B, 0x00000A0A, 0x00000000,
    0x0005002C, 0x00000011, 0x0000070F, 0x00000A0A, 0x00000A0A, 0x0005002C,
    0x00000011, 0x00000724, 0x00000A0D, 0x00000A0D, 0x0005002C, 0x00000011,
    0x00000718, 0x00000A0D, 0x00000A0A, 0x0004002B, 0x0000000B, 0x00000AFA,
    0x00000050, 0x0004002B, 0x0000000B, 0x00000A3A, 0x00000010, 0x0005002C,
    0x00000011, 0x00000A9F, 0x00000AFA, 0x00000A3A, 0x00040015, 0x0000000C,
    0x00000020, 0x00000001, 0x0005001E, 0x000003F6, 0x00000011, 0x0000000B,
    0x0000000B, 0x00040020, 0x00000673, 0x00000009, 0x000003F6, 0x0004003B,
    0x00000673, 0x0000118F, 0x00000009, 0x0004002B, 0x0000000C, 0x00000A0E,
    0x00000001, 0x00040020, 0x00000288, 0x00000009, 0x0000000B, 0x0004002B,
    0x0000000C, 0x00000A11, 0x00000002, 0x0004002B, 0x0000000C, 0x00000A0B,
    0x00000000, 0x0004002B, 0x0000000B, 0x00000A44, 0x000003FF, 0x0004002B,
    0x0000000B, 0x00000A28, 0x0000000A, 0x0004002B, 0x0000000B, 0x00000A13,
    0x00000003, 0x0004002B, 0x0000000B, 0x00000AFE, 0x00001000, 0x0004002B,
    0x0000000B, 0x00000A31, 0x0000000D, 0x0004002B, 0x0000000B, 0x00000AFB,
    0x00000FFF, 0x0004002B, 0x0000000B, 0x00000A16, 0x00000004, 0x0005002C,
    0x00000011, 0x0000073F, 0x00000A0A, 0x00000A16, 0x0005002C, 0x00000011,
    0x00000740, 0x00000A16, 0x00000A0D, 0x0004002B, 0x0000000B, 0x00000A19,
    0x00000005, 0x0004002B, 0x0000000B, 0x00000A81, 0x000007FF, 0x00040020,
    0x0000028E, 0x00000009, 0x00000011, 0x00040017, 0x00000014, 0x0000000B,
    0x00000003, 0x00040020, 0x00000291, 0x00000001, 0x00000014, 0x0004003B,
    0x00000291, 0x00000F48, 0x00000001, 0x00040020, 0x00000289, 0x00000001,
    0x0000000B, 0x0005002C, 0x00000011, 0x0000072A, 0x00000A13, 0x00000A0A,
    0x00040017, 0x00000017, 0x0000000B, 0x00000004, 0x0003001D, 0x000007DC,
    0x00000017, 0x0003001E, 0x000007B4, 0x000007DC, 0x00040020, 0x00000A32,
    0x00000002, 0x000007B4, 0x0004003B, 0x00000A32, 0x00000CC7, 0x00000002,
    0x00040020, 0x00000294, 0x00000002, 0x00000017, 0x0004002B, 0x0000000B,
    0x00000A22, 0x00000008, 0x0006002C, 0x00000014, 0x00000AC7, 0x00000A22,
    0x00000A22, 0x00000A0D, 0x0005002C, 0x00000011, 0x0000074E, 0x00000A13,
    0x00000A13, 0x00050036, 0x00000008, 0x0000161F, 0x00000000, 0x00000502,
    0x000200F8, 0x00003B06, 0x000300F7, 0x00004C7A, 0x00000000, 0x000300FB,
    0x00000A0A, 0x00002E68, 0x000200F8, 0x00002E68, 0x00050041, 0x00000288,
    0x000056E5, 0x0000118F, 0x00000A0E, 0x0004003D, 0x0000000B, 0x00003D0B,
    0x000056E5, 0x00050041, 0x00000288, 0x000058AC, 0x0000118F, 0x00000A11,
    0x0004003D, 0x0000000B, 0x00005158, 0x000058AC, 0x000500C7, 0x0000000B,
    0x00005051, 0x00003D0B, 0x00000A44, 0x000500C2, 0x0000000B, 0x00004E69,
    0x00003D0B, 0x00000A28, 0x000500C7, 0x0000000B, 0x00001C09, 0x00004E69,
    0x00000A13, 0x000500C7, 0x0000000B, 0x000059EF, 0x00003D0B, 0x00000AFE,
    0x000500AB, 0x00000009, 0x0000500F, 0x000059EF, 0x00000A0A, 0x000500C2,
    0x0000000B, 0x00001FCD, 0x00003D0B, 0x00000A31, 0x000500C7, 0x0000000B,
    0x0000619E, 0x00001FCD, 0x00000AFB, 0x00050050, 0x00000011, 0x0000226E,
    0x00005158, 0x00005158, 0x000500C2, 0x00000011, 0x00002289, 0x0000226E,
    0x0000073F, 0x000500C4, 0x00000011, 0x000057EB, 0x00000724, 0x00000740,
    0x00050082, 0x00000011, 0x000048B0, 0x000057EB, 0x00000724, 0x000500C7,
    0x00000011, 0x00004937, 0x00002289, 0x000048B0, 0x000500C4, 0x00000011,
    0x00005784, 0x00004937, 0x0000074E, 0x00050084, 0x00000011, 0x000059EB,
    0x00005784, 0x00000724, 0x000500C2, 0x0000000B, 0x00003213, 0x00005158,
    0x00000A19, 0x000500C7, 0x0000000B, 0x00003F4C, 0x00003213, 0x00000A81,
    0x00050041, 0x0000028E, 0x00004A49, 0x0000118F, 0x00000A0B, 0x0004003D,
    0x00000011, 0x00005CEC, 0x00004A49, 0x00050050, 0x00000011, 0x0000337F,
    0x00001C09, 0x00001C09, 0x000500AE, 0x0000000F, 0x000054ED, 0x0000337F,
    0x0000072D, 0x000600A9, 0x00000011, 0x00005854, 0x000054ED, 0x00000724,
    0x0000070F, 0x00050041, 0x00000289, 0x00005D52, 0x00000F48, 0x00000A0A,
    0x0004003D, 0x0000000B, 0x00004B09, 0x00005D52, 0x00050051, 0x0000000B,
    0x00004F7E, 0x00005854, 0x00000000, 0x000500C4, 0x0000000B, 0x00003C76,
    0x00003F4C, 0x00004F7E, 0x000500AE, 0x00000009, 0x00003C13, 0x00004B09,
    0x00003C76, 0x000300F7, 0x00004427, 0x00000002, 0x000400FA, 0x00003C13,
    0x000055E8, 0x00004427, 0x000200F8, 0x000055E8, 0x000200F9, 0x00004C7A,
    0x000200F8, 0x00004427, 0x0004003D, 0x00000014, 0x0000392D, 0x00000F48,
    0x0007004F, 0x00000011, 0x000050D2, 0x0000392D, 0x0000392D, 0x00000000,
    0x00000001, 0x000500C4, 0x00000011, 0x000026B5, 0x000050D2, 0x0000072A,
    0x000500C4, 0x00000011, 0x00005EEE, 0x000059EB, 0x00005854, 0x00050080,
    0x00000011, 0x00005364, 0x000026B5, 0x00005EEE, 0x000500AE, 0x0000000F,
    0x00004ECC, 0x0000070F, 0x0000072D, 0x000600A9, 0x00000011, 0x000022C7,
    0x00004ECC, 0x00000724, 0x0000070F, 0x000500C4, 0x00000011, 0x000028BE,
    0x00005364, 0x000022C7, 0x000500C2, 0x00000011, 0x0000405B, 0x0000070F,
    0x00000718, 0x000500C7, 0x00000011, 0x0000330F, 0x0000405B, 0x00000724,
    0x00050080, 0x00000011, 0x00004F30, 0x000028BE, 0x0000330F, 0x00050084,
    0x00000011, 0x00005299, 0x00000A9F, 0x00000724, 0x000500C2, 0x00000011,
    0x00003985, 0x00005299, 0x0000070F, 0x00050086, 0x00000011, 0x00004D57,
    0x00004F30, 0x00003985, 0x00050051, 0x0000000B, 0x00004FA6, 0x00004D57,
    0x00000001, 0x00050084, 0x0000000B, 0x00002B26, 0x00004FA6, 0x00005051,
    0x00050051, 0x0000000B, 0x00006059, 0x00004D57, 0x00000000, 0x00050080,
    0x0000000B, 0x00005420, 0x00002B26, 0x00006059, 0x00050080, 0x0000000B,
    0x00002226, 0x0000619E, 0x00005420, 0x00050084, 0x00000011, 0x0000193B,
    0x00004D57, 0x00003985, 0x00050082, 0x00000011, 0x000037C7, 0x00004F30,
    0x0000193B, 0x000300F7, 0x00004944, 0x00000000, 0x000400FA, 0x0000500F,
    0x00002E70, 0x00004944, 0x000200F8, 0x00002E70, 0x00050051, 0x0000000B,
    0x00004259, 0x00003985, 0x00000000, 0x000500C2, 0x0000000B, 0x000033FB,
    0x00004259, 0x00000A0D, 0x00050051, 0x0000000B, 0x000056BF, 0x000037C7,
    0x00000000, 0x0004007C, 0x0000000C, 0x00003B5D, 0x000056BF, 0x000500AE,
    0x00000009, 0x00003D78, 0x000056BF, 0x000033FB, 0x000300F7, 0x000052F5,
    0x00000000, 0x000400FA, 0x00003D78, 0x000056D4, 0x00001F04, 0x000200F8,
    0x000056D4, 0x0004007C, 0x0000000C, 0x00005988, 0x000033FB, 0x0004007E,
    0x0000000C, 0x0000432F, 0x00005988, 0x000200F9, 0x000052F5, 0x000200F8,
    0x00001F04, 0x0004007C, 0x0000000C, 0x00004112, 0x000033FB, 0x000200F9,
    0x000052F5, 0x000200F8, 0x000052F5, 0x000700F5, 0x0000000C, 0x0000273E,
    0x0000432F, 0x000056D4, 0x00004112, 0x00001F04, 0x00050080, 0x0000000C,
    0x00002ECF, 0x00003B5D, 0x0000273E, 0x0004007C, 0x0000000B, 0x0000452D,
    0x00002ECF, 0x00060052, 0x00000011, 0x00005446, 0x0000452D, 0x000037C7,
    0x00000000, 0x000200F9, 0x00004944, 0x000200F8, 0x00004944, 0x000700F5,
    0x00000011, 0x000043D0, 0x000037C7, 0x00004427, 0x00005446, 0x000052F5,
    0x00050051, 0x0000000B, 0x00005DD7, 0x00005299, 0x00000000, 0x00050051,
    0x0000000B, 0x0000571F, 0x00005299, 0x00000001, 0x00050084, 0x0000000B,
    0x00003372, 0x00005DD7, 0x0000571F, 0x00050084, 0x0000000B, 0x000038D7,
    0x00002226, 0x00003372, 0x00050051, 0x0000000B, 0x00001A95, 0x000043D0,
    0x00000001, 0x00050051, 0x0000000B, 0x00005BE6, 0x00003985, 0x00000000,
    0x00050084, 0x0000000B, 0x00005966, 0x00001A95, 0x00005BE6, 0x00050051,
    0x0000000B, 0x00001AE6, 0x000043D0, 0x00000000, 0x00050080, 0x0000000B,
    0x000025E0, 0x00005966, 0x00001AE6, 0x000500C4, 0x0000000B, 0x00004AFF,
    0x000025E0, 0x00000A0A, 0x00050080, 0x0000000B, 0x00001987, 0x000038D7,
    0x00004AFF, 0x000500C2, 0x0000000B, 0x000055C9, 0x00001987, 0x00000A10,
    0x0009004F, 0x00000017, 0x000043E3, 0x00005CEC, 0x00005CEC, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00060041, 0x00000294, 0x00001E39,
    0x00000CC7, 0x00000A0B, 0x000055C9, 0x0003003E, 0x00001E39, 0x000043E3,
    0x00050080, 0x0000000B, 0x00002CC1, 0x000055C9, 0x00000A0D, 0x00060041,
    0x00000294, 0x00006256, 0x00000CC7, 0x00000A0B, 0x00002CC1, 0x0003003E,
    0x00006256, 0x000043E3, 0x000200F9, 0x00004C7A, 0x000200F8, 0x00004C7A,
    0x000100FD, 0x00010038,
};
