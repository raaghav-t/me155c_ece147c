/*
 * ModelId.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ModelId".
 *
 * Model version              : 1.9
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Wed May 28 17:24:52 2025
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ModelId.h"
#include <math.h>
#include "rtwtypes.h"
#include "ModelId_private.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "ModelId_dt.h"

/* Block signals (default storage) */
B_ModelId_T ModelId_B;

/* Block states (default storage) */
DW_ModelId_T ModelId_DW;

/* Real-time model */
static RT_MODEL_ModelId_T ModelId_M_;
RT_MODEL_ModelId_T *const ModelId_M = &ModelId_M_;

/* Model output function */
void ModelId_output(void)
{
  real_T rtb_SineWave;

  /* S-Function (hil_read_encoder_block): '<Root>/HIL Read Encoder1' */

  /* S-Function Block: ModelId/HIL Read Encoder1 (hil_read_encoder_block) */
  {
    t_error result = hil_read_encoder(ModelId_DW.HILInitialize_Card,
      &ModelId_P.HILReadEncoder1_channels, 1, &ModelId_DW.HILReadEncoder1_Buffer);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(ModelId_M, _rt_error_message);
    } else {
      rtb_SineWave = ModelId_DW.HILReadEncoder1_Buffer;
    }
  }

  /* Gain: '<Root>/Gain1' */
  ModelId_B.raag = ModelId_P.Gain1_Gain * rtb_SineWave;

  /* S-Function (hil_read_encoder_block): '<Root>/HIL Read Encoder' */

  /* S-Function Block: ModelId/HIL Read Encoder (hil_read_encoder_block) */
  {
    t_error result = hil_read_encoder(ModelId_DW.HILInitialize_Card,
      &ModelId_P.HILReadEncoder_channels, 1, &ModelId_DW.HILReadEncoder_Buffer);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(ModelId_M, _rt_error_message);
    } else {
      rtb_SineWave = ModelId_DW.HILReadEncoder_Buffer;
    }
  }

  /* Gain: '<Root>/Gain' */
  ModelId_B.raag_l = ModelId_P.Gain_Gain * rtb_SineWave;

  /* SignalConversion generated from: '<Root>/To Workspace' */
  ModelId_B.TmpSignalConversionAtToWorkspac[0] = ModelId_B.raag;
  ModelId_B.TmpSignalConversionAtToWorkspac[1] = ModelId_B.raag_l;

  /* Sin: '<Root>/Sine Wave' */
  if (ModelId_DW.systemEnable != 0) {
    rtb_SineWave = ModelId_P.omega * ModelId_M->Timing.t[1];
    ModelId_DW.lastSin = sin(rtb_SineWave);
    ModelId_DW.lastCos = cos(rtb_SineWave);
    ModelId_DW.systemEnable = 0;
  }

  rtb_SineWave = ((ModelId_DW.lastSin * ModelId_P.SineWave_PCos +
                   ModelId_DW.lastCos * ModelId_P.SineWave_PSin) *
                  ModelId_P.SineWave_HCos + (ModelId_DW.lastCos *
    ModelId_P.SineWave_PCos - ModelId_DW.lastSin * ModelId_P.SineWave_PSin) *
                  ModelId_P.SineWave_Hsin) * ModelId_P.amp +
    ModelId_P.SineWave_Bias;

  /* End of Sin: '<Root>/Sine Wave' */

  /* S-Function (hil_write_analog_block): '<Root>/HIL Write Analog' */

  /* S-Function Block: ModelId/HIL Write Analog (hil_write_analog_block) */
  {
    t_error result;
    result = hil_write_analog(ModelId_DW.HILInitialize_Card,
      &ModelId_P.HILWriteAnalog_channels, 1, &rtb_SineWave);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(ModelId_M, _rt_error_message);
    }
  }

  /* Step: '<Root>/Step' */
  if (ModelId_M->Timing.t[0] < ModelId_P.Step_Time) {
    /* Step: '<Root>/Step' */
    ModelId_B.Step = ModelId_P.Step_Y0;
  } else {
    /* Step: '<Root>/Step' */
    ModelId_B.Step = ModelId_P.Step_YFinal;
  }

  /* End of Step: '<Root>/Step' */
}

