/*
 * Controller_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Controller".
 *
 * Model version              : 1.13
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Thu May 22 20:57:03 2025
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Controller.h"

/* Block parameters (default storage) */
P_Controller_T Controller_P = {
  /* Mask Parameter: HILReadEncoder_channels
   * Referenced by: '<Root>/HIL Read Encoder'
   */
  { 1U, 3U },

  /* Mask Parameter: HILReadEncoder1_channels
   * Referenced by: '<Root>/HIL Read Encoder1'
   */
  { 0U, 2U },

  /* Mask Parameter: HILWriteAnalog_channels
   * Referenced by: '<Root>/HIL Write Analog'
   */
  0U,

  /* Expression: set_other_outputs_at_terminate
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_switch_out
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_start
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_switch_in
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: final_analog_outputs
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: final_pwm_outputs
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: analog_input_maximums
   * Referenced by: '<Root>/HIL Initialize'
   */
  10.0,

  /* Expression: analog_input_minimums
   * Referenced by: '<Root>/HIL Initialize'
   */
  -10.0,

  /* Expression: analog_output_maximums
   * Referenced by: '<Root>/HIL Initialize'
   */
  10.0,

  /* Expression: analog_output_minimums
   * Referenced by: '<Root>/HIL Initialize'
   */
  -10.0,

  /* Expression: initial_analog_outputs
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: watchdog_analog_outputs
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: encoder_filter_frequency
   * Referenced by: '<Root>/HIL Initialize'
   */
  1.6666666666666668E+7,

  /* Expression: pwm_frequency
   * Referenced by: '<Root>/HIL Initialize'
   */
  16276.041666666668,

  /* Expression: initial_pwm_outputs
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: num_d{1}
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  { 0.0, 55.609521365318059, -1055.113429024402, 9482.8592910117477,
    -53661.878621045151, 214351.24764462619, -642168.01965304057,
    1.4963325138314161E+6, -2.7750916383117842E+6, 4.1569398522859453E+6,
    -5.0737646381738856E+6, 5.0668490439170785E+6, -4.1399651446261127E+6,
    2.756230702663905E+6, -1.4821141011432146E+6, 634333.26000476978,
    -211159.24533612552, 52718.764624876683, -9290.8171818915525,
    1030.9295825988386, -54.186891470082358 },

  /* Expression: den_d{1}
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  { 1.0, -19.804461435532293, 186.30197570003162, -1106.8718729271552,
    4658.1427132222852, -14760.028340012886, 36538.4050342664,
    -72360.236745235539, 116431.85180257389, -153718.84632377012,
    167430.4884998565, -150714.42619863909, 111925.05886799598,
    -68199.869805156253, 33764.59337409454, -13372.97226781573,
    4137.927821559525, -964.04544251338677, 159.09203053305052,
    -16.581571949978418, 0.82090965346553124 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: num_d{2}
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  { 0.0, 31.436519933669924, -596.34389379088725, 5358.573747197549,
    -30317.12520267778, 121076.63970316705, -362656.25810899393,
    844863.86302275443, -1.5665635971869759E+6, 2.34615382367385E+6,
    -2.8630244784726514E+6, 2.8585426243265211E+6, -2.3351528661921676E+6,
    1.5543402160749456E+6, -835649.20673644939, 357578.71549873805,
    -119007.9710296394, 29705.91338611074, -5234.1154662342169,
    580.67088218521951, -30.514545823429216 },

  /* Expression: den_d{2}
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  { 1.0, -19.804461435532293, 186.30197570003162, -1106.8718729271552,
    4658.1427132222852, -14760.028340012886, 36538.4050342664,
    -72360.236745235539, 116431.85180257389, -153718.84632377012,
    167430.4884998565, -150714.42619863909, 111925.05886799598,
    -68199.869805156253, 33764.59337409454, -13372.97226781573,
    4137.927821559525, -964.04544251338677, 159.09203053305052,
    -16.581571949978418, 0.82090965346553124 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  0.0,

  /* Expression: num_d{3}
   * Referenced by: '<Root>/Discrete Transfer Fcn3'
   */
  { 0.0, -12.264945777769832, 232.75416561134486, -2092.2784255574793,
    11842.078195482432, -47311.854558530307, 141766.80703231134,
    -330396.88856558962, 612868.27455653879, -918217.47173787246,
    1.1209446111226643E+6, -1.1196282589101938E+6, 914986.41335711163,
    -609278.18293098989, 327690.48154431395, -140275.49930062311,
    46704.273420838617, -11662.561572713526, 2055.7243135262552,
    -228.15091797389579, 11.994157423108613 },

  /* Expression: den_d{3}
   * Referenced by: '<Root>/Discrete Transfer Fcn3'
   */
  { 1.0, -19.804461435532293, 186.30197570003162, -1106.8718729271552,
    4658.1427132222852, -14760.028340012886, 36538.4050342664,
    -72360.236745235539, 116431.85180257389, -153718.84632377012,
    167430.4884998565, -150714.42619863909, 111925.05886799598,
    -68199.869805156253, 33764.59337409454, -13372.97226781573,
    4137.927821559525, -964.04544251338677, 159.09203053305052,
    -16.581571949978418, 0.82090965346553124 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn3'
   */
  0.0,

  /* Expression: num_d{4}
   * Referenced by: '<Root>/Discrete Transfer Fcn4'
   */
  { 0.0, -18.08605592268821, 343.17767588565721, -3084.4970818033744,
    17455.653904602677, -69730.2901187778, 208914.86891449758,
    -486826.29191069986, 902918.37417719921, -1.3526024433796895E+6,
    1.6510188226945503E+6, -1.6488645037863981E+6, 1.3473145496752961E+6,
    -897042.89223711111, 482397.03213898826, -206474.21942496803,
    68735.93261421645, -17161.85978612004, 3024.6731645115847,
    -335.64406552869787, 17.642887271759271 },

  /* Expression: den_d{4}
   * Referenced by: '<Root>/Discrete Transfer Fcn4'
   */
  { 1.0, -19.804461435532293, 186.30197570003162, -1106.8718729271552,
    4658.1427132222852, -14760.028340012886, 36538.4050342664,
    -72360.236745235539, 116431.85180257389, -153718.84632377012,
    167430.4884998565, -150714.42619863909, 111925.05886799598,
    -68199.869805156253, 33764.59337409454, -13372.97226781573,
    4137.927821559525, -964.04544251338677, 159.09203053305052,
    -16.581571949978418, 0.82090965346553124 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn4'
   */
  0.0,

  /* Expression: 10^(-300)
   * Referenced by: '<Root>/Gain1'
   */
  1.0E-300,

  /* Expression: 1/650
   * Referenced by: '<Root>/Gain'
   */
  0.0015384615384615385,

  /* Expression: 0.1524/5000
   * Referenced by: '<Root>/Gain2'
   */
  3.0480000000000003E-5,

  /* Expression: 5
   * Referenced by: '<Root>/Saturation'
   */
  5.0,

  /* Expression: -5
   * Referenced by: '<Root>/Saturation'
   */
  -5.0,

  /* Expression: 0.001
   * Referenced by: '<Root>/Step'
   */
  0.001,

  /* Expression: 0
   * Referenced by: '<Root>/Step'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Step'
   */
  1.0,

  /* Computed Parameter: HILInitialize_CKChannels
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0, 1 },

  /* Computed Parameter: HILInitialize_CKModes
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0, 0 },

  /* Computed Parameter: HILInitialize_DOWatchdog
   * Referenced by: '<Root>/HIL Initialize'
   */
  2,

  /* Computed Parameter: HILInitialize_EIInitial
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POModes
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AIChannels
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U },

  /* Computed Parameter: HILInitialize_AOChannels
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U },

  /* Computed Parameter: HILInitialize_EIChannels
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U },

  /* Computed Parameter: HILInitialize_EIQuadrature
   * Referenced by: '<Root>/HIL Initialize'
   */
  4U,

  /* Computed Parameter: HILInitialize_Active
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_AOTerminate
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_AOExit
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOTerminate
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_DOExit
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POTerminate
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_POExit
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_CKPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AIPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AIPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_AOPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_AOEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOReset
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_DOEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOReset
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_EIPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_EIPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_EIStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_EIEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_POPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_POEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POReset
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_OOReset
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOFinal
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_DOInitial
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILReadEncoder_Active
   * Referenced by: '<Root>/HIL Read Encoder'
   */
  true,

  /* Computed Parameter: HILReadEncoder1_Active
   * Referenced by: '<Root>/HIL Read Encoder1'
   */
  true,

  /* Computed Parameter: HILWriteAnalog_Active
   * Referenced by: '<Root>/HIL Write Analog'
   */
  false
};
