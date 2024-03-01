/*!
 * @file    jwlib_core_limiter.h
 * @author  DjwChoi
 * @date    2024-03-01
 * @brief   TI C2000 MCU JwLib Core Value Limiter Header File
 */

#ifndef INCLUDE_JWLIB_CORE_LIMITER_H_
#define INCLUDE_JWLIB_CORE_LIMITER_H_

#include <jwlib_core_datatype.h>

/*!
 * @struct  i16Limiter
 *
 * @brief   Structure for a limiter using int16 data type.
 */
typedef struct
{
    int16 high_value;       ///< The maximum allowable value.
    int16 low_value;        ///< The minimum allowable value.
}i16Limiter;

/*!
 * @struct  i16RangeLimiter
 *
 * @brief   Structure for a range limiter using int16 data type.
 */
typedef struct
{
    int16 high_value;       ///< The maximum allowable value.
    int16 low_value;        ///< The minimum allowable value.
    int16 amp_value;        ///< The amplitude value for the limiter.
}i16RangeLimiter;

/*!
 * @struct  i16UpperLimiter
 *
 * @brief   Structure for an upper limiter using int16 data type.
 */
typedef struct
{
    int16 high_value;       ///< The maximum allowable value.
}i16UpperLimiter;

/*!
 * @struct  i16LowerLimiter
 *
 * @brief   Structure for a lower limiter using int16 data type.
 */
typedef struct
{
    int16 low_value;        ///< The minimum allowable value.
}i16LowerLimiter;

/*!
 * @struct  i32Limiter
 *
 * @brief   Structure for a limiter using int32 data type.
 */
typedef struct
{
    int32 high_value;       ///< The maximum allowable value.
    int32 low_value;        ///< The minimum allowable value.
}i32Limiter;

/*!
 * @struct  i32RangeLimiter
 *
 * @brief   Structure for a range limiter using int32 data type.
 */
typedef struct
{
    int32 high_value;       ///< The maximum allowable value.
    int32 low_value;        ///< The minimum allowable value.
    int32 amp_value;        ///< The amplitude value for the limiter.
}i32RangeLimiter;

/*!
 * @struct  i32UpperLimiter
 *
 * @brief   Structure for an upper limiter using int32 data type.
 */
typedef struct
{
    int32 high_value;       ///< The maximum allowable value.
}i32UpperLimiter;

/*!
 * @struct  i32LowerLimiter
 *
 * @brief   Structure for a lower limiter using int32 data type.
 */
typedef struct
{
    int32 low_value;        ///< The minimum allowable value.
}i32LowerLimiter;

/*!
 * @struct  ui16Limiter
 *
 * @brief   Structure for a limiter using Uint16 data type.
 */
typedef struct
{
    Uint16 high_value;      ///< The maximum allowable value.
    Uint16 low_value;       ///< The minimum allowable value.
}ui16Limiter;

/*!
 * @struct  ui16RangeLimiter
 *
 * @brief   Structure for a range limiter using Uint16 data type.
 */
typedef struct
{
    Uint16 high_value;      ///< The maximum allowable value.
    Uint16 low_value;       ///< The minimum allowable value.
    Uint16 amp_value;       ///< The amplitude value for the limiter.
}ui16RangeLimiter;

/*!
 * @struct  ui16UpperLimiter
 *
 * @brief   Structure for an upper limiter using Uint16 data type.
 */
typedef struct
{
    Uint16 high_value;      ///< The maximum allowable value.
}ui16UpperLimiter;

/*!
 * @struct  ui16LowerLimiter
 *
 * @brief   Structure for a lower limiter using Uint16 data type.
 */
typedef struct
{
    Uint16 low_value;       ///< The minimum allowable value.
}ui16LowerLimiter;

/*!
 * @struct  ui32Limiter
 *
 * @brief   Structure for a limiter using Uint32 data type.
 */
typedef struct
{
    Uint32 high_value;      ///< The maximum allowable value.
    Uint32 low_value;       ///< The minimum allowable value.
}ui32Limiter;

/*!
 * @struct  ui32RangeLimiter
 *
 * @brief   Structure for a range limiter using Uint32 data type.
 */
typedef struct
{
    Uint32 high_value;      ///< The maximum allowable value.
    Uint32 low_value;       ///< The minimum allowable value.
    Uint32 amp_value;       ///< The amplitude value for the limiter.
}ui32RangeLimiter;

