#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Buffer Definitions: 
//
// cbuffer xesl_pushConstants
// {
//
//   uint2 xe_resolve_clear_value;      // Offset:    0 Size:     8
//   uint xe_resolve_edram_info;        // Offset:    8 Size:     4
//   uint xe_resolve_coordinate_info;   // Offset:   12 Size:     4
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      ID      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- ------- -------------- ------
// xe_resolve_edram                      UAV   uint4         buf      U0             u0      1 
// xesl_pushConstants                cbuffer      NA          NA     CB0            cb0      1 
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Input
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Output
cs_5_1
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[0:0][1], immediateIndexed, space=0
dcl_uav_typed_buffer (uint,uint,uint,uint) U0[0:0], space=0
dcl_input vThreadID.xy
dcl_temps 4
dcl_thread_group 8, 8, 1
and r0.x, CB0[0][0].z, l(1023)
ushr r1.y, CB0[0][0].w, l(4)
ubfe r2.xyzw, l(2, 2, 2, 11), l(10, 27, 29, 5), CB0[0][0].zwww
imul null, r0.y, r2.y, r2.w
uge r0.zw, r2.xxxx, l(0, 0, 2, 1)
and r0.zw, r0.zzzw, l(0, 0, 1, 1)
ishl r0.y, r0.y, r0.z
uge r0.y, vThreadID.x, r0.y
if_nz r0.y
  ret 
endif 
ubfe r0.y, l(12), l(13), CB0[0][0].z
mov r1.x, CB0[0][0].w
bfi r1.xy, l(4, 1, 0, 0), l(3, 3, 0, 0), r1.xyxx, l(0, 0, 0, 0)
imul null, r1.xy, r2.yzyy, r1.xyxx
ishl r3.x, vThreadID.x, l(3)
ishl r0.zw, r1.xxxy, r0.zzzw
mov r3.y, vThreadID.y
iadd r0.zw, r0.zzzw, r3.xxxy
imul null, r1.yz, r2.yyzy, l(0, 80, 16, 0)
ushr r1.x, r1.y, l(1)
udiv r2.xy, null, r0.zwzz, r1.xzxx
imad r0.x, r2.y, r0.x, r2.x
iadd r0.x, r0.x, r0.y
imad r0.yz, -r2.xxyx, r1.xxzx, r0.zzwz
imul null, r0.w, r1.z, r1.y
imad r0.y, r0.z, r1.x, r0.y
ishl r0.y, r0.y, l(1)
imad r0.x, r0.x, r0.w, r0.y
ushr r0.x, r0.x, l(2)
store_uav_typed U0[0].xyzw, r0.xxxx, CB0[0][0].xyxy
iadd r0.yz, r0.xxxx, l(0, 1, 3, 0)
store_uav_typed U0[0].xyzw, r0.yyyy, CB0[0][0].xyxy
iadd r0.y, r0.x, l(2)
store_uav_typed U0[0].xyzw, r0.yyyy, CB0[0][0].xyxy
store_uav_typed U0[0].xyzw, r0.zzzz, CB0[0][0].xyxy
ret 
// Approximately 37 instruction slots used
#endif

