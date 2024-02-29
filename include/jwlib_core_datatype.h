/*!
 * @file    jwlib_core_datatype.h
 * @author  DjwChoi
 * @date    2024-02-29
 * @brief   TI C2000 MCU JwLib Core DataType Header File
 */

#ifndef INCLUDE_JWLIB_CORE_DATATYPE_H_
#define INCLUDE_JWLIB_CORE_DATATYPE_H_

#if (!defined(F28_DATA_TYPES) && !defined(DSP28_DATA_TYPES))

#define F28_DATA_TYPES
#define DSP28_DATA_TYPES

typedef short                                   int16;
typedef long                                    int32;
typedef unsigned char                           Uint8;
typedef unsigned short                          Uint16;
typedef unsigned long                           Uint32;
typedef float                                   float32;
typedef long double                             float64;
typedef struct { Uint32 low32; Uint32 high32; } Uint64;
typedef struct { int32  low32; int32  high32; } int64;

#else

#error F2837xD_Cla_Typedefs.h must be included before F2837xD_Device.h or any other header file that redefines data types using the guard macros F28_DATA_TYPES or DSP28_DATA_TYPES

#endif //(!defined(F28_DATA_TYPES) && !defined(DSP28_DATA_TYPES))

#endif /* INCLUDE_JWLIB_CORE_DATATYPE_H_ */