/*!
 * @struct  ui32UpperLimiter
 *
 * @brief   Structure for an upper limiter using Uint32 data type.
 */
typedef struct
{
    Uint32 high_value;      ///< The maximum allowable value.
}ui32UpperLimiter;

/*!
 * @struct  ui32LowerLimiter
 *
 * @brief   Structure for a lower limiter using Uint32 data type.
 */
typedef struct
{
    Uint32 low_value;       ///< The minimum allowable value.
}ui32LowerLimiter;

/*!
 * @struct  f32Limiter
 *
 * @brief   Structure for a limiter using float32 data type.
 */
typedef struct
{
    float32 high_value;     ///< The maximum allowable value.
    float32 low_value;      ///< The minimum allowable value.
}f32Limiter;

/*!
 * @struct  f32RangeLimiter
 *
 * @brief   Structure for a range limiter using float32 data type.
 */
typedef struct
{
    float32 high_value;     ///< The maximum allowable value.
    float32 low_value;      ///< The minimum allowable value.
    float32 amp_value;      ///< The amplitude value for the limiter.
}f32RangeLimiter;

/*!
 * @struct  f32UpperLimiter
 *
 * @brief   Structure for an upper limiter using float32 data type.
 */
typedef struct
{
    float32 high_value;     ///< The maximum allowable value.
}f32UpperLimiter;

/*!
 * @struct  f32LowerLimiter
 *
 * @brief   Structure for a lower limiter using float32 data type.
 */
typedef struct
{
    float32 low_value;      ///< The minimum allowable value.
}f32LowerLimiter;

/*!
 * @fn          initI16Limiter
 *
 * @brief       Initializes a int16 type Limiter structure.
 *
 * @param[out]  limiter     Address of the limiter structure.
 * @param[in]   high_value  The maximum value for the limiter.
 * @param[in]   low_value   The minimum value for the limiter.
 *
 * @return      None.
 */
extern void
initI16Limiter(i16Limiter* limiter, int16 high_value, int16 low_value);

/*!
 * @fn          doI16Limiter
 *
 * @brief       Processes the input value through a int16 type Limiter structure.
 *
 * @param[in]   limiter     The limiter structure.
 * @param[in]   value       The input value to be limited.
 *
 * @return      The output value after limiting.
 */
extern int16
doI16Limiter(i16Limiter limiter, int16 value);

/*!
 * @fn          initI16RangeLimiter
 *
 * @brief       Initializes a int16 type RangeLimiter structure.
 *
 * @param[out]  limiter     Address of the range limiter structure.
 * @param[in]   high_value  The maximum value for the range limiter.
 * @param[in]   low_value   The minimum value for the range limiter.
 *
 * @return      None.
 */
extern void
initI16RangeLimiter(i16RangeLimiter* limiter, int16 high_value, int16 low_value);

/*!
 * @fn          doI16RangeLimiter
 *
 * @brief       Processes the input value through a int16 type RangeLimiter structure.
 *
 * @param[in]   limiter     The range limiter structure.
 * @param[in]   value       The input value to be processed.
 *
 * @return      The output value after range limiting.
 */
extern int16
doI16RangeLimiter(i16RangeLimiter limiter, int16 value);

/*!
 * @fn          initI16UpperLimiter
 *
 * @brief       Initializes a int16 type UpperLimiter structure.
 *
 * @param[out]  limiter     Address of the upper limiter structure.
 * @param[in]   high_value  The maximum value for the upper limiter.
 *
 * @return      None.
 */
extern void
initI16UpperLimiter(i16UpperLimiter* limiter, int16 high_value);

/*!
 * @fn          doI16UpperLimiter
 *
 * @brief       Processes the input value through a int16 type UpperLimiter structure.
 *
 * @param[in]   limiter     The upper limiter structure.
 * @param[in]   value       The input value to be processed.
 *
 * @return      The output value after upper limiting.
 */
extern int16
doI16UpperLimiter(i16UpperLimiter limiter, int16 value);

/*!
 * @fn          initI16LowerLimiter
 *
 * @brief       Initializes a int16 type LowerLimiter structure.
 *
 * @param[out]  limiter     Address of the lower limiter structure.
 * @param[in]   low_value   The minimum value for the lower limiter.
 *
 * @return      None.
 */
extern void
initI16LowerLimiter(i16LowerLimiter* limiter, int16 low_value);

/*!
 * @fn          doI16LowerLimiter
 *
 * @brief       Processes the input value through a int16 type LowerLimiter structure.
 *
 * @param[in]   limiter     The lower limiter structure.
 * @param[in]   value       The input value to be processed.
 *
 * @return      The output value after lower limiting.
 */
