#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Buffer Definitions: 
//
// cbuffer XeTextureLoadConstants
// {
//
//   uint xe_texture_load_is_tiled_3d_endian_scale;// Offset:    0 Size:     4
//   uint xe_texture_load_guest_offset; // Offset:    4 Size:     4
//   uint xe_texture_load_guest_pitch_aligned;// Offset:    8 Size:     4
//   uint xe_texture_load_guest_z_stride_block_rows_aligned;// Offset:   12 Size:     4
//   uint3 xe_texture_load_size_blocks; // Offset:   16 Size:    12
//   uint xe_texture_load_host_offset;  // Offset:   28 Size:     4
//   uint xe_texture_load_host_pitch;   // Offset:   32 Size:     4
//   uint xe_texture_load_height_texels;// Offset:   36 Size:     4 [unused]
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      ID      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- ------- -------------- ------
// xe_texture_load_source            texture   uint4         buf      T0             t0      1 
// xe_texture_load_dest                  UAV   uint4         buf      U0             u0      1 
// XeTextureLoadConstants            cbuffer      NA          NA     CB0            cb0      1 
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
dcl_constantbuffer CB0[0:0][3], immediateIndexed, space=0
dcl_resource_buffer (uint,uint,uint,uint) T0[0:0], space=0
dcl_uav_typed_buffer (uint,uint,uint,uint) U0[0:0], space=0
dcl_input vThreadID.xyz
dcl_temps 5
dcl_thread_group 8, 32, 1
ishl r0.x, vThreadID.x, l(2)
mov r0.yz, vThreadID.yyzy
uge r0.yzw, r0.xxyz, CB0[0][1].xxyz
or r0.y, r0.z, r0.y
or r0.y, r0.w, r0.y
if_nz r0.y
  ret 
endif 
ishl r0.y, r0.x, l(3)
imad r0.z, vThreadID.z, CB0[0][1].y, vThreadID.y
imad r0.z, r0.z, CB0[0][2].x, r0.y
iadd r0.z, r0.z, CB0[0][1].w
and r0.w, CB0[0][0].x, l(1)
if_nz r0.w
  and r1.x, CB0[0][0].x, l(2)
  if_nz r1.x
    ishr r1.xyz, vThreadID.yzyy, l(4, 2, 3, 0)
    ushr r2.xy, CB0[0][0].wzww, l(4, 5, 0, 0)
    imad r1.x, r1.y, r2.x, r1.x
    ibfe r2.xz, l(27, 0, 29, 0), l(3, 0, 1, 0), vThreadID.xxxx
    imad r1.x, r1.x, r2.y, r2.x
    ishl r1.w, vThreadID.y, l(11)
    and r1.w, r1.w, l(0x00003000)
    bfi r1.w, l(3), l(9), r0.x, r1.w
    ishr r1.w, r1.w, l(6)
    iadd r1.y, r1.y, r1.z
    bfi r1.z, l(1), l(1), r1.y, l(0)
    iadd r1.z, r1.z, r2.z
    bfi r1.z, l(2), l(1), r1.z, l(0)
    bfi r1.y, l(1), l(0), r1.y, r1.z
    bfi r1.xz, l(19, 0, 19, 0), l(11, 0, 14, 0), r1.xxxx, l(0, 0, 0, 0)
    imad r1.xz, r1.wwww, l(2, 0, 16, 0), r1.xxzx
    bfi r1.xz, l(2, 0, 2, 0), l(9, 0, 12, 0), vThreadID.zzzz, r1.xxzx
    bfi r1.w, l(1), l(4), vThreadID.y, l(0)
    ubfe r2.x, l(3), l(6), r1.x
    and r2.y, r1.y, l(6)
    bfi r1.y, l(1), l(8), r1.y, l(0)
    imad r1.y, r2.x, l(32), r1.y
    imad r1.y, r2.y, l(4), r1.y
    bfi r1.xz, l(6, 0, 6, 0), l(0, 0, 3, 0), r1.wwww, r1.xxzx
    bfi r1.y, l(9), l(3), r1.y, r1.z
    bfi r1.x, l(6), l(0), r1.x, r1.y
  else 
    ibfe r1.yz, l(0, 27, 29, 0), l(0, 3, 1, 0), vThreadID.xxxx
    ishr r2.xy, vThreadID.yyyy, l(5, 2, 0, 0)
    ushr r1.w, CB0[0][0].z, l(5)
    imad r1.y, r2.x, r1.w, r1.y
    ishl r2.xz, vThreadID.yyyy, l(6, 0, 7, 0)
    and r2.xz, r2.xxzx, l(896, 0, 2048, 0)
    bfi r1.w, l(3), l(4), r0.x, r2.x
    bfi r1.w, l(22), l(10), r1.y, r1.w
    bfi r2.w, l(1), l(4), vThreadID.y, l(0)
    iadd r1.w, r1.w, r2.w
    ishl r3.xy, r2.xxxx, l(3, 2, 0, 0)
    bfi r3.xy, l(3, 3, 0, 0), l(7, 6, 0, 0), r0.xxxx, r3.xyxx
    bfi r3.xy, l(22, 22, 0, 0), l(13, 12, 0, 0), r1.yyyy, r3.xyxx
    imad r2.xw, r2.wwww, l(8, 0, 0, 4), r3.xxxy
    bfi r0.x, l(12), l(0), r2.z, r2.x
    and r1.y, r2.w, l(1792)
    iadd r0.x, r0.x, r1.y
    and r1.y, r2.y, l(2)
    iadd r1.y, r1.z, r1.y
    bfi r1.y, l(2), l(6), r1.y, l(0)
    iadd r0.x, r0.x, r1.y
    bfi r1.x, l(6), l(0), r1.w, r0.x
  endif 
