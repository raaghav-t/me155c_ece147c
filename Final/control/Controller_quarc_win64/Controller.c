/*
 * Controller.c
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
#include "rtwtypes.h"
#include "Controller_private.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "Controller_dt.h"

/* Block signals (default storage) */
B_Controller_T Controller_B;

/* Block states (default storage) */
DW_Controller_T Controller_DW;

/* Real-time model */
static RT_MODEL_Controller_T Controller_M_;
RT_MODEL_Controller_T *const Controller_M = &Controller_M_;

/* Model output function */
void Controller_output(void)
{
  real_T rtb_HILReadEncoder1[2];
  real_T rtb_DiscreteTransferFcn;
  real_T rtb_DiscreteTransferFcn2;
  real_T rtb_DiscreteTransferFcn3;
  real_T rtb_Saturation;
  int32_T denIdx;
  int32_T j;

  /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn' */
  rtb_DiscreteTransferFcn = 0.0;
  denIdx = 1;
  for (j = 0; j < 20; j++) {
    rtb_DiscreteTransferFcn += Controller_P.DiscreteTransferFcn_NumCoef[denIdx] *
      Controller_DW.DiscreteTransferFcn_states[j];
    denIdx++;
  }

  /* End of DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn' */

  /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn2' */
  rtb_DiscreteTransferFcn2 = 0.0;
  denIdx = 1;
  for (j = 0; j < 20; j++) {
    rtb_DiscreteTransferFcn2 += Controller_P.DiscreteTransferFcn2_NumCoef[denIdx]
      * Controller_DW.DiscreteTransferFcn2_states[j];
    denIdx++;
  }

  /* End of DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn2' */

  /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn3' */
  rtb_DiscreteTransferFcn3 = 0.0;
  denIdx = 1;
  for (j = 0; j < 20; j++) {
    rtb_DiscreteTransferFcn3 += Controller_P.DiscreteTransferFcn3_NumCoef[denIdx]
      * Controller_DW.DiscreteTransferFcn3_states[j];
    denIdx++;
  }

  /* End of DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn3' */

  /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn4' */
  rtb_Saturation = 0.0;
  denIdx = 1;
  for (j = 0; j < 20; j++) {
    rtb_Saturation += Controller_P.DiscreteTransferFcn4_NumCoef[denIdx] *
      Controller_DW.DiscreteTransferFcn4_states[j];
    denIdx++;
  }

  /* End of DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn4' */

  /* Sum: '<Root>/u' incorporates:
   *  Gain: '<Root>/Gain1'
   *  Sum: '<Root>/Sum'
   */
  Controller_B.u = (((rtb_DiscreteTransferFcn + rtb_DiscreteTransferFcn2) +
                     rtb_DiscreteTransferFcn3) + rtb_Saturation) *
    Controller_P.Gain1_Gain;

  /* S-Function (hil_read_encoder_block): '<Root>/HIL Read Encoder' */

  /* S-Function Block: Controller/HIL Read Encoder (hil_read_encoder_block) */
  {
    t_error result = hil_read_encoder(Controller_DW.HILInitialize_Card,
      Controller_P.HILReadEncoder_channels, 2,
      &Controller_DW.HILReadEncoder_Buffer[0]);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Controller_M, _rt_error_message);
    } else {
      rtb_HILReadEncoder1[0] = Controller_DW.HILReadEncoder_Buffer[0];
      rtb_HILReadEncoder1[1] = Controller_DW.HILReadEncoder_Buffer[1];
    }
  }

  /* Gain: '<Root>/Gain' */
  Controller_B.raag[0] = Controller_P.Gain_Gain * rtb_HILReadEncoder1[0];
  Controller_B.raag[1] = Controller_P.Gain_Gain * rtb_HILReadEncoder1[1];

  /* S-Function (hil_read_encoder_block): '<Root>/HIL Read Encoder1' */

  /* S-Function Block: Controller/HIL Read Encoder1 (hil_read_encoder_block) */
  {
    t_error result = hil_read_encoder(Controller_DW.HILInitialize_Card,
      Controller_P.HILReadEncoder1_channels, 2,
      &Controller_DW.HILReadEncoder1_Buffer[0]);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Controller_M, _rt_error_message);
    } else {
      rtb_HILReadEncoder1[0] = Controller_DW.HILReadEncoder1_Buffer[0];
      rtb_HILReadEncoder1[1] = Controller_DW.HILReadEncoder1_Buffer[1];
    }
  }

  /* Gain: '<Root>/Gain2' */
  rtb_DiscreteTransferFcn = Controller_P.Gain2_Gain * rtb_HILReadEncoder1[0];
  Controller_B.raag_d[0] = rtb_DiscreteTransferFcn;

  /* SignalConversion generated from: '<Root>/To Workspace' */
  Controller_B.TmpSignalConversionAtToWorkspac[0] = Controller_B.raag[0];
  Controller_B.TmpSignalConversionAtToWorkspac[2] = rtb_DiscreteTransferFcn;

  /* Gain: '<Root>/Gain2' */
  rtb_DiscreteTransferFcn = Controller_P.Gain2_Gain * rtb_HILReadEncoder1[1];
  Controller_B.raag_d[1] = rtb_DiscreteTransferFcn;

  /* SignalConversion generated from: '<Root>/To Workspace' */
  Controller_B.TmpSignalConversionAtToWorkspac[1] = Controller_B.raag[1];
  Controller_B.TmpSignalConversionAtToWorkspac[3] = rtb_DiscreteTransferFcn;

  /* Saturate: '<Root>/Saturation' */
  if (Controller_B.u > Controller_P.Saturation_UpperSat) {
    rtb_Saturation = Controller_P.Saturation_UpperSat;
  } else if (Controller_B.u < Controller_P.Saturation_LowerSat) {
    rtb_Saturation = Controller_P.Saturation_LowerSat;
  } else {
    rtb_Saturation = Controller_B.u;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* S-Function (hil_write_analog_block): '<Root>/HIL Write Analog' */

  /* S-Function Block: Controller/HIL Write Analog (hil_write_analog_block) */
  {
    t_error result;
    result = hil_write_analog(Controller_DW.HILInitialize_Card,
      &Controller_P.HILWriteAnalog_channels, 1, &rtb_Saturation);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Controller_M, _rt_error_message);
    }
  }

  /* Step: '<Root>/Step' */
  if (Controller_M->Timing.t[0] < Controller_P.Step_Time) {
    /* Step: '<Root>/Step' */
    Controller_B.Step = Controller_P.Step_Y0;
  } else {
    /* Step: '<Root>/Step' */
    Controller_B.Step = Controller_P.Step_YFinal;
  }

  /* End of Step: '<Root>/Step' */
}

