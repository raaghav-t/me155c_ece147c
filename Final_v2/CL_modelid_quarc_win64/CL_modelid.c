/*
 * CL_modelid.c
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
#include "rtwtypes.h"
#include <emmintrin.h>
#include <math.h>
#include "CL_modelid_private.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "CL_modelid_dt.h"

/* Named constants for MATLAB Function: '<S51>/SqrtUsedFcn' */
#define CL_modelid_CALL_EVENT          (-1)

/* Block signals (default storage) */
B_CL_modelid_T CL_modelid_B;

/* Block states (default storage) */
DW_CL_modelid_T CL_modelid_DW;

/* Real-time model */
static RT_MODEL_CL_modelid_T CL_modelid_M_;
RT_MODEL_CL_modelid_T *const CL_modelid_M = &CL_modelid_M_;

/* Model output function */
void CL_modelid_output(void)
{
  real_T tmp[2];
  real_T lastSin_tmp;
  real_T rtb_Saturation;
  int32_T i;
  int32_T i_0;

  /* Reset subsysRan breadcrumbs */
  srClearBC(CL_modelid_DW.MeasurementUpdate_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(CL_modelid_DW.EnabledSubsystem_SubsysRanBC);

  /* S-Function (hil_read_encoder_block): '<Root>/cart angle' */

  /* S-Function Block: CL_modelid/cart angle (hil_read_encoder_block) */
  {
    t_error result = hil_read_encoder(CL_modelid_DW.HILInitialize_Card,
      &CL_modelid_P.cartangle_channels, 1, &CL_modelid_DW.cartangle_Buffer);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(CL_modelid_M, _rt_error_message);
    } else {
      rtb_Saturation = CL_modelid_DW.cartangle_Buffer;
    }
  }

  /* Gain: '<Root>/Gain' */
  CL_modelid_B.raagang = CL_modelid_P.Gain_Gain * rtb_Saturation;

  /* S-Function (hil_read_encoder_block): '<Root>/cart pos' */

  /* S-Function Block: CL_modelid/cart pos (hil_read_encoder_block) */
  {
    t_error result = hil_read_encoder(CL_modelid_DW.HILInitialize_Card,
      &CL_modelid_P.cartpos_channels, 1, &CL_modelid_DW.cartpos_Buffer);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(CL_modelid_M, _rt_error_message);
    } else {
      rtb_Saturation = CL_modelid_DW.cartpos_Buffer;
    }
  }

  /* Gain: '<Root>/Gain2' */
  CL_modelid_B.raagpos = CL_modelid_P.Gain2_Gain * rtb_Saturation;

  /* SignalConversion generated from: '<Root>/To Workspace' */
  CL_modelid_B.TmpSignalConversionAtToWorkspac[0] = CL_modelid_B.raagang;
  CL_modelid_B.TmpSignalConversionAtToWorkspac[1] = CL_modelid_B.raagpos;

  /* Delay: '<S1>/MemoryX' incorporates:
   *  Constant: '<S1>/X0'
   */
  if (CL_modelid_DW.icLoad) {
    for (i = 0; i < 6; i++) {
      CL_modelid_DW.MemoryX_DSTATE[i] = CL_modelid_P.X0_Value[i];
    }
  }

  /* Outputs for Enabled SubSystem: '<S29>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S55>/Enable'
   */
  /* Constant: '<S1>/Enable' */
  if (CL_modelid_P.Enable_Value) {
    CL_modelid_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S55>/Add1' incorporates:
     *  Constant: '<S1>/C'
     *  Delay: '<S1>/MemoryX'
     *  Product: '<S55>/Product'
     *  Reshape: '<S1>/Reshapey'
     */
    for (i = 0; i < 2; i++) {
      rtb_Saturation = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        rtb_Saturation += CL_modelid_P.C_Value[(i_0 << 1) + i] *
          CL_modelid_DW.MemoryX_DSTATE[i_0];
      }

      tmp[i] = CL_modelid_B.TmpSignalConversionAtToWorkspac[i] - rtb_Saturation;
    }

    /* End of Sum: '<S55>/Add1' */

    /* Product: '<S55>/Product2' incorporates:
     *  Constant: '<S2>/KalmanGainM'
     */
    rtb_Saturation = tmp[1];
    lastSin_tmp = tmp[0];
    for (i = 0; i <= 4; i += 2) {
      /* Product: '<S55>/Product2' incorporates:
       *  Constant: '<S2>/KalmanGainM'
       */
      _mm_storeu_pd(&CL_modelid_B.Product2[i], _mm_add_pd(_mm_mul_pd
        (_mm_loadu_pd(&CL_modelid_P.KalmanGainM_Value[i + 6]), _mm_set1_pd
         (rtb_Saturation)), _mm_mul_pd(_mm_loadu_pd
        (&CL_modelid_P.KalmanGainM_Value[i]), _mm_set1_pd(lastSin_tmp))));
    }

    srUpdateBC(CL_modelid_DW.EnabledSubsystem_SubsysRanBC);
  } else if (CL_modelid_DW.EnabledSubsystem_MODE) {
    for (i = 0; i < 6; i++) {
      /* Disable for Product: '<S55>/Product2' incorporates:
       *  Outport: '<S55>/deltax'
       */
      CL_modelid_B.Product2[i] = CL_modelid_P.deltax_Y0;
    }

    CL_modelid_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S29>/Enabled Subsystem' */

  /* Gain: '<Root>/Gain3' incorporates:
   *  Delay: '<S1>/MemoryX'
   *  Sum: '<S29>/Add'
   */
  rtb_Saturation = 0.0;
  for (i = 0; i < 6; i++) {
    rtb_Saturation += (CL_modelid_B.Product2[i] + CL_modelid_DW.MemoryX_DSTATE[i])
      * -CL_modelid_P.K[i];
  }

  /* Gain: '<Root>/Gain3' */
  CL_modelid_B.Gain3 = rtb_Saturation;

  /* Saturate: '<Root>/Saturation' */
  if (CL_modelid_B.Gain3 > CL_modelid_P.Saturation_UpperSat) {
    rtb_Saturation = CL_modelid_P.Saturation_UpperSat;
  } else if (CL_modelid_B.Gain3 < CL_modelid_P.Saturation_LowerSat) {
    rtb_Saturation = CL_modelid_P.Saturation_LowerSat;
  } else {
    rtb_Saturation = CL_modelid_B.Gain3;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* Sin: '<Root>/Sine Wave' */
  if (CL_modelid_DW.systemEnable != 0) {
    lastSin_tmp = CL_modelid_P.omega * CL_modelid_M->Timing.t[1];
    CL_modelid_DW.lastSin = sin(lastSin_tmp);
    CL_modelid_DW.lastCos = cos(lastSin_tmp);
    CL_modelid_DW.systemEnable = 0;
  }

  /* Sin: '<Root>/Sine Wave' */
  CL_modelid_B.SineWave = ((CL_modelid_DW.lastSin * CL_modelid_P.SineWave_PCos +
    CL_modelid_DW.lastCos * CL_modelid_P.SineWave_PSin) *
    CL_modelid_P.SineWave_HCos + (CL_modelid_DW.lastCos *
    CL_modelid_P.SineWave_PCos - CL_modelid_DW.lastSin *
    CL_modelid_P.SineWave_PSin) * CL_modelid_P.SineWave_Hsin) * CL_modelid_P.amp
    + CL_modelid_P.SineWave_Bias;

  /* Sum: '<Root>/Sum1' */
  CL_modelid_B.Sum1 = rtb_Saturation + CL_modelid_B.SineWave;

  /* S-Function (hil_write_analog_block): '<Root>/HIL Write Analog' */

  /* S-Function Block: CL_modelid/HIL Write Analog (hil_write_analog_block) */
  {
    t_error result;
    result = hil_write_analog(CL_modelid_DW.HILInitialize_Card,
      &CL_modelid_P.HILWriteAnalog_channels, 1, &CL_modelid_B.Sum1);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(CL_modelid_M, _rt_error_message);
    }
  }

  /* MATLAB Function: '<S51>/SqrtUsedFcn' */
  CL_modelid_DW.sfEvent = CL_modelid_CALL_EVENT;

  /* Outputs for Enabled SubSystem: '<S22>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S53>/Enable'
   */
  /* Constant: '<S1>/Enable' */
  if (CL_modelid_P.Enable_Value) {
    CL_modelid_DW.MeasurementUpdate_MODE = true;
    for (i = 0; i < 2; i++) {
      /* Product: '<S53>/C[k]*xhat[k|k-1]' incorporates:
       *  Constant: '<S1>/C'
       *  Delay: '<S1>/MemoryX'
       */
      rtb_Saturation = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        rtb_Saturation += CL_modelid_P.C_Value[(i_0 << 1) + i] *
          CL_modelid_DW.MemoryX_DSTATE[i_0];
      }

      /* Sum: '<S53>/Sum' incorporates:
       *  Constant: '<S1>/D'
       *  Product: '<S53>/C[k]*xhat[k|k-1]'
       *  Product: '<S53>/D[k]*u[k]'
       *  Reshape: '<S1>/Reshapey'
       *  Sum: '<S53>/Add1'
       */
      tmp[i] = CL_modelid_B.TmpSignalConversionAtToWorkspac[i] -
        (CL_modelid_P.D_Value[i] * CL_modelid_B.Sum1 + rtb_Saturation);
    }

    /* Product: '<S53>/Product3' incorporates:
     *  Constant: '<S2>/KalmanGainL'
     */
    rtb_Saturation = tmp[1];
    lastSin_tmp = tmp[0];
    for (i = 0; i <= 4; i += 2) {
      /* Product: '<S53>/Product3' incorporates:
       *  Constant: '<S2>/KalmanGainL'
       */
      _mm_storeu_pd(&CL_modelid_B.Product3[i], _mm_add_pd(_mm_mul_pd
        (_mm_loadu_pd(&CL_modelid_P.KalmanGainL_Value[i + 6]), _mm_set1_pd
         (rtb_Saturation)), _mm_mul_pd(_mm_loadu_pd
        (&CL_modelid_P.KalmanGainL_Value[i]), _mm_set1_pd(lastSin_tmp))));
    }

    srUpdateBC(CL_modelid_DW.MeasurementUpdate_SubsysRanBC);
  } else if (CL_modelid_DW.MeasurementUpdate_MODE) {
    for (i = 0; i < 6; i++) {
      /* Disable for Product: '<S53>/Product3' incorporates:
       *  Outport: '<S53>/L*(y[k]-yhat[k|k-1])'
       */
      CL_modelid_B.Product3[i] = CL_modelid_P.Lykyhatkk1_Y0;
    }

    CL_modelid_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S22>/MeasurementUpdate' */
  for (i = 0; i < 6; i++) {
    /* Product: '<S22>/A[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S1>/A'
     *  Delay: '<S1>/MemoryX'
     */
    rtb_Saturation = 0.0;
    for (i_0 = 0; i_0 < 6; i_0++) {
      rtb_Saturation += CL_modelid_P.A_Value[6 * i_0 + i] *
        CL_modelid_DW.MemoryX_DSTATE[i_0];
    }

    /* Sum: '<S22>/Add' incorporates:
     *  Constant: '<S1>/B'
     *  Product: '<S22>/A[k]*xhat[k|k-1]'
     *  Product: '<S22>/B[k]*u[k]'
     *  Product: '<S53>/Product3'
     */
    CL_modelid_B.Add[i] = (CL_modelid_P.B_Value[i] * CL_modelid_B.Sum1 +
      rtb_Saturation) + CL_modelid_B.Product3[i];
  }

  /* Step: '<Root>/Step' */
  if (CL_modelid_M->Timing.t[0] < CL_modelid_P.Step_Time) {
    /* Step: '<Root>/Step' */
    CL_modelid_B.Step = CL_modelid_P.Step_Y0;
  } else {
    /* Step: '<Root>/Step' */
    CL_modelid_B.Step = CL_modelid_P.Step_YFinal;
  }

  /* End of Step: '<Root>/Step' */
}