else 
  imad r0.x, vThreadID.z, CB0[0][0].w, vThreadID.y
  imad r1.x, r0.x, CB0[0][0].z, r0.y
endif 
iadd r0.x, r1.x, CB0[0][0].y
ushr r0.xz, r0.xxzx, l(4, 0, 4, 0)
ubfe r0.y, l(2), l(2), CB0[0][0].x
ld r1.xyzw, r0.xxxx, T0[0].xyzw
ieq r2.xyz, r0.yyyy, l(1, 2, 3, 0)
or r2.xy, r2.yzyy, r2.xyxx
if_nz r2.x
  ishl r3.xyzw, r1.xyzw, l(8, 8, 8, 8)
  and r3.xyzw, r3.xyzw, l(0xff00ff00, 0xff00ff00, 0xff00ff00, 0xff00ff00)
  ushr r4.xyzw, r1.xyzw, l(8, 8, 8, 8)
  and r4.xyzw, r4.xyzw, l(0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff)
  iadd r1.xyzw, r3.xyzw, r4.xyzw
endif 
if_nz r2.y
  ushr r3.xyzw, r1.xyzw, l(16, 16, 16, 16)
  bfi r1.xyzw, l(16, 16, 16, 16), l(16, 16, 16, 16), r1.xyzw, r3.xyzw
endif 
store_uav_typed U0[0].xyzw, r0.zzzz, r1.xyzw
iadd r0.y, r0.z, l(1)
if_nz r0.w
  mov r0.w, l(32)
else 
  mov r0.w, l(16)
endif 
ushr r0.w, r0.w, l(4)
iadd r0.x, r0.w, r0.x
ld r1.xyzw, r0.xxxx, T0[0].xyzw
if_nz r2.x
  ishl r3.xyzw, r1.xyzw, l(8, 8, 8, 8)
  and r3.xyzw, r3.xyzw, l(0xff00ff00, 0xff00ff00, 0xff00ff00, 0xff00ff00)
  ushr r4.xyzw, r1.xyzw, l(8, 8, 8, 8)
  and r4.xyzw, r4.xyzw, l(0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff)
  iadd r1.xyzw, r3.xyzw, r4.xyzw
endif 
if_nz r2.y
  ushr r2.xyzw, r1.xyzw, l(16, 16, 16, 16)
  bfi r1.xyzw, l(16, 16, 16, 16), l(16, 16, 16, 16), r1.xyzw, r2.xyzw
endif 
store_uav_typed U0[0].xyzw, r0.yyyy, r1.xyzw
ret 
// Approximately 110 instruction slots used
#endif