extern int16
doI16LowerLimiter(i16LowerLimiter limiter, int16 value);

/*!
 * @fn          initUi16Limiter
 *
 * @brief       Initializes a Uint16 type Limiter structure.
 *
 * @param[out]  limiter     Address of the limiter structure.
 * @param[in]   high_value  The maximum value for the limiter.
 * @param[in]   low_value   The minimum value for the limiter.
 *
 * @return      None.
 */
extern void
initUi16Limiter(ui16Limiter* limiter, Uint16 high_value, Uint16 low_value);

/*!
 * @fn          doUi16Limiter
 *
 * @brief       Processes the input value through a Uint16 type Limiter structure.
 *
 * @param[in]   limiter     The limiter structure.
 * @param[in]   value       The input value to be limited.
 *
 * @return      The output value after limiting.
 */
extern Uint16
doUi16Limiter(ui16Limiter limiter, Uint16 value);

/*!
 * @fn          initUi16RangeLimiter
 *
 * @brief       Initializes a Uint16 type RangeLimiter structure.
 *
 * @param[out]  limiter     Address of the range limiter structure.
 * @param[in]   high_value  The maximum value for the range limiter.
 * @param[in]   low_value   The minimum value for the range limiter.
 *
 * @return      None.
 */
extern void
initUi16RangeLimiter(ui16RangeLimiter* limiter, Uint16 high_value, Uint16 low_value);

/*!
 * @fn          doUi16RangeLimiter
 *
 * @brief       Processes the input value through a Uint16 type RangeLimiter structure.
 *
 * @param[in]   limiter     The range limiter structure.
 * @param[in]   value       The input value to be processed.
 *
 * @return      The output value after range limiting.
 */
extern Uint16
doUi16RangeLimiter(ui16RangeLimiter limiter, Uint16 value);

/*!
 * @fn          initUi16UpperLimiter
 *
 * @brief       Initializes a Uint16 type UpperLimiter structure.
 *
 * @param[out]  limiter     Address of the upper limiter structure.
 * @param[in]   high_value  The maximum value for the upper limiter.
 *
 * @return      None.
 */
extern void
initUi16UpperLimiter(ui16UpperLimiter* limiter, Uint16 high_value);

/*!
 * @fn          doUi16UpperLimiter
 *
 * @brief       Processes the input value through a Uint16 type UpperLimiter structure.
 *
 * @param[in]   limiter     The upper limiter structure.
 * @param[in]   value       The input value to be processed.
 *
 * @return      The output value after upper limiting.
 */
extern Uint16
doUi16UpperLimiter(ui16UpperLimiter limiter, Uint16 value);

/*!
 * @fn          initUi16LowerLimiter
 *
 * @brief       Initializes a Uint16 type LowerLimiter structure.
 *
 * @param[out]  limiter     Address of the lower limiter structure.
 * @param[in]   low_value   The minimum value for the lower limiter.
 *
 * @return      None.
 */
extern void
initUi16LowerLimiter(ui16LowerLimiter* limiter, Uint16 low_value);

/*!
 * @fn          doUi16LowerLimiter
 *
 * @brief       Processes the input value through a Uint16 type LowerLimiter structure.
 *
 * @param[in]   limiter     The lower limiter structure.
 * @param[in]   value       The input value to be processed.
 *
 * @return      The output value after lower limiting.
 */
extern Uint16
doUi16LowerLimiter(ui16LowerLimiter limiter, Uint16 value);

/*!
 * @fn          initI32Limiter
 *
 * @brief       Initializes a int32 type Limiter structure.
 *
 * @param[out]  limiter     Address of the limiter structure.
 * @param[in]   high_value  The maximum value for the limiter.
 * @param[in]   low_value   The minimum value for the limiter.
 *
 * @return      None.
 */
extern void
initI32Limiter(i32Limiter* limiter, int32 high_value, int32 low_value);

/*!
 * @fn          doI32Limiter
 *
 * @brief       Processes the input value through a int32 type Limiter structure.
 *
 * @param[in]   limiter     The limiter structure.
 * @param[in]   value       The input value to be limited.
 *
 * @return      The output value after limiting.
 */
extern int32
doI32Limiter(i32Limiter limiter, int32 value);

