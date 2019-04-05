/*
  dismips - MIPS Disassembler

  Copyright (c) 2019, Yaotian Tang. All Rights Reserved.

  This file defines the basic structure of MIPS code
  encodings, plus some miscellaneous auxiliary constants.

  This software is provided "as is", without warranty of
  any kind, express or implied, including but not limited
  to the warranties of merchantability, fitness for a
  particular purpose and non-infringement. In no event
  should the authors or copyright holders be liable for
  any claim, damages or other liability, whether in an
  action of contract, tort or otherwise, arising from,
  out of or in connection with the software or the use
  or other dealings in the software
*/

#define op_flag_r	0
#define op_flag_i	1
#define op_flag_j	2
#define op_flag_u	255

u8 opcode_flags[32]=
{
	op_flag_r,	// 0x0, r-format
	op_flag_u,	// 0x1, unknown
	op_flag_j,	// 0x2, j
	op_flag_j,	// 0x3, jal
	op_flag_i,	// 0x4, beq
	op_flag_i,	// 0x5, bne
	op_flag_i,	// 0x6, blez
	op_flag_i,	// 0x7, bgtz
	op_flag_i,	// 0x8, addi
	op_flag_i,	// 0x9, addiu
	op_flag_i,	// 0xa, slti
	op_flag_i,	// 0xb, sltiu
	op_flag_i,	// 0xc, andi
	op_flag_i,	// 0xd, ori
	op_flag_i,	// 0xe, xori
	op_flag_i,	// 0xf, lui
	op_flag_u,	// 0x10, unknown
	op_flag_r,	// 0x11, r-format
	op_flag_u,	// 0x12, unknown
	op_flag_u,	// 0x13, unknown
	op_flag_u,	// 0x14, unknown
	op_flag_u,	// 0x15, unknown
	op_flag_u,	// 0x16, unknown
	op_flag_u,	// 0x17, unknown
};

typedef union _mips32_encoding
{
	struct
	{
		u32 op:6;
		u32 rs:5;
		u32 rt:5;
		u32 imm:16;
	}i;
	struct
	{
		u32 op:6;
		u32 imm:26;
	}j;
	struct
	{
		u32 op:6;
		u32 rs:5;
		u32 rt:5;
		u32 rd:5;
		u32 shamt:5;
		u32 funct:6;
	}r;
	u32 value;
}mips32_encoding,*mips32_encoding_p;