/* Model update function */
void ModelId_update(void)
{
  real_T HoldSine;

  /* Update for Sin: '<Root>/Sine Wave' */
  HoldSine = ModelId_DW.lastSin;
  ModelId_DW.lastSin = ModelId_DW.lastSin * ModelId_P.SineWave_HCos +
    ModelId_DW.lastCos * ModelId_P.SineWave_Hsin;
  ModelId_DW.lastCos = ModelId_DW.lastCos * ModelId_P.SineWave_HCos - HoldSine *
    ModelId_P.SineWave_Hsin;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++ModelId_M->Timing.clockTick0)) {
    ++ModelId_M->Timing.clockTickH0;
  }

  ModelId_M->Timing.t[0] = ModelId_M->Timing.clockTick0 *
    ModelId_M->Timing.stepSize0 + ModelId_M->Timing.clockTickH0 *
    ModelId_M->Timing.stepSize0 * 4294967296.0;

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
    if (!(++ModelId_M->Timing.clockTick1)) {
      ++ModelId_M->Timing.clockTickH1;
    }

    ModelId_M->Timing.t[1] = ModelId_M->Timing.clockTick1 *
      ModelId_M->Timing.stepSize1 + ModelId_M->Timing.clockTickH1 *
      ModelId_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void ModelId_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: ModelId/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("q4", "0", &ModelId_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(ModelId_M, _rt_error_message);
      return;
    }

    is_switching = false;
    if ((ModelId_P.HILInitialize_CKPStart && !is_switching) ||
        (ModelId_P.HILInitialize_CKPEnter && is_switching)) {
      result = hil_set_clock_mode(ModelId_DW.HILInitialize_Card, (t_clock *)
        ModelId_P.HILInitialize_CKChannels, 2U, (t_clock_mode *)
        ModelId_P.HILInitialize_CKModes);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(ModelId_M, _rt_error_message);
        return;
      }
    }

    result = hil_watchdog_clear(ModelId_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(ModelId_M, _rt_error_message);
      return;
    }

    if ((ModelId_P.HILInitialize_AIPStart && !is_switching) ||
        (ModelId_P.HILInitialize_AIPEnter && is_switching)) {
      ModelId_DW.HILInitialize_AIMinimums[0] = (ModelId_P.HILInitialize_AILow);
      ModelId_DW.HILInitialize_AIMinimums[1] = (ModelId_P.HILInitialize_AILow);
      ModelId_DW.HILInitialize_AIMinimums[2] = (ModelId_P.HILInitialize_AILow);
      ModelId_DW.HILInitialize_AIMinimums[3] = (ModelId_P.HILInitialize_AILow);
      ModelId_DW.HILInitialize_AIMaximums[0] = ModelId_P.HILInitialize_AIHigh;
      ModelId_DW.HILInitialize_AIMaximums[1] = ModelId_P.HILInitialize_AIHigh;
      ModelId_DW.HILInitialize_AIMaximums[2] = ModelId_P.HILInitialize_AIHigh;
      ModelId_DW.HILInitialize_AIMaximums[3] = ModelId_P.HILInitialize_AIHigh;
      result = hil_set_analog_input_ranges(ModelId_DW.HILInitialize_Card,
        ModelId_P.HILInitialize_AIChannels, 4U,
        &ModelId_DW.HILInitialize_AIMinimums[0],
        &ModelId_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(ModelId_M, _rt_error_message);
        return;
      }
    }

    if ((ModelId_P.HILInitialize_AOPStart && !is_switching) ||
        (ModelId_P.HILInitialize_AOPEnter && is_switching)) {
      ModelId_DW.HILInitialize_AOMinimums[0] = (ModelId_P.HILInitialize_AOLow);
      ModelId_DW.HILInitialize_AOMinimums[1] = (ModelId_P.HILInitialize_AOLow);
      ModelId_DW.HILInitialize_AOMinimums[2] = (ModelId_P.HILInitialize_AOLow);
      ModelId_DW.HILInitialize_AOMinimums[3] = (ModelId_P.HILInitialize_AOLow);
      ModelId_DW.HILInitialize_AOMaximums[0] = ModelId_P.HILInitialize_AOHigh;
      ModelId_DW.HILInitialize_AOMaximums[1] = ModelId_P.HILInitialize_AOHigh;
      ModelId_DW.HILInitialize_AOMaximums[2] = ModelId_P.HILInitialize_AOHigh;
      ModelId_DW.HILInitialize_AOMaximums[3] = ModelId_P.HILInitialize_AOHigh;
      result = hil_set_analog_output_ranges(ModelId_DW.HILInitialize_Card,
        ModelId_P.HILInitialize_AOChannels, 4U,
        &ModelId_DW.HILInitialize_AOMinimums[0],
        &ModelId_DW.HILInitialize_AOMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(ModelId_M, _rt_error_message);
        return;
      }
    }

    if ((ModelId_P.HILInitialize_AOStart && !is_switching) ||
        (ModelId_P.HILInitialize_AOEnter && is_switching)) {
      ModelId_DW.HILInitialize_AOVoltages[0] = ModelId_P.HILInitialize_AOInitial;
      ModelId_DW.HILInitialize_AOVoltages[1] = ModelId_P.HILInitialize_AOInitial;
      ModelId_DW.HILInitialize_AOVoltages[2] = ModelId_P.HILInitialize_AOInitial;
      ModelId_DW.HILInitialize_AOVoltages[3] = ModelId_P.HILInitialize_AOInitial;
      result = hil_write_analog(ModelId_DW.HILInitialize_Card,
        ModelId_P.HILInitialize_AOChannels, 4U,
        &ModelId_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(ModelId_M, _rt_error_message);
        return;
      }
    }

    if (ModelId_P.HILInitialize_AOReset) {
      ModelId_DW.HILInitialize_AOVoltages[0] =
        ModelId_P.HILInitialize_AOWatchdog;
      ModelId_DW.HILInitialize_AOVoltages[1] =
        ModelId_P.HILInitialize_AOWatchdog;
      ModelId_DW.HILInitialize_AOVoltages[2] =
        ModelId_P.HILInitialize_AOWatchdog;
      ModelId_DW.HILInitialize_AOVoltages[3] =
        ModelId_P.HILInitialize_AOWatchdog;
      result = hil_watchdog_set_analog_expiration_state
        (ModelId_DW.HILInitialize_Card, ModelId_P.HILInitialize_AOChannels, 4U,
         &ModelId_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(ModelId_M, _rt_error_message);
        return;
      }
    }

    if ((ModelId_P.HILInitialize_EIPStart && !is_switching) ||
        (ModelId_P.HILInitialize_EIPEnter && is_switching)) {
      ModelId_DW.HILInitialize_QuadratureModes[0] =
        ModelId_P.HILInitialize_EIQuadrature;
      ModelId_DW.HILInitialize_QuadratureModes[1] =
        ModelId_P.HILInitialize_EIQuadrature;
      ModelId_DW.HILInitialize_QuadratureModes[2] =
        ModelId_P.HILInitialize_EIQuadrature;
      ModelId_DW.HILInitialize_QuadratureModes[3] =
        ModelId_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode(ModelId_DW.HILInitialize_Card,
        ModelId_P.HILInitialize_EIChannels, 4U, (t_encoder_quadrature_mode *)
        &ModelId_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(ModelId_M, _rt_error_message);
        return;
      }

      ModelId_DW.HILInitialize_FilterFrequency[0] =
        ModelId_P.HILInitialize_EIFrequency;
      ModelId_DW.HILInitialize_FilterFrequency[1] =
        ModelId_P.HILInitialize_EIFrequency;
      ModelId_DW.HILInitialize_FilterFrequency[2] =
        ModelId_P.HILInitialize_EIFrequency;
      ModelId_DW.HILInitialize_FilterFrequency[3] =
        ModelId_P.HILInitialize_EIFrequency;
      result = hil_set_encoder_filter_frequency(ModelId_DW.HILInitialize_Card,
        ModelId_P.HILInitialize_EIChannels, 4U,
        &ModelId_DW.HILInitialize_FilterFrequency[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(ModelId_M, _rt_error_message);
        return;
      }
    }

    if ((ModelId_P.HILInitialize_EIStart && !is_switching) ||
        (ModelId_P.HILInitialize_EIEnter && is_switching)) {
      ModelId_DW.HILInitialize_InitialEICounts[0] =
        ModelId_P.HILInitialize_EIInitial;
      ModelId_DW.HILInitialize_InitialEICounts[1] =
        ModelId_P.HILInitialize_EIInitial;
      ModelId_DW.HILInitialize_InitialEICounts[2] =
        ModelId_P.HILInitialize_EIInitial;
      ModelId_DW.HILInitialize_InitialEICounts[3] =
        ModelId_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts(ModelId_DW.HILInitialize_Card,
        ModelId_P.HILInitialize_EIChannels, 4U,
        &ModelId_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(ModelId_M, _rt_error_message);
        return;
      }
    }
  }

  /* Enable for Sin: '<Root>/Sine Wave' */
  ModelId_DW.systemEnable = 1;
}