/* Model update function */
void CL_modelid_update(void)
{
  real_T HoldSine;
  int32_T i;

  /* Update for Delay: '<S1>/MemoryX' */
  CL_modelid_DW.icLoad = false;
  for (i = 0; i < 6; i++) {
    CL_modelid_DW.MemoryX_DSTATE[i] = CL_modelid_B.Add[i];
  }

  /* End of Update for Delay: '<S1>/MemoryX' */

  /* Update for Sin: '<Root>/Sine Wave' */
  HoldSine = CL_modelid_DW.lastSin;
  CL_modelid_DW.lastSin = CL_modelid_DW.lastSin * CL_modelid_P.SineWave_HCos +
    CL_modelid_DW.lastCos * CL_modelid_P.SineWave_Hsin;
  CL_modelid_DW.lastCos = CL_modelid_DW.lastCos * CL_modelid_P.SineWave_HCos -
    HoldSine * CL_modelid_P.SineWave_Hsin;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++CL_modelid_M->Timing.clockTick0)) {
    ++CL_modelid_M->Timing.clockTickH0;
  }

  CL_modelid_M->Timing.t[0] = CL_modelid_M->Timing.clockTick0 *
    CL_modelid_M->Timing.stepSize0 + CL_modelid_M->Timing.clockTickH0 *
    CL_modelid_M->Timing.stepSize0 * 4294967296.0;

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
    if (!(++CL_modelid_M->Timing.clockTick1)) {
      ++CL_modelid_M->Timing.clockTickH1;
    }

    CL_modelid_M->Timing.t[1] = CL_modelid_M->Timing.clockTick1 *
      CL_modelid_M->Timing.stepSize1 + CL_modelid_M->Timing.clockTickH1 *
      CL_modelid_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void CL_modelid_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: CL_modelid/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("q4", "0", &CL_modelid_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(CL_modelid_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options(CL_modelid_DW.HILInitialize_Card, " ",
      2);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(CL_modelid_M, _rt_error_message);
      return;
    }

    if ((CL_modelid_P.HILInitialize_CKPStart && !is_switching) ||
        (CL_modelid_P.HILInitialize_CKPEnter && is_switching)) {
      result = hil_set_clock_mode(CL_modelid_DW.HILInitialize_Card, (t_clock *)
        CL_modelid_P.HILInitialize_CKChannels, 2U, (t_clock_mode *)
        CL_modelid_P.HILInitialize_CKModes);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(CL_modelid_M, _rt_error_message);
        return;
      }
    }

    result = hil_watchdog_clear(CL_modelid_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(CL_modelid_M, _rt_error_message);
      return;
    }

    if ((CL_modelid_P.HILInitialize_AIPStart && !is_switching) ||
        (CL_modelid_P.HILInitialize_AIPEnter && is_switching)) {
      CL_modelid_DW.HILInitialize_AIMinimums[0] =
        (CL_modelid_P.HILInitialize_AILow);
      CL_modelid_DW.HILInitialize_AIMinimums[1] =
        (CL_modelid_P.HILInitialize_AILow);
      CL_modelid_DW.HILInitialize_AIMinimums[2] =
        (CL_modelid_P.HILInitialize_AILow);
      CL_modelid_DW.HILInitialize_AIMinimums[3] =
        (CL_modelid_P.HILInitialize_AILow);
      CL_modelid_DW.HILInitialize_AIMaximums[0] =
        CL_modelid_P.HILInitialize_AIHigh;
      CL_modelid_DW.HILInitialize_AIMaximums[1] =
        CL_modelid_P.HILInitialize_AIHigh;
      CL_modelid_DW.HILInitialize_AIMaximums[2] =
        CL_modelid_P.HILInitialize_AIHigh;
      CL_modelid_DW.HILInitialize_AIMaximums[3] =
        CL_modelid_P.HILInitialize_AIHigh;
      result = hil_set_analog_input_ranges(CL_modelid_DW.HILInitialize_Card,
        CL_modelid_P.HILInitialize_AIChannels, 4U,
        &CL_modelid_DW.HILInitialize_AIMinimums[0],
        &CL_modelid_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(CL_modelid_M, _rt_error_message);
        return;
      }
    }

    if ((CL_modelid_P.HILInitialize_AOPStart && !is_switching) ||
        (CL_modelid_P.HILInitialize_AOPEnter && is_switching)) {
      CL_modelid_DW.HILInitialize_AOMinimums[0] =
        (CL_modelid_P.HILInitialize_AOLow);
      CL_modelid_DW.HILInitialize_AOMinimums[1] =
        (CL_modelid_P.HILInitialize_AOLow);
      CL_modelid_DW.HILInitialize_AOMinimums[2] =
        (CL_modelid_P.HILInitialize_AOLow);
      CL_modelid_DW.HILInitialize_AOMinimums[3] =
        (CL_modelid_P.HILInitialize_AOLow);
      CL_modelid_DW.HILInitialize_AOMaximums[0] =
        CL_modelid_P.HILInitialize_AOHigh;
      CL_modelid_DW.HILInitialize_AOMaximums[1] =
        CL_modelid_P.HILInitialize_AOHigh;
      CL_modelid_DW.HILInitialize_AOMaximums[2] =
        CL_modelid_P.HILInitialize_AOHigh;
      CL_modelid_DW.HILInitialize_AOMaximums[3] =
        CL_modelid_P.HILInitialize_AOHigh;
      result = hil_set_analog_output_ranges(CL_modelid_DW.HILInitialize_Card,
        CL_modelid_P.HILInitialize_AOChannels, 4U,
        &CL_modelid_DW.HILInitialize_AOMinimums[0],
        &CL_modelid_DW.HILInitialize_AOMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(CL_modelid_M, _rt_error_message);
        return;
      }
    }

    if ((CL_modelid_P.HILInitialize_AOStart && !is_switching) ||
        (CL_modelid_P.HILInitialize_AOEnter && is_switching)) {
      CL_modelid_DW.HILInitialize_AOVoltages[0] =
        CL_modelid_P.HILInitialize_AOInitial;
      CL_modelid_DW.HILInitialize_AOVoltages[1] =
        CL_modelid_P.HILInitialize_AOInitial;
      CL_modelid_DW.HILInitialize_AOVoltages[2] =
        CL_modelid_P.HILInitialize_AOInitial;
      CL_modelid_DW.HILInitialize_AOVoltages[3] =
        CL_modelid_P.HILInitialize_AOInitial;
      result = hil_write_analog(CL_modelid_DW.HILInitialize_Card,
        CL_modelid_P.HILInitialize_AOChannels, 4U,
        &CL_modelid_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(CL_modelid_M, _rt_error_message);
        return;
      }
    }

    if (CL_modelid_P.HILInitialize_AOReset) {
      CL_modelid_DW.HILInitialize_AOVoltages[0] =
        CL_modelid_P.HILInitialize_AOWatchdog;
      CL_modelid_DW.HILInitialize_AOVoltages[1] =
        CL_modelid_P.HILInitialize_AOWatchdog;
      CL_modelid_DW.HILInitialize_AOVoltages[2] =
        CL_modelid_P.HILInitialize_AOWatchdog;
      CL_modelid_DW.HILInitialize_AOVoltages[3] =
        CL_modelid_P.HILInitialize_AOWatchdog;
      result = hil_watchdog_set_analog_expiration_state
        (CL_modelid_DW.HILInitialize_Card, CL_modelid_P.HILInitialize_AOChannels,
         4U, &CL_modelid_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(CL_modelid_M, _rt_error_message);
        return;
      }
    }

    if ((CL_modelid_P.HILInitialize_EIPStart && !is_switching) ||
        (CL_modelid_P.HILInitialize_EIPEnter && is_switching)) {
      CL_modelid_DW.HILInitialize_QuadratureModes[0] =
        CL_modelid_P.HILInitialize_EIQuadrature;
      CL_modelid_DW.HILInitialize_QuadratureModes[1] =
        CL_modelid_P.HILInitialize_EIQuadrature;
      CL_modelid_DW.HILInitialize_QuadratureModes[2] =
        CL_modelid_P.HILInitialize_EIQuadrature;
      CL_modelid_DW.HILInitialize_QuadratureModes[3] =
        CL_modelid_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode(CL_modelid_DW.HILInitialize_Card,
        CL_modelid_P.HILInitialize_EIChannels, 4U, (t_encoder_quadrature_mode *)
        &CL_modelid_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(CL_modelid_M, _rt_error_message);
        return;
      }

      CL_modelid_DW.HILInitialize_FilterFrequency[0] =
        CL_modelid_P.HILInitialize_EIFrequency;
      CL_modelid_DW.HILInitialize_FilterFrequency[1] =
        CL_modelid_P.HILInitialize_EIFrequency;
      CL_modelid_DW.HILInitialize_FilterFrequency[2] =
        CL_modelid_P.HILInitialize_EIFrequency;
      CL_modelid_DW.HILInitialize_FilterFrequency[3] =
        CL_modelid_P.HILInitialize_EIFrequency;
      result = hil_set_encoder_filter_frequency(CL_modelid_DW.HILInitialize_Card,
        CL_modelid_P.HILInitialize_EIChannels, 4U,
        &CL_modelid_DW.HILInitialize_FilterFrequency[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(CL_modelid_M, _rt_error_message);
        return;
      }
    }

    if ((CL_modelid_P.HILInitialize_EIStart && !is_switching) ||
        (CL_modelid_P.HILInitialize_EIEnter && is_switching)) {
      CL_modelid_DW.HILInitialize_InitialEICounts[0] =
        CL_modelid_P.HILInitialize_EIInitial;
      CL_modelid_DW.HILInitialize_InitialEICounts[1] =
        CL_modelid_P.HILInitialize_EIInitial;
      CL_modelid_DW.HILInitialize_InitialEICounts[2] =
        CL_modelid_P.HILInitialize_EIInitial;
      CL_modelid_DW.HILInitialize_InitialEICounts[3] =
        CL_modelid_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts(CL_modelid_DW.HILInitialize_Card,
        CL_modelid_P.HILInitialize_EIChannels, 4U,
        &CL_modelid_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(CL_modelid_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for Enabled SubSystem: '<S29>/Enabled Subsystem' */
  CL_modelid_DW.EnabledSubsystem_MODE = false;

  /* End of Start for SubSystem: '<S29>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S22>/MeasurementUpdate' */
  CL_modelid_DW.MeasurementUpdate_MODE = false;

  /* End of Start for SubSystem: '<S22>/MeasurementUpdate' */
  {
    int32_T i;

    /* InitializeConditions for Delay: '<S1>/MemoryX' */
    CL_modelid_DW.icLoad = true;

    /* SystemInitialize for MATLAB Function: '<S51>/SqrtUsedFcn' */
    CL_modelid_DW.sfEvent = CL_modelid_CALL_EVENT;
    CL_modelid_DW.is_active_c7_ctrlSharedLib = 0U;

    /* SystemInitialize for Enabled SubSystem: '<S22>/MeasurementUpdate' */
    /* SystemInitialize for Enabled SubSystem: '<S29>/Enabled Subsystem' */
    for (i = 0; i < 6; i++) {
      /* SystemInitialize for Product: '<S55>/Product2' incorporates:
       *  Outport: '<S55>/deltax'
       */
      CL_modelid_B.Product2[i] = CL_modelid_P.deltax_Y0;

      /* SystemInitialize for Product: '<S53>/Product3' incorporates:
       *  Outport: '<S53>/L*(y[k]-yhat[k|k-1])'
       */
      CL_modelid_B.Product3[i] = CL_modelid_P.Lykyhatkk1_Y0;
    }

    /* End of SystemInitialize for SubSystem: '<S29>/Enabled Subsystem' */
    /* End of SystemInitialize for SubSystem: '<S22>/MeasurementUpdate' */
  }

  /* Enable for Sin: '<Root>/Sine Wave' */
  CL_modelid_DW.systemEnable = 1;
}

/* Model terminate function */
void CL_modelid_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: CL_modelid/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_analog_outputs = 0;
    hil_task_stop_all(CL_modelid_DW.HILInitialize_Card);
    hil_monitor_stop_all(CL_modelid_DW.HILInitialize_Card);
    is_switching = false;
    if ((CL_modelid_P.HILInitialize_AOTerminate && !is_switching) ||
        (CL_modelid_P.HILInitialize_AOExit && is_switching)) {
      CL_modelid_DW.HILInitialize_AOVoltages[0] =
        CL_modelid_P.HILInitialize_AOFinal;
      CL_modelid_DW.HILInitialize_AOVoltages[1] =
        CL_modelid_P.HILInitialize_AOFinal;
      CL_modelid_DW.HILInitialize_AOVoltages[2] =
        CL_modelid_P.HILInitialize_AOFinal;
      CL_modelid_DW.HILInitialize_AOVoltages[3] =
        CL_modelid_P.HILInitialize_AOFinal;
      num_final_analog_outputs = 4U;
    } else {
      num_final_analog_outputs = 0;
    }

    if (num_final_analog_outputs > 0) {
      result = hil_write_analog(CL_modelid_DW.HILInitialize_Card,
        CL_modelid_P.HILInitialize_AOChannels, num_final_analog_outputs,
        &CL_modelid_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(CL_modelid_M, _rt_error_message);
      }
    }

    hil_task_delete_all(CL_modelid_DW.HILInitialize_Card);
    hil_monitor_delete_all(CL_modelid_DW.HILInitialize_Card);
    hil_close(CL_modelid_DW.HILInitialize_Card);
    CL_modelid_DW.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  CL_modelid_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  CL_modelid_update();
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
  CL_modelid_initialize();
}

void MdlTerminate(void)
{
  CL_modelid_terminate();
}

/* Registration function */
RT_MODEL_CL_modelid_T *CL_modelid(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)CL_modelid_M, 0,
                sizeof(RT_MODEL_CL_modelid_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&CL_modelid_M->solverInfo,
                          &CL_modelid_M->Timing.simTimeStep);
    rtsiSetTPtr(&CL_modelid_M->solverInfo, &rtmGetTPtr(CL_modelid_M));
    rtsiSetStepSizePtr(&CL_modelid_M->solverInfo,
                       &CL_modelid_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&CL_modelid_M->solverInfo, (&rtmGetErrorStatus
      (CL_modelid_M)));
    rtsiSetRTModelPtr(&CL_modelid_M->solverInfo, CL_modelid_M);
  }

  rtsiSetSimTimeStep(&CL_modelid_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&CL_modelid_M->solverInfo,"FixedStepDiscrete");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = CL_modelid_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "CL_modelid_M points to
       static memory which is guaranteed to be non-NULL" */
    CL_modelid_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    CL_modelid_M->Timing.sampleTimes = (&CL_modelid_M->Timing.sampleTimesArray[0]);
    CL_modelid_M->Timing.offsetTimes = (&CL_modelid_M->Timing.offsetTimesArray[0]);

    /* task periods */
    CL_modelid_M->Timing.sampleTimes[0] = (0.0);
    CL_modelid_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    CL_modelid_M->Timing.offsetTimes[0] = (0.0);
    CL_modelid_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(CL_modelid_M, &CL_modelid_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = CL_modelid_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    CL_modelid_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(CL_modelid_M, 20.0);
  CL_modelid_M->Timing.stepSize0 = 0.001;
  CL_modelid_M->Timing.stepSize1 = 0.001;

  /* External mode info */
  CL_modelid_M->Sizes.checksums[0] = (2742639235U);
  CL_modelid_M->Sizes.checksums[1] = (131875556U);
  CL_modelid_M->Sizes.checksums[2] = (2232486249U);
  CL_modelid_M->Sizes.checksums[3] = (3624283904U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    CL_modelid_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = (sysRanDType *)&CL_modelid_DW.MeasurementUpdate_SubsysRanBC;
    systemRan[3] = (sysRanDType *)&CL_modelid_DW.EnabledSubsystem_SubsysRanBC;
    rteiSetModelMappingInfoPtr(CL_modelid_M->extModeInfo,
      &CL_modelid_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(CL_modelid_M->extModeInfo, CL_modelid_M->Sizes.checksums);
    rteiSetTPtr(CL_modelid_M->extModeInfo, rtmGetTPtr(CL_modelid_M));
  }

  CL_modelid_M->solverInfoPtr = (&CL_modelid_M->solverInfo);
  CL_modelid_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&CL_modelid_M->solverInfo, 0.001);
  rtsiSetSolverMode(&CL_modelid_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  CL_modelid_M->blockIO = ((void *) &CL_modelid_B);
  (void) memset(((void *) &CL_modelid_B), 0,
                sizeof(B_CL_modelid_T));

  /* parameters */
  CL_modelid_M->defaultParam = ((real_T *)&CL_modelid_P);

  /* states (dwork) */
  CL_modelid_M->dwork = ((void *) &CL_modelid_DW);
  (void) memset((void *)&CL_modelid_DW, 0,
                sizeof(DW_CL_modelid_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    CL_modelid_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 20;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  CL_modelid_M->Sizes.numContStates = (0);/* Number of continuous states */
  CL_modelid_M->Sizes.numY = (0);      /* Number of model outputs */
  CL_modelid_M->Sizes.numU = (0);      /* Number of model inputs */
  CL_modelid_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  CL_modelid_M->Sizes.numSampTimes = (2);/* Number of sample times */
  CL_modelid_M->Sizes.numBlocks = (49);/* Number of blocks */
  CL_modelid_M->Sizes.numBlockIO = (11);/* Number of block outputs */
  CL_modelid_M->Sizes.numBlockPrms = (222);/* Sum of parameter "widths" */
  return CL_modelid_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