const BYTE texture_load_64bpb_cs[] =
{
     68,  88,  66,  67,  92,  16, 
    243,  45,  89, 227,   7, 187, 
     59, 197, 251,  47,  47, 108, 
     92, 190,   1,   0,   0,   0, 
    104,  19,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
     28,   4,   0,   0,  44,   4, 
      0,   0,  60,   4,   0,   0, 
    204,  18,   0,   0,  82,  68, 
     69,  70, 224,   3,   0,   0, 
      1,   0,   0,   0, 248,   0, 
      0,   0,   3,   0,   0,   0, 
     60,   0,   0,   0,   1,   5, 
     83,  67,   0,   5,   0,   0, 
    181,   3,   0,   0,  19,  19, 
     68,  37,  60,   0,   0,   0, 
     24,   0,   0,   0,  40,   0, 
      0,   0,  40,   0,   0,   0, 
     36,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
    180,   0,   0,   0,   2,   0, 
      0,   0,   4,   0,   0,   0, 
      1,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
      1,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 203,   0, 
      0,   0,   4,   0,   0,   0, 
      4,   0,   0,   0,   1,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  12,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 224,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    120, 101,  95, 116, 101, 120, 
    116, 117, 114, 101,  95, 108, 
    111,  97, 100,  95, 115, 111, 
    117, 114,  99, 101,   0, 120, 
    101,  95, 116, 101, 120, 116, 
    117, 114, 101,  95, 108, 111, 
     97, 100,  95, 100, 101, 115, 
    116,   0,  88, 101,  84, 101, 
    120, 116, 117, 114, 101,  76, 
    111,  97, 100,  67, 111, 110, 
    115, 116,  97, 110, 116, 115, 
      0, 171, 224,   0,   0,   0, 
      8,   0,   0,   0,  16,   1, 
      0,   0,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  80,   2,   0,   0, 
      0,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    128,   2,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    164,   2,   0,   0,   4,   0, 
      0,   0,   4,   0,   0,   0, 
      2,   0,   0,   0, 128,   2, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 193,   2, 
      0,   0,   8,   0,   0,   0, 
      4,   0,   0,   0,   2,   0, 
      0,   0, 128,   2,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 229,   2,   0,   0, 
     12,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    128,   2,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
     23,   3,   0,   0,  16,   0, 
      0,   0,  12,   0,   0,   0, 
      2,   0,   0,   0,  60,   3, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0,  96,   3, 
      0,   0,  28,   0,   0,   0, 
      4,   0,   0,   0,   2,   0, 
      0,   0, 128,   2,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 124,   3,   0,   0, 
     32,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    128,   2,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    151,   3,   0,   0,  36,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0, 128,   2, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 120, 101, 
     95, 116, 101, 120, 116, 117, 
    114, 101,  95, 108, 111,  97, 
    100,  95, 105, 115,  95, 116, 
    105, 108, 101, 100,  95,  51, 
    100,  95, 101, 110, 100, 105, 
     97, 110,  95, 115,  99,  97, 
    108, 101,   0, 100, 119, 111, 
    114, 100,   0, 171,   0,   0, 
     19,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    121,   2,   0,   0, 120, 101, 
     95, 116, 101, 120, 116, 117, 
    114, 101,  95, 108, 111,  97, 
    100,  95, 103, 117, 101, 115, 
    116,  95, 111, 102, 102, 115, 
    101, 116,   0, 120, 101,  95, 
    116, 101, 120, 116, 117, 114, 
    101,  95, 108, 111,  97, 100, 
     95, 103, 117, 101, 115, 116, 
     95, 112, 105, 116,  99, 104, 
     95,  97, 108, 105, 103, 110, 
    101, 100,   0, 120, 101,  95, 
    116, 101, 120, 116, 117, 114, 
    101,  95, 108, 111,  97, 100, 
     95, 103, 117, 101, 115, 116, 
     95, 122,  95, 115, 116, 114, 
    105, 100, 101,  95,  98, 108, 
    111,  99, 107,  95, 114, 111, 
    119, 115,  95,  97, 108, 105, 
    103, 110, 101, 100,   0, 120, 
    101,  95, 116, 101, 120, 116, 
    117, 114, 101,  95, 108, 111, 
     97, 100,  95, 115, 105, 122, 
    101,  95,  98, 108, 111,  99, 
    107, 115,   0, 117, 105, 110, 
    116,  51,   0, 171, 171, 171, 
      1,   0,  19,   0,   1,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  51,   3,   0,   0, 
    120, 101,  95, 116, 101, 120, 
    116, 117, 114, 101,  95, 108, 
    111,  97, 100,  95, 104, 111, 
    115, 116,  95, 111, 102, 102, 
    115, 101, 116,   0, 120, 101, 
     95, 116, 101, 120, 116, 117, 
    114, 101,  95, 108, 111,  97, 
    100,  95, 104, 111, 115, 116, 
     95, 112, 105, 116,  99, 104, 
      0, 120, 101,  95, 116, 101, 
    120, 116, 117, 114, 101,  95, 
    108, 111,  97, 100,  95, 104, 
    101, 105, 103, 104, 116,  95, 
    116, 101, 120, 101, 108, 115, 
      0,  77, 105,  99, 114, 111, 
    115, 111, 102, 116,  32,  40, 
     82,  41,  32,  72,  76,  83, 
     76,  32,  83, 104,  97, 100, 
    101, 114,  32,  67, 111, 109, 
    112, 105, 108, 101, 114,  32, 
     49,  48,  46,  49,   0, 171, 
    171, 171,  73,  83,  71,  78, 
      8,   0,   0,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     79,  83,  71,  78,   8,   0, 
      0,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  83,  72, 
     69,  88, 136,  14,   0,   0, 
     81,   0,   5,   0, 162,   3, 
      0,   0, 106,   8,   0,   1, 
     89,   0,   0,   7,  70, 142, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  88,   8, 
      0,   7,  70, 126,  48,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     68,  68,   0,   0,   0,   0, 
      0,   0, 156,   8,   0,   7, 
     70, 238,  49,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  68,  68, 
      0,   0,   0,   0,   0,   0, 
     95,   0,   0,   2, 114,   0, 
      2,   0, 104,   0,   0,   2, 
      5,   0,   0,   0, 155,   0, 
      0,   4,   8,   0,   0,   0, 
     32,   0,   0,   0,   1,   0, 
      0,   0,  41,   0,   0,   6, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,   2,   0, 
      1,  64,   0,   0,   2,   0, 
      0,   0,  54,   0,   0,   4, 
     98,   0,  16,   0,   0,   0, 
      0,   0,  86,   6,   2,   0, 
     80,   0,   0,   9, 226,   0, 
     16,   0,   0,   0,   0,   0, 
      6,   9,  16,   0,   0,   0, 
      0,   0,   6, 137,  48,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
     60,   0,   0,   7,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     42,   0,  16,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  60,   0, 
      0,   7,  34,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,  31,   0,   4,   3, 
     26,   0,  16,   0,   0,   0, 
      0,   0,  62,   0,   0,   1, 
     21,   0,   0,   1,  41,   0, 
      0,   7,  34,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   3,   0, 
      0,   0,  35,   0,   0,   9, 
     66,   0,  16,   0,   0,   0, 
      0,   0,  42,   0,   2,   0, 
     26, 128,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  26,   0, 
      2,   0,  35,   0,   0,  11, 
     66,   0,  16,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0,  10, 128, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  30,   0, 
      0,   9,  66,   0,  16,   0, 
      0,   0,   0,   0,  42,   0, 
     16,   0,   0,   0,   0,   0, 
     58, 128,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   9, 130,   0,  16,   0, 
      0,   0,   0,   0,  10, 128, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      1,   0,   0,   0,  31,   0, 
      4,   3,  58,   0,  16,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   9,  18,   0,  16,   0, 
      1,   0,   0,   0,  10, 128, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      2,   0,   0,   0,  31,   0, 
      4,   3,  10,   0,  16,   0, 
      1,   0,   0,   0,  42,   0, 
      0,   9, 114,   0,  16,   0, 
      1,   0,   0,   0, 150,   5, 
      2,   0,   2,  64,   0,   0, 
      4,   0,   0,   0,   2,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  85,   0, 
      0,  12,  50,   0,  16,   0, 
      2,   0,   0,   0, 182, 143, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      4,   0,   0,   0,   5,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  35,   0, 
      0,   9,  18,   0,  16,   0, 
      1,   0,   0,   0,  26,   0, 
     16,   0,   1,   0,   0,   0, 
     10,   0,  16,   0,   2,   0, 
      0,   0,  10,   0,  16,   0, 
      1,   0,   0,   0, 139,   0, 
      0,  14,  82,   0,  16,   0, 
      2,   0,   0,   0,   2,  64, 
      0,   0,  27,   0,   0,   0, 
      0,   0,   0,   0,  29,   0, 
      0,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   6,   0,   2,   0, 
     35,   0,   0,   9,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     10,   0,  16,   0,   1,   0, 
      0,   0,  26,   0,  16,   0, 
      2,   0,   0,   0,  10,   0, 
     16,   0,   2,   0,   0,   0, 
     41,   0,   0,   6, 130,   0, 
     16,   0,   1,   0,   0,   0, 
     26,   0,   2,   0,   1,  64, 
      0,   0,  11,   0,   0,   0, 
      1,   0,   0,   7, 130,   0, 
     16,   0,   1,   0,   0,   0, 
     58,   0,  16,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      0,  48,   0,   0, 140,   0, 
      0,  11, 130,   0,  16,   0, 
      1,   0,   0,   0,   1,  64, 
      0,   0,   3,   0,   0,   0, 
      1,  64,   0,   0,   9,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   1,   0,   0,   0, 
     42,   0,   0,   7, 130,   0, 
     16,   0,   1,   0,   0,   0, 
     58,   0,  16,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      6,   0,   0,   0,  30,   0, 
      0,   7,  34,   0,  16,   0, 
      1,   0,   0,   0,  26,   0, 
     16,   0,   1,   0,   0,   0, 
     42,   0,  16,   0,   1,   0, 
      0,   0, 140,   0,   0,  11, 
     66,   0,  16,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      1,   0,   0,   0,   1,  64, 
      0,   0,   1,   0,   0,   0, 
     26,   0,  16,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  30,   0, 
      0,   7,  66,   0,  16,   0, 
      1,   0,   0,   0,  42,   0, 
     16,   0,   1,   0,   0,   0, 
     42,   0,  16,   0,   2,   0, 
      0,   0, 140,   0,   0,  11, 
     66,   0,  16,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      2,   0,   0,   0,   1,  64, 
      0,   0,   1,   0,   0,   0, 
     42,   0,  16,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0, 140,   0, 
      0,  11,  34,   0,  16,   0, 
      1,   0,   0,   0,   1,  64, 
      0,   0,   1,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      1,   0,   0,   0,  42,   0, 
     16,   0,   1,   0,   0,   0, 
    140,   0,   0,  20,  82,   0, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,  19,   0, 
      0,   0,   0,   0,   0,   0, 
     19,   0,   0,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
     11,   0,   0,   0,   0,   0, 
      0,   0,  14,   0,   0,   0, 
      0,   0,   0,   0,   6,   0, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  35,   0,   0,  12, 
     82,   0,  16,   0,   1,   0, 
      0,   0, 246,  15,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,  16,   0, 
      0,   0,   0,   0,   0,   0, 
      6,   2,  16,   0,   1,   0, 
      0,   0, 140,   0,   0,  16, 
     82,   0,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   9,   0,   0,   0, 
      0,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
    166,  10,   2,   0,   6,   2, 
     16,   0,   1,   0,   0,   0, 
    140,   0,   0,  10, 130,   0, 
     16,   0,   1,   0,   0,   0, 
      1,  64,   0,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      4,   0,   0,   0,  26,   0, 
      2,   0,   1,  64,   0,   0, 
      0,   0,   0,   0, 138,   0, 
      0,   9,  18,   0,  16,   0, 
      2,   0,   0,   0,   1,  64, 
      0,   0,   3,   0,   0,   0, 
      1,  64,   0,   0,   6,   0, 
      0,   0,  10,   0,  16,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   7,  34,   0,  16,   0, 
      2,   0,   0,   0,  26,   0, 
     16,   0,   1,   0,   0,   0, 
      1,  64,   0,   0,   6,   0, 
      0,   0, 140,   0,   0,  11, 
     34,   0,  16,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      1,   0,   0,   0,   1,  64, 
      0,   0,   8,   0,   0,   0, 
     26,   0,  16,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  35,   0, 
      0,   9,  34,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
     16,   0,   2,   0,   0,   0, 
      1,  64,   0,   0,  32,   0, 
      0,   0,  26,   0,  16,   0, 
      1,   0,   0,   0,  35,   0, 
      0,   9,  34,   0,  16,   0, 
      1,   0,   0,   0,  26,   0, 
     16,   0,   2,   0,   0,   0, 
      1,  64,   0,   0,   4,   0, 
      0,   0,  26,   0,  16,   0, 
      1,   0,   0,   0, 140,   0, 
      0,  17,  82,   0,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   6,   0,   0,   0, 
      0,   0,   0,   0,   6,   0, 
      0,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0, 246,  15,  16,   0, 
      1,   0,   0,   0,   6,   2, 
     16,   0,   1,   0,   0,   0, 
    140,   0,   0,  11,  34,   0, 
     16,   0,   1,   0,   0,   0, 
      1,  64,   0,   0,   9,   0, 
      0,   0,   1,  64,   0,   0, 
      3,   0,   0,   0,  26,   0, 
     16,   0,   1,   0,   0,   0, 
     42,   0,  16,   0,   1,   0, 
      0,   0, 140,   0,   0,  11, 
     18,   0,  16,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      6,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   1,   0, 
      0,   0,  26,   0,  16,   0, 
      1,   0,   0,   0,  18,   0, 
      0,   1, 139,   0,   0,  14, 
     98,   0,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,  27,   0, 
      0,   0,  29,   0,   0,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      6,   0,   2,   0,  42,   0, 
      0,   9,  50,   0,  16,   0, 
      2,   0,   0,   0,  86,   5, 
      2,   0,   2,  64,   0,   0, 
      5,   0,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  85,   0, 
      0,   9, 130,   0,  16,   0, 
      1,   0,   0,   0,  42, 128, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      5,   0,   0,   0,  35,   0, 
      0,   9,  34,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
     16,   0,   2,   0,   0,   0, 
     58,   0,  16,   0,   1,   0, 
      0,   0,  26,   0,  16,   0, 
      1,   0,   0,   0,  41,   0, 
      0,   9,  82,   0,  16,   0, 
      2,   0,   0,   0,  86,   5, 
      2,   0,   2,  64,   0,   0, 
      6,   0,   0,   0,   0,   0, 
      0,   0,   7,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,  10,  82,   0,  16,   0, 
      2,   0,   0,   0,   6,   2, 
     16,   0,   2,   0,   0,   0, 
      2,  64,   0,   0, 128,   3, 
      0,   0,   0,   0,   0,   0, 
      0,   8,   0,   0,   0,   0, 
      0,   0, 140,   0,   0,  11, 
    130,   0,  16,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      3,   0,   0,   0,   1,  64, 
      0,   0,   4,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      2,   0,   0,   0, 140,   0, 
      0,  11, 130,   0,  16,   0, 
      1,   0,   0,   0,   1,  64, 
      0,   0,  22,   0,   0,   0, 
      1,  64,   0,   0,  10,   0, 
      0,   0,  26,   0,  16,   0, 
      1,   0,   0,   0,  58,   0, 
     16,   0,   1,   0,   0,   0, 
    140,   0,   0,  10, 130,   0, 
     16,   0,   2,   0,   0,   0, 
      1,  64,   0,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      4,   0,   0,   0,  26,   0, 
      2,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  30,   0, 
      0,   7, 130,   0,  16,   0, 
      1,   0,   0,   0,  58,   0, 
     16,   0,   1,   0,   0,   0, 
     58,   0,  16,   0,   2,   0, 
      0,   0,  41,   0,   0,  10, 
     50,   0,  16,   0,   3,   0, 
      0,   0,   6,   0,  16,   0, 
      2,   0,   0,   0,   2,  64, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    140,   0,   0,  17,  50,   0, 
     16,   0,   3,   0,   0,   0, 
      2,  64,   0,   0,   3,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      7,   0,   0,   0,   6,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   6,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   0,  16,   0,   3,   0, 
      0,   0, 140,   0,   0,  17, 
     50,   0,  16,   0,   3,   0, 
      0,   0,   2,  64,   0,   0, 
     22,   0,   0,   0,  22,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,  13,   0,   0,   0, 
     12,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     86,   5,  16,   0,   1,   0, 
      0,   0,  70,   0,  16,   0, 
      3,   0,   0,   0,  35,   0, 
      0,  12, 146,   0,  16,   0, 
      2,   0,   0,   0, 246,  15, 
     16,   0,   2,   0,   0,   0, 
      2,  64,   0,   0,   8,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   4,   0, 
      0,   0,   6,   4,  16,   0, 
      3,   0,   0,   0, 140,   0, 
      0,  11,  18,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,  12,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      2,   0,   0,   0,  10,   0, 
     16,   0,   2,   0,   0,   0, 
      1,   0,   0,   7,  34,   0, 
     16,   0,   1,   0,   0,   0, 
     58,   0,  16,   0,   2,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   7,   0,   0,  30,   0, 
      0,   7,  18,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   1,   0, 
      0,   0,   1,   0,   0,   7, 
     34,   0,  16,   0,   1,   0, 
      0,   0,  26,   0,  16,   0, 
      2,   0,   0,   0,   1,  64, 
      0,   0,   2,   0,   0,   0, 
     30,   0,   0,   7,  34,   0, 
     16,   0,   1,   0,   0,   0, 
     42,   0,  16,   0,   1,   0, 
      0,   0,  26,   0,  16,   0, 
      1,   0,   0,   0, 140,   0, 
      0,  11,  34,   0,  16,   0, 
      1,   0,   0,   0,   1,  64, 
      0,   0,   2,   0,   0,   0, 
      1,  64,   0,   0,   6,   0, 
      0,   0,  26,   0,  16,   0, 
      1,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     30,   0,   0,   7,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      1,   0,   0,   0, 140,   0, 
      0,  11,  18,   0,  16,   0, 
      1,   0,   0,   0,   1,  64, 
      0,   0,   6,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     21,   0,   0,   1,  18,   0, 
      0,   1,  35,   0,   0,   9, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  42,   0,   2,   0, 
     58, 128,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  26,   0, 
      2,   0,  35,   0,   0,  11, 
     18,   0,  16,   0,   1,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  42, 128, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  21,   0, 
      0,   1,  30,   0,   0,   9, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      1,   0,   0,   0,  26, 128, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  85,   0,   0,  10, 
     82,   0,  16,   0,   0,   0, 
      0,   0,   6,   2,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    138,   0,   0,  11,  34,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   2,   0, 
      0,   0,   1,  64,   0,   0, 
      2,   0,   0,   0,  10, 128, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  45,   0,   0,   8, 
    242,   0,  16,   0,   1,   0, 
      0,   0,   6,   0,  16,   0, 
      0,   0,   0,   0,  70, 126, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  32,   0, 
      0,  10, 114,   0,  16,   0, 
      2,   0,   0,   0,  86,   5, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   1,   0, 
      0,   0,   2,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  60,   0,   0,   7, 
     50,   0,  16,   0,   2,   0, 
      0,   0, 150,   5,  16,   0, 
      2,   0,   0,   0,  70,   0, 
     16,   0,   2,   0,   0,   0, 
     31,   0,   4,   3,  10,   0, 
     16,   0,   2,   0,   0,   0, 
     41,   0,   0,  10, 242,   0, 
     16,   0,   3,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
      8,   0,   0,   0,   8,   0, 
      0,   0,   8,   0,   0,   0, 
      8,   0,   0,   0,   1,   0, 
      0,  10, 242,   0,  16,   0, 
      3,   0,   0,   0,  70,  14, 
     16,   0,   3,   0,   0,   0, 
      2,  64,   0,   0,   0, 255, 
      0, 255,   0, 255,   0, 255, 
      0, 255,   0, 255,   0, 255, 
      0, 255,  85,   0,   0,  10, 
    242,   0,  16,   0,   4,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   8,   0,   0,   0, 
      8,   0,   0,   0,   8,   0, 
      0,   0,   8,   0,   0,   0, 
      1,   0,   0,  10, 242,   0, 
     16,   0,   4,   0,   0,   0, 
     70,  14,  16,   0,   4,   0, 
      0,   0,   2,  64,   0,   0, 
    255,   0, 255,   0, 255,   0, 
    255,   0, 255,   0, 255,   0, 
    255,   0, 255,   0,  30,   0, 
      0,   7, 242,   0,  16,   0, 
      1,   0,   0,   0,  70,  14, 
     16,   0,   3,   0,   0,   0, 
     70,  14,  16,   0,   4,   0, 
      0,   0,  21,   0,   0,   1, 
     31,   0,   4,   3,  26,   0, 
     16,   0,   2,   0,   0,   0, 
     85,   0,   0,  10, 242,   0, 
     16,   0,   3,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
     16,   0,   0,   0,  16,   0, 
      0,   0,  16,   0,   0,   0, 
     16,   0,   0,   0, 140,   0, 
      0,  17, 242,   0,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,  16,   0,   0,   0, 
     16,   0,   0,   0,  16,   0, 
      0,   0,  16,   0,   0,   0, 
      2,  64,   0,   0,  16,   0, 
      0,   0,  16,   0,   0,   0, 
     16,   0,   0,   0,  16,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,  70,  14, 
     16,   0,   3,   0,   0,   0, 
     21,   0,   0,   1, 164,   0, 
      0,   8, 242, 224,  33,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 166,  10,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
     30,   0,   0,   7,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     42,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      1,   0,   0,   0,  31,   0, 
      4,   3,  58,   0,  16,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   5, 130,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,  32,   0,   0,   0, 
     18,   0,   0,   1,  54,   0, 
      0,   5, 130,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,  16,   0,   0,   0, 
     21,   0,   0,   1,  85,   0, 
      0,   7, 130,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   4,   0, 
      0,   0,  30,   0,   0,   7, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     45,   0,   0,   8, 242,   0, 
     16,   0,   1,   0,   0,   0, 
      6,   0,  16,   0,   0,   0, 
      0,   0,  70, 126,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  31,   0,   4,   3, 
     10,   0,  16,   0,   2,   0, 
      0,   0,  41,   0,   0,  10, 
    242,   0,  16,   0,   3,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   8,   0,   0,   0, 
      8,   0,   0,   0,   8,   0, 
      0,   0,   8,   0,   0,   0, 
      1,   0,   0,  10, 242,   0, 
     16,   0,   3,   0,   0,   0, 
     70,  14,  16,   0,   3,   0, 
      0,   0,   2,  64,   0,   0, 
      0, 255,   0, 255,   0, 255, 
      0, 255,   0, 255,   0, 255, 
      0, 255,   0, 255,  85,   0, 
      0,  10, 242,   0,  16,   0, 
      4,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   8,   0, 
      0,   0,   8,   0,   0,   0, 
      8,   0,   0,   0,   8,   0, 
      0,   0,   1,   0,   0,  10, 
    242,   0,  16,   0,   4,   0, 
      0,   0,  70,  14,  16,   0, 
      4,   0,   0,   0,   2,  64, 
      0,   0, 255,   0, 255,   0, 
    255,   0, 255,   0, 255,   0, 
    255,   0, 255,   0, 255,   0, 
     30,   0,   0,   7, 242,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   3,   0, 
      0,   0,  70,  14,  16,   0, 
      4,   0,   0,   0,  21,   0, 
      0,   1,  31,   0,   4,   3, 
     26,   0,  16,   0,   2,   0, 
      0,   0,  85,   0,   0,  10, 
    242,   0,  16,   0,   2,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,  16,   0,   0,   0, 
     16,   0,   0,   0,  16,   0, 
      0,   0,  16,   0,   0,   0, 
    140,   0,   0,  17, 242,   0, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,  16,   0, 
      0,   0,  16,   0,   0,   0, 
     16,   0,   0,   0,  16,   0, 
      0,   0,   2,  64,   0,   0, 
     16,   0,   0,   0,  16,   0, 
      0,   0,  16,   0,   0,   0, 
     16,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   2,   0, 
      0,   0,  21,   0,   0,   1, 
    164,   0,   0,   8, 242, 224, 
     33,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  86,   5, 
     16,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,  62,   0,   0,   1, 
     83,  84,  65,  84, 148,   0, 
      0,   0, 110,   0,   0,   0, 
      5,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,  34,   0, 
      0,   0,  23,   0,   0,   0, 
      5,   0,   0,   0,   8,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
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
      0,   0,   2,   0,   0,   0
};
