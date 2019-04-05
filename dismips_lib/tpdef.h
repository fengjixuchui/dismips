/*
  Tang's Basic C definition file

  Copyright (c) 2019, Yaotian Tang. All Rights Reserved.
*/

#if defined(_msvc)
#pragma once

typedef unsigned __int8		u8;
typedef unsigned __int16	u16;
typedef unsigned __int16	u32;
typedef unsigned __int64	u64;

typedef signed __int8		i8;
typedef signed __int16		i16;
typedef signed __int32		i32;
typedef signed __int64		i64;
#endif

#if defined(_amd64)
typedef u64	ulong_ptr;
typedef i64 long_ptr;
#else
typedef u32 ulong_ptr;
typedef i32 long_ptr;
#endif

typedef volatile u8		u8v;
typedef volatile u16	u16v;
typedef volatile u32	u32v;
typedef volatile u64	u64v;

typedef volatile i8		i8v;
typedef volatile i16	i16v;
typedef volatile i32	i32v;
typedef volatile i64	i64v;

#if defined(_msvc)
typedef enum
{
	false=0,
	true=1
}bool;
#endif

#define null	(void*)0