/* Model terminate function */
void ModelId_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: ModelId/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_analog_outputs = 0;
    hil_task_stop_all(ModelId_DW.HILInitialize_Card);
    hil_monitor_stop_all(ModelId_DW.HILInitialize_Card);
    is_switching = false;
    if ((ModelId_P.HILInitialize_AOTerminate && !is_switching) ||
        (ModelId_P.HILInitialize_AOExit && is_switching)) {
      ModelId_DW.HILInitialize_AOVoltages[0] = ModelId_P.HILInitialize_AOFinal;
      ModelId_DW.HILInitialize_AOVoltages[1] = ModelId_P.HILInitialize_AOFinal;
      ModelId_DW.HILInitialize_AOVoltages[2] = ModelId_P.HILInitialize_AOFinal;
      ModelId_DW.HILInitialize_AOVoltages[3] = ModelId_P.HILInitialize_AOFinal;
      num_final_analog_outputs = 4U;
    } else {
      num_final_analog_outputs = 0;
    }

    if (num_final_analog_outputs > 0) {
      result = hil_write_analog(ModelId_DW.HILInitialize_Card,
        ModelId_P.HILInitialize_AOChannels, num_final_analog_outputs,
        &ModelId_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(ModelId_M, _rt_error_message);
      }
    }

    hil_task_delete_all(ModelId_DW.HILInitialize_Card);
    hil_monitor_delete_all(ModelId_DW.HILInitialize_Card);
    hil_close(ModelId_DW.HILInitialize_Card);
    ModelId_DW.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  ModelId_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  ModelId_update();
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
  ModelId_initialize();
}

