/*!
 * @file    jwlib_core_scale.h
 * @author  DjwChoi
 * @date    2024-02-29
 * @brief   TI C2000 MCU JwLib Core Value Scale Header File
 */

#ifndef INCLUDE_JWLIB_CORE_SCALE_H_
#define INCLUDE_JWLIB_CORE_SCALE_H_

#include <jwlib_core_datatype.h>

/*!
 * @fn          i16Scale
 *
 * @brief       A function that converts int16 type input data to a value within a desired range.
 *
 * @param[in]   input       The input data.
 * @param[in]   input_max   The maximum range of the input data.
 * @param[in]   input_min   The minimum range of the input data.
 * @param[in]   output_max  The maximum range of the output data.
 * @param[in]   output_min  The minimum range of the output data.
 *
 * @return      Returns an int16 data type value that has been converted to the new range.
 */
extern int16
i16Scale(int16 input, int16 input_max, int16 input_min, int16 output_max, int16 output_min);

/*!
 * @fn          i32Scale
 *
 * @brief       A function that converts int32 type input data to a value within a desired range.
 *
 * @param[in]   input       The input data.
 * @param[in]   input_max   The maximum range of the input data.
 * @param[in]   input_min   The minimum range of the input data.
 * @param[in]   output_max  The maximum range of the output data.
 * @param[in]   output_min  The minimum range of the output data.
 *
 * @return      Returns an int32 data type value that has been converted to the new range.
 */
extern int32
i32Scale(int32 input, int32 input_max, int32 input_min, int32 output_max, int32 output_min);

/*!
 * @fn          ui16Scale
 *
 * @brief       A function that converts Uint16 type input data to a value within a desired range.
 *
 * @param[in]   input       The input data.
 * @param[in]   input_max   The maximum range of the input data.
 * @param[in]   input_min   The minimum range of the input data.
 * @param[in]   output_max  The maximum range of the output data.
 * @param[in]   output_min  The minimum range of the output data.
 *
 * @return      Returns an Uint16 data type value that has been converted to the new range.
 */
extern Uint16
ui16Scale(Uint16 input, Uint16 input_max, Uint16 input_min, Uint16 output_max, Uint16 output_min);

/*!
 * @fn          ui32Scale
 *
 * @brief       A function that converts Uint32 type input data to a value within a desired range.
 *
 * @param[in]   input       The input data.
 * @param[in]   input_max   The maximum range of the input data.
 * @param[in]   input_min   The minimum range of the input data.
 * @param[in]   output_max  The maximum range of the output data.
 * @param[in]   output_min  The minimum range of the output data.
 *
 * @return      Returns an Uint32 data type value that has been converted to the new range.
 */
extern Uint32
i32Scale(Uint32 input, Uint32 input_max, Uint32 input_min, Uint32 output_max, Uint32 output_min);

/*!
 * @fn          f32Scale
 *
 * @brief       A function that converts float32 type input data to a value within a desired range.
 *
 * @param[in]   input       The input data.
 * @param[in]   input_max   The maximum range of the input data.
 * @param[in]   input_min   The minimum range of the input data.
 * @param[in]   output_max  The maximum range of the output data.
 * @param[in]   output_min  The minimum range of the output data.
 *
 * @return      Returns an float32 data type value that has been converted to the new range.
 */
extern float32
f32Scale(float32 input, float32 input_max, float32 input_min, float32 output_max, float32 output_min);

#endif /* INCLUDE_JWLIB_CORE_SCALE_H_ */