/*!
 * @fn          initI32RangeLimiter
 *
 * @brief       Initializes a int32 type RangeLimiter structure.
 *
 * @param[out]  limiter     Address of the range limiter structure.
 * @param[in]   high_value  The maximum value for the range limiter.
 * @param[in]   low_value   The minimum value for the range limiter.
 *
 * @return      None.
 */
extern void
initI32RangeLimiter(i32RangeLimiter* limiter, int32 high_value, int32 low_value);

/*!
 * @fn          doI32RangeLimiter
 *
 * @brief       Processes the input value through a int32 type RangeLimiter structure.
 *
 * @param[in]   limiter     The range limiter structure.
 * @param[in]   value       The input value to be processed.
 *
 * @return      The output value after range limiting.
 */
extern int32
doI32RangeLimiter(i32RangeLimiter limiter, int32 value);

/*!
 * @fn          initI32UpperLimiter
 *
 * @brief       Initializes a int32 type UpperLimiter structure.
 *
 * @param[out]  limiter     Address of the upper limiter structure.
 * @param[in]   high_value  The maximum value for the upper limiter.
 *
 * @return      None.
 */
extern void
initI32UpperLimiter(i32UpperLimiter* limiter, int32 high_value);

/*!
 * @fn          doI32UpperLimiter
 *
 * @brief       Processes the input value through a int32 type UpperLimiter structure.
 *
 * @param[in]   limiter     The upper limiter structure.
 * @param[in]   value       The input value to be processed.
 *
 * @return      The output value after upper limiting.
 */
extern int32
doI16UpperLimiter(i32UpperLimiter limiter, int32 value);

/*!
 * @fn          initI32LowerLimiter
 *
 * @brief       Initializes a int32 type LowerLimiter structure.
 *
 * @param[out]  limiter     Address of the lower limiter structure.
 * @param[in]   low_value   The minimum value for the lower limiter.
 *
 * @return      None.
 */
extern void
initI32LowerLimiter(i32LowerLimiter* limiter, int32 low_value);

/*!
 * @fn          doI32LowerLimiter
 *
 * @brief       Processes the input value through a int32 type LowerLimiter structure.
 *
 * @param[in]   limiter     The lower limiter structure.
 * @param[in]   value       The input value to be processed.
 *
 * @return      The output value after lower limiting.
 */
extern int32
doI32LowerLimiter(i32LowerLimiter limiter, int32 value);

/*!
 * @fn          initUi32Limiter
 *
 * @brief       Initializes a Uint32 type Limiter structure.
 *
 * @param[out]  limiter     Address of the limiter structure.
 * @param[in]   high_value  The maximum value for the limiter.
 * @param[in]   low_value   The minimum value for the limiter.
 *
 * @return      None.
 */
extern void
initUi32Limiter(ui32Limiter* limiter, Uint32 high_value, Uint32 low_value);

/*!
 * @fn          doUi32Limiter
 *
 * @brief       Processes the input value through a Uint32 type Limiter structure.
 *
 * @param[in]   limiter     The limiter structure.
 * @param[in]   value       The input value to be limited.
 *
 * @return      The output value after limiting.
 */
extern Uint32
doUi32Limiter(ui32Limiter limiter, Uint32 value);

/*!
 * @fn          initUi32RangeLimiter
 *
 * @brief       Initializes a Uint32 type RangeLimiter structure.
 *
 * @param[out]  limiter     Address of the range limiter structure.
 * @param[in]   high_value  The maximum value for the range limiter.
 * @param[in]   low_value   The minimum value for the range limiter.
 *
 * @return      None.
 */
extern void
initUi32RangeLimiter(ui32RangeLimiter* limiter, Uint32 high_value, Uint32 low_value);

/*!
 * @fn          doUi32RangeLimiter
 *
 * @brief       Processes the input value through a Uint32 type RangeLimiter structure.
 *
 * @param[in]   limiter     The range limiter structure.
 * @param[in]   value       The input value to be processed.
 *
 * @return      The output value after range limiting.
 */
extern Uint32
doUi32RangeLimiter(ui32RangeLimiter limiter, Uint32 value);

/*!
 * @fn          initUi32UpperLimiter
 *
 * @brief       Initializes a Uint32 type UpperLimiter structure.
 *
 * @param[out]  limiter     Address of the upper limiter structure.
 * @param[in]   high_value  The maximum value for the upper limiter.
 *
 * @return      None.
 */
extern void
initUi32UpperLimiter(ui32UpperLimiter* limiter, Uint32 high_value);

