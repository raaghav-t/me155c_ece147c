/*
 * Copy_of_Controller.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Copy_of_Controller".
 *
 * Model version              : 1.17
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Thu May 29 18:24:28 2025
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Copy_of_Controller.h"
#include "rtwtypes.h"
#include <emmintrin.h>
#include "Copy_of_Controller_private.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "Copy_of_Controller_dt.h"

/* Named constants for MATLAB Function: '<S51>/SqrtUsedFcn' */
#define Copy_of_Controller_CALL_EVENT  (-1)

/* Block signals (default storage) */
B_Copy_of_Controller_T Copy_of_Controller_B;

/* Block states (default storage) */
DW_Copy_of_Controller_T Copy_of_Controller_DW;

/* Real-time model */
static RT_MODEL_Copy_of_Controller_T Copy_of_Controller_M_;
RT_MODEL_Copy_of_Controller_T *const Copy_of_Controller_M =
  &Copy_of_Controller_M_;

/* Model output function */
void Copy_of_Controller_output(void)
{
  real_T tmp[2];
  real_T rtb_cartpos;
  real_T tmp_0;
  real_T tmp_1;
  int32_T i;
  int32_T i_0;

  /* Reset subsysRan breadcrumbs */
  srClearBC(Copy_of_Controller_DW.MeasurementUpdate_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Copy_of_Controller_DW.EnabledSubsystem_SubsysRanBC);

  /* S-Function (hil_read_encoder_block): '<Root>/cart angle' */

  /* S-Function Block: Copy_of_Controller/cart angle (hil_read_encoder_block) */
  {
    t_error result = hil_read_encoder(Copy_of_Controller_DW.HILInitialize_Card,
      &Copy_of_Controller_P.cartangle_channels, 1,
      &Copy_of_Controller_DW.cartangle_Buffer);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Copy_of_Controller_M, _rt_error_message);
    } else {
      rtb_cartpos = Copy_of_Controller_DW.cartangle_Buffer;
    }
  }

  /* Gain: '<Root>/Gain' */
  Copy_of_Controller_B.raagang = Copy_of_Controller_P.Gain_Gain * rtb_cartpos;

  /* S-Function (hil_read_encoder_block): '<Root>/cart pos' */

  /* S-Function Block: Copy_of_Controller/cart pos (hil_read_encoder_block) */
  {
    t_error result = hil_read_encoder(Copy_of_Controller_DW.HILInitialize_Card,
      &Copy_of_Controller_P.cartpos_channels, 1,
      &Copy_of_Controller_DW.cartpos_Buffer);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Copy_of_Controller_M, _rt_error_message);
    } else {
      rtb_cartpos = Copy_of_Controller_DW.cartpos_Buffer;
    }
  }

  /* Gain: '<Root>/Gain2' */
  Copy_of_Controller_B.raagpos = Copy_of_Controller_P.Gain2_Gain * rtb_cartpos;

  /* SignalConversion generated from: '<Root>/To Workspace' */
  Copy_of_Controller_B.TmpSignalConversionAtToWorkspac[0] =
    Copy_of_Controller_B.raagang;
  Copy_of_Controller_B.TmpSignalConversionAtToWorkspac[1] =
    Copy_of_Controller_B.raagpos;

  /* Delay: '<S1>/MemoryX' incorporates:
   *  Constant: '<S1>/X0'
   */
  if (Copy_of_Controller_DW.icLoad) {
    for (i = 0; i < 6; i++) {
      Copy_of_Controller_DW.MemoryX_DSTATE[i] = Copy_of_Controller_P.X0_Value[i];
    }
  }

  /* Outputs for Enabled SubSystem: '<S29>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S55>/Enable'
   */
  /* Constant: '<S1>/Enable' */
  if (Copy_of_Controller_P.Enable_Value) {
    Copy_of_Controller_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S55>/Add1' incorporates:
     *  Constant: '<S1>/C'
     *  Delay: '<S1>/MemoryX'
     *  Product: '<S55>/Product'
     *  Reshape: '<S1>/Reshapey'
     */
    for (i = 0; i < 2; i++) {
      tmp_0 = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        tmp_0 += Copy_of_Controller_P.C_Value[(i_0 << 1) + i] *
          Copy_of_Controller_DW.MemoryX_DSTATE[i_0];
      }

      tmp[i] = Copy_of_Controller_B.TmpSignalConversionAtToWorkspac[i] - tmp_0;
    }

    /* End of Sum: '<S55>/Add1' */

    /* Product: '<S55>/Product2' incorporates:
     *  Constant: '<S2>/KalmanGainM'
     */
    tmp_0 = tmp[1];
    tmp_1 = tmp[0];
    for (i = 0; i <= 4; i += 2) {
      /* Product: '<S55>/Product2' incorporates:
       *  Constant: '<S2>/KalmanGainM'
       */
      _mm_storeu_pd(&Copy_of_Controller_B.Product2[i], _mm_add_pd(_mm_mul_pd
        (_mm_loadu_pd(&Copy_of_Controller_P.KalmanGainM_Value[i + 6]),
         _mm_set1_pd(tmp_0)), _mm_mul_pd(_mm_loadu_pd
        (&Copy_of_Controller_P.KalmanGainM_Value[i]), _mm_set1_pd(tmp_1))));
    }

    srUpdateBC(Copy_of_Controller_DW.EnabledSubsystem_SubsysRanBC);
  } else if (Copy_of_Controller_DW.EnabledSubsystem_MODE) {
    for (i = 0; i < 6; i++) {
      /* Disable for Product: '<S55>/Product2' incorporates:
       *  Outport: '<S55>/deltax'
       */
      Copy_of_Controller_B.Product2[i] = Copy_of_Controller_P.deltax_Y0;
    }

    Copy_of_Controller_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S29>/Enabled Subsystem' */

  /* Gain: '<Root>/Gain3' incorporates:
   *  Delay: '<S1>/MemoryX'
   *  Sum: '<S29>/Add'
   */
  tmp_0 = 0.0;
  for (i = 0; i < 6; i++) {
    tmp_0 += (Copy_of_Controller_B.Product2[i] +
              Copy_of_Controller_DW.MemoryX_DSTATE[i]) *
      -Copy_of_Controller_P.K[i];
  }

  /* Gain: '<Root>/Gain3' */
  Copy_of_Controller_B.Gain3 = tmp_0;

  /* Saturate: '<Root>/Saturation' */
  if (Copy_of_Controller_B.Gain3 > Copy_of_Controller_P.Saturation_UpperSat) {
    rtb_cartpos = Copy_of_Controller_P.Saturation_UpperSat;
  } else if (Copy_of_Controller_B.Gain3 <
             Copy_of_Controller_P.Saturation_LowerSat) {
    rtb_cartpos = Copy_of_Controller_P.Saturation_LowerSat;
  } else {
    rtb_cartpos = Copy_of_Controller_B.Gain3;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* S-Function (hil_write_analog_block): '<Root>/HIL Write Analog' */

  /* S-Function Block: Copy_of_Controller/HIL Write Analog (hil_write_analog_block) */
  {
    t_error result;
    result = hil_write_analog(Copy_of_Controller_DW.HILInitialize_Card,
      &Copy_of_Controller_P.HILWriteAnalog_channels, 1, &rtb_cartpos);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Copy_of_Controller_M, _rt_error_message);
    }
  }

  /* MATLAB Function: '<S51>/SqrtUsedFcn' */
  Copy_of_Controller_DW.sfEvent = Copy_of_Controller_CALL_EVENT;

  /* Outputs for Enabled SubSystem: '<S22>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S53>/Enable'
   */
  /* Constant: '<S1>/Enable' */
  if (Copy_of_Controller_P.Enable_Value) {
    Copy_of_Controller_DW.MeasurementUpdate_MODE = true;
    for (i = 0; i < 2; i++) {
      /* Product: '<S53>/C[k]*xhat[k|k-1]' incorporates:
       *  Constant: '<S1>/C'
       *  Delay: '<S1>/MemoryX'
       */
      tmp_0 = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        tmp_0 += Copy_of_Controller_P.C_Value[(i_0 << 1) + i] *
          Copy_of_Controller_DW.MemoryX_DSTATE[i_0];
      }

      /* Sum: '<S53>/Sum' incorporates:
       *  Constant: '<S1>/D'
       *  Product: '<S53>/C[k]*xhat[k|k-1]'
       *  Product: '<S53>/D[k]*u[k]'
       *  Reshape: '<S1>/Reshapey'
       *  Sum: '<S53>/Add1'
       */
      tmp[i] = Copy_of_Controller_B.TmpSignalConversionAtToWorkspac[i] -
        (Copy_of_Controller_P.D_Value[i] * rtb_cartpos + tmp_0);
    }

    /* Product: '<S53>/Product3' incorporates:
     *  Constant: '<S2>/KalmanGainL'
     */
    tmp_0 = tmp[1];
    tmp_1 = tmp[0];
    for (i = 0; i <= 4; i += 2) {
      /* Product: '<S53>/Product3' incorporates:
       *  Constant: '<S2>/KalmanGainL'
       */
      _mm_storeu_pd(&Copy_of_Controller_B.Product3[i], _mm_add_pd(_mm_mul_pd
        (_mm_loadu_pd(&Copy_of_Controller_P.KalmanGainL_Value[i + 6]),
         _mm_set1_pd(tmp_0)), _mm_mul_pd(_mm_loadu_pd
        (&Copy_of_Controller_P.KalmanGainL_Value[i]), _mm_set1_pd(tmp_1))));
    }

    srUpdateBC(Copy_of_Controller_DW.MeasurementUpdate_SubsysRanBC);
  } else if (Copy_of_Controller_DW.MeasurementUpdate_MODE) {
    for (i = 0; i < 6; i++) {
      /* Disable for Product: '<S53>/Product3' incorporates:
       *  Outport: '<S53>/L*(y[k]-yhat[k|k-1])'
       */
      Copy_of_Controller_B.Product3[i] = Copy_of_Controller_P.Lykyhatkk1_Y0;
    }

    Copy_of_Controller_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S22>/MeasurementUpdate' */
  for (i = 0; i < 6; i++) {
    /* Product: '<S22>/A[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S1>/A'
     *  Delay: '<S1>/MemoryX'
     */
    tmp_0 = 0.0;
    for (i_0 = 0; i_0 < 6; i_0++) {
      tmp_0 += Copy_of_Controller_P.A_Value[6 * i_0 + i] *
        Copy_of_Controller_DW.MemoryX_DSTATE[i_0];
    }

    /* Sum: '<S22>/Add' incorporates:
     *  Constant: '<S1>/B'
     *  Product: '<S22>/A[k]*xhat[k|k-1]'
     *  Product: '<S22>/B[k]*u[k]'
     *  Product: '<S53>/Product3'
     */
    Copy_of_Controller_B.Add[i] = (Copy_of_Controller_P.B_Value[i] * rtb_cartpos
      + tmp_0) + Copy_of_Controller_B.Product3[i];
  }

  /* Step: '<Root>/Step' */
  if (Copy_of_Controller_M->Timing.t[0] < Copy_of_Controller_P.Step_Time) {
    /* Step: '<Root>/Step' */
    Copy_of_Controller_B.Step = Copy_of_Controller_P.Step_Y0;
  } else {
    /* Step: '<Root>/Step' */
    Copy_of_Controller_B.Step = Copy_of_Controller_P.Step_YFinal;
  }

  /* End of Step: '<Root>/Step' */
}

