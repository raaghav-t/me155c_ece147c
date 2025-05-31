/*
 * CL_modelid_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "CL_modelid".
 *
 * Model version              : 1.20
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Fri May 30 12:14:17 2025
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CL_modelid.h"

/* Block parameters (default storage) */
P_CL_modelid_T CL_modelid_P = {
  /* Variable: K
   * Referenced by: '<Root>/Gain3'
   */
  { 61.673881547355172, 42.429905201963031, 39.017078618349579,
    -0.090621953305622574, -450.54571555173851, -101.28481157448276 },

  /* Variable: amp
   * Referenced by: '<Root>/Sine Wave'
   */
  1.2,

  /* Variable: omega
   * Referenced by: '<Root>/Sine Wave'
   */
  19.869176531592203,

  /* Mask Parameter: cartangle_channels
   * Referenced by: '<Root>/cart angle'
   */
  3U,

  /* Mask Parameter: cartpos_channels
   * Referenced by: '<Root>/cart pos'
   */
  2U,

  /* Mask Parameter: HILWriteAnalog_channels
   * Referenced by: '<Root>/HIL Write Analog'
   */
  0U,

  /* Expression: 0
   * Referenced by: '<S53>/L*(y[k]-yhat[k|k-1])'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S55>/deltax'
   */
  0.0,

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

  /* Expression: pInitialization.M
   * Referenced by: '<S2>/KalmanGainM'
   */
  { 0.40206025714970023, 0.040682518847074134, 0.19131055678958617,
    1.8721978824685984E-19, -7.8276716768415013E-15, -8.3311487444357287E-16,
    -1.353347104086307E-16, -1.5869572218582996E-16, 6.0036824991315011E-16,
    -1.3009600987130741E-8, 0.0881679129802658, 0.098119093555829234 },

  /* Expression: pInitialization.C
   * Referenced by: '<S1>/C'
   */
  { 0.29028, 0.0, 0.44289470999999997, 0.0, 0.20074735213124997, 0.0, 0.0, 0.0,
    0.0, -1.1077420496732719, 0.0, 10.394832036070891 },

  /* Expression: 1/650
   * Referenced by: '<Root>/Gain'
   */
  0.0015384615384615385,

  /* Expression: 0.1524/5000
   * Referenced by: '<Root>/Gain2'
   */
  3.0480000000000003E-5,

  /* Expression: pInitialization.X0
   * Referenced by: '<S1>/X0'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 5
   * Referenced by: '<Root>/Saturation'
   */
  5.0,

  /* Expression: -5
   * Referenced by: '<Root>/Saturation'
   */
  -5.0,

  /* Expression: 0
   * Referenced by: '<Root>/Sine Wave'
   */
  0.0,

  /* Computed Parameter: SineWave_Hsin
   * Referenced by: '<Root>/Sine Wave'
   */
  0.019867869217983523,

  /* Computed Parameter: SineWave_HCos
   * Referenced by: '<Root>/Sine Wave'
   */
  0.99980261440583218,

  /* Computed Parameter: SineWave_PSin
   * Referenced by: '<Root>/Sine Wave'
   */
  -0.019867869217983523,

  /* Computed Parameter: SineWave_PCos
   * Referenced by: '<Root>/Sine Wave'
   */
  0.99980261440583218,

  /* Expression: pInitialization.A
   * Referenced by: '<S1>/A'
   */
  { 1.0024703058545708, 0.0080099014061766043, 1.6013215329302366E-5, 0.0, 0.0,
    0.0, -0.0045517392910462357, 0.99998178821992578, 0.0039999757144194509, 0.0,
    0.0, 0.0, 0.0046218607517503887, 1.8479840808716814E-5, 1.0000000246347134,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.006968401249068279, 0.00019995121335460465,
    1.6109328830475741E-7, 0.0, 0.0, 0.0, -1.1244571560871961E-8,
    0.99999999999094069, 0.0009999999999961626, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S1>/B'
   */
  { 0.00050061883788603755, 2.0016519161627954E-6, 2.6683195918706538E-9,
    0.0031992194136736705, 2.5774926128761164E-6, 1.0918453479726534E-9 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S2>/CovarianceZ'
   */
  { 124.61358845348678, -61.346814452162604, -24.81751433169326,
    3.6057699372413289E-16, 2.3463410681455514E-13, 2.4873967987621177E-14,
    -61.346814452162619, 72.726649990563615, -69.717831496214217,
    -7.7065386621565882E-16, 1.1849980568368727E-12, 1.2612856220936458E-13,
    -24.817514331693257, -69.717831496214217, 199.22948903602762,
    1.1881722284249247E-15, -3.343584206226685E-12, -3.5573688218624887E-13,
    3.6057699372413274E-16, -7.7065386621565882E-16, 1.1881722284249247E-15,
    1.0000485609741423, -1.1049740492971361E-5, -1.1900488770753616E-6,
    2.3463410681455514E-13, 1.1849980568368725E-12, -3.3435842062266854E-12,
    -1.1049740492971366E-5, 1112.8662555889671, 118.6792073048684,
    2.487396798762118E-14, 1.2612856220936455E-13, -3.5573688218624897E-13,
    -1.1900488770753616E-6, 118.67920730486838, 12.741633422209253 },

  /* Expression: pInitialization.L
   * Referenced by: '<S2>/KalmanGainL'
   */
  { 0.40375250349113, 0.043905776353745013, 0.19147972886733766,
    -4.4169091215432681E-18, -3.0125134344833252E-14, -3.2502901110773282E-15,
    9.94286374333051E-16, -1.3489705577744769E-16, -6.5292418806433532E-16,
    -1.08206653026955E-9, 0.088167912976869864, 0.098207261468807538 },

  /* Expression: pInitialization.D
   * Referenced by: '<S1>/D'
   */
  { 0.0, 0.0 },

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

  /* Computed Parameter: cartangle_Active
   * Referenced by: '<Root>/cart angle'
   */
  true,

  /* Computed Parameter: cartpos_Active
   * Referenced by: '<Root>/cart pos'
   */
  true,

  /* Expression: true()
   * Referenced by: '<S1>/Enable'
   */
  true,

  /* Computed Parameter: HILWriteAnalog_Active
   * Referenced by: '<Root>/HIL Write Analog'
   */
  false,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S51>/isSqrtUsed'
   */
  false
};
