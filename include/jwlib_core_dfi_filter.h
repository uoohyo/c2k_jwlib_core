/*!
 * @file    jwlib_core_dfi_filter.h
 * @author  DjwChoi
 * @date    2024-02-29
 * @brief   TI C2000 MCU JwLib Core Direct-Form I Filter Header File
 */

#ifndef INCLUDE_JWLIB_CORE_DFI_FILTER_H_
#define INCLUDE_JWLIB_CORE_DFI_FILTER_H_

#include <jwlib_core_datatype.h>

/*!
 * @struct  f32Dfi1stFilter
 *
 * @brief   Structure for a first-order Direct-Form I filter using float32 data type
 */
typedef struct
{
    float32 a1;             ///< Filter coefficient a1
    float32 b0;             ///< Filter coefficient b0
    float32 b1;             ///< Filter coefficient b1

    float32 input_z_1;      ///< Input delay buffer Z^-1
    float32 output_z_1;     ///< Output delay buffer Z^-1
}f32Dfi1stFilter;

/*!
 * @struct  f32Dfi2ndFilter
 *
 * @brief   Structure for a second-order Direct-Form I filter using float32 data type
 */
typedef struct
{
    float32 a1;             ///< Filter coefficient a1
    float32 a2;             ///< Filter coefficient a2
    float32 b0;             ///< Filter coefficient b0
    float32 b1;             ///< Filter coefficient b1
    float32 b2;             ///< Filter coefficient b2

    float32 input_z_1;      ///< Input delay buffer Z^-1
    float32 input_z_2;      ///< Input delay buffer Z^-2
    float32 output_z_1;     ///< Output delay buffer Z^-1
    float32 output_z_2;     ///< Output delay buffer Z^-2
}f32Dfi2ndFilter;

/*!
 * @fn          initF32Dfi1stAllPassFilter
 *
 * @brief       Initializes the parameters for a first-order Direct-Form I All-Pass Filter using float32 data type.
 *
 * @param[out]  filter      Address of the filter structure.
 *
 * @param[in]   freq        Cutoff frequency for the filter.
 * @param[in]   ts          Time constant of the filter.
 *
 * @return      None.
 */
extern void
initF32Dfi1stAllPassFilter(f32Dfi1stFilter* filter, float32 freq, float32 ts);

/*!
 * @fn          initF32Dfi1stHighPassFilter
 *
 * @brief       Initializes the parameters for a first-order Direct-Form I High-Pass Filter using float32 data type.
 *
 * @param[out]  filter      Address of the filter structure.
 *
 * @param[in]   freq        Cutoff frequency for the filter.
 * @param[in]   ts          Time constant of the filter.
 *
 * @return      None.
 */
extern void
initF32Dfi1stHighPassFilter(f32Dfi1stFilter* filter, float32 freq, float32 ts);

/*!
 * @fn          initF32Dfi1stLowPassFilter
 *
 * @brief       Initializes the parameters for a first-order Direct-Form I Low-Pass Filter using float32 data type.
 *
 * @param[out]  filter      Address of the filter structure.
 *
 * @param[in]   freq        Cutoff frequency for the filter.
 * @param[in]   ts          Time constant of the filter.
 *
 * @return      None.
 */
extern void
initF32Dfi1stLowPassFilter(f32Dfi1stFilter* filter, float32 freq, float32 ts);

/*!
 * @fn          initF32Dfi1stBandPassFilter
 *
 * @brief       Initializes the parameters for a first-order Direct-Form I Band-Pass Filter using float32 data type.
 *
 * @param[out]  filter      Address of the filter structure.
 *
 * @param[in]   freq1       Lower cutoff frequency for the filter.
 * @param[in]   freq2       Upper cutoff frequency for the filter.
 * @param[in]   ts          Time constant of the filter.
 *
 * @return      None.
 */
extern void
initF32Dfi1stBandPassFilter(f32Dfi1stFilter* filter, float32 freq1, float32 freq2, float32 ts);

/*!
 * @fn          initF32Dfi1stBandStopFilter
 *
 * @brief       Initializes the parameters for a first-order Direct-Form I Band-Stop Filter using float32 data type.
 *
 * @param[out]  filter      Address of the filter structure.
 *
 * @param[in]   freq1       Lower cutoff frequency for the filter.
 * @param[in]   freq2       Upper cutoff frequency for the filter.
 * @param[in]   ts          Time constant of the filter.
 *
 * @return      None.
 */
extern void
initF32Dfi1stBandStopFilter(f32Dfi1stFilter* filter, float32 freq1, float32 freq2, float32 ts);

/*!
 * @fn          initF32Dfi1stFilterData
 *
 * @brief       Initializes the accumulated data for a first-order Direct-Form I filter using the float32 data type, excluding its parameters.
 *
 * @param[out]  filter      Address of the filter structure.
 *
 * @return      None.
 */