/* Model update function */
void Copy_of_Controller_update(void)
{
  int32_T i;

  /* Update for Delay: '<S1>/MemoryX' */
  Copy_of_Controller_DW.icLoad = false;
  for (i = 0; i < 6; i++) {
    Copy_of_Controller_DW.MemoryX_DSTATE[i] = Copy_of_Controller_B.Add[i];
  }

  /* End of Update for Delay: '<S1>/MemoryX' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Copy_of_Controller_M->Timing.clockTick0)) {
    ++Copy_of_Controller_M->Timing.clockTickH0;
  }

  Copy_of_Controller_M->Timing.t[0] = Copy_of_Controller_M->Timing.clockTick0 *
    Copy_of_Controller_M->Timing.stepSize0 +
    Copy_of_Controller_M->Timing.clockTickH0 *
    Copy_of_Controller_M->Timing.stepSize0 * 4294967296.0;

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
    if (!(++Copy_of_Controller_M->Timing.clockTick1)) {
      ++Copy_of_Controller_M->Timing.clockTickH1;
    }

    Copy_of_Controller_M->Timing.t[1] = Copy_of_Controller_M->Timing.clockTick1 *
      Copy_of_Controller_M->Timing.stepSize1 +
      Copy_of_Controller_M->Timing.clockTickH1 *
      Copy_of_Controller_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void Copy_of_Controller_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: Copy_of_Controller/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("q4", "0", &Copy_of_Controller_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Copy_of_Controller_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options
      (Copy_of_Controller_DW.HILInitialize_Card, " ", 2);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Copy_of_Controller_M, _rt_error_message);
      return;
    }

    if ((Copy_of_Controller_P.HILInitialize_CKPStart && !is_switching) ||
        (Copy_of_Controller_P.HILInitialize_CKPEnter && is_switching)) {
      result = hil_set_clock_mode(Copy_of_Controller_DW.HILInitialize_Card,
        (t_clock *) Copy_of_Controller_P.HILInitialize_CKChannels, 2U,
        (t_clock_mode *) Copy_of_Controller_P.HILInitialize_CKModes);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Copy_of_Controller_M, _rt_error_message);
        return;
      }
    }

    result = hil_watchdog_clear(Copy_of_Controller_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Copy_of_Controller_M, _rt_error_message);
      return;
    }

    if ((Copy_of_Controller_P.HILInitialize_AIPStart && !is_switching) ||
        (Copy_of_Controller_P.HILInitialize_AIPEnter && is_switching)) {
      Copy_of_Controller_DW.HILInitialize_AIMinimums[0] =
        (Copy_of_Controller_P.HILInitialize_AILow);
      Copy_of_Controller_DW.HILInitialize_AIMinimums[1] =
        (Copy_of_Controller_P.HILInitialize_AILow);
      Copy_of_Controller_DW.HILInitialize_AIMinimums[2] =
        (Copy_of_Controller_P.HILInitialize_AILow);
      Copy_of_Controller_DW.HILInitialize_AIMinimums[3] =
        (Copy_of_Controller_P.HILInitialize_AILow);
      Copy_of_Controller_DW.HILInitialize_AIMaximums[0] =
        Copy_of_Controller_P.HILInitialize_AIHigh;
      Copy_of_Controller_DW.HILInitialize_AIMaximums[1] =
        Copy_of_Controller_P.HILInitialize_AIHigh;
      Copy_of_Controller_DW.HILInitialize_AIMaximums[2] =
        Copy_of_Controller_P.HILInitialize_AIHigh;
      Copy_of_Controller_DW.HILInitialize_AIMaximums[3] =
        Copy_of_Controller_P.HILInitialize_AIHigh;
      result = hil_set_analog_input_ranges
        (Copy_of_Controller_DW.HILInitialize_Card,
         Copy_of_Controller_P.HILInitialize_AIChannels, 4U,
         &Copy_of_Controller_DW.HILInitialize_AIMinimums[0],
         &Copy_of_Controller_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Copy_of_Controller_M, _rt_error_message);
        return;
      }
    }

    if ((Copy_of_Controller_P.HILInitialize_AOPStart && !is_switching) ||
        (Copy_of_Controller_P.HILInitialize_AOPEnter && is_switching)) {
      Copy_of_Controller_DW.HILInitialize_AOMinimums[0] =
        (Copy_of_Controller_P.HILInitialize_AOLow);
      Copy_of_Controller_DW.HILInitialize_AOMinimums[1] =
        (Copy_of_Controller_P.HILInitialize_AOLow);
      Copy_of_Controller_DW.HILInitialize_AOMinimums[2] =
        (Copy_of_Controller_P.HILInitialize_AOLow);
      Copy_of_Controller_DW.HILInitialize_AOMinimums[3] =
        (Copy_of_Controller_P.HILInitialize_AOLow);
      Copy_of_Controller_DW.HILInitialize_AOMaximums[0] =
        Copy_of_Controller_P.HILInitialize_AOHigh;
      Copy_of_Controller_DW.HILInitialize_AOMaximums[1] =
        Copy_of_Controller_P.HILInitialize_AOHigh;
      Copy_of_Controller_DW.HILInitialize_AOMaximums[2] =
        Copy_of_Controller_P.HILInitialize_AOHigh;
      Copy_of_Controller_DW.HILInitialize_AOMaximums[3] =
        Copy_of_Controller_P.HILInitialize_AOHigh;
      result = hil_set_analog_output_ranges
        (Copy_of_Controller_DW.HILInitialize_Card,
         Copy_of_Controller_P.HILInitialize_AOChannels, 4U,
         &Copy_of_Controller_DW.HILInitialize_AOMinimums[0],
         &Copy_of_Controller_DW.HILInitialize_AOMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Copy_of_Controller_M, _rt_error_message);
        return;
      }
    }

    if ((Copy_of_Controller_P.HILInitialize_AOStart && !is_switching) ||
        (Copy_of_Controller_P.HILInitialize_AOEnter && is_switching)) {
      Copy_of_Controller_DW.HILInitialize_AOVoltages[0] =
        Copy_of_Controller_P.HILInitialize_AOInitial;
      Copy_of_Controller_DW.HILInitialize_AOVoltages[1] =
        Copy_of_Controller_P.HILInitialize_AOInitial;
      Copy_of_Controller_DW.HILInitialize_AOVoltages[2] =
        Copy_of_Controller_P.HILInitialize_AOInitial;
      Copy_of_Controller_DW.HILInitialize_AOVoltages[3] =
        Copy_of_Controller_P.HILInitialize_AOInitial;
      result = hil_write_analog(Copy_of_Controller_DW.HILInitialize_Card,
        Copy_of_Controller_P.HILInitialize_AOChannels, 4U,
        &Copy_of_Controller_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Copy_of_Controller_M, _rt_error_message);
        return;
      }
    }

    if (Copy_of_Controller_P.HILInitialize_AOReset) {
      Copy_of_Controller_DW.HILInitialize_AOVoltages[0] =
        Copy_of_Controller_P.HILInitialize_AOWatchdog;
      Copy_of_Controller_DW.HILInitialize_AOVoltages[1] =
        Copy_of_Controller_P.HILInitialize_AOWatchdog;
      Copy_of_Controller_DW.HILInitialize_AOVoltages[2] =
        Copy_of_Controller_P.HILInitialize_AOWatchdog;
      Copy_of_Controller_DW.HILInitialize_AOVoltages[3] =
        Copy_of_Controller_P.HILInitialize_AOWatchdog;
      result = hil_watchdog_set_analog_expiration_state
        (Copy_of_Controller_DW.HILInitialize_Card,
         Copy_of_Controller_P.HILInitialize_AOChannels, 4U,
         &Copy_of_Controller_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Copy_of_Controller_M, _rt_error_message);
        return;
      }
    }

    if ((Copy_of_Controller_P.HILInitialize_EIPStart && !is_switching) ||
        (Copy_of_Controller_P.HILInitialize_EIPEnter && is_switching)) {
      Copy_of_Controller_DW.HILInitialize_QuadratureModes[0] =
        Copy_of_Controller_P.HILInitialize_EIQuadrature;
      Copy_of_Controller_DW.HILInitialize_QuadratureModes[1] =
        Copy_of_Controller_P.HILInitialize_EIQuadrature;
      Copy_of_Controller_DW.HILInitialize_QuadratureModes[2] =
        Copy_of_Controller_P.HILInitialize_EIQuadrature;
      Copy_of_Controller_DW.HILInitialize_QuadratureModes[3] =
        Copy_of_Controller_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode
        (Copy_of_Controller_DW.HILInitialize_Card,
         Copy_of_Controller_P.HILInitialize_EIChannels, 4U,
         (t_encoder_quadrature_mode *)
         &Copy_of_Controller_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Copy_of_Controller_M, _rt_error_message);
        return;
      }

      Copy_of_Controller_DW.HILInitialize_FilterFrequency[0] =
        Copy_of_Controller_P.HILInitialize_EIFrequency;
      Copy_of_Controller_DW.HILInitialize_FilterFrequency[1] =
        Copy_of_Controller_P.HILInitialize_EIFrequency;
      Copy_of_Controller_DW.HILInitialize_FilterFrequency[2] =
        Copy_of_Controller_P.HILInitialize_EIFrequency;
      Copy_of_Controller_DW.HILInitialize_FilterFrequency[3] =
        Copy_of_Controller_P.HILInitialize_EIFrequency;
      result = hil_set_encoder_filter_frequency
        (Copy_of_Controller_DW.HILInitialize_Card,
         Copy_of_Controller_P.HILInitialize_EIChannels, 4U,
         &Copy_of_Controller_DW.HILInitialize_FilterFrequency[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Copy_of_Controller_M, _rt_error_message);
        return;
      }
    }

    if ((Copy_of_Controller_P.HILInitialize_EIStart && !is_switching) ||
        (Copy_of_Controller_P.HILInitialize_EIEnter && is_switching)) {
      Copy_of_Controller_DW.HILInitialize_InitialEICounts[0] =
        Copy_of_Controller_P.HILInitialize_EIInitial;
      Copy_of_Controller_DW.HILInitialize_InitialEICounts[1] =
        Copy_of_Controller_P.HILInitialize_EIInitial;
      Copy_of_Controller_DW.HILInitialize_InitialEICounts[2] =
        Copy_of_Controller_P.HILInitialize_EIInitial;
      Copy_of_Controller_DW.HILInitialize_InitialEICounts[3] =
        Copy_of_Controller_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts(Copy_of_Controller_DW.HILInitialize_Card,
        Copy_of_Controller_P.HILInitialize_EIChannels, 4U,
        &Copy_of_Controller_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Copy_of_Controller_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for Enabled SubSystem: '<S29>/Enabled Subsystem' */
  Copy_of_Controller_DW.EnabledSubsystem_MODE = false;

  /* End of Start for SubSystem: '<S29>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S22>/MeasurementUpdate' */
  Copy_of_Controller_DW.MeasurementUpdate_MODE = false;

  /* End of Start for SubSystem: '<S22>/MeasurementUpdate' */
  {
    int32_T i;

    /* InitializeConditions for Delay: '<S1>/MemoryX' */
    Copy_of_Controller_DW.icLoad = true;

    /* SystemInitialize for MATLAB Function: '<S51>/SqrtUsedFcn' */
    Copy_of_Controller_DW.sfEvent = Copy_of_Controller_CALL_EVENT;
    Copy_of_Controller_DW.is_active_c7_ctrlSharedLib = 0U;

    /* SystemInitialize for Enabled SubSystem: '<S22>/MeasurementUpdate' */
    /* SystemInitialize for Enabled SubSystem: '<S29>/Enabled Subsystem' */
    for (i = 0; i < 6; i++) {
      /* SystemInitialize for Product: '<S55>/Product2' incorporates:
       *  Outport: '<S55>/deltax'
       */
      Copy_of_Controller_B.Product2[i] = Copy_of_Controller_P.deltax_Y0;

      /* SystemInitialize for Product: '<S53>/Product3' incorporates:
       *  Outport: '<S53>/L*(y[k]-yhat[k|k-1])'
       */
      Copy_of_Controller_B.Product3[i] = Copy_of_Controller_P.Lykyhatkk1_Y0;
    }

    /* End of SystemInitialize for SubSystem: '<S29>/Enabled Subsystem' */
    /* End of SystemInitialize for SubSystem: '<S22>/MeasurementUpdate' */
  }
}

