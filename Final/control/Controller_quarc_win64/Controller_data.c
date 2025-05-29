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
 * C source code generated on : Wed May 28 16:20:29 2025
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
  { 0.0, 1.1773782344057986, -22.339182520517408, 200.77458261032834,
    -1136.1524698780702, 4538.35118349396, -13596.34313894843,
    31681.295777445161, -58756.180131209861, 88013.924903843392,
    -107426.00120394208, 107279.94086606256, -87655.411802238348,
    58357.829211249707, -31380.997043101404, 13430.86989109587,
    -4470.93487492972, 1116.2335606604518, -196.71858816683431,
    21.828412128490903, -1.1473318890725925 },

  /* Expression: den_d{1}
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  { 1.0, -19.92992849086221, 188.67158035567078, -1128.070588539777,
    4777.5489203020934, -15234.789423036396, 37954.14371973653,
    -75643.797975307447, 122493.26867375299, -162756.331704261,
    178409.8842069674, -161627.76244935853, 120800.39662403593,
    -74081.118902386268, 36912.331583915467, -14713.866584399786,
    4582.1951690135875, -1074.441574736956, 178.45598198887009,
    -18.720113012389778, 0.93278346087996278 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: num_d{2}
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  { 0.0, 0.7479015037904656, -14.189529370580248, 127.52099628115997,
    -721.575488446593, 2882.1420587861994, -8633.988551488399,
    20117.049975506739, -37306.701996424672, 55880.023155123519,
    -68200.321547312647, 68103.165636774182, -55641.548662751971,
    37041.728352053462, -19917.298366897776, 8523.9196884933281,
    -2837.2983483428588, 708.32591241935052, -124.82304803013042,
    13.849777552490353, -0.7279154286035675 },

  /* Expression: den_d{2}
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  { 1.0, -19.92992849086221, 188.67158035567078, -1128.070588539777,
    4777.5489203020934, -15234.789423036396, 37954.14371973653,
    -75643.797975307447, 122493.26867375299, -162756.331704261,
    178409.8842069674, -161627.76244935853, 120800.39662403593,
    -74081.118902386268, 36912.331583915467, -14713.866584399786,
    4582.1951690135875, -1074.441574736956, 178.45598198887009,
    -18.720113012389778, 0.93278346087996278 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  0.0,

  /* Expression: num_d{3}
   * Referenced by: '<Root>/Discrete Transfer Fcn3'
   */
  { 0.0, -0.12507224092720171, 2.37420839092534, -21.348478054088851,
    120.86524336721173, -483.02491969878213, 1447.7720094664787,
    -3375.1075336771614, 6262.45831637769, -9385.3245762998231,
    11460.77348308665, -11450.637138202697, 9360.4443663071288,
    -6234.8134369802365, 3354.2673196735605, -1436.2884587306928,
    478.34635075881567, -119.48290866199351, 21.06700000130407,
    -2.3387619724148867, 0.12298708905144921 },

  /* Expression: den_d{3}
   * Referenced by: '<Root>/Discrete Transfer Fcn3'
   */
  { 1.0, -19.92992849086221, 188.67158035567078, -1128.070588539777,
    4777.5489203020934, -15234.789423036396, 37954.14371973653,
    -75643.797975307447, 122493.26867375299, -162756.331704261,
    178409.8842069674, -161627.76244935853, 120800.39662403593,
    -74081.118902386268, 36912.331583915467, -14713.866584399786,
    4582.1951690135875, -1074.441574736956, 178.45598198887009,
    -18.720113012389778, 0.93278346087996278 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn3'
   */
  0.0,

  /* Expression: num_d{4}
   * Referenced by: '<Root>/Discrete Transfer Fcn4'
   */
  { 0.0, -0.26344883623803372, 4.9995068050096441, -44.941568336858346,
    254.36403945219789, -1016.2412011033165, 3045.0919957953906,
    -7096.7717573074769, 13164.096427267992, -19722.796233053188,
    24077.206978314854, -24048.877879297877, 19653.260912809164,
    -13086.834384726322, 7038.527412818954, -3012.9976951192402,
    1003.1655017396446, -250.50067829533666, 44.154890575520156,
    -4.9004407274182489, 0.25762122454510689 },

  /* Expression: den_d{4}
   * Referenced by: '<Root>/Discrete Transfer Fcn4'
   */
  { 1.0, -19.92992849086221, 188.67158035567078, -1128.070588539777,
    4777.5489203020934, -15234.789423036396, 37954.14371973653,
    -75643.797975307447, 122493.26867375299, -162756.331704261,
    178409.8842069674, -161627.76244935853, 120800.39662403593,
    -74081.118902386268, 36912.331583915467, -14713.866584399786,
    4582.1951690135875, -1074.441574736956, 178.45598198887009,
    -18.720113012389778, 0.93278346087996278 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn4'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Gain1'
   */
  1.0,

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