void MdlTerminate(void)
{
  ModelId_terminate();
}

/* Registration function */
RT_MODEL_ModelId_T *ModelId(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)ModelId_M, 0,
                sizeof(RT_MODEL_ModelId_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&ModelId_M->solverInfo, &ModelId_M->Timing.simTimeStep);
    rtsiSetTPtr(&ModelId_M->solverInfo, &rtmGetTPtr(ModelId_M));
    rtsiSetStepSizePtr(&ModelId_M->solverInfo, &ModelId_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&ModelId_M->solverInfo, (&rtmGetErrorStatus(ModelId_M)));
    rtsiSetRTModelPtr(&ModelId_M->solverInfo, ModelId_M);
  }

  rtsiSetSimTimeStep(&ModelId_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&ModelId_M->solverInfo,"FixedStepDiscrete");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = ModelId_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "ModelId_M points to
       static memory which is guaranteed to be non-NULL" */
    ModelId_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    ModelId_M->Timing.sampleTimes = (&ModelId_M->Timing.sampleTimesArray[0]);
    ModelId_M->Timing.offsetTimes = (&ModelId_M->Timing.offsetTimesArray[0]);

    /* task periods */
    ModelId_M->Timing.sampleTimes[0] = (0.0);
    ModelId_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    ModelId_M->Timing.offsetTimes[0] = (0.0);
    ModelId_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(ModelId_M, &ModelId_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = ModelId_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    ModelId_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ModelId_M, 20.0);
  ModelId_M->Timing.stepSize0 = 0.001;
  ModelId_M->Timing.stepSize1 = 0.001;

  /* External mode info */
  ModelId_M->Sizes.checksums[0] = (2360895015U);
  ModelId_M->Sizes.checksums[1] = (2979776365U);
  ModelId_M->Sizes.checksums[2] = (865730980U);
  ModelId_M->Sizes.checksums[3] = (2147552012U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    ModelId_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(ModelId_M->extModeInfo,
      &ModelId_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(ModelId_M->extModeInfo, ModelId_M->Sizes.checksums);
    rteiSetTPtr(ModelId_M->extModeInfo, rtmGetTPtr(ModelId_M));
  }

  ModelId_M->solverInfoPtr = (&ModelId_M->solverInfo);
  ModelId_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&ModelId_M->solverInfo, 0.001);
  rtsiSetSolverMode(&ModelId_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  ModelId_M->blockIO = ((void *) &ModelId_B);
  (void) memset(((void *) &ModelId_B), 0,
                sizeof(B_ModelId_T));

  /* parameters */
  ModelId_M->defaultParam = ((real_T *)&ModelId_P);

  /* states (dwork) */
  ModelId_M->dwork = ((void *) &ModelId_DW);
  (void) memset((void *)&ModelId_DW, 0,
                sizeof(DW_ModelId_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    ModelId_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 20;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  ModelId_M->Sizes.numContStates = (0);/* Number of continuous states */
  ModelId_M->Sizes.numY = (0);         /* Number of model outputs */
  ModelId_M->Sizes.numU = (0);         /* Number of model inputs */
  ModelId_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  ModelId_M->Sizes.numSampTimes = (2); /* Number of sample times */
  ModelId_M->Sizes.numBlocks = (12);   /* Number of blocks */
  ModelId_M->Sizes.numBlockIO = (4);   /* Number of block outputs */
  ModelId_M->Sizes.numBlockPrms = (88);/* Sum of parameter "widths" */
  return ModelId_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