/* Model terminate function */
void Copy_of_Controller_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: Copy_of_Controller/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_analog_outputs = 0;
    hil_task_stop_all(Copy_of_Controller_DW.HILInitialize_Card);
    hil_monitor_stop_all(Copy_of_Controller_DW.HILInitialize_Card);
    is_switching = false;
    if ((Copy_of_Controller_P.HILInitialize_AOTerminate && !is_switching) ||
        (Copy_of_Controller_P.HILInitialize_AOExit && is_switching)) {
      Copy_of_Controller_DW.HILInitialize_AOVoltages[0] =
        Copy_of_Controller_P.HILInitialize_AOFinal;
      Copy_of_Controller_DW.HILInitialize_AOVoltages[1] =
        Copy_of_Controller_P.HILInitialize_AOFinal;
      Copy_of_Controller_DW.HILInitialize_AOVoltages[2] =
        Copy_of_Controller_P.HILInitialize_AOFinal;
      Copy_of_Controller_DW.HILInitialize_AOVoltages[3] =
        Copy_of_Controller_P.HILInitialize_AOFinal;
      num_final_analog_outputs = 4U;
    } else {
      num_final_analog_outputs = 0;
    }

    if (num_final_analog_outputs > 0) {
      result = hil_write_analog(Copy_of_Controller_DW.HILInitialize_Card,
        Copy_of_Controller_P.HILInitialize_AOChannels, num_final_analog_outputs,
        &Copy_of_Controller_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Copy_of_Controller_M, _rt_error_message);
      }
    }

    hil_task_delete_all(Copy_of_Controller_DW.HILInitialize_Card);
    hil_monitor_delete_all(Copy_of_Controller_DW.HILInitialize_Card);
    hil_close(Copy_of_Controller_DW.HILInitialize_Card);
    Copy_of_Controller_DW.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  Copy_of_Controller_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  Copy_of_Controller_update();
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
  Copy_of_Controller_initialize();
}