/* Model update function */
void Controller_update(void)
{
  real_T denAccum;
  int32_T j;
  int32_T numIdx;

  /* Update for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn' */
  denAccum = Controller_B.raag[0];
  numIdx = 1;
  for (j = 0; j < 20; j++) {
    denAccum -= Controller_P.DiscreteTransferFcn_DenCoef[numIdx] *
      Controller_DW.DiscreteTransferFcn_states[j];
    numIdx++;
  }

  denAccum /= Controller_P.DiscreteTransferFcn_DenCoef[0];
  for (j = 0; j < 19; j++) {
    Controller_DW.DiscreteTransferFcn_states[19 - j] =
      Controller_DW.DiscreteTransferFcn_states[18 - j];
  }

  Controller_DW.DiscreteTransferFcn_states[0] = denAccum;

  /* End of Update for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn' */

  /* Update for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn2' */
  denAccum = Controller_B.raag[1];
  numIdx = 1;
  for (j = 0; j < 20; j++) {
    denAccum -= Controller_P.DiscreteTransferFcn2_DenCoef[numIdx] *
      Controller_DW.DiscreteTransferFcn2_states[j];
    numIdx++;
  }

  denAccum /= Controller_P.DiscreteTransferFcn2_DenCoef[0];
  for (j = 0; j < 19; j++) {
    Controller_DW.DiscreteTransferFcn2_states[19 - j] =
      Controller_DW.DiscreteTransferFcn2_states[18 - j];
  }

  Controller_DW.DiscreteTransferFcn2_states[0] = denAccum;

  /* End of Update for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn2' */

  /* Update for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn3' */
  denAccum = Controller_B.raag_d[0];
  numIdx = 1;
  for (j = 0; j < 20; j++) {
    denAccum -= Controller_P.DiscreteTransferFcn3_DenCoef[numIdx] *
      Controller_DW.DiscreteTransferFcn3_states[j];
    numIdx++;
  }

  denAccum /= Controller_P.DiscreteTransferFcn3_DenCoef[0];
  for (j = 0; j < 19; j++) {
    Controller_DW.DiscreteTransferFcn3_states[19 - j] =
      Controller_DW.DiscreteTransferFcn3_states[18 - j];
  }

  Controller_DW.DiscreteTransferFcn3_states[0] = denAccum;

  /* End of Update for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn3' */

  /* Update for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn4' */
  denAccum = Controller_B.raag_d[1];
  numIdx = 1;
  for (j = 0; j < 20; j++) {
    denAccum -= Controller_P.DiscreteTransferFcn4_DenCoef[numIdx] *
      Controller_DW.DiscreteTransferFcn4_states[j];
    numIdx++;
  }

  denAccum /= Controller_P.DiscreteTransferFcn4_DenCoef[0];
  for (j = 0; j < 19; j++) {
    Controller_DW.DiscreteTransferFcn4_states[19 - j] =
      Controller_DW.DiscreteTransferFcn4_states[18 - j];
  }

  Controller_DW.DiscreteTransferFcn4_states[0] = denAccum;

  /* End of Update for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn4' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Controller_M->Timing.clockTick0)) {
    ++Controller_M->Timing.clockTickH0;
  }

  Controller_M->Timing.t[0] = Controller_M->Timing.clockTick0 *
    Controller_M->Timing.stepSize0 + Controller_M->Timing.clockTickH0 *
    Controller_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Controller_M->Timing.clockTick1)) {
      ++Controller_M->Timing.clockTickH1;
    }

    Controller_M->Timing.t[1] = Controller_M->Timing.clockTick1 *
      Controller_M->Timing.stepSize1 + Controller_M->Timing.clockTickH1 *
      Controller_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void Controller_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: Controller/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("q4", "0", &Controller_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Controller_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options(Controller_DW.HILInitialize_Card,
      "d0=digital;d1=digital;led=auto;update_rate=normal;decimation=1", 63);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Controller_M, _rt_error_message);
      return;
    }

    if ((Controller_P.HILInitialize_CKPStart && !is_switching) ||
        (Controller_P.HILInitialize_CKPEnter && is_switching)) {
      result = hil_set_clock_mode(Controller_DW.HILInitialize_Card, (t_clock *)
        Controller_P.HILInitialize_CKChannels, 2U, (t_clock_mode *)
        Controller_P.HILInitialize_CKModes);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Controller_M, _rt_error_message);
        return;
      }
    }

    result = hil_watchdog_clear(Controller_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Controller_M, _rt_error_message);
      return;
    }

    if ((Controller_P.HILInitialize_AIPStart && !is_switching) ||
        (Controller_P.HILInitialize_AIPEnter && is_switching)) {
      Controller_DW.HILInitialize_AIMinimums[0] =
        (Controller_P.HILInitialize_AILow);
      Controller_DW.HILInitialize_AIMinimums[1] =
        (Controller_P.HILInitialize_AILow);
      Controller_DW.HILInitialize_AIMinimums[2] =
        (Controller_P.HILInitialize_AILow);
      Controller_DW.HILInitialize_AIMinimums[3] =
        (Controller_P.HILInitialize_AILow);
      Controller_DW.HILInitialize_AIMaximums[0] =
        Controller_P.HILInitialize_AIHigh;
      Controller_DW.HILInitialize_AIMaximums[1] =
        Controller_P.HILInitialize_AIHigh;
      Controller_DW.HILInitialize_AIMaximums[2] =
        Controller_P.HILInitialize_AIHigh;
      Controller_DW.HILInitialize_AIMaximums[3] =
        Controller_P.HILInitialize_AIHigh;
      result = hil_set_analog_input_ranges(Controller_DW.HILInitialize_Card,
        Controller_P.HILInitialize_AIChannels, 4U,
        &Controller_DW.HILInitialize_AIMinimums[0],
        &Controller_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Controller_M, _rt_error_message);
        return;
      }
    }

    if ((Controller_P.HILInitialize_AOPStart && !is_switching) ||
        (Controller_P.HILInitialize_AOPEnter && is_switching)) {
      Controller_DW.HILInitialize_AOMinimums[0] =
        (Controller_P.HILInitialize_AOLow);
      Controller_DW.HILInitialize_AOMinimums[1] =
        (Controller_P.HILInitialize_AOLow);
      Controller_DW.HILInitialize_AOMinimums[2] =
        (Controller_P.HILInitialize_AOLow);
      Controller_DW.HILInitialize_AOMinimums[3] =
        (Controller_P.HILInitialize_AOLow);
      Controller_DW.HILInitialize_AOMaximums[0] =
        Controller_P.HILInitialize_AOHigh;
      Controller_DW.HILInitialize_AOMaximums[1] =
        Controller_P.HILInitialize_AOHigh;
      Controller_DW.HILInitialize_AOMaximums[2] =
        Controller_P.HILInitialize_AOHigh;
      Controller_DW.HILInitialize_AOMaximums[3] =
        Controller_P.HILInitialize_AOHigh;
      result = hil_set_analog_output_ranges(Controller_DW.HILInitialize_Card,
        Controller_P.HILInitialize_AOChannels, 4U,
        &Controller_DW.HILInitialize_AOMinimums[0],
        &Controller_DW.HILInitialize_AOMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Controller_M, _rt_error_message);
        return;
      }
    }

    if ((Controller_P.HILInitialize_AOStart && !is_switching) ||
        (Controller_P.HILInitialize_AOEnter && is_switching)) {
      Controller_DW.HILInitialize_AOVoltages[0] =
        Controller_P.HILInitialize_AOInitial;
      Controller_DW.HILInitialize_AOVoltages[1] =
        Controller_P.HILInitialize_AOInitial;
      Controller_DW.HILInitialize_AOVoltages[2] =
        Controller_P.HILInitialize_AOInitial;
      Controller_DW.HILInitialize_AOVoltages[3] =
        Controller_P.HILInitialize_AOInitial;
      result = hil_write_analog(Controller_DW.HILInitialize_Card,
        Controller_P.HILInitialize_AOChannels, 4U,
        &Controller_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Controller_M, _rt_error_message);
        return;
      }
    }

    if (Controller_P.HILInitialize_AOReset) {
      Controller_DW.HILInitialize_AOVoltages[0] =
        Controller_P.HILInitialize_AOWatchdog;
      Controller_DW.HILInitialize_AOVoltages[1] =
        Controller_P.HILInitialize_AOWatchdog;
      Controller_DW.HILInitialize_AOVoltages[2] =
        Controller_P.HILInitialize_AOWatchdog;
      Controller_DW.HILInitialize_AOVoltages[3] =
        Controller_P.HILInitialize_AOWatchdog;
      result = hil_watchdog_set_analog_expiration_state
        (Controller_DW.HILInitialize_Card, Controller_P.HILInitialize_AOChannels,
         4U, &Controller_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Controller_M, _rt_error_message);
        return;
      }
    }

    if ((Controller_P.HILInitialize_EIPStart && !is_switching) ||
        (Controller_P.HILInitialize_EIPEnter && is_switching)) {
      Controller_DW.HILInitialize_QuadratureModes[0] =
        Controller_P.HILInitialize_EIQuadrature;
      Controller_DW.HILInitialize_QuadratureModes[1] =
        Controller_P.HILInitialize_EIQuadrature;
      Controller_DW.HILInitialize_QuadratureModes[2] =
        Controller_P.HILInitialize_EIQuadrature;
      Controller_DW.HILInitialize_QuadratureModes[3] =
        Controller_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode(Controller_DW.HILInitialize_Card,
        Controller_P.HILInitialize_EIChannels, 4U, (t_encoder_quadrature_mode *)
        &Controller_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Controller_M, _rt_error_message);
        return;
      }

      Controller_DW.HILInitialize_FilterFrequency[0] =
        Controller_P.HILInitialize_EIFrequency;
      Controller_DW.HILInitialize_FilterFrequency[1] =
        Controller_P.HILInitialize_EIFrequency;
      Controller_DW.HILInitialize_FilterFrequency[2] =
        Controller_P.HILInitialize_EIFrequency;
      Controller_DW.HILInitialize_FilterFrequency[3] =
        Controller_P.HILInitialize_EIFrequency;
      result = hil_set_encoder_filter_frequency(Controller_DW.HILInitialize_Card,
        Controller_P.HILInitialize_EIChannels, 4U,
        &Controller_DW.HILInitialize_FilterFrequency[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Controller_M, _rt_error_message);
        return;
      }
    }

    if ((Controller_P.HILInitialize_EIStart && !is_switching) ||
        (Controller_P.HILInitialize_EIEnter && is_switching)) {
      Controller_DW.HILInitialize_InitialEICounts[0] =
        Controller_P.HILInitialize_EIInitial;
      Controller_DW.HILInitialize_InitialEICounts[1] =
        Controller_P.HILInitialize_EIInitial;
      Controller_DW.HILInitialize_InitialEICounts[2] =
        Controller_P.HILInitialize_EIInitial;
      Controller_DW.HILInitialize_InitialEICounts[3] =
        Controller_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts(Controller_DW.HILInitialize_Card,
        Controller_P.HILInitialize_EIChannels, 4U,
        &Controller_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Controller_M, _rt_error_message);
        return;
      }
    }
  }

  {
    int32_T i;
    for (i = 0; i < 20; i++) {
      /* InitializeConditions for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn' */
      Controller_DW.DiscreteTransferFcn_states[i] =
        Controller_P.DiscreteTransferFcn_InitialStat;

      /* InitializeConditions for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn2' */
      Controller_DW.DiscreteTransferFcn2_states[i] =
        Controller_P.DiscreteTransferFcn2_InitialSta;

      /* InitializeConditions for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn3' */
      Controller_DW.DiscreteTransferFcn3_states[i] =
        Controller_P.DiscreteTransferFcn3_InitialSta;

      /* InitializeConditions for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn4' */
      Controller_DW.DiscreteTransferFcn4_states[i] =
        Controller_P.DiscreteTransferFcn4_InitialSta;
    }
  }
}

