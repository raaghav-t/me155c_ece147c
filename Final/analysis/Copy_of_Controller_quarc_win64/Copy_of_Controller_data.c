/*
 * Copy_of_Controller_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Copy_of_Controller".
 *
 * Model version              : 1.14
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Wed May 28 16:35:51 2025
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
  { 0.0, 4.781015479396324E-15, -9.0845602517101538E-14, 8.1766762417988367E-13,
    -4.6337764569197035E-12, 1.8536422077286519E-11, -5.5613245063357539E-11,
    1.2977359347837655E-10, -2.4102560929833451E-10, 3.6156487734821913E-10,
    -4.4194522267628075E-10, 4.4197807100213292E-10, -3.6164550739056838E-10,
    2.41115203419756E-10, -1.2984113952590218E-10, 5.5650468622157547E-11,
    -1.8551589424894566E-11, 4.6382584966248155E-12, -8.1858044150578446E-13,
    9.0960576482040394E-14, -4.78778041407289E-15 },

  /* Expression: den_d{1}
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  { 1.0, -19.975231601725955, 189.53020002219509, -1135.7789818303695,
    4821.1215100209938, -15408.648161224106, 38474.4298574462,
    -76854.799903331223, 124736.72313652678, -166113.22044172828,
    182502.64977525943, -165710.46681100747, 124132.58954681869,
    -76297.13329183888, 38102.647602459889, -15222.754131845599,
    4751.4099189539411, -1116.6420351322104, 185.88497247996838,
    -19.543547190564809, 0.97601674235909608 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: num_d{2}
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  { 0.0, 3.9521229990454013E-15, -7.5113860389472008E-14, 6.7623646080195151E-13,
    -3.8332064184898551E-12, 1.5337625359396109E-11, -4.6027276958616542E-11,
    1.0743058693661069E-10, -1.9957637266374368E-10, 2.9945821786946745E-10,
    -3.6611898921196248E-10, 3.6623352217749289E-10, -2.9973934709691052E-10,
    1.9988874482208644E-10, -1.0766607466733013E-10, 4.6157040779766816E-11,
    -1.5390494788099733E-11, 3.8488278841264E-12, -6.7941752852963585E-13,
    7.5514471859372065E-14, -3.9756905351718916E-15 },

  /* Expression: den_d{2}
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  { 1.0, -19.975231601725955, 189.53020002219509, -1135.7789818303695,
    4821.1215100209938, -15408.648161224106, 38474.4298574462,
    -76854.799903331223, 124736.72313652678, -166113.22044172828,
    182502.64977525943, -165710.46681100747, 124132.58954681869,
    -76297.13329183888, 38102.647602459889, -15222.754131845599,
    4751.4099189539411, -1116.6420351322104, 185.88497247996838,
    -19.543547190564809, 0.97601674235909608 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  0.0,

  /* Expression: num_d{3}
   * Referenced by: '<Root>/Discrete Transfer Fcn3'
   */
  { 0.0, -1.6348871404986261E-12, 3.1022374887196024E-11,
    -2.7883835389814192E-10, 1.5780342736899179E-9, -6.3039676006434185E-9,
    1.8887482332491111E-8, -4.4014015713579612E-8, 8.163525194818905E-8,
    -1.2229585005867226E-7, 1.4928147291053161E-7, -1.4909092819672237E-7,
    1.2182814758430678E-7, -8.1115578502880087E-8, 4.3622257329278034E-8,
    -1.8671612120147986E-8, 6.2160187723134214E-9, -1.5520487881584793E-9,
    2.7354704809553652E-10, -3.0356041639284806E-11, 1.5956896994931573E-12 },

  /* Expression: den_d{3}
   * Referenced by: '<Root>/Discrete Transfer Fcn3'
   */
  { 1.0, -19.975231601725955, 189.53020002219509, -1135.7789818303695,
    4821.1215100209938, -15408.648161224106, 38474.4298574462,
    -76854.799903331223, 124736.72313652678, -166113.22044172828,
    182502.64977525943, -165710.46681100747, 124132.58954681869,
    -76297.13329183888, 38102.647602459889, -15222.754131845599,
    4751.4099189539411, -1116.6420351322104, 185.88497247996838,
    -19.543547190564809, 0.97601674235909608 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn3'
   */
  0.0,

  /* Expression: num_d{4}
   * Referenced by: '<Root>/Discrete Transfer Fcn4'
   */
  { 0.0, -1.2269402953378608E-12, 2.3281491235847514E-11,
    -2.0926103243876421E-10, 1.1842745205641127E-9, -4.7309681813555609E-9,
    1.4174580883491242E-8, -3.30314204538225E-8, 6.1265233622368335E-8,
    -9.1780026160020188E-8, 1.1203209800933967E-7, -1.1188912474639478E-7,
    9.1429090426901217E-8, -6.0875302006807674E-8, 3.2737468586592346E-8,
    -1.4012604893993389E-8, 4.6649766843189758E-9, -1.1647765792984756E-9,
    2.0529075566742166E-10, -2.2781514952080713E-11, 1.1975288995994798E-12 },

  /* Expression: den_d{4}
   * Referenced by: '<Root>/Discrete Transfer Fcn4'
   */
  { 1.0, -19.975231601725955, 189.53020002219509, -1135.7789818303695,
    4821.1215100209938, -15408.648161224106, 38474.4298574462,
    -76854.799903331223, 124736.72313652678, -166113.22044172828,
    182502.64977525943, -165710.46681100747, 124132.58954681869,
    -76297.13329183888, 38102.647602459889, -15222.754131845599,
    4751.4099189539411, -1116.6420351322104, 185.88497247996838,
    -19.543547190564809, 0.97601674235909608 },

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
