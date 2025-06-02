/*
 * Copy_of_Controller_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Copy_of_Controller".
 *
 * Model version              : 1.30
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Mon Jun  2 10:03:15 2025
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(int32_T),
  sizeof(t_card),
  sizeof(uint_T),
  sizeof(char_T),
  sizeof(uchar_T),
  sizeof(time_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "physical_connection",
  "t_card",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&Copy_of_Controller_B.Mod), 0, 0, 33 },

  { (char_T *)(&Copy_of_Controller_B.Compare), 8, 0, 8 },

  { (char_T *)(&Copy_of_Controller_B.EnabledSubsystem_p.Product2[0]), 0, 0, 6 },

  { (char_T *)(&Copy_of_Controller_B.MeasurementUpdate_p.Product3[0]), 0, 0, 6 },

  { (char_T *)(&Copy_of_Controller_B.EnabledSubsystem.Product2[0]), 0, 0, 6 },

  { (char_T *)(&Copy_of_Controller_B.MeasurementUpdate.Product3[0]), 0, 0, 6 }
  ,

  { (char_T *)(&Copy_of_Controller_DW.Delay_DSTATE), 0, 0, 43 },

  { (char_T *)(&Copy_of_Controller_DW.HILInitialize_Card), 15, 0, 1 },

  { (char_T *)(&Copy_of_Controller_DW.cartangle_PWORK), 11, 0, 11 },

  { (char_T *)(&Copy_of_Controller_DW.HILInitialize_QuadratureModes[0]), 6, 0,
    10 },

  { (char_T *)(&Copy_of_Controller_DW.Delay_DSTATE_f[0]), 8, 0, 2 },

  { (char_T *)(&Copy_of_Controller_DW.Integrator_PrevResetState), 2, 0, 7 },

  { (char_T *)(&Copy_of_Controller_DW.Integrator_IC_LOADING), 3, 0, 3 },

  { (char_T *)(&Copy_of_Controller_DW.icLoad), 8, 0, 5 },

  { (char_T *)
    (&Copy_of_Controller_DW.EnabledSubsystem_p.EnabledSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&Copy_of_Controller_DW.EnabledSubsystem_p.EnabledSubsystem_MODE),
    8, 0, 1 },

  { (char_T *)
    (&Copy_of_Controller_DW.MeasurementUpdate_p.MeasurementUpdate_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Copy_of_Controller_DW.MeasurementUpdate_p.MeasurementUpdate_MODE),
    8, 0, 1 },

  { (char_T *)(&Copy_of_Controller_DW.sf_SqrtUsedFcn_m.sfEvent), 6, 0, 1 },

  { (char_T *)
    (&Copy_of_Controller_DW.sf_SqrtUsedFcn_m.is_active_c7_ctrlSharedLib), 3, 0,
    1 },

  { (char_T *)(&Copy_of_Controller_DW.sf_SqrtUsedFcn_m.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)
    (&Copy_of_Controller_DW.EnabledSubsystem.EnabledSubsystem_SubsysRanBC), 2, 0,
    1 },

  { (char_T *)(&Copy_of_Controller_DW.EnabledSubsystem.EnabledSubsystem_MODE), 8,
    0, 1 },

  { (char_T *)
    (&Copy_of_Controller_DW.MeasurementUpdate.MeasurementUpdate_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&Copy_of_Controller_DW.MeasurementUpdate.MeasurementUpdate_MODE),
    8, 0, 1 },

  { (char_T *)(&Copy_of_Controller_DW.sf_SqrtUsedFcn.sfEvent), 6, 0, 1 },

  { (char_T *)(&Copy_of_Controller_DW.sf_SqrtUsedFcn.is_active_c7_ctrlSharedLib),
    3, 0, 1 },

  { (char_T *)(&Copy_of_Controller_DW.sf_SqrtUsedFcn.doneDoubleBufferReInit), 8,
    0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  28U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&Copy_of_Controller_P.K[0]), 0, 0, 34 },

  { (char_T *)(&Copy_of_Controller_P.cartangle_channels), 7, 0, 3 },

  { (char_T *)(&Copy_of_Controller_P.u_out_Y0), 0, 0, 302 },

  { (char_T *)(&Copy_of_Controller_P.HILInitialize_CKChannels[0]), 6, 0, 7 },

  { (char_T *)(&Copy_of_Controller_P.HILInitialize_AIChannels[0]), 7, 0, 13 },

  { (char_T *)(&Copy_of_Controller_P.Enable_Value), 8, 0, 45 },

  { (char_T *)(&Copy_of_Controller_P.EnabledSubsystem_p.deltax_Y0), 0, 0, 1 },

  { (char_T *)(&Copy_of_Controller_P.MeasurementUpdate_p.Lykyhatkk1_Y0), 0, 0, 1
  },

  { (char_T *)(&Copy_of_Controller_P.EnabledSubsystem.deltax_Y0), 0, 0, 1 },

  { (char_T *)(&Copy_of_Controller_P.MeasurementUpdate.Lykyhatkk1_Y0), 0, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  10U,
  rtPTransitions
};

/* [EOF] Copy_of_Controller_dt.h */