extern void
initF32Dfi1stFilterData(f32Dfi1stFilter* filter);

/*!
 * @fn          doF32Dfi1stFilter
 *
 * @brief       Performs the filtering operation using a first-order Direct-Form I filter with the float32 data type based on the provided input data.
 *
 * @param[out]  filter      Address of the filter structure.
 *
 * @param[in]   input       Input data for the filter.
 *
 * @return      The filtered output as a float32 value.
 */
extern float32
doF32Dfi1stFilter(f32Dfi1stFilter* filter, float32 input);

/*!
 * @fn          initF32Dfi2stAllPassFilter
 *
 * @brief       Initializes the parameters for a second-order Direct-Form I All-Pass Filter using float32 data type.
 *
 * @param[out]  filter      Address of the filter structure.
 *
 * @param[in]   freq        Cutoff frequency for the filter.
 * @param[in]   q           Quality factor of the filter.
 * @param[in]   ts          Time constant of the filter.
 *
 * @return      void
 */
extern void
initF32Dfi2stAllPassFilter(f32Dfi2ndFilter* filter, float32 freq, float32 q, float32 ts);

/*!
 * @fn          initF32Dfi2stHighPassFilter
 *
 * @brief       Initializes the parameters for a second-order Direct-Form I High-Pass Filter using float32 data type.
 *
 * @param[out]  filter      Address of the filter structure.
 *
 * @param[in]   freq        Cutoff frequency for the filter.
 * @param[in]   q           Quality factor of the filter.
 * @param[in]   ts          Time constant of the filter.
 *
 * @return      void
 */
extern void
initF32Dfi2stHighPassFilter(f32Dfi2ndFilter* filter, float32 freq, float32 q, float32 ts);

/*!
 * @fn          initF32Dfi2stLowPassFilter
 *
 * @brief       Initializes the parameters for a second-order Direct-Form I Low-Pass Filter using float32 data type.
 *
 * @param[out]  filter      Address of the filter structure.
 *
 * @param[in]   freq        Cutoff frequency for the filter.
 * @param[in]   q           Quality factor of the filter.
 * @param[in]   ts          Time constant of the filter.
 *
 * @return      void
 */
extern void
initF32Dfi2stLowPassFilter(f32Dfi2ndFilter* filter, float32 freq, float32 q, float32 ts);

/*!
 * @fn          initF32Dfi2stBandPassFilter
 *
 * @brief       Initializes the parameters for a second-order Direct-Form I Band-Pass Filter using float32 data type.
 *
 * @param[out]  filter      Address of the filter structure.
 *
 * @param[in]   freq1       Lower cutoff frequency for the filter.
 * @param[in]   freq2       Upper cutoff frequency for the filter.
 * @param[in]   q           Quality factor of the filter.
 * @param[in]   ts          Time constant of the filter.
 *
 * @return      void
 */
extern void
initF32Dfi2stBandPassFilter(f32Dfi2ndFilter* filter, float32 freq1, float32 freq2, float32 q, float32 ts);

/*!
 * @fn          initF32Dfi2stBandStopFilter
 *
 * @brief       Initializes the parameters for a second-order Direct-Form I Band-Stop Filter using float32 data type.
 *
 * @param[out]  filter      Address of the filter structure.
 *
 * @param[in]   freq1       Lower cutoff frequency for the filter.
 * @param[in]   freq2       Upper cutoff frequency for the filter.
 * @param[in]   q           Quality factor of the filter.
 * @param[in]   ts          Time constant of the filter.
 *
 * @return      void
 */
extern void
initF32Dfi2stBandStopFilter(f32Dfi2ndFilter* filter, float32 freq1, float32 freq2, float32 q, float32 ts);

/*!
 * @fn          initF32Dfi2stFilterData
 *
 * @brief       Initializes the accumulated data for a second-order Direct-Form I filter using the float32 data type, excluding its parameters.
 *
 * @param[out]  filter      Address of the filter structure.
 *
 * @return      None.
 */
extern void
initF32Dfi2stFilterData(f32Dfi2ndFilter* filter);

/*!
 * @fn          doF32Dfi2stFilter
 *
 * @brief       Performs the filtering operation using a second-order Direct-Form I filter with the float32 data type based on the provided input data.
 *
 * @param[out]  filter      Address of the filter structure.
 *
 * @param[in]   input       Input data for the filter.
 *
 * @return      The filtered output as a float32 value.
 */
extern float32
doF32Dfi2stFilter(f32Dfi2ndFilter* filter, float32 input);

#endif /* INCLUDE_JWLIB_CORE_DFI_FILTER_H_ */
