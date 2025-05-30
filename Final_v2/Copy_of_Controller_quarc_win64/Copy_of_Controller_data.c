/*
 * Copy_of_Controller_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Copy_of_Controller".
 *
 * Model version              : 1.17
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Thu May 29 16:33:10 2025
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
  /* Variable: K
   * Referenced by: '<Root>/Gain3'
   */
  { 11.076115771988857, 2.9474196853223695, 0.698181733944844,
    43.886494335293818, 66.682239686208987, 47.176051442455318,
    3.5359262843200621 },

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
  { -0.28920055260846644, -0.24888237782782374, 0.3801762177343449,
    -1.0834215301416256E-16, 6.8127223182204225E-15, -3.5455185278340044E-14,
    9.8698384570250142E-14, 1.9503720526220671E-14, 5.0861084533038934E-14,
    2.5830661727015087E-14, -0.00056639644853708946, 0.039722821166879793,
    0.1589119882293224, 0.0248707691553097 },

  /* Expression: pInitialization.C
   * Referenced by: '<S1>/C'
   */
  { 0.14607531656797079, 0.0, -0.22759924860595954, 0.0, 0.27415274634808212,
    0.0, 0.0, 0.0, 0.0, -0.20492862233830825, 0.0, 4.5549425256692864, 0.0,
    1.6337356286073514 },

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
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 5
   * Referenced by: '<Root>/Saturation'
   */
  5.0,

  /* Expression: -5
   * Referenced by: '<Root>/Saturation'
   */
  -5.0,

  /* Expression: pInitialization.A
   * Referenced by: '<S1>/A'
   */
  { 0.99754851031917791, 0.0079902191794931857, 7.9934878356860076E-6, 0.0, 0.0,
    0.0, 0.0, -0.0054588566356524705, 0.99997815989847483, 0.001999985438378914,
    0.0, 0.0, 0.0, 0.0, -0.0031892084094821455, -1.2762052231102897E-5,
    0.99999999149022811, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -0.00010913252606716453, 0.0086459191535148052, 8.06710298543113E-6,
    3.7814349494452941E-9, 0.0, 0.0, 0.0, -0.012647280918770423,
    0.99848952491600984, 0.00099929196846958558, 4.9977778980787564E-7, 0.0, 0.0,
    0.0, -1.1884414570090383E-9, -1.419365333308294E-10, 0.99999999999993328,
    0.0009999999999999792, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S1>/B'
   */
  { 0.00099877739743664865, 3.9967439178430046E-6, 2.6650398833200325E-9,
    0.00027018497354733793, 3.226841194172455E-5, 1.5125739797781183E-8,
    4.7470958596225035E-12 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S2>/CovarianceZ'
   */
  { 291.35939031377723, -18.983438147754477, -181.55220993632574,
    2.1935698440521974E-14, -2.0321791555042612E-12, 3.0928867106548594E-11,
    -8.6366866250013009E-11, -18.983438147754477, 192.08504449685444,
    160.50395387526521, 8.9578586637572982E-15, 9.0055478769296954E-13,
    -1.428607473584891E-11, 4.0254621668856455E-11, -181.55220993632574,
    160.50395387526521, 243.85179031846144, -8.203031897172911E-15,
    2.0789287623225269E-12, -2.9633100124243244E-11, 8.303755159177493E-11,
    2.193569844052198E-14, 8.9578586637573108E-15, -8.20303189717286E-15,
    1.046200721535953, -3.6476130353488512, -0.22814671199671371,
    0.17507782588215354, -2.0321791555042596E-12, 9.0055478769297014E-13,
    2.0789287623225229E-12, -3.6476130353488512, 288.98324185208673,
    18.044485195800867, -13.817062402030411, 3.0928867106548587E-11,
    -1.4286074735848919E-11, -2.9633100124243244E-11, -0.22814671199671371,
    18.044485195800863, 175.9739790273353, -487.388776473788,
    -8.6366866250013E-11, 4.0254621668856481E-11, 8.303755159177493E-11,
    0.17507782588215359, -13.817062402030409, -487.38877647378808,
    1357.2851211632958 },

  /* Expression: pInitialization.L
   * Referenced by: '<S2>/KalmanGainL'
   */
  { -0.28834542840904082, -0.25119256984234595, 0.37967614164650842,
    -1.0587197381828952E-16, 7.9111307780612539E-15, -3.5596332940634151E-14,
    9.7681440502146E-14, 1.1345201835573281E-14, 4.9131450198449786E-14,
    3.0210671837236491E-14, -0.00050232405476603346, 0.039657923794783938,
    0.1589516783562917, 0.02502970099397589 },

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