/*!
 * @fn          doUi32UpperLimiter
 *
 * @brief       Processes the input value through a Uint32 type UpperLimiter structure.
 *
 * @param[in]   limiter     The upper limiter structure.
 * @param[in]   value       The input value to be processed.
 *
 * @return      The output value after upper limiting.
 */
extern Uint32
doUi16UpperLimiter(ui32UpperLimiter limiter, Uint32 value);

/*!
 * @fn          initUi32LowerLimiter
 *
 * @brief       Initializes a Uint32 type LowerLimiter structure.
 *
 * @param[out]  limiter     Address of the lower limiter structure.
 * @param[in]   low_value   The minimum value for the lower limiter.
 *
 * @return      None.
 */
extern void
initUi32LowerLimiter(ui32LowerLimiter* limiter, Uint32 low_value);

/*!
 * @fn          doUi32LowerLimiter
 *
 * @brief       Processes the input value through a Uint32 type LowerLimiter structure.
 *
 * @param[in]   limiter     The lower limiter structure.
 * @param[in]   value       The input value to be processed.
 *
 * @return      The output value after lower limiting.
 */
extern Uint32
doUi32LowerLimiter(ui32LowerLimiter limiter, Uint32 value);

/*!
 * @fn          initF32Limiter
 *
 * @brief       Initializes a float32 type Limiter structure.
 *
 * @param[out]  limiter     Address of the limiter structure.
 * @param[in]   high_value  The maximum value for the limiter.
 * @param[in]   low_value   The minimum value for the limiter.
 *
 * @return      None.
 */
extern void
initF32Limiter(f32Limiter* limiter, float32 high_value, float32 low_value);

/*!
 * @fn          doF32Limiter
 *
 * @brief       Processes the input value through a float32 type Limiter structure.
 *
 * @param[in]   limiter     The limiter structure.
 * @param[in]   value       The input value to be limited.
 *
 * @return      The output value after limiting.
 */
extern float32
doF32Limiter(f32Limiter limiter, float32 value);

/*!
 * @fn          initF32RangeLimiter
 *
 * @brief       Initializes a float32 type RangeLimiter structure.
 *
 * @param[out]  limiter     Address of the range limiter structure.
 * @param[in]   high_value  The maximum value for the range limiter.
 * @param[in]   low_value   The minimum value for the range limiter.
 *
 * @return      None.
 */
extern void
initF32RangeLimiter(f32RangeLimiter* limiter, float32 high_value, float32 low_value);

/*!
 * @fn          doF32RangeLimiter
 *
 * @brief       Processes the input value through a float32 type RangeLimiter structure.
 *
 * @param[in]   limiter     The range limiter structure.
 * @param[in]   value       The input value to be processed.
 *
 * @return      The output value after range limiting.
 */
extern float32
doF32RangeLimiter(f32RangeLimiter limiter, float32 value);

/*!
 * @fn          initF32UpperLimiter
 *
 * @brief       Initializes a float32 type UpperLimiter structure.
 *
 * @param[out]  limiter     Address of the upper limiter structure.
 * @param[in]   high_value  The maximum value for the upper limiter.
 *
 * @return      None.
 */
extern void
initF32UpperLimiter(f32UpperLimiter* limiter, float32 high_value);

/*!
 * @fn          doF32UpperLimiter
 *
 * @brief       Processes the input value through a float32 type UpperLimiter structure.
 *
 * @param[in]   limiter     The upper limiter structure.
 * @param[in]   value       The input value to be processed.
 *
 * @return      The output value after upper limiting.
 */
extern float32
doF32UpperLimiter(f32UpperLimiter limiter, float32 value);

/*!
 * @fn          initF32LowerLimiter
 *
 * @brief       Initializes a float32 type LowerLimiter structure.
 *
 * @param[out]  limiter     Address of the lower limiter structure.
 * @param[in]   low_value   The minimum value for the lower limiter.
 *
 * @return      None.
 */
extern void
initF32LowerLimiter(f32LowerLimiter* limiter, float32 low_value);

/*!
 * @fn          doF32LowerLimiter
 *
 * @brief       Processes the input value through a float32 type LowerLimiter structure.
 *
 * @param[in]   limiter     The lower limiter structure.
 * @param[in]   value       The input value to be processed.
 *
 * @return      The output value after lower limiting.
 */
extern float32
doF32LowerLimiter(f32LowerLimiter limiter, float32 value);

#endif /* INCLUDE_JWLIB_CORE_LIMITER_H_ */
