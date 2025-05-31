/*
 * Copy_of_Controller_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Copy_of_Controller".
 *
 * Model version              : 1.28
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Fri May 30 18:03:49 2025
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Copy_of_Controller_private_h_
#define RTW_HEADER_Copy_of_Controller_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "Copy_of_Controller.h"
#include "Copy_of_Controller_types.h"

/* A global buffer for storing error messages (defined in quanser_common library) */
EXTERN char _rt_error_message[512];
extern real_T rt_modd_snf(real_T u0, real_T u1);
extern void Copy_of_Contro_SqrtUsedFcn_Init(DW_SqrtUsedFcn_Copy_of_Contro_T
  *localDW);
extern void Copy_of_Contr_SqrtUsedFcn_Reset(DW_SqrtUsedFcn_Copy_of_Contro_T
  *localDW);
extern void Copy_of_Controller_SqrtUsedFcn(DW_SqrtUsedFcn_Copy_of_Contro_T
  *localDW);
extern void Copy_of__MeasurementUpdate_Init(B_MeasurementUpdate_Copy_of_C_T
  *localB, P_MeasurementUpdate_Copy_of_C_T *localP);
extern void Copy_of_MeasurementUpdate_Start(DW_MeasurementUpdate_Copy_of__T
  *localDW);
extern void Copy__MeasurementUpdate_Disable(B_MeasurementUpdate_Copy_of_C_T
  *localB, DW_MeasurementUpdate_Copy_of__T *localDW,
  P_MeasurementUpdate_Copy_of_C_T *localP);
extern void Copy_of_Contr_MeasurementUpdate(boolean_T rtu_Enable, const real_T
  rtu_Lk[12], const real_T rtu_yk[2], const real_T rtu_Ck[12], const real_T
  rtu_xhatkk1[6], const real_T rtu_Dk[2], real_T rtu_uk,
  B_MeasurementUpdate_Copy_of_C_T *localB, DW_MeasurementUpdate_Copy_of__T
  *localDW, P_MeasurementUpdate_Copy_of_C_T *localP);
extern void Copy_of_C_EnabledSubsystem_Init(B_EnabledSubsystem_Copy_of_Co_T
  *localB, P_EnabledSubsystem_Copy_of_Co_T *localP);
extern void Copy_of__EnabledSubsystem_Start(DW_EnabledSubsystem_Copy_of_C_T
  *localDW);
extern void Copy_o_EnabledSubsystem_Disable(B_EnabledSubsystem_Copy_of_Co_T
  *localB, DW_EnabledSubsystem_Copy_of_C_T *localDW,
  P_EnabledSubsystem_Copy_of_Co_T *localP);
extern void Copy_of_Contro_EnabledSubsystem(boolean_T rtu_Enable, const real_T
  rtu_Mk[12], const real_T rtu_Ck[12], const real_T rtu_yk[2], const real_T
  rtu_xhatkk1[6], B_EnabledSubsystem_Copy_of_Co_T *localB,
  DW_EnabledSubsystem_Copy_of_C_T *localDW, P_EnabledSubsystem_Copy_of_Co_T
  *localP);

#endif                            /* RTW_HEADER_Copy_of_Controller_private_h_ */