/* Model terminate function */
void Controller_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: Controller/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_analog_outputs = 0;
    hil_task_stop_all(Controller_DW.HILInitialize_Card);
    hil_monitor_stop_all(Controller_DW.HILInitialize_Card);
    is_switching = false;
    if ((Controller_P.HILInitialize_AOTerminate && !is_switching) ||
        (Controller_P.HILInitialize_AOExit && is_switching)) {
      Controller_DW.HILInitialize_AOVoltages[0] =
        Controller_P.HILInitialize_AOFinal;
      Controller_DW.HILInitialize_AOVoltages[1] =
        Controller_P.HILInitialize_AOFinal;
      Controller_DW.HILInitialize_AOVoltages[2] =
        Controller_P.HILInitialize_AOFinal;
      Controller_DW.HILInitialize_AOVoltages[3] =
        Controller_P.HILInitialize_AOFinal;
      num_final_analog_outputs = 4U;
    } else {
      num_final_analog_outputs = 0;
    }

    if (num_final_analog_outputs > 0) {
      result = hil_write_analog(Controller_DW.HILInitialize_Card,
        Controller_P.HILInitialize_AOChannels, num_final_analog_outputs,
        &Controller_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Controller_M, _rt_error_message);
      }
    }

    hil_task_delete_all(Controller_DW.HILInitialize_Card);
    hil_monitor_delete_all(Controller_DW.HILInitialize_Card);
    hil_close(Controller_DW.HILInitialize_Card);
    Controller_DW.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  Controller_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  Controller_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  Controller_initialize();
}

