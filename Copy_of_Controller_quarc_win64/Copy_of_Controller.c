/*
 * Copy_of_Controller.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Copy_of_Controller".
 *
 * Model version              : 1.30
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Mon Jun  2 09:41:30 2025
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Copy_of_Controller.h"
#include "rtwtypes.h"
#include "Copy_of_Controller_private.h"
#include <emmintrin.h>
#include <math.h>
#include "rt_nonfinite.h"
#include <float.h>
#include "zero_crossing_types.h"
#include <string.h>
#include "Copy_of_Controller_dt.h"

/* Named constants for MATLAB Function: '<S53>/SqrtUsedFcn' */
#define Copy_of_Controller_CALL_EVENT  (-1)

/* Block signals (default storage) */
B_Copy_of_Controller_T Copy_of_Controller_B;

/* Block states (default storage) */
DW_Copy_of_Controller_T Copy_of_Controller_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_Copy_of_Controller_T Copy_of_Controller_PrevZCX;

/* Real-time model */
static RT_MODEL_Copy_of_Controller_T Copy_of_Controller_M_;
RT_MODEL_Copy_of_Controller_T *const Copy_of_Controller_M =
  &Copy_of_Controller_M_;

/*
 * System initialize for atomic system:
 *    '<S53>/SqrtUsedFcn'
 *    '<S111>/SqrtUsedFcn'
 */
void Copy_of_Contro_SqrtUsedFcn_Init(DW_SqrtUsedFcn_Copy_of_Contro_T *localDW)
{
  localDW->sfEvent = Copy_of_Controller_CALL_EVENT;
  localDW->is_active_c7_ctrlSharedLib = 0U;
}

/*
 * System reset for atomic system:
 *    '<S53>/SqrtUsedFcn'
 *    '<S111>/SqrtUsedFcn'
 */
void Copy_of_Contr_SqrtUsedFcn_Reset(DW_SqrtUsedFcn_Copy_of_Contro_T *localDW)
{
  localDW->sfEvent = Copy_of_Controller_CALL_EVENT;
  localDW->is_active_c7_ctrlSharedLib = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S53>/SqrtUsedFcn'
 *    '<S111>/SqrtUsedFcn'
 */
void Copy_of_Controller_SqrtUsedFcn(DW_SqrtUsedFcn_Copy_of_Contro_T *localDW)
{
  localDW->sfEvent = Copy_of_Controller_CALL_EVENT;
}

/*
 * System initialize for enable system:
 *    '<S25>/MeasurementUpdate'
 *    '<S82>/MeasurementUpdate'
 */
void Copy_of__MeasurementUpdate_Init(B_MeasurementUpdate_Copy_of_C_T *localB,
  P_MeasurementUpdate_Copy_of_C_T *localP)
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    /* SystemInitialize for Product: '<S55>/Product3' incorporates:
     *  Outport: '<S55>/L*(y[k]-yhat[k|k-1])'
     */
    localB->Product3[i] = localP->Lykyhatkk1_Y0;
  }
}

/*
 * Disable for enable system:
 *    '<S25>/MeasurementUpdate'
 *    '<S82>/MeasurementUpdate'
 */
void Copy__MeasurementUpdate_Disable(B_MeasurementUpdate_Copy_of_C_T *localB,
  DW_MeasurementUpdate_Copy_of__T *localDW, P_MeasurementUpdate_Copy_of_C_T
  *localP)
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    /* Disable for Product: '<S55>/Product3' incorporates:
     *  Outport: '<S55>/L*(y[k]-yhat[k|k-1])'
     */
    localB->Product3[i] = localP->Lykyhatkk1_Y0;
  }

  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Start for enable system:
 *    '<S25>/MeasurementUpdate'
 *    '<S82>/MeasurementUpdate'
 */
void Copy_of_MeasurementUpdate_Start(DW_MeasurementUpdate_Copy_of__T *localDW)
{
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S25>/MeasurementUpdate'
 *    '<S82>/MeasurementUpdate'
 */
void Copy_of_Contr_MeasurementUpdate(boolean_T rtu_Enable, const real_T rtu_Lk
  [12], const real_T rtu_yk[2], const real_T rtu_Ck[12], const real_T
  rtu_xhatkk1[6], const real_T rtu_Dk[2], real_T rtu_uk,
  B_MeasurementUpdate_Copy_of_C_T *localB, DW_MeasurementUpdate_Copy_of__T
  *localDW, P_MeasurementUpdate_Copy_of_C_T *localP)
{
  __m128d tmp;
  __m128d tmp_0;
  real_T rtu_yk_0[2];
  real_T rtu_Ck_0;
  real_T rtu_yk_1;
  int32_T i;
  int32_T i_0;

  /* Outputs for Enabled SubSystem: '<S25>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S55>/Enable'
   */
  if (rtu_Enable) {
    localDW->MeasurementUpdate_MODE = true;
    for (i = 0; i < 2; i++) {
      /* Product: '<S55>/C[k]*xhat[k|k-1]' */
      rtu_Ck_0 = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        rtu_Ck_0 += rtu_Ck[(i_0 << 1) + i] * rtu_xhatkk1[i_0];
      }

      /* Sum: '<S55>/Sum' incorporates:
       *  Product: '<S55>/C[k]*xhat[k|k-1]'
       *  Product: '<S55>/D[k]*u[k]'
       *  Sum: '<S55>/Add1'
       */
      rtu_yk_0[i] = rtu_yk[i] - (rtu_Dk[i] * rtu_uk + rtu_Ck_0);
    }

    /* Product: '<S55>/Product3' */
    rtu_Ck_0 = rtu_yk_0[1];
    rtu_yk_1 = rtu_yk_0[0];
    for (i = 0; i <= 4; i += 2) {
      /* Product: '<S55>/Product3' */
      tmp = _mm_loadu_pd(&rtu_Lk[i + 6]);
      tmp_0 = _mm_loadu_pd(&rtu_Lk[i]);

      /* Product: '<S55>/Product3' */
      _mm_storeu_pd(&localB->Product3[i], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
        (rtu_Ck_0)), _mm_mul_pd(tmp_0, _mm_set1_pd(rtu_yk_1))));
    }

    srUpdateBC(localDW->MeasurementUpdate_SubsysRanBC);
  } else if (localDW->MeasurementUpdate_MODE) {
    Copy__MeasurementUpdate_Disable(localB, localDW, localP);
  }

  /* End of Outputs for SubSystem: '<S25>/MeasurementUpdate' */
}

/*
 * System initialize for enable system:
 *    '<S31>/Enabled Subsystem'
 *    '<S89>/Enabled Subsystem'
 */
void Copy_of_C_EnabledSubsystem_Init(B_EnabledSubsystem_Copy_of_Co_T *localB,
  P_EnabledSubsystem_Copy_of_Co_T *localP)
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    /* SystemInitialize for Product: '<S57>/Product2' incorporates:
     *  Outport: '<S57>/deltax'
     */
    localB->Product2[i] = localP->deltax_Y0;
  }
}

/*
 * Disable for enable system:
 *    '<S31>/Enabled Subsystem'
 *    '<S89>/Enabled Subsystem'
 */
void Copy_o_EnabledSubsystem_Disable(B_EnabledSubsystem_Copy_of_Co_T *localB,
  DW_EnabledSubsystem_Copy_of_C_T *localDW, P_EnabledSubsystem_Copy_of_Co_T
  *localP)
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    /* Disable for Product: '<S57>/Product2' incorporates:
     *  Outport: '<S57>/deltax'
     */
    localB->Product2[i] = localP->deltax_Y0;
  }

  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Start for enable system:
 *    '<S31>/Enabled Subsystem'
 *    '<S89>/Enabled Subsystem'
 */