void MdlTerminate(void)
{
  Copy_of_Controller_terminate();
}

/* Registration function */
RT_MODEL_Copy_of_Controller_T *Copy_of_Controller(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Copy_of_Controller_M, 0,
                sizeof(RT_MODEL_Copy_of_Controller_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Copy_of_Controller_M->solverInfo,
                          &Copy_of_Controller_M->Timing.simTimeStep);
    rtsiSetTPtr(&Copy_of_Controller_M->solverInfo, &rtmGetTPtr
                (Copy_of_Controller_M));
    rtsiSetStepSizePtr(&Copy_of_Controller_M->solverInfo,
                       &Copy_of_Controller_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Copy_of_Controller_M->solverInfo, (&rtmGetErrorStatus
      (Copy_of_Controller_M)));
    rtsiSetRTModelPtr(&Copy_of_Controller_M->solverInfo, Copy_of_Controller_M);
  }

  rtsiSetSimTimeStep(&Copy_of_Controller_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Copy_of_Controller_M->solverInfo,"FixedStepDiscrete");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Copy_of_Controller_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "Copy_of_Controller_M points to
       static memory which is guaranteed to be non-NULL" */
    Copy_of_Controller_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Copy_of_Controller_M->Timing.sampleTimes =
      (&Copy_of_Controller_M->Timing.sampleTimesArray[0]);
    Copy_of_Controller_M->Timing.offsetTimes =
      (&Copy_of_Controller_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Copy_of_Controller_M->Timing.sampleTimes[0] = (0.0);
    Copy_of_Controller_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    Copy_of_Controller_M->Timing.offsetTimes[0] = (0.0);
    Copy_of_Controller_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(Copy_of_Controller_M, &Copy_of_Controller_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Copy_of_Controller_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    Copy_of_Controller_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Copy_of_Controller_M, -1);
  Copy_of_Controller_M->Timing.stepSize0 = 0.001;
  Copy_of_Controller_M->Timing.stepSize1 = 0.001;

  /* External mode info */
  Copy_of_Controller_M->Sizes.checksums[0] = (2253228867U);
  Copy_of_Controller_M->Sizes.checksums[1] = (135319135U);
  Copy_of_Controller_M->Sizes.checksums[2] = (2134958309U);
  Copy_of_Controller_M->Sizes.checksums[3] = (3264311974U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    Copy_of_Controller_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = (sysRanDType *)
      &Copy_of_Controller_DW.MeasurementUpdate_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &Copy_of_Controller_DW.EnabledSubsystem_SubsysRanBC;
    rteiSetModelMappingInfoPtr(Copy_of_Controller_M->extModeInfo,
      &Copy_of_Controller_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Copy_of_Controller_M->extModeInfo,
                        Copy_of_Controller_M->Sizes.checksums);
    rteiSetTPtr(Copy_of_Controller_M->extModeInfo, rtmGetTPtr
                (Copy_of_Controller_M));
  }

  Copy_of_Controller_M->solverInfoPtr = (&Copy_of_Controller_M->solverInfo);
  Copy_of_Controller_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&Copy_of_Controller_M->solverInfo, 0.001);
  rtsiSetSolverMode(&Copy_of_Controller_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  Copy_of_Controller_M->blockIO = ((void *) &Copy_of_Controller_B);
  (void) memset(((void *) &Copy_of_Controller_B), 0,
                sizeof(B_Copy_of_Controller_T));

  /* parameters */
  Copy_of_Controller_M->defaultParam = ((real_T *)&Copy_of_Controller_P);

  /* states (dwork) */
  Copy_of_Controller_M->dwork = ((void *) &Copy_of_Controller_DW);
  (void) memset((void *)&Copy_of_Controller_DW, 0,
                sizeof(DW_Copy_of_Controller_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Copy_of_Controller_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 20;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  Copy_of_Controller_M->Sizes.numContStates = (0);/* Number of continuous states */
  Copy_of_Controller_M->Sizes.numY = (0);/* Number of model outputs */
  Copy_of_Controller_M->Sizes.numU = (0);/* Number of model inputs */
  Copy_of_Controller_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Copy_of_Controller_M->Sizes.numSampTimes = (2);/* Number of sample times */
  Copy_of_Controller_M->Sizes.numBlocks = (45);/* Number of blocks */
  Copy_of_Controller_M->Sizes.numBlockIO = (9);/* Number of block outputs */
  Copy_of_Controller_M->Sizes.numBlockPrms = (215);/* Sum of parameter "widths" */
  return Copy_of_Controller_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