void MdlTerminate(void)
{
  Controller_terminate();
}

/* Registration function */
RT_MODEL_Controller_T *Controller(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Controller_M, 0,
                sizeof(RT_MODEL_Controller_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Controller_M->solverInfo,
                          &Controller_M->Timing.simTimeStep);
    rtsiSetTPtr(&Controller_M->solverInfo, &rtmGetTPtr(Controller_M));
    rtsiSetStepSizePtr(&Controller_M->solverInfo,
                       &Controller_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Controller_M->solverInfo, (&rtmGetErrorStatus
      (Controller_M)));
    rtsiSetRTModelPtr(&Controller_M->solverInfo, Controller_M);
  }

  rtsiSetSimTimeStep(&Controller_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Controller_M->solverInfo,"FixedStepDiscrete");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Controller_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "Controller_M points to
       static memory which is guaranteed to be non-NULL" */
    Controller_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Controller_M->Timing.sampleTimes = (&Controller_M->Timing.sampleTimesArray[0]);
    Controller_M->Timing.offsetTimes = (&Controller_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Controller_M->Timing.sampleTimes[0] = (0.0);
    Controller_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    Controller_M->Timing.offsetTimes[0] = (0.0);
    Controller_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(Controller_M, &Controller_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Controller_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    Controller_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Controller_M, -1);
  Controller_M->Timing.stepSize0 = 0.001;
  Controller_M->Timing.stepSize1 = 0.001;

  /* External mode info */
  Controller_M->Sizes.checksums[0] = (2641290014U);
  Controller_M->Sizes.checksums[1] = (1010923709U);
  Controller_M->Sizes.checksums[2] = (1699999240U);
  Controller_M->Sizes.checksums[3] = (3714804386U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    Controller_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Controller_M->extModeInfo,
      &Controller_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Controller_M->extModeInfo, Controller_M->Sizes.checksums);
    rteiSetTPtr(Controller_M->extModeInfo, rtmGetTPtr(Controller_M));
  }

  Controller_M->solverInfoPtr = (&Controller_M->solverInfo);
  Controller_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&Controller_M->solverInfo, 0.001);
  rtsiSetSolverMode(&Controller_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  Controller_M->blockIO = ((void *) &Controller_B);
  (void) memset(((void *) &Controller_B), 0,
                sizeof(B_Controller_T));

  /* parameters */
  Controller_M->defaultParam = ((real_T *)&Controller_P);

  /* states (dwork) */
  Controller_M->dwork = ((void *) &Controller_DW);
  (void) memset((void *)&Controller_DW, 0,
                sizeof(DW_Controller_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Controller_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 20;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  Controller_M->Sizes.numContStates = (0);/* Number of continuous states */
  Controller_M->Sizes.numY = (0);      /* Number of model outputs */
  Controller_M->Sizes.numU = (0);      /* Number of model inputs */
  Controller_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Controller_M->Sizes.numSampTimes = (2);/* Number of sample times */
  Controller_M->Sizes.numBlocks = (23);/* Number of blocks */
  Controller_M->Sizes.numBlockIO = (5);/* Number of block outputs */
  Controller_M->Sizes.numBlockPrms = (258);/* Sum of parameter "widths" */
  return Controller_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
