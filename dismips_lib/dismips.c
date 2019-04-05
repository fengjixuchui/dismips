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

#include "tpdef.h"
#include "mips_arch.h"

void disassemble(u32 instruction,char* mnemonic)
{
	mips32_encoding im;
	im.value=instruction;
}