const BYTE resolve_clear_64bpp_scaled_cs[] =
{
     68,  88,  66,  67, 104,  89, 
    191,   2,  94, 210, 198, 188, 
     32, 234,  13, 166,   0, 170, 
    203, 224,   1,   0,   0,   0, 
     32,   8,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
     68,   2,   0,   0,  84,   2, 
      0,   0, 100,   2,   0,   0, 
    132,   7,   0,   0,  82,  68, 
     69,  70,   8,   2,   0,   0, 
      1,   0,   0,   0, 176,   0, 
      0,   0,   2,   0,   0,   0, 
     60,   0,   0,   0,   1,   5, 
     83,  67,   0,   5,   0,   0, 
    223,   1,   0,   0,  19,  19, 
     68,  37,  60,   0,   0,   0, 
     24,   0,   0,   0,  40,   0, 
      0,   0,  40,   0,   0,   0, 
     36,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
    140,   0,   0,   0,   4,   0, 
      0,   0,   4,   0,   0,   0, 
      1,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
      1,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 157,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 120, 101,  95, 114, 
    101, 115, 111, 108, 118, 101, 
     95, 101, 100, 114,  97, 109, 
      0, 120, 101, 115, 108,  95, 
    112, 117, 115, 104,  67, 111, 
    110, 115, 116,  97, 110, 116, 
    115,   0, 157,   0,   0,   0, 
      3,   0,   0,   0, 200,   0, 
      0,   0,  16,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  64,   1,   0,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,   2,   0,   0,   0, 
     96,   1,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    132,   1,   0,   0,   8,   0, 
      0,   0,   4,   0,   0,   0, 
      2,   0,   0,   0, 160,   1, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 196,   1, 
      0,   0,  12,   0,   0,   0, 
      4,   0,   0,   0,   2,   0, 
      0,   0, 160,   1,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 120, 101,  95, 114, 
    101, 115, 111, 108, 118, 101, 
     95,  99, 108, 101,  97, 114, 
     95, 118,  97, 108, 117, 101, 
      0, 117, 105, 110, 116,  50, 
      0, 171, 171, 171,   1,   0, 
     19,   0,   1,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     87,   1,   0,   0, 120, 101, 
     95, 114, 101, 115, 111, 108, 
    118, 101,  95, 101, 100, 114, 
     97, 109,  95, 105, 110, 102, 
    111,   0, 100, 119, 111, 114, 
    100,   0,   0,   0,  19,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 154,   1, 
      0,   0, 120, 101,  95, 114, 
    101, 115, 111, 108, 118, 101, 
     95,  99, 111, 111, 114, 100, 
    105, 110,  97, 116, 101,  95, 
    105, 110, 102, 111,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  49,  48, 
     46,  49,   0, 171,  73,  83, 
     71,  78,   8,   0,   0,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,  79,  83,  71,  78, 
      8,   0,   0,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     83,  72,  69,  88,  24,   5, 
      0,   0,  81,   0,   5,   0, 
     70,   1,   0,   0, 106,   8, 
      0,   1,  89,   0,   0,   7, 
     70, 142,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    156,   8,   0,   7,  70, 238, 
     49,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  68,  68,   0,   0, 
      0,   0,   0,   0,  95,   0, 
      0,   2,  50,   0,   2,   0, 
    104,   0,   0,   2,   4,   0, 
      0,   0, 155,   0,   0,   4, 
      8,   0,   0,   0,   8,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   9,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     42, 128,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0, 255,   3,   0,   0, 
     85,   0,   0,   9,  34,   0, 
     16,   0,   1,   0,   0,   0, 
     58, 128,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   4,   0,   0,   0, 
    138,   0,   0,  17, 242,   0, 
     16,   0,   2,   0,   0,   0, 
      2,  64,   0,   0,   2,   0, 
      0,   0,   2,   0,   0,   0, 
      2,   0,   0,   0,  11,   0, 
      0,   0,   2,  64,   0,   0, 
     10,   0,   0,   0,  27,   0, 
      0,   0,  29,   0,   0,   0, 
      5,   0,   0,   0, 230, 143, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  38,   0,   0,   8, 
      0, 208,   0,   0,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   2,   0, 
      0,   0,  58,   0,  16,   0, 
      2,   0,   0,   0,  80,   0, 
      0,  10, 194,   0,  16,   0, 
      0,   0,   0,   0,   6,   0, 
     16,   0,   2,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      2,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,  10, 
    194,   0,  16,   0,   0,   0, 
      0,   0, 166,  14,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
     41,   0,   0,   7,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0,  80,   0, 
      0,   6,  34,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
      2,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  31,   0, 
      4,   3,  26,   0,  16,   0, 
      0,   0,   0,   0,  62,   0, 
      0,   1,  21,   0,   0,   1, 
    138,   0,   0,  11,  34,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,  12,   0, 
      0,   0,   1,  64,   0,   0, 
     13,   0,   0,   0,  42, 128, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  54,   0,   0,   7, 
     18,   0,  16,   0,   1,   0, 
      0,   0,  58, 128,  48,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    140,   0,   0,  20,  50,   0, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   4,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      3,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  70,   0, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  38,   0,   0,   8, 
      0, 208,   0,   0,  50,   0, 
     16,   0,   1,   0,   0,   0, 
    150,   5,  16,   0,   2,   0, 
      0,   0,  70,   0,  16,   0, 
      1,   0,   0,   0,  41,   0, 
      0,   6,  18,   0,  16,   0, 
      3,   0,   0,   0,  10,   0, 
      2,   0,   1,  64,   0,   0, 
      3,   0,   0,   0,  41,   0, 
      0,   7, 194,   0,  16,   0, 
      0,   0,   0,   0,   6,   4, 
     16,   0,   1,   0,   0,   0, 
    166,  14,  16,   0,   0,   0, 
      0,   0,  54,   0,   0,   4, 
     34,   0,  16,   0,   3,   0, 
      0,   0,  26,   0,   2,   0, 
     30,   0,   0,   7, 194,   0, 
     16,   0,   0,   0,   0,   0, 
    166,  14,  16,   0,   0,   0, 
      0,   0,   6,   4,  16,   0, 
      3,   0,   0,   0,  38,   0, 
      0,  11,   0, 208,   0,   0, 
     98,   0,  16,   0,   1,   0, 
      0,   0,  86,   6,  16,   0, 
      2,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
     80,   0,   0,   0,  16,   0, 
      0,   0,   0,   0,   0,   0, 
     85,   0,   0,   7,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     26,   0,  16,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      1,   0,   0,   0,  78,   0, 
      0,   8,  50,   0,  16,   0, 
      2,   0,   0,   0,   0, 208, 
      0,   0, 230,  10,  16,   0, 
      0,   0,   0,   0, 134,   0, 
     16,   0,   1,   0,   0,   0, 
     35,   0,   0,   9,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   2,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   2,   0,   0,   0, 
     30,   0,   0,   7,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  35,   0, 
      0,  10,  98,   0,  16,   0, 
      0,   0,   0,   0,   6,   1, 
     16, 128,  65,   0,   0,   0, 
      2,   0,   0,   0,   6,   2, 
     16,   0,   1,   0,   0,   0, 
    166,  11,  16,   0,   0,   0, 
      0,   0,  38,   0,   0,   8, 
      0, 208,   0,   0, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     42,   0,  16,   0,   1,   0, 
      0,   0,  26,   0,  16,   0, 
      1,   0,   0,   0,  35,   0, 
      0,   9,  34,   0,  16,   0, 
      0,   0,   0,   0,  42,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   1,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  41,   0, 
      0,   7,  34,   0,  16,   0, 
      0,   0,   0,   0,  26,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   1,   0, 
      0,   0,  35,   0,   0,   9, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,  85,   0,   0,   7, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   2,   0,   0,   0, 
    164,   0,   0,  10, 242, 224, 
     33,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   6,   0, 
     16,   0,   0,   0,   0,   0, 
     70, 132,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  30,   0, 
      0,  10,  98,   0,  16,   0, 
      0,   0,   0,   0,   6,   0, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0, 164,   0,   0,  10, 
    242, 224,  33,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     86,   5,  16,   0,   0,   0, 
      0,   0,  70, 132,  48,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     30,   0,   0,   7,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      2,   0,   0,   0, 164,   0, 
      0,  10, 242, 224,  33,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  86,   5,  16,   0, 
      0,   0,   0,   0,  70, 132, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 164,   0,   0,  10, 
    242, 224,  33,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    166,  10,  16,   0,   0,   0, 
      0,   0,  70, 132,  48,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  83,  84, 
     65,  84, 148,   0,   0,   0, 
     37,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  16,   0,   0,   0, 
      8,   0,   0,   0,   2,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      4,   0,   0,   0
};