void Copy_of__EnabledSubsystem_Start(DW_EnabledSubsystem_Copy_of_C_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S31>/Enabled Subsystem'
 *    '<S89>/Enabled Subsystem'
 */
void Copy_of_Contro_EnabledSubsystem(boolean_T rtu_Enable, const real_T rtu_Mk
  [12], const real_T rtu_Ck[12], const real_T rtu_yk[2], const real_T
  rtu_xhatkk1[6], B_EnabledSubsystem_Copy_of_Co_T *localB,
  DW_EnabledSubsystem_Copy_of_C_T *localDW, P_EnabledSubsystem_Copy_of_Co_T
  *localP)
{
  __m128d tmp;
  __m128d tmp_0;
  real_T rtu_yk_0[2];
  real_T rtu_yk_1;
  real_T rtu_yk_2;
  int32_T i;
  int32_T i_0;

  /* Outputs for Enabled SubSystem: '<S31>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S57>/Enable'
   */
  if (rtu_Enable) {
    localDW->EnabledSubsystem_MODE = true;

    /* Sum: '<S57>/Add1' incorporates:
     *  Product: '<S57>/Product'
     */
    for (i = 0; i < 2; i++) {
      rtu_yk_1 = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        rtu_yk_1 += rtu_Ck[(i_0 << 1) + i] * rtu_xhatkk1[i_0];
      }

      rtu_yk_0[i] = rtu_yk[i] - rtu_yk_1;
    }

    /* End of Sum: '<S57>/Add1' */

    /* Product: '<S57>/Product2' */
    rtu_yk_1 = rtu_yk_0[1];
    rtu_yk_2 = rtu_yk_0[0];
    for (i = 0; i <= 4; i += 2) {
      /* Product: '<S57>/Product2' */
      tmp = _mm_loadu_pd(&rtu_Mk[i + 6]);
      tmp_0 = _mm_loadu_pd(&rtu_Mk[i]);

      /* Product: '<S57>/Product2' */
      _mm_storeu_pd(&localB->Product2[i], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
        (rtu_yk_1)), _mm_mul_pd(tmp_0, _mm_set1_pd(rtu_yk_2))));
    }

    srUpdateBC(localDW->EnabledSubsystem_SubsysRanBC);
  } else if (localDW->EnabledSubsystem_MODE) {
    Copy_o_EnabledSubsystem_Disable(localB, localDW, localP);
  }

  /* End of Outputs for SubSystem: '<S31>/Enabled Subsystem' */
}

real_T rt_modd_snf(real_T u0, real_T u1)
{
  real_T q;
  real_T y;
  boolean_T yEq;
  y = u0;
  if (u1 == 0.0) {
    if (u0 == 0.0) {
      y = u1;
    }
  } else if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (u0 == 0.0) {
    y = 0.0 / u1;
  } else if (rtIsInf(u1)) {
    if ((u1 < 0.0) != (u0 < 0.0)) {
      y = u1;
    }
  } else {
    y = fmod(u0, u1);
    yEq = (y == 0.0);
    if ((!yEq) && (u1 > floor(u1))) {
      q = fabs(u0 / u1);
      yEq = !(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q);
    }

    if (yEq) {
      y = u1 * 0.0;
    } else if ((u0 < 0.0) != (u1 < 0.0)) {
      y += u1;
    }
  }

  return y;
}

