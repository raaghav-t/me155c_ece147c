/*
 * Copy_of_Controller_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Copy_of_Controller".
 *
 * Model version              : 1.15
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Wed May 28 16:51:39 2025
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Copy_of_Controller.h"

/* Block parameters (default storage) */
P_Copy_of_Controller_T Copy_of_Controller_P = {
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
  { 0.0, 3.0344773284114876E-11, -5.7691962422814246E-10, 5.19558481253333E-9,
    -2.9460325197577808E-8, 1.1791574076613605E-7, -3.5396973391511483E-7,
    8.2644670282368845E-7, -1.5357868914577796E-6, 2.3051111667555553E-6,
    -2.8191006787591981E-6, 2.8208371124968184E-6, -2.3093733656997281E-6,
    1.5405227645217648E-6, -8.3001693159271893E-7, 3.5593708296655125E-7,
    -1.1871729415453744E-7, 2.9697162259677911E-8, -5.2438129912585088E-9,
    5.8299329702816835E-10, -3.070208089614816E-11 },

  /* Expression: den_d{1}
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  { 1.0, -19.974039924065071, 189.507588187447, -1135.5757448364441,
    4819.9713562022462, -15404.053616756964, 38460.6643793078,
    -76822.722683661021, 124677.22933685603, -166024.09664369823,
    182393.8631198545, -165601.8221395617, 124043.81425600206,
    -76238.026724920768, 38070.86229955536, -15209.149507892394,
    4746.880908737643, -1115.5112440830981, 185.68567822108508,
    -19.521431861278625, 0.97485427175561323 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: num_d{2}
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  { 0.0, 5.0762624646292726E-12, -9.7316359019935587E-11, 8.836330774300902E-10,
    -5.0512583977584478E-9, 2.0380591468486374E-8, -6.1667078286634041E-8,
    1.4511238117540781E-7, -2.7175897279658231E-7, 4.1102653871099515E-7,
    -5.06496128930974E-7, 5.1061592472648469E-7, -4.211388161296562E-7,
    2.8299495076283155E-7, -1.535827090487818E-7, 6.6334496658302019E-8,
    -2.2282180590591239E-8, 5.6131086738652445E-9, -9.980410484110813E-10,
    1.1172387425366705E-10, -5.9238021121534439E-12 },

  /* Expression: den_d{2}
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  { 1.0, -19.974039924065071, 189.507588187447, -1135.5757448364441,
    4819.9713562022462, -15404.053616756964, 38460.6643793078,
    -76822.722683661021, 124677.22933685603, -166024.09664369823,
    182393.8631198545, -165601.8221395617, 124043.81425600206,
    -76238.026724920768, 38070.86229955536, -15209.149507892394,
    4746.880908737643, -1115.5112440830981, 185.68567822108508,
    -19.521431861278625, 0.97485427175561323 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  0.0,

  /* Expression: num_d{3}
   * Referenced by: '<Root>/Discrete Transfer Fcn3'
   */
  { 0.0, 5.4545391114437225E-12, -1.0355670012166712E-10, 9.3129721117300834E-10,
    -5.2733258373270876E-9, 2.1077266381363548E-8, -6.31838772544125E-8,
    1.4731766930076445E-7, -2.7338392877088922E-7, 4.0976807135431027E-7,
    -5.0045290529557507E-7, 5.000796539115366E-7, -4.0885190634500106E-7,
    2.7236596204672537E-7, -1.465502726656219E-7, 6.2761021392704511E-8,
    -2.0904989400634194E-8, 5.2224249798724948E-9, -9.2093258353561E-10,
    1.0225149605677622E-10, -5.3777605002932014E-12 },

  /* Expression: den_d{3}
   * Referenced by: '<Root>/Discrete Transfer Fcn3'
   */
  { 1.0, -19.974039924065071, 189.507588187447, -1135.5757448364441,
    4819.9713562022462, -15404.053616756964, 38460.6643793078,
    -76822.722683661021, 124677.22933685603, -166024.09664369823,
    182393.8631198545, -165601.8221395617, 124043.81425600206,
    -76238.026724920768, 38070.86229955536, -15209.149507892394,
    4746.880908737643, -1115.5112440830981, 185.68567822108508,
    -19.521431861278625, 0.97485427175561323 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn3'
   */
  0.0,

  /* Expression: num_d{4}
   * Referenced by: '<Root>/Discrete Transfer Fcn4'
   */
  { 0.0, 3.6674059190136354E-12, -6.9595192658002856E-11, 6.2558972485665014E-10,
    -3.5406771348058938E-9, 1.4145443443888186E-8, -4.2384714876931649E-8,
    9.8777650300347335E-8, -1.8322209208317836E-7, 2.7450112285043068E-7,
    -3.350969870962329E-7, 3.3469400865604244E-7, -2.7351199041874666E-7,
    1.8212304819675245E-7, -9.794913141567562E-8, 4.1928177540266681E-8,
    -1.3959443429405045E-8, 3.4857214073365178E-9, -6.1439936481878865E-10,
    6.8185995942750521E-11, -3.5845093298594786E-12 },

  /* Expression: den_d{4}
   * Referenced by: '<Root>/Discrete Transfer Fcn4'
   */
  { 1.0, -19.974039924065071, 189.507588187447, -1135.5757448364441,
    4819.9713562022462, -15404.053616756964, 38460.6643793078,
    -76822.722683661021, 124677.22933685603, -166024.09664369823,
    182393.8631198545, -165601.8221395617, 124043.81425600206,
    -76238.026724920768, 38070.86229955536, -15209.149507892394,
    4746.880908737643, -1115.5112440830981, 185.68567822108508,
    -19.521431861278625, 0.97485427175561323 },

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
