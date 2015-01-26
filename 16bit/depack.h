/*
 * BriefLZ  -  small fast Lempel-Ziv
 *
 * 16-bit assembler depacker, header file
 *
 * Copyright (c) 2002-2004 by Joergen Ibsen / Jibz
 * All Rights Reserved
 *
 * http://www.ibsensoftware.com/
 */

#ifndef DEPACK_H_INCLUDED
#define DEPACK_H_INCLUDED

/* calling convention */
#ifndef BLZCC
 #ifdef __WATCOMC__
  #define BLZCC __cdecl
 #else
  #define BLZCC
 #endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* function prototypes */

unsigned short BLZCC blz16_depack_asm(const void far *source,
                                      void far *destination,
                                      unsigned short depacked_length);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DEPACK_H_INCLUDED */