/* Model output function */
void Copy_of_Controller_output(void)
{
  /* local block i/o variables */
  real_T rtb_Saturation;
  real_T rtb_Saturation_h;
  real_T rtb_Saturation_m;
  real_T rtb_Saturation_o;
  real_T rtb_Reshapey[2];
  real_T rtb_MemoryX[6];
  real_T rtb_Sum[2];
  real_T rtb_MemoryX_i[6];
  __m128d tmp_0;
  __m128d tmp_1;
  real_T tmp[6];
  real_T K;
  real_T K_h;
  real_T rtb_Integrator_o;
  real_T rtb_Max;
  real_T rtb_Product;
  int32_T i;
  int32_T i_0;
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_g;

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (Copy_of_Controller_DW.MeasurementUpdate.MeasurementUpdate_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Copy_of_Controller_DW.EnabledSubsystem.EnabledSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Copy_of_Controller_DW.balancing_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Copy_of_Controller_DW.down_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Copy_of_Controller_DW.swing_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Copy_of_Controller_DW.DLatch_SubsysRanBC);

  /* Delay: '<Root>/Delay' */
  rtb_Integrator_o = Copy_of_Controller_DW.Delay_DSTATE;

  /* Saturate: '<Root>/Saturation' */
  if (rtb_Integrator_o > Copy_of_Controller_P.Saturation_UpperSat_k) {
    /* Saturate: '<Root>/Saturation' */
    rtb_Saturation = Copy_of_Controller_P.Saturation_UpperSat_k;
  } else if (rtb_Integrator_o < Copy_of_Controller_P.Saturation_LowerSat_k) {
    /* Saturate: '<Root>/Saturation' */
    rtb_Saturation = Copy_of_Controller_P.Saturation_LowerSat_k;
  } else {
    /* Saturate: '<Root>/Saturation' */
    rtb_Saturation = rtb_Integrator_o;
  }

  /* End of Saturate: '<Root>/Saturation' */

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
      rtb_Integrator_o = Copy_of_Controller_DW.cartangle_Buffer;
    }
  }

  /* Gain: '<Root>/Gain' */
  rtb_Integrator_o *= Copy_of_Controller_P.Gain_Gain_k;

  /* Math: '<Root>/Mod' incorporates:
   *  Constant: '<Root>/Constant'
   */
  Copy_of_Controller_B.Mod = rt_modd_snf(rtb_Integrator_o,
    Copy_of_Controller_P.Constant_Value_h);

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
      rtb_Integrator_o = Copy_of_Controller_DW.cartpos_Buffer;
    }
  }

  /* Gain: '<Root>/Gain2' */
  Copy_of_Controller_B.raagpos = Copy_of_Controller_P.Gain2_Gain *
    rtb_Integrator_o;

  /* Sum: '<S4>/Sum1' incorporates:
   *  Constant: '<S4>/Constant2'
   */
  rtb_Integrator_o = Copy_of_Controller_B.Mod +
    Copy_of_Controller_P.Constant2_Value;

  /* Abs: '<S4>/Abs' */
  rtb_Integrator_o = fabs(rtb_Integrator_o);

  /* RelationalOperator: '<S134>/Compare' incorporates:
   *  Constant: '<S134>/Constant'
   */
  rtb_Compare = (rtb_Integrator_o >=
                 Copy_of_Controller_P.CompareToConstant1_const);

  /* RelationalOperator: '<S133>/Compare' incorporates:
   *  Constant: '<S133>/Constant'
   */
  Copy_of_Controller_B.Compare = (rtb_Integrator_o <=
    Copy_of_Controller_P.Balance_const);

  /* Logic: '<S4>/NOT' */
  rtb_Compare_g = !Copy_of_Controller_B.Compare;

  /* Sum: '<S152>/Sum1' incorporates:
   *  Constant: '<S152>/Time constant'
   */
  rtb_Integrator_o = Copy_of_Controller_P.LowPassFilterDiscreteorContin_m -
    Copy_of_Controller_B.Probe[0];

  /* Logic: '<S152>/Logical Operator' incorporates:
   *  Constant: '<S152>/Constant'
   *  Constant: '<S155>/Constant'
   *  Constant: '<S156>/Constant'
   *  RelationalOperator: '<S155>/Compare'
   *  RelationalOperator: '<S156>/Compare'
   */
  Copy_of_Controller_B.LogicalOperator = ((rtb_Integrator_o <=
    Copy_of_Controller_P.Constant_Value_ew) &&
    (Copy_of_Controller_P.LowPassFilterDiscreteorConti_mr <
     Copy_of_Controller_P.CompareToConstant_const_l));

  /* SampleTimeMath: '<S141>/TSamp'
   *
   * About '<S141>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  Copy_of_Controller_B.TSamp = Copy_of_Controller_B.Mod *
    Copy_of_Controller_P.TSamp_WtEt_n;

  /* Gain: '<S143>/K' incorporates:
   *  Sum: '<S141>/Diff'
   *  UnitDelay: '<S141>/UD'
   */
  K = (Copy_of_Controller_B.TSamp - Copy_of_Controller_DW.UD_DSTATE) *
    Copy_of_Controller_P.LowPassFilterDiscreteorContin_o;

  /* DiscreteIntegrator: '<S158>/Integrator' */
  if (Copy_of_Controller_DW.Integrator_IC_LOADING != 0) {
    Copy_of_Controller_DW.Integrator_DSTATE = K;
    if (Copy_of_Controller_DW.Integrator_DSTATE >=
        Copy_of_Controller_P.Integrator_UpperSat_p) {
      Copy_of_Controller_DW.Integrator_DSTATE =
        Copy_of_Controller_P.Integrator_UpperSat_p;
    } else if (Copy_of_Controller_DW.Integrator_DSTATE <=
               Copy_of_Controller_P.Integrator_LowerSat_l) {
      Copy_of_Controller_DW.Integrator_DSTATE =
        Copy_of_Controller_P.Integrator_LowerSat_l;
    }
  }

  if (Copy_of_Controller_B.LogicalOperator ||
      (Copy_of_Controller_DW.Integrator_PrevResetState != 0)) {
    Copy_of_Controller_DW.Integrator_DSTATE = K;
    if (Copy_of_Controller_DW.Integrator_DSTATE >=
        Copy_of_Controller_P.Integrator_UpperSat_p) {
      Copy_of_Controller_DW.Integrator_DSTATE =
        Copy_of_Controller_P.Integrator_UpperSat_p;
    } else if (Copy_of_Controller_DW.Integrator_DSTATE <=
               Copy_of_Controller_P.Integrator_LowerSat_l) {
      Copy_of_Controller_DW.Integrator_DSTATE =
        Copy_of_Controller_P.Integrator_LowerSat_l;
    }
  }

  if (Copy_of_Controller_DW.Integrator_DSTATE >=
      Copy_of_Controller_P.Integrator_UpperSat_p) {
    Copy_of_Controller_DW.Integrator_DSTATE =
      Copy_of_Controller_P.Integrator_UpperSat_p;
  } else if (Copy_of_Controller_DW.Integrator_DSTATE <=
             Copy_of_Controller_P.Integrator_LowerSat_l) {
    Copy_of_Controller_DW.Integrator_DSTATE =
      Copy_of_Controller_P.Integrator_LowerSat_l;
  }

  rtb_Integrator_o = Copy_of_Controller_DW.Integrator_DSTATE;

  /* End of DiscreteIntegrator: '<S158>/Integrator' */

  /* Saturate: '<S158>/Saturation' */
  if (rtb_Integrator_o > Copy_of_Controller_P.Saturation_UpperSat_m) {
    /* Saturate: '<S158>/Saturation' */
    rtb_Saturation_h = Copy_of_Controller_P.Saturation_UpperSat_m;
  } else if (rtb_Integrator_o < Copy_of_Controller_P.Saturation_LowerSat_j) {
    /* Saturate: '<S158>/Saturation' */
    rtb_Saturation_h = Copy_of_Controller_P.Saturation_LowerSat_j;
  } else {
    /* Saturate: '<S158>/Saturation' */
    rtb_Saturation_h = rtb_Integrator_o;
  }

  /* End of Saturate: '<S158>/Saturation' */

  /* Logic: '<S145>/Logical Operator' incorporates:
   *  Constant: '<S145>/Constant'
   *  Constant: '<S145>/Time constant'
   *  Constant: '<S148>/Constant'
   *  Constant: '<S149>/Constant'
   *  RelationalOperator: '<S148>/Compare'
   *  RelationalOperator: '<S149>/Compare'
   *  Sum: '<S145>/Sum1'
   */
  Copy_of_Controller_B.LogicalOperator_g =
    ((Copy_of_Controller_P.LowPassFilterDiscreteorConti_b2 -
      Copy_of_Controller_B.Probe_o[0] <= Copy_of_Controller_P.Constant_Value_j) &&
     (Copy_of_Controller_P.LowPassFilterDiscreteorConti_oe <
      Copy_of_Controller_P.CompareToConstant_const_c));

  /* SampleTimeMath: '<S140>/TSamp'
   *
   * About '<S140>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  Copy_of_Controller_B.TSamp_n = Copy_of_Controller_B.raagpos *
    Copy_of_Controller_P.TSamp_WtEt_k;

  /* Gain: '<S142>/K' incorporates:
   *  Sum: '<S140>/Diff'
   *  UnitDelay: '<S140>/UD'
   */
  rtb_Integrator_o = (Copy_of_Controller_B.TSamp_n -
                      Copy_of_Controller_DW.UD_DSTATE_b) *
    Copy_of_Controller_P.LowPassFilterDiscreteorContin_b;

  /* DiscreteIntegrator: '<S151>/Integrator' */
  if (Copy_of_Controller_DW.Integrator_IC_LOADING_i != 0) {
    Copy_of_Controller_DW.Integrator_DSTATE_f = rtb_Integrator_o;
    if (Copy_of_Controller_DW.Integrator_DSTATE_f >=
        Copy_of_Controller_P.Integrator_UpperSat_i) {
      Copy_of_Controller_DW.Integrator_DSTATE_f =
        Copy_of_Controller_P.Integrator_UpperSat_i;
    } else if (Copy_of_Controller_DW.Integrator_DSTATE_f <=
               Copy_of_Controller_P.Integrator_LowerSat_k) {
      Copy_of_Controller_DW.Integrator_DSTATE_f =
        Copy_of_Controller_P.Integrator_LowerSat_k;
    }
  }

  if (Copy_of_Controller_B.LogicalOperator_g ||
      (Copy_of_Controller_DW.Integrator_PrevResetState_l != 0)) {
    Copy_of_Controller_DW.Integrator_DSTATE_f = rtb_Integrator_o;
    if (Copy_of_Controller_DW.Integrator_DSTATE_f >=
        Copy_of_Controller_P.Integrator_UpperSat_i) {
      Copy_of_Controller_DW.Integrator_DSTATE_f =
        Copy_of_Controller_P.Integrator_UpperSat_i;
    } else if (Copy_of_Controller_DW.Integrator_DSTATE_f <=
               Copy_of_Controller_P.Integrator_LowerSat_k) {
      Copy_of_Controller_DW.Integrator_DSTATE_f =
        Copy_of_Controller_P.Integrator_LowerSat_k;
    }
  }

  if (Copy_of_Controller_DW.Integrator_DSTATE_f >=
      Copy_of_Controller_P.Integrator_UpperSat_i) {
    Copy_of_Controller_DW.Integrator_DSTATE_f =
      Copy_of_Controller_P.Integrator_UpperSat_i;
  } else if (Copy_of_Controller_DW.Integrator_DSTATE_f <=
             Copy_of_Controller_P.Integrator_LowerSat_k) {
    Copy_of_Controller_DW.Integrator_DSTATE_f =
      Copy_of_Controller_P.Integrator_LowerSat_k;
  }

  /* Saturate: '<S151>/Saturation' incorporates:
   *  DiscreteIntegrator: '<S151>/Integrator'
   */
  if (Copy_of_Controller_DW.Integrator_DSTATE_f >
      Copy_of_Controller_P.Saturation_UpperSat_c) {
    /* Saturate: '<S151>/Saturation' */
    rtb_Saturation_m = Copy_of_Controller_P.Saturation_UpperSat_c;
  } else if (Copy_of_Controller_DW.Integrator_DSTATE_f <
             Copy_of_Controller_P.Saturation_LowerSat_jk) {
    /* Saturate: '<S151>/Saturation' */
    rtb_Saturation_m = Copy_of_Controller_P.Saturation_LowerSat_jk;
  } else {
    /* Saturate: '<S151>/Saturation' */
    rtb_Saturation_m = Copy_of_Controller_DW.Integrator_DSTATE_f;
  }

  /* End of Saturate: '<S151>/Saturation' */

  /* Outputs for Enabled SubSystem: '<S139>/D Latch' incorporates:
   *  EnablePort: '<S144>/C'
   */
  /* Delay: '<S4>/Delay' */
  if (Copy_of_Controller_DW.Delay_DSTATE_f[0U]) {
    /* SignalConversion generated from: '<S144>/D' incorporates:
     *  Abs: '<S4>/Abs1'
     *  Abs: '<S4>/Abs2'
     *  Constant: '<S135>/Constant'
     *  Constant: '<S136>/Constant'
     *  Constant: '<S137>/Constant'
     *  Constant: '<S138>/Constant'
     *  Logic: '<S4>/AND'
     *  RelationalOperator: '<S135>/Compare'
     *  RelationalOperator: '<S136>/Compare'
     *  RelationalOperator: '<S137>/Compare'
     *  RelationalOperator: '<S138>/Compare'
     */
    Copy_of_Controller_B.D = ((Copy_of_Controller_B.Mod <=
      Copy_of_Controller_P.CompareToConstant5_const) && (fabs(rtb_Saturation_h) <=
      Copy_of_Controller_P.CompareToConstant3_const) &&
      (Copy_of_Controller_B.raagpos <=
       Copy_of_Controller_P.CompareToConstant4_const) && (fabs(rtb_Saturation_m)
      <= Copy_of_Controller_P.CompareToConstant2_const));
    srUpdateBC(Copy_of_Controller_DW.DLatch_SubsysRanBC);
  }

  /* End of Delay: '<S4>/Delay' */
  /* End of Outputs for SubSystem: '<S139>/D Latch' */

  /* Logic: '<S4>/Down' incorporates:
   *  Logic: '<S4>/NOT1'
   */
  Copy_of_Controller_B.Down = (rtb_Compare && rtb_Compare_g &&
    (!Copy_of_Controller_B.D));

  /* Outputs for Enabled SubSystem: '<Root>/down' incorporates:
   *  EnablePort: '<S2>/Enable'
   */
  if (Copy_of_Controller_B.Down) {
    if (!Copy_of_Controller_DW.down_MODE) {
      /* InitializeConditions for Delay: '<S60>/MemoryX' */
      Copy_of_Controller_DW.icLoad = true;

      /* SystemReset for MATLAB Function: '<S111>/SqrtUsedFcn' */
      Copy_of_Contr_SqrtUsedFcn_Reset(&Copy_of_Controller_DW.sf_SqrtUsedFcn_m);
      Copy_of_Controller_DW.down_MODE = true;
    }

    /* Reshape: '<S60>/Reshapey' incorporates:
     *  Constant: '<S2>/Constant'
     *  Constant: '<S2>/Constant1'
     *  Math: '<S2>/Mod'
     *  Sum: '<S2>/Sum'
     *  Sum: '<S2>/Sum1'
     */
    rtb_Reshapey[0] = rt_modd_snf(Copy_of_Controller_B.Mod +
      Copy_of_Controller_P.Constant_Value_e,
      Copy_of_Controller_P.Constant1_Value) -
      Copy_of_Controller_P.Constant_Value_e;
    rtb_Reshapey[1] = Copy_of_Controller_B.raagpos;
    for (i = 0; i < 6; i++) {
      /* Delay: '<S60>/MemoryX' incorporates:
       *  Constant: '<S60>/X0'
       */
      if (Copy_of_Controller_DW.icLoad) {
        Copy_of_Controller_DW.MemoryX_DSTATE[i] =
          Copy_of_Controller_P.X0_Value_j[i];
      }

      /* Delay: '<S60>/MemoryX' */
      rtb_MemoryX[i] = Copy_of_Controller_DW.MemoryX_DSTATE[i];
    }

    /* Outputs for Enabled SubSystem: '<S89>/Enabled Subsystem' */
    /* Constant: '<S60>/Enable' incorporates:
     *  Constant: '<S60>/C'
     *  Constant: '<S62>/KalmanGainM'
     */
    Copy_of_Contro_EnabledSubsystem(Copy_of_Controller_P.Enable_Value_d,
      Copy_of_Controller_P.KalmanGainM_Value_d, Copy_of_Controller_P.C_Value_h,
      rtb_Reshapey, rtb_MemoryX, &Copy_of_Controller_B.EnabledSubsystem_p,
      &Copy_of_Controller_DW.EnabledSubsystem_p,
      &Copy_of_Controller_P.EnabledSubsystem_p);

    /* End of Outputs for SubSystem: '<S89>/Enabled Subsystem' */

    /* MATLAB Function: '<S111>/SqrtUsedFcn' incorporates:
     *  Constant: '<S111>/isSqrtUsed'
     *  Constant: '<S62>/CovarianceZ'
     */
    Copy_of_Controller_SqrtUsedFcn(&Copy_of_Controller_DW.sf_SqrtUsedFcn_m);

    /* Outputs for Enabled SubSystem: '<S82>/MeasurementUpdate' */
    /* Constant: '<S60>/Enable' incorporates:
     *  Constant: '<S60>/C'
     *  Constant: '<S60>/D'
     *  Constant: '<S62>/KalmanGainL'
     */
    Copy_of_Contr_MeasurementUpdate(Copy_of_Controller_P.Enable_Value_d,
      Copy_of_Controller_P.KalmanGainL_Value_d, rtb_Reshapey,
      Copy_of_Controller_P.C_Value_h, rtb_MemoryX,
      Copy_of_Controller_P.D_Value_d, rtb_Saturation,
      &Copy_of_Controller_B.MeasurementUpdate_p,
      &Copy_of_Controller_DW.MeasurementUpdate_p,
      &Copy_of_Controller_P.MeasurementUpdate_p);

    /* End of Outputs for SubSystem: '<S82>/MeasurementUpdate' */

    /* Product: '<S82>/A[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S60>/A'
     */
    for (i = 0; i < 6; i++) {
      rtb_Max = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        rtb_Max += Copy_of_Controller_P.A_Value_j[6 * i_0 + i] * rtb_MemoryX[i_0];
      }

      tmp[i] = rtb_Max;
    }

    /* End of Product: '<S82>/A[k]*xhat[k|k-1]' */
    for (i = 0; i <= 4; i += 2) {
      /* Sum: '<S82>/Add' incorporates:
       *  Constant: '<S60>/B'
       *  Product: '<S113>/Product3'
       *  Product: '<S82>/B[k]*u[k]'
       */
      tmp_0 = _mm_loadu_pd(&tmp[i]);
      tmp_1 = _mm_loadu_pd(&Copy_of_Controller_B.MeasurementUpdate_p.Product3[i]);

      /* Sum: '<S82>/Add' incorporates:
       *  Constant: '<S60>/B'
       *  Product: '<S82>/B[k]*u[k]'
       */
      _mm_storeu_pd(&Copy_of_Controller_B.Add[i], _mm_add_pd(_mm_add_pd
        (_mm_mul_pd(_mm_loadu_pd(&Copy_of_Controller_P.B_Value_o[i]),
                    _mm_set1_pd(rtb_Saturation)), tmp_0), tmp_1));
    }

    /* Gain: '<S2>/Gain3' incorporates:
     *  Sum: '<S89>/Add'
     */
    rtb_Max = 0.0;
    for (i = 0; i < 6; i++) {
      rtb_Max += (Copy_of_Controller_B.EnabledSubsystem_p.Product2[i] +
                  rtb_MemoryX[i]) * -Copy_of_Controller_P.K_down[i];
    }

    /* Sum: '<S2>/Sum5' incorporates:
     *  Gain: '<S2>/Gain3'
     */
    Copy_of_Controller_B.Sum5 = rtb_Max;
    srUpdateBC(Copy_of_Controller_DW.down_SubsysRanBC);
  } else if (Copy_of_Controller_DW.down_MODE) {
    /* Disable for Enabled SubSystem: '<S89>/Enabled Subsystem' */
    if (Copy_of_Controller_DW.EnabledSubsystem_p.EnabledSubsystem_MODE) {
      Copy_o_EnabledSubsystem_Disable(&Copy_of_Controller_B.EnabledSubsystem_p,
        &Copy_of_Controller_DW.EnabledSubsystem_p,
        &Copy_of_Controller_P.EnabledSubsystem_p);
    }

    /* End of Disable for SubSystem: '<S89>/Enabled Subsystem' */

    /* Disable for Enabled SubSystem: '<S82>/MeasurementUpdate' */
    if (Copy_of_Controller_DW.MeasurementUpdate_p.MeasurementUpdate_MODE) {
      Copy__MeasurementUpdate_Disable(&Copy_of_Controller_B.MeasurementUpdate_p,
        &Copy_of_Controller_DW.MeasurementUpdate_p,
        &Copy_of_Controller_P.MeasurementUpdate_p);
    }

    /* End of Disable for SubSystem: '<S82>/MeasurementUpdate' */

    /* Disable for Sum: '<S2>/Sum5' incorporates:
     *  Outport: '<S2>/u_out'
     */
    Copy_of_Controller_B.Sum5 = Copy_of_Controller_P.u_out_Y0_h;
    Copy_of_Controller_DW.down_MODE = false;
  }

  /* End of Outputs for SubSystem: '<Root>/down' */

  /* Outputs for Enabled SubSystem: '<Root>/balancing' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (Copy_of_Controller_B.Compare) {
    if (!Copy_of_Controller_DW.balancing_MODE) {
      /* InitializeConditions for Delay: '<S5>/MemoryX' */
      Copy_of_Controller_DW.icLoad_p = true;

      /* SystemReset for MATLAB Function: '<S53>/SqrtUsedFcn' */
      Copy_of_Contr_SqrtUsedFcn_Reset(&Copy_of_Controller_DW.sf_SqrtUsedFcn);
      Copy_of_Controller_DW.balancing_MODE = true;
    }

    /* Sum: '<S1>/Sum' incorporates:
     *  Constant: '<S1>/Constant'
     */
    rtb_Sum[0] = Copy_of_Controller_B.Mod + Copy_of_Controller_P.Constant_Value
      [0];
    rtb_Sum[1] = Copy_of_Controller_B.raagpos +
      Copy_of_Controller_P.Constant_Value[1];

    /* Delay: '<S5>/MemoryX' incorporates:
     *  Constant: '<S5>/X0'
     */
    Copy_of_Controller_DW.icLoad_p = ((Copy_of_Controller_B.Compare &&
      (Copy_of_Controller_PrevZCX.MemoryX_Reset_ZCE != POS_ZCSIG)) ||
      Copy_of_Controller_DW.icLoad_p);
    Copy_of_Controller_PrevZCX.MemoryX_Reset_ZCE = Copy_of_Controller_B.Compare;
    for (i = 0; i < 6; i++) {
      if (Copy_of_Controller_DW.icLoad_p) {
        Copy_of_Controller_DW.MemoryX_DSTATE_o[i] =
          Copy_of_Controller_P.X0_Value[i];
      }

      /* Delay: '<S5>/MemoryX' incorporates:
       *  Constant: '<S5>/X0'
       */
      rtb_MemoryX_i[i] = Copy_of_Controller_DW.MemoryX_DSTATE_o[i];
    }

    /* End of Delay: '<S5>/MemoryX' */

    /* Outputs for Enabled SubSystem: '<S31>/Enabled Subsystem' */
    /* Constant: '<S5>/Enable' incorporates:
     *  Constant: '<S5>/C'
     *  Constant: '<S6>/KalmanGainM'
     */
    Copy_of_Contro_EnabledSubsystem(Copy_of_Controller_P.Enable_Value,
      Copy_of_Controller_P.KalmanGainM_Value, Copy_of_Controller_P.C_Value,
      rtb_Sum, rtb_MemoryX_i, &Copy_of_Controller_B.EnabledSubsystem,
      &Copy_of_Controller_DW.EnabledSubsystem,
      &Copy_of_Controller_P.EnabledSubsystem);

    /* End of Outputs for SubSystem: '<S31>/Enabled Subsystem' */

    /* Gain: '<S1>/Gain3' incorporates:
     *  Sum: '<S31>/Add'
     */
    rtb_Max = 0.0;
    for (i = 0; i < 6; i++) {
      rtb_Max += (Copy_of_Controller_B.EnabledSubsystem.Product2[i] +
                  rtb_MemoryX_i[i]) * -Copy_of_Controller_P.K[i];
    }

    /* Gain: '<S1>/Gain3' */
    Copy_of_Controller_B.Gain3 = rtb_Max;

    /* MATLAB Function: '<S53>/SqrtUsedFcn' incorporates:
     *  Constant: '<S53>/isSqrtUsed'
     *  Constant: '<S6>/CovarianceZ'
     */
    Copy_of_Controller_SqrtUsedFcn(&Copy_of_Controller_DW.sf_SqrtUsedFcn);

    /* Outputs for Enabled SubSystem: '<S25>/MeasurementUpdate' */
    /* Constant: '<S5>/Enable' incorporates:
     *  Constant: '<S5>/C'
     *  Constant: '<S5>/D'
     *  Constant: '<S6>/KalmanGainL'
     */
    Copy_of_Contr_MeasurementUpdate(Copy_of_Controller_P.Enable_Value,
      Copy_of_Controller_P.KalmanGainL_Value, rtb_Sum,
      Copy_of_Controller_P.C_Value, rtb_MemoryX_i, Copy_of_Controller_P.D_Value,
      rtb_Saturation, &Copy_of_Controller_B.MeasurementUpdate,
      &Copy_of_Controller_DW.MeasurementUpdate,
      &Copy_of_Controller_P.MeasurementUpdate);

    /* End of Outputs for SubSystem: '<S25>/MeasurementUpdate' */

    /* Product: '<S25>/A[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S5>/A'
     */
    for (i = 0; i < 6; i++) {
      rtb_Max = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        rtb_Max += Copy_of_Controller_P.A_Value[6 * i_0 + i] * rtb_MemoryX_i[i_0];
      }

      tmp[i] = rtb_Max;
    }

    /* End of Product: '<S25>/A[k]*xhat[k|k-1]' */
    for (i = 0; i <= 4; i += 2) {
      /* Sum: '<S25>/Add' incorporates:
       *  Constant: '<S5>/B'
       *  Product: '<S25>/B[k]*u[k]'
       *  Product: '<S55>/Product3'
       */
      tmp_0 = _mm_loadu_pd(&tmp[i]);
      tmp_1 = _mm_loadu_pd(&Copy_of_Controller_B.MeasurementUpdate.Product3[i]);

      /* Sum: '<S25>/Add' incorporates:
       *  Constant: '<S5>/B'
       *  Product: '<S25>/B[k]*u[k]'
       */
      _mm_storeu_pd(&Copy_of_Controller_B.Add_e[i], _mm_add_pd(_mm_add_pd
        (_mm_mul_pd(_mm_loadu_pd(&Copy_of_Controller_P.B_Value[i]), _mm_set1_pd
                    (rtb_Saturation)), tmp_0), tmp_1));
    }

    srUpdateBC(Copy_of_Controller_DW.balancing_SubsysRanBC);
  } else if (Copy_of_Controller_DW.balancing_MODE) {
    /* Disable for Enabled SubSystem: '<S31>/Enabled Subsystem' */
    if (Copy_of_Controller_DW.EnabledSubsystem.EnabledSubsystem_MODE) {
      Copy_o_EnabledSubsystem_Disable(&Copy_of_Controller_B.EnabledSubsystem,
        &Copy_of_Controller_DW.EnabledSubsystem,
        &Copy_of_Controller_P.EnabledSubsystem);
    }

    /* End of Disable for SubSystem: '<S31>/Enabled Subsystem' */

    /* Disable for Enabled SubSystem: '<S25>/MeasurementUpdate' */
    if (Copy_of_Controller_DW.MeasurementUpdate.MeasurementUpdate_MODE) {
      Copy__MeasurementUpdate_Disable(&Copy_of_Controller_B.MeasurementUpdate,
        &Copy_of_Controller_DW.MeasurementUpdate,
        &Copy_of_Controller_P.MeasurementUpdate);
    }

    /* End of Disable for SubSystem: '<S25>/MeasurementUpdate' */

    /* Disable for Gain: '<S1>/Gain3' incorporates:
     *  Outport: '<S1>/u_out'
     */
    Copy_of_Controller_B.Gain3 = Copy_of_Controller_P.u_out_Y0;
    Copy_of_Controller_DW.balancing_MODE = false;
  }

  /* End of Outputs for SubSystem: '<Root>/balancing' */

  /* Logic: '<S4>/Swing' incorporates:
   *  Constant: '<S4>/Constant1'
   */
  Copy_of_Controller_B.Swing = (Copy_of_Controller_B.D &&
    (Copy_of_Controller_P.Constant1_Value_k != 0.0) && rtb_Compare_g);

  /* Outputs for Enabled SubSystem: '<Root>/swing' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  if (Copy_of_Controller_B.Swing) {
    if (!Copy_of_Controller_DW.swing_MODE) {
      /* InitializeConditions for UnitDelay: '<S124>/UD' */
      Copy_of_Controller_DW.UD_DSTATE_j =
        Copy_of_Controller_P.DiscreteDerivative_ICPrevScaled;

      /* InitializeConditions for DiscreteIntegrator: '<S132>/Integrator' */
      Copy_of_Controller_DW.Integrator_PrevResetState_a = 0;
      Copy_of_Controller_DW.Integrator_IC_LOADING_m = 1U;
      Copy_of_Controller_DW.swing_MODE = true;
    }

    /* Sum: '<S3>/Sum1' incorporates:
     *  Constant: '<S3>/2pi'
     *  Constant: '<S3>/Constant'
     *  Math: '<S3>/Mod'
     *  Sum: '<S3>/Sum2'
     */
    rtb_Max = rt_modd_snf(Copy_of_Controller_P.Constant_Value_m +
                          Copy_of_Controller_B.Mod,
                          Copy_of_Controller_P.upi_Value) -
      Copy_of_Controller_P.Constant_Value_m;

    /* SampleTimeMath: '<S124>/TSamp'
     *
     * About '<S124>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    Copy_of_Controller_B.TSamp_a = rtb_Max * Copy_of_Controller_P.TSamp_WtEt;

    /* Logic: '<S126>/Logical Operator' incorporates:
     *  Constant: '<S126>/Constant'
     *  Constant: '<S126>/Time constant'
     *  Constant: '<S129>/Constant'
     *  Constant: '<S130>/Constant'
     *  RelationalOperator: '<S129>/Compare'
     *  RelationalOperator: '<S130>/Compare'
     *  Sum: '<S126>/Sum1'
     */
    Copy_of_Controller_B.LogicalOperator_f =
      ((Copy_of_Controller_P.LowPassFilterDiscreteorContin_d -
        Copy_of_Controller_B.Probe_h[0] <= Copy_of_Controller_P.Constant_Value_n)
       && (Copy_of_Controller_P.LowPassFilterDiscreteorConti_b0 <
           Copy_of_Controller_P.CompareToConstant_const_o));

    /* Gain: '<S125>/K' incorporates:
     *  Sum: '<S124>/Diff'
     *  UnitDelay: '<S124>/UD'
     */
    K_h = (Copy_of_Controller_B.TSamp_a - Copy_of_Controller_DW.UD_DSTATE_j) *
      Copy_of_Controller_P.LowPassFilterDiscreteorContinuo;

    /* DiscreteIntegrator: '<S132>/Integrator' */
    if (Copy_of_Controller_DW.Integrator_IC_LOADING_m != 0) {
      Copy_of_Controller_DW.Integrator_DSTATE_i = K_h;
      if (Copy_of_Controller_DW.Integrator_DSTATE_i >=
          Copy_of_Controller_P.Integrator_UpperSat) {
        Copy_of_Controller_DW.Integrator_DSTATE_i =
          Copy_of_Controller_P.Integrator_UpperSat;
      } else if (Copy_of_Controller_DW.Integrator_DSTATE_i <=
                 Copy_of_Controller_P.Integrator_LowerSat) {
        Copy_of_Controller_DW.Integrator_DSTATE_i =
          Copy_of_Controller_P.Integrator_LowerSat;
      }
    }

    if (Copy_of_Controller_B.LogicalOperator_f ||
        (Copy_of_Controller_DW.Integrator_PrevResetState_a != 0)) {
      Copy_of_Controller_DW.Integrator_DSTATE_i = K_h;
      if (Copy_of_Controller_DW.Integrator_DSTATE_i >=
          Copy_of_Controller_P.Integrator_UpperSat) {
        Copy_of_Controller_DW.Integrator_DSTATE_i =
          Copy_of_Controller_P.Integrator_UpperSat;
      } else if (Copy_of_Controller_DW.Integrator_DSTATE_i <=
                 Copy_of_Controller_P.Integrator_LowerSat) {
        Copy_of_Controller_DW.Integrator_DSTATE_i =
          Copy_of_Controller_P.Integrator_LowerSat;
      }
    }

    if (Copy_of_Controller_DW.Integrator_DSTATE_i >=
        Copy_of_Controller_P.Integrator_UpperSat) {
      Copy_of_Controller_DW.Integrator_DSTATE_i =
        Copy_of_Controller_P.Integrator_UpperSat;
    } else if (Copy_of_Controller_DW.Integrator_DSTATE_i <=
               Copy_of_Controller_P.Integrator_LowerSat) {
      Copy_of_Controller_DW.Integrator_DSTATE_i =
        Copy_of_Controller_P.Integrator_LowerSat;
    }

    /* Saturate: '<S132>/Saturation' incorporates:
     *  DiscreteIntegrator: '<S132>/Integrator'
     */
    if (Copy_of_Controller_DW.Integrator_DSTATE_i >
        Copy_of_Controller_P.Saturation_UpperSat) {
      /* Saturate: '<S132>/Saturation' */
      rtb_Saturation_o = Copy_of_Controller_P.Saturation_UpperSat;
    } else if (Copy_of_Controller_DW.Integrator_DSTATE_i <
               Copy_of_Controller_P.Saturation_LowerSat) {
      /* Saturate: '<S132>/Saturation' */
      rtb_Saturation_o = Copy_of_Controller_P.Saturation_LowerSat;
    } else {
      /* Saturate: '<S132>/Saturation' */
      rtb_Saturation_o = Copy_of_Controller_DW.Integrator_DSTATE_i;
    }

    /* End of Saturate: '<S132>/Saturation' */

    /* MinMax: '<S126>/Max' incorporates:
     *  Constant: '<S126>/Time constant'
     */
    if ((Copy_of_Controller_B.Probe_h[0] >=
         Copy_of_Controller_P.LowPassFilterDiscreteorContin_d) || rtIsNaN
        (Copy_of_Controller_P.LowPassFilterDiscreteorContin_d)) {
      rtb_Product = Copy_of_Controller_B.Probe_h[0];
    } else {
      rtb_Product = Copy_of_Controller_P.LowPassFilterDiscreteorContin_d;
    }

    /* End of MinMax: '<S126>/Max' */

    /* Product: '<S125>/1//T' incorporates:
     *  Fcn: '<S126>/Avoid Divide by Zero'
     *  Sum: '<S125>/Sum1'
     */
    Copy_of_Controller_B.uT_i = 1.0 / ((real_T)(rtb_Product == 0.0) *
      2.2204460492503131e-16 + rtb_Product) * (K_h - rtb_Saturation_o);

    /* Sum: '<S3>/Sum' incorporates:
     *  Abs: '<S3>/Abs'
     *  Constant: '<S123>/Constant'
     *  Gain: '<S3>/Gain'
     *  Gain: '<S3>/Gain1'
     *  Product: '<S3>/Product'
     *  RelationalOperator: '<S123>/Compare'
     *  Trigonometry: '<S3>/Cos'
     */
    Copy_of_Controller_B.Sum = (real_T)(fabs(rtb_Max) <=
      Copy_of_Controller_P.CompareToConstant_const) * cos(rtb_Max) *
      (Copy_of_Controller_P.Gain1_Gain * rtb_Saturation_o) +
      Copy_of_Controller_P.Gain_Gain * Copy_of_Controller_B.raagpos;
    srUpdateBC(Copy_of_Controller_DW.swing_SubsysRanBC);
  } else if (Copy_of_Controller_DW.swing_MODE) {
    /* Disable for Sum: '<S3>/Sum' incorporates:
     *  Outport: '<S3>/u_out'
     */
    Copy_of_Controller_B.Sum = Copy_of_Controller_P.u_out_Y0_k;
    Copy_of_Controller_DW.swing_MODE = false;
  }

  /* End of Outputs for SubSystem: '<Root>/swing' */

  /* Sum: '<Root>/Sum1' */
  Copy_of_Controller_B.Sum1 = (Copy_of_Controller_B.Sum5 +
    Copy_of_Controller_B.Gain3) + Copy_of_Controller_B.Sum;

  /* SignalConversion generated from: '<Root>/To Workspace' */
  Copy_of_Controller_B.TmpSignalConversionAtToWorkspac[0] =
    Copy_of_Controller_B.Mod;
  Copy_of_Controller_B.TmpSignalConversionAtToWorkspac[1] =
    Copy_of_Controller_B.raagpos;

  /* S-Function (hil_write_analog_block): '<Root>/HIL Write Analog' */

  /* S-Function Block: Copy_of_Controller/HIL Write Analog (hil_write_analog_block) */
  {
    t_error result;
    result = hil_write_analog(Copy_of_Controller_DW.HILInitialize_Card,
      &Copy_of_Controller_P.HILWriteAnalog_channels, 1, &rtb_Saturation);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Copy_of_Controller_M, _rt_error_message);
    }
  }

  /* MinMax: '<S145>/Max' incorporates:
   *  Constant: '<S145>/Time constant'
   */
  if ((Copy_of_Controller_B.Probe_o[0] >=
       Copy_of_Controller_P.LowPassFilterDiscreteorConti_b2) || rtIsNaN
      (Copy_of_Controller_P.LowPassFilterDiscreteorConti_b2)) {
    rtb_Max = Copy_of_Controller_B.Probe_o[0];
  } else {
    rtb_Max = Copy_of_Controller_P.LowPassFilterDiscreteorConti_b2;
  }

  /* End of MinMax: '<S145>/Max' */

  /* Product: '<S142>/1//T' incorporates:
   *  Fcn: '<S145>/Avoid Divide by Zero'
   *  Sum: '<S142>/Sum1'
   */
  Copy_of_Controller_B.uT = 1.0 / ((real_T)(rtb_Max == 0.0) *
    2.2204460492503131e-16 + rtb_Max) * (rtb_Integrator_o - rtb_Saturation_m);

  /* MinMax: '<S152>/Max' incorporates:
   *  Constant: '<S152>/Time constant'
   */
  if ((Copy_of_Controller_B.Probe[0] >=
       Copy_of_Controller_P.LowPassFilterDiscreteorContin_m) || rtIsNaN
      (Copy_of_Controller_P.LowPassFilterDiscreteorContin_m)) {
    rtb_Max = Copy_of_Controller_B.Probe[0];
  } else {
    rtb_Max = Copy_of_Controller_P.LowPassFilterDiscreteorContin_m;
  }

  /* End of MinMax: '<S152>/Max' */

  /* Product: '<S143>/1//T' incorporates:
   *  Fcn: '<S152>/Avoid Divide by Zero'
   *  Sum: '<S143>/Sum1'
   */
  Copy_of_Controller_B.uT_e = 1.0 / ((real_T)(rtb_Max == 0.0) *
    2.2204460492503131e-16 + rtb_Max) * (K - rtb_Saturation_h);

  /* Logic: '<S4>/NOT2' */
  Copy_of_Controller_B.NOT2 = !Copy_of_Controller_B.Swing;

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

  /* Update for Delay: '<Root>/Delay' */
  Copy_of_Controller_DW.Delay_DSTATE = Copy_of_Controller_B.Sum1;

  /* Update for UnitDelay: '<S141>/UD' */
  Copy_of_Controller_DW.UD_DSTATE = Copy_of_Controller_B.TSamp;

  /* Update for DiscreteIntegrator: '<S158>/Integrator' */
  Copy_of_Controller_DW.Integrator_IC_LOADING = 0U;
  Copy_of_Controller_DW.Integrator_DSTATE +=
    Copy_of_Controller_P.Integrator_gainval_m * Copy_of_Controller_B.uT_e;
  if (Copy_of_Controller_DW.Integrator_DSTATE >=
      Copy_of_Controller_P.Integrator_UpperSat_p) {
    Copy_of_Controller_DW.Integrator_DSTATE =
      Copy_of_Controller_P.Integrator_UpperSat_p;
  } else if (Copy_of_Controller_DW.Integrator_DSTATE <=
             Copy_of_Controller_P.Integrator_LowerSat_l) {
    Copy_of_Controller_DW.Integrator_DSTATE =
      Copy_of_Controller_P.Integrator_LowerSat_l;
  }

  Copy_of_Controller_DW.Integrator_PrevResetState = (int8_T)
    Copy_of_Controller_B.LogicalOperator;

  /* End of Update for DiscreteIntegrator: '<S158>/Integrator' */

  /* Update for UnitDelay: '<S140>/UD' */
  Copy_of_Controller_DW.UD_DSTATE_b = Copy_of_Controller_B.TSamp_n;

  /* Update for DiscreteIntegrator: '<S151>/Integrator' */
  Copy_of_Controller_DW.Integrator_IC_LOADING_i = 0U;
  Copy_of_Controller_DW.Integrator_DSTATE_f +=
    Copy_of_Controller_P.Integrator_gainval_o * Copy_of_Controller_B.uT;
  if (Copy_of_Controller_DW.Integrator_DSTATE_f >=
      Copy_of_Controller_P.Integrator_UpperSat_i) {
    Copy_of_Controller_DW.Integrator_DSTATE_f =
      Copy_of_Controller_P.Integrator_UpperSat_i;
  } else if (Copy_of_Controller_DW.Integrator_DSTATE_f <=
             Copy_of_Controller_P.Integrator_LowerSat_k) {
    Copy_of_Controller_DW.Integrator_DSTATE_f =
      Copy_of_Controller_P.Integrator_LowerSat_k;
  }

  Copy_of_Controller_DW.Integrator_PrevResetState_l = (int8_T)
    Copy_of_Controller_B.LogicalOperator_g;

  /* End of Update for DiscreteIntegrator: '<S151>/Integrator' */

  /* Update for Delay: '<S4>/Delay' */
  Copy_of_Controller_DW.Delay_DSTATE_f[0] =
    Copy_of_Controller_DW.Delay_DSTATE_f[1];
  Copy_of_Controller_DW.Delay_DSTATE_f[1] = Copy_of_Controller_B.NOT2;

  /* Update for Enabled SubSystem: '<Root>/down' incorporates:
   *  EnablePort: '<S2>/Enable'
   */
  if (Copy_of_Controller_DW.down_MODE) {
    /* Update for Delay: '<S60>/MemoryX' */
    Copy_of_Controller_DW.icLoad = false;
    for (i = 0; i < 6; i++) {
      Copy_of_Controller_DW.MemoryX_DSTATE[i] = Copy_of_Controller_B.Add[i];
    }

    /* End of Update for Delay: '<S60>/MemoryX' */
  }

  /* End of Update for SubSystem: '<Root>/down' */

  /* Update for Enabled SubSystem: '<Root>/balancing' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (Copy_of_Controller_DW.balancing_MODE) {
    /* Update for Delay: '<S5>/MemoryX' */
    Copy_of_Controller_DW.icLoad_p = false;
    for (i = 0; i < 6; i++) {
      Copy_of_Controller_DW.MemoryX_DSTATE_o[i] = Copy_of_Controller_B.Add_e[i];
    }

    /* End of Update for Delay: '<S5>/MemoryX' */
  }

  /* End of Update for SubSystem: '<Root>/balancing' */

  /* Update for Enabled SubSystem: '<Root>/swing' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  if (Copy_of_Controller_DW.swing_MODE) {
    /* Update for UnitDelay: '<S124>/UD' */
    Copy_of_Controller_DW.UD_DSTATE_j = Copy_of_Controller_B.TSamp_a;

    /* Update for DiscreteIntegrator: '<S132>/Integrator' */
    Copy_of_Controller_DW.Integrator_IC_LOADING_m = 0U;
    Copy_of_Controller_DW.Integrator_DSTATE_i +=
      Copy_of_Controller_P.Integrator_gainval * Copy_of_Controller_B.uT_i;
    if (Copy_of_Controller_DW.Integrator_DSTATE_i >=
        Copy_of_Controller_P.Integrator_UpperSat) {
      Copy_of_Controller_DW.Integrator_DSTATE_i =
        Copy_of_Controller_P.Integrator_UpperSat;
    } else if (Copy_of_Controller_DW.Integrator_DSTATE_i <=
               Copy_of_Controller_P.Integrator_LowerSat) {
      Copy_of_Controller_DW.Integrator_DSTATE_i =
        Copy_of_Controller_P.Integrator_LowerSat;
    }

    Copy_of_Controller_DW.Integrator_PrevResetState_a = (int8_T)
      Copy_of_Controller_B.LogicalOperator_f;

    /* End of Update for DiscreteIntegrator: '<S132>/Integrator' */
  }

  /* End of Update for SubSystem: '<Root>/swing' */

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

  /* Start for Probe: '<S152>/Probe' */
  Copy_of_Controller_B.Probe[0] = 0.001;
  Copy_of_Controller_B.Probe[1] = 0.0;

  /* Start for Probe: '<S145>/Probe' */
  Copy_of_Controller_B.Probe_o[0] = 0.001;
  Copy_of_Controller_B.Probe_o[1] = 0.0;

  /* Start for Enabled SubSystem: '<Root>/down' */
  Copy_of_Controller_DW.down_MODE = false;

  /* Start for Enabled SubSystem: '<S89>/Enabled Subsystem' */
  Copy_of__EnabledSubsystem_Start(&Copy_of_Controller_DW.EnabledSubsystem_p);

  /* End of Start for SubSystem: '<S89>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S82>/MeasurementUpdate' */
  Copy_of_MeasurementUpdate_Start(&Copy_of_Controller_DW.MeasurementUpdate_p);

  /* End of Start for SubSystem: '<S82>/MeasurementUpdate' */
  /* End of Start for SubSystem: '<Root>/down' */

  /* Start for Enabled SubSystem: '<Root>/balancing' */
  Copy_of_Controller_DW.balancing_MODE = false;

  /* Start for Enabled SubSystem: '<S31>/Enabled Subsystem' */
  Copy_of__EnabledSubsystem_Start(&Copy_of_Controller_DW.EnabledSubsystem);

  /* End of Start for SubSystem: '<S31>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S25>/MeasurementUpdate' */
  Copy_of_MeasurementUpdate_Start(&Copy_of_Controller_DW.MeasurementUpdate);

  /* End of Start for SubSystem: '<S25>/MeasurementUpdate' */
  /* End of Start for SubSystem: '<Root>/balancing' */

  /* Start for Enabled SubSystem: '<Root>/swing' */
  Copy_of_Controller_DW.swing_MODE = false;

  /* Start for Probe: '<S126>/Probe' */
  Copy_of_Controller_B.Probe_h[0] = 0.001;
  Copy_of_Controller_B.Probe_h[1] = 0.0;

  /* End of Start for SubSystem: '<Root>/swing' */
  Copy_of_Controller_PrevZCX.MemoryX_Reset_ZCE = POS_ZCSIG;

  /* InitializeConditions for Delay: '<Root>/Delay' */
  Copy_of_Controller_DW.Delay_DSTATE =
    Copy_of_Controller_P.Delay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S141>/UD' */
  Copy_of_Controller_DW.UD_DSTATE =
    Copy_of_Controller_P.DiscreteDerivative1_ICPrevScale;

  /* InitializeConditions for DiscreteIntegrator: '<S158>/Integrator' */
  Copy_of_Controller_DW.Integrator_PrevResetState = 0;
  Copy_of_Controller_DW.Integrator_IC_LOADING = 1U;

  /* InitializeConditions for UnitDelay: '<S140>/UD' */
  Copy_of_Controller_DW.UD_DSTATE_b =
    Copy_of_Controller_P.DiscreteDerivative_ICPrevScal_f;

  /* InitializeConditions for DiscreteIntegrator: '<S151>/Integrator' */
  Copy_of_Controller_DW.Integrator_PrevResetState_l = 0;
  Copy_of_Controller_DW.Integrator_IC_LOADING_i = 1U;

  /* InitializeConditions for Delay: '<S4>/Delay' */
  Copy_of_Controller_DW.Delay_DSTATE_f[0] =
    Copy_of_Controller_P.Delay_InitialCondition_e;
  Copy_of_Controller_DW.Delay_DSTATE_f[1] =
    Copy_of_Controller_P.Delay_InitialCondition_e;

  /* SystemInitialize for Enabled SubSystem: '<S139>/D Latch' */
  /* SystemInitialize for SignalConversion generated from: '<S144>/D' incorporates:
   *  Outport: '<S144>/Q'
   */
  Copy_of_Controller_B.D = Copy_of_Controller_P.Q_Y0;

  /* End of SystemInitialize for SubSystem: '<S139>/D Latch' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/down' */
  /* InitializeConditions for Delay: '<S60>/MemoryX' */
  Copy_of_Controller_DW.icLoad = true;

  /* SystemInitialize for Enabled SubSystem: '<S89>/Enabled Subsystem' */
  Copy_of_C_EnabledSubsystem_Init(&Copy_of_Controller_B.EnabledSubsystem_p,
    &Copy_of_Controller_P.EnabledSubsystem_p);

  /* End of SystemInitialize for SubSystem: '<S89>/Enabled Subsystem' */

  /* SystemInitialize for MATLAB Function: '<S111>/SqrtUsedFcn' */
  Copy_of_Contro_SqrtUsedFcn_Init(&Copy_of_Controller_DW.sf_SqrtUsedFcn_m);

  /* SystemInitialize for Enabled SubSystem: '<S82>/MeasurementUpdate' */
  Copy_of__MeasurementUpdate_Init(&Copy_of_Controller_B.MeasurementUpdate_p,
    &Copy_of_Controller_P.MeasurementUpdate_p);

  /* End of SystemInitialize for SubSystem: '<S82>/MeasurementUpdate' */

  /* SystemInitialize for Sum: '<S2>/Sum5' incorporates:
   *  Outport: '<S2>/u_out'
   */
  Copy_of_Controller_B.Sum5 = Copy_of_Controller_P.u_out_Y0_h;

  /* End of SystemInitialize for SubSystem: '<Root>/down' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/balancing' */
  /* InitializeConditions for Delay: '<S5>/MemoryX' */
  Copy_of_Controller_DW.icLoad_p = true;

  /* SystemInitialize for Enabled SubSystem: '<S31>/Enabled Subsystem' */
  Copy_of_C_EnabledSubsystem_Init(&Copy_of_Controller_B.EnabledSubsystem,
    &Copy_of_Controller_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S31>/Enabled Subsystem' */

  /* SystemInitialize for MATLAB Function: '<S53>/SqrtUsedFcn' */
  Copy_of_Contro_SqrtUsedFcn_Init(&Copy_of_Controller_DW.sf_SqrtUsedFcn);

  /* SystemInitialize for Enabled SubSystem: '<S25>/MeasurementUpdate' */
  Copy_of__MeasurementUpdate_Init(&Copy_of_Controller_B.MeasurementUpdate,
    &Copy_of_Controller_P.MeasurementUpdate);

  /* End of SystemInitialize for SubSystem: '<S25>/MeasurementUpdate' */

  /* SystemInitialize for Gain: '<S1>/Gain3' incorporates:
   *  Outport: '<S1>/u_out'
   */
  Copy_of_Controller_B.Gain3 = Copy_of_Controller_P.u_out_Y0;

  /* End of SystemInitialize for SubSystem: '<Root>/balancing' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/swing' */
  /* InitializeConditions for UnitDelay: '<S124>/UD' */
  Copy_of_Controller_DW.UD_DSTATE_j =
    Copy_of_Controller_P.DiscreteDerivative_ICPrevScaled;

  /* InitializeConditions for DiscreteIntegrator: '<S132>/Integrator' */
  Copy_of_Controller_DW.Integrator_PrevResetState_a = 0;
  Copy_of_Controller_DW.Integrator_IC_LOADING_m = 1U;

  /* SystemInitialize for Sum: '<S3>/Sum' incorporates:
   *  Outport: '<S3>/u_out'
   */
  Copy_of_Controller_B.Sum = Copy_of_Controller_P.u_out_Y0_k;

  /* End of SystemInitialize for SubSystem: '<Root>/swing' */
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

  /* non-finite (run-time) assignments */
  Copy_of_Controller_P.Integrator_UpperSat = rtInf;
  Copy_of_Controller_P.Integrator_LowerSat = rtMinusInf;
  Copy_of_Controller_P.Saturation_UpperSat = rtInf;
  Copy_of_Controller_P.Saturation_LowerSat = rtMinusInf;
  Copy_of_Controller_P.Integrator_UpperSat_p = rtInf;
  Copy_of_Controller_P.Integrator_LowerSat_l = rtMinusInf;
  Copy_of_Controller_P.Saturation_UpperSat_m = rtInf;
  Copy_of_Controller_P.Saturation_LowerSat_j = rtMinusInf;
  Copy_of_Controller_P.Integrator_UpperSat_i = rtInf;
  Copy_of_Controller_P.Integrator_LowerSat_k = rtMinusInf;
  Copy_of_Controller_P.Saturation_UpperSat_c = rtInf;
  Copy_of_Controller_P.Saturation_LowerSat_jk = rtMinusInf;

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
  Copy_of_Controller_M->Sizes.checksums[0] = (1794288917U);
  Copy_of_Controller_M->Sizes.checksums[1] = (2350996517U);
  Copy_of_Controller_M->Sizes.checksums[2] = (4006753025U);
  Copy_of_Controller_M->Sizes.checksums[3] = (1749609029U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[11];
    Copy_of_Controller_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)&Copy_of_Controller_DW.balancing_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &Copy_of_Controller_DW.MeasurementUpdate.MeasurementUpdate_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &Copy_of_Controller_DW.EnabledSubsystem.EnabledSubsystem_SubsysRanBC;
    systemRan[4] = (sysRanDType *)&Copy_of_Controller_DW.balancing_SubsysRanBC;
    systemRan[5] = (sysRanDType *)&Copy_of_Controller_DW.down_SubsysRanBC;
    systemRan[6] = (sysRanDType *)
      &Copy_of_Controller_DW.MeasurementUpdate_p.MeasurementUpdate_SubsysRanBC;
    systemRan[7] = (sysRanDType *)
      &Copy_of_Controller_DW.EnabledSubsystem_p.EnabledSubsystem_SubsysRanBC;
    systemRan[8] = (sysRanDType *)&Copy_of_Controller_DW.down_SubsysRanBC;
    systemRan[9] = (sysRanDType *)&Copy_of_Controller_DW.swing_SubsysRanBC;
    systemRan[10] = (sysRanDType *)&Copy_of_Controller_DW.DLatch_SubsysRanBC;
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
  Copy_of_Controller_M->Sizes.numBlocks = (177);/* Number of blocks */
  Copy_of_Controller_M->Sizes.numBlockIO = (37);/* Number of block outputs */
  Copy_of_Controller_M->Sizes.numBlockPrms = (408);/* Sum of parameter "widths" */
  return Copy_of_Controller_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
