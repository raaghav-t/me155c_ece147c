/*
 * Copy_of_Controller.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Copy_of_Controller".
 *
 * Model version              : 1.31
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Mon Jun  2 19:03:51 2025
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Copy_of_Controller_h_
#define RTW_HEADER_Copy_of_Controller_h_
#ifndef Copy_of_Controller_COMMON_INCLUDES_
#define Copy_of_Controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "hil.h"
#include "quanser_messages.h"
#include "quanser_extern.h"
#endif                                 /* Copy_of_Controller_COMMON_INCLUDES_ */

#include "Copy_of_Controller_types.h"
#include "rtGetNaN.h"
#include "rt_defines.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ()
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ()
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ()
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ()
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTimerIndices
#define rtmGetMdlRefGlobalTimerIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalTimerIndices
#define rtmSetMdlRefGlobalTimerIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ()
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ()
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ()
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ()
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ()
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ()
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ()
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ()
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ()
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define Copy_of_Controller_rtModel     RT_MODEL_Copy_of_Controller_T

/* Block states (default storage) for system '<S62>/SqrtUsedFcn' */
typedef struct {
  int32_T sfEvent;                     /* '<S62>/SqrtUsedFcn' */
  uint8_T is_active_c7_ctrlSharedLib;  /* '<S62>/SqrtUsedFcn' */
  boolean_T doneDoubleBufferReInit;    /* '<S62>/SqrtUsedFcn' */
} DW_SqrtUsedFcn_Copy_of_Contro_T;

/* Block signals for system '<S34>/MeasurementUpdate' */
typedef struct {
  real_T Product3[6];                  /* '<S64>/Product3' */
} B_MeasurementUpdate_Copy_of_C_T;

/* Block states (default storage) for system '<S34>/MeasurementUpdate' */
typedef struct {
  int8_T MeasurementUpdate_SubsysRanBC;/* '<S34>/MeasurementUpdate' */
  boolean_T MeasurementUpdate_MODE;    /* '<S34>/MeasurementUpdate' */
} DW_MeasurementUpdate_Copy_of__T;

/* Block signals for system '<S40>/Enabled Subsystem' */
typedef struct {
  real_T Product2[6];                  /* '<S66>/Product2' */
} B_EnabledSubsystem_Copy_of_Co_T;

/* Block states (default storage) for system '<S40>/Enabled Subsystem' */
typedef struct {
  int8_T EnabledSubsystem_SubsysRanBC; /* '<S40>/Enabled Subsystem' */
  boolean_T EnabledSubsystem_MODE;     /* '<S40>/Enabled Subsystem' */
} DW_EnabledSubsystem_Copy_of_C_T;

/* Block signals (default storage) */
typedef struct {
  real_T Mod;                          /* '<Root>/Mod' */
  real_T raagpos;                      /* '<Root>/Gain2' */
  real_T Probe[2];                     /* '<S163>/Probe' */
  real_T TSamp;                        /* '<S152>/TSamp' */
  real_T Probe_o[2];                   /* '<S156>/Probe' */
  real_T TSamp_n;                      /* '<S151>/TSamp' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T TmpSignalConversionAtToWorkspac[2];
  real_T uT;                           /* '<S153>/1//T' */
  real_T uT_e;                         /* '<S154>/1//T' */
  real_T Step;                         /* '<Root>/Step' */
  real_T TSamp_a;                      /* '<S133>/TSamp' */
  real_T Probe_h[2];                   /* '<S135>/Probe' */
  real_T uT_i;                         /* '<S134>/1//T' */
  real_T Sum;                          /* '<S4>/Sum' */
  real_T Add[6];                       /* '<S91>/Add' */
  real_T Sum5;                         /* '<S3>/Sum5' */
  real_T Gain3;                        /* '<S2>/Gain3' */
  real_T Add_e[6];                     /* '<S34>/Add' */
  real_T DiscreteTimeIntegrator;       /* '<S1>/Discrete-Time Integrator' */
  real_T Probe_b[2];                   /* '<S7>/Probe' */
  real_T Saturation;                   /* '<S13>/Saturation' */
  real_T uT_o;                         /* '<S6>/1//T' */
  boolean_T Compare;                   /* '<S142>/Compare' */
  boolean_T LogicalOperator;           /* '<S163>/Logical Operator' */
  boolean_T LogicalOperator_g;         /* '<S156>/Logical Operator' */
  boolean_T Down;                      /* '<S5>/Down' */
  boolean_T Swing;                     /* '<S5>/Swing' */
  boolean_T NOT2;                      /* '<S5>/NOT2' */
  boolean_T D;                         /* '<S155>/D' */
  boolean_T LogicalOperator_f;         /* '<S135>/Logical Operator' */
  boolean_T LogicalOperator_c;         /* '<S7>/Logical Operator' */
  B_EnabledSubsystem_Copy_of_Co_T EnabledSubsystem_p;/* '<S98>/Enabled Subsystem' */
  B_MeasurementUpdate_Copy_of_C_T MeasurementUpdate_p;/* '<S91>/MeasurementUpdate' */
  B_EnabledSubsystem_Copy_of_Co_T EnabledSubsystem;/* '<S40>/Enabled Subsystem' */
  B_MeasurementUpdate_Copy_of_C_T MeasurementUpdate;/* '<S34>/MeasurementUpdate' */
} B_Copy_of_Controller_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Delay_DSTATE;                 /* '<Root>/Delay' */
  real_T UD_DSTATE;                    /* '<S152>/UD' */
  real_T Integrator_DSTATE;            /* '<S169>/Integrator' */
  real_T UD_DSTATE_b;                  /* '<S151>/UD' */
  real_T Integrator_DSTATE_f;          /* '<S162>/Integrator' */
  real_T UD_DSTATE_j;                  /* '<S133>/UD' */
  real_T Integrator_DSTATE_i;          /* '<S141>/Integrator' */
  real_T MemoryX_DSTATE[6];            /* '<S69>/MemoryX' */
  real_T MemoryX_DSTATE_o[6];          /* '<S14>/MemoryX' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S1>/Discrete-Time Integrator' */
  real_T Integrator_DSTATE_k;          /* '<S13>/Integrator' */
  real_T HILInitialize_AIMinimums[4];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_AIMaximums[4];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_AOMinimums[4];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_AOMaximums[4];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_AOVoltages[4];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_FilterFrequency[4];/* '<Root>/HIL Initialize' */
  t_card HILInitialize_Card;           /* '<Root>/HIL Initialize' */
  void *cartangle_PWORK;               /* '<Root>/cart angle' */
  void *cartpos_PWORK;                 /* '<Root>/cart pos' */
  void *HILWriteAnalog_PWORK;          /* '<Root>/HIL Write Analog' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *LoggedData;
  } Scope4_PWORK;                      /* '<Root>/Scope4' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<Root>/To Workspace' */

  struct {
    void *LoggedData;
  } systemInput_PWORK;                 /* '<Root>/systemInput' */

  struct {
    void *LoggedData[3];
  } Scope_PWORK_m;                     /* '<S5>/Scope' */

  struct {
    void *LoggedData;
  } TRIGGER_SCOPE_PWORK;               /* '<Root>/TRIGGER_SCOPE' */

  struct {
    void *LoggedData;
  } Scope_PWORK_n;                     /* '<S1>/Scope' */

  int32_T HILInitialize_QuadratureModes[4];/* '<Root>/HIL Initialize' */
  int32_T HILInitialize_InitialEICounts[4];/* '<Root>/HIL Initialize' */
  int32_T cartangle_Buffer;            /* '<Root>/cart angle' */
  int32_T cartpos_Buffer;              /* '<Root>/cart pos' */
  boolean_T Delay_DSTATE_f[2];         /* '<S5>/Delay' */
  boolean_T Delay1_DSTATE[2];          /* '<Root>/Delay1' */
  int8_T Integrator_PrevResetState;    /* '<S169>/Integrator' */
  int8_T Integrator_PrevResetState_l;  /* '<S162>/Integrator' */
  int8_T DLatch_SubsysRanBC;           /* '<S150>/D Latch' */
  int8_T swing_SubsysRanBC;            /* '<Root>/swing' */
  int8_T Integrator_PrevResetState_a;  /* '<S141>/Integrator' */
  int8_T down_SubsysRanBC;             /* '<Root>/down' */
  int8_T balancing_SubsysRanBC;        /* '<Root>/balancing' */
  int8_T TheEyes_SubsysRanBC;          /* '<Root>/The Eyes' */
  int8_T Integrator_PrevResetState_a5; /* '<S13>/Integrator' */
  uint8_T Integrator_IC_LOADING;       /* '<S169>/Integrator' */
  uint8_T Integrator_IC_LOADING_i;     /* '<S162>/Integrator' */
  uint8_T Integrator_IC_LOADING_m;     /* '<S141>/Integrator' */
  uint8_T Integrator_IC_LOADING_ig;    /* '<S13>/Integrator' */
  boolean_T icLoad;                    /* '<S69>/MemoryX' */
  boolean_T icLoad_p;                  /* '<S14>/MemoryX' */
  boolean_T swing_MODE;                /* '<Root>/swing' */
  boolean_T down_MODE;                 /* '<Root>/down' */
  boolean_T balancing_MODE;            /* '<Root>/balancing' */
  boolean_T TheEyes_MODE;              /* '<Root>/The Eyes' */
  DW_EnabledSubsystem_Copy_of_C_T EnabledSubsystem_p;/* '<S98>/Enabled Subsystem' */
  DW_MeasurementUpdate_Copy_of__T MeasurementUpdate_p;/* '<S91>/MeasurementUpdate' */
  DW_SqrtUsedFcn_Copy_of_Contro_T sf_SqrtUsedFcn_m;/* '<S120>/SqrtUsedFcn' */
  DW_EnabledSubsystem_Copy_of_C_T EnabledSubsystem;/* '<S40>/Enabled Subsystem' */
  DW_MeasurementUpdate_Copy_of__T MeasurementUpdate;/* '<S34>/MeasurementUpdate' */
  DW_SqrtUsedFcn_Copy_of_Contro_T sf_SqrtUsedFcn;/* '<S62>/SqrtUsedFcn' */
} DW_Copy_of_Controller_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState MemoryX_Reset_ZCE;        /* '<S14>/MemoryX' */
} PrevZCX_Copy_of_Controller_T;

/* Backward compatible GRT Identifiers */
#define rtB                            Copy_of_Controller_B
#define BlockIO                        B_Copy_of_Controller_T
#define rtP                            Copy_of_Controller_P
#define Parameters                     P_Copy_of_Controller_T
#define rtDWork                        Copy_of_Controller_DW
#define D_Work                         DW_Copy_of_Controller_T
#define rtPrevZCSigState               Copy_of_Controller_PrevZCX
#define PrevZCSigStates                PrevZCX_Copy_of_Controller_T

/* Parameters for system: '<S34>/MeasurementUpdate' */
struct P_MeasurementUpdate_Copy_of_C_T_ {
  real_T Lykyhatkk1_Y0;                /* Expression: 0
                                        * Referenced by: '<S64>/L*(y[k]-yhat[k|k-1])'
                                        */
};

/* Parameters for system: '<S40>/Enabled Subsystem' */
struct P_EnabledSubsystem_Copy_of_Co_T_ {
  real_T deltax_Y0;                    /* Expression: 0
                                        * Referenced by: '<S66>/deltax'
                                        */
};

/* Parameters (default storage) */
struct P_Copy_of_Controller_T_ {
  real_T K[6];                         /* Variable: K
                                        * Referenced by: '<S2>/Gain3'
                                        */
  real_T K_down[6];                    /* Variable: K_down
                                        * Referenced by: '<S3>/Gain3'
                                        */
  real_T DiscreteDerivative_ICPrevScaled;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                               * Referenced by: '<S133>/UD'
                               */
  real_T DiscreteDerivative1_ICPrevScale;
                              /* Mask Parameter: DiscreteDerivative1_ICPrevScale
                               * Referenced by: '<S152>/UD'
                               */
  real_T DiscreteDerivative_ICPrevScal_f;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_f
                               * Referenced by: '<S151>/UD'
                               */
  real_T LowPassFilterDiscreteorContinuo;
                              /* Mask Parameter: LowPassFilterDiscreteorContinuo
                               * Referenced by: '<S6>/K'
                               */
  real_T LowPassFilterDiscreteorContin_f;
                              /* Mask Parameter: LowPassFilterDiscreteorContin_f
                               * Referenced by: '<S134>/K'
                               */
  real_T LowPassFilterDiscreteorContin_o;
                              /* Mask Parameter: LowPassFilterDiscreteorContin_o
                               * Referenced by: '<S154>/K'
                               */
  real_T LowPassFilterDiscreteorContin_b;
                              /* Mask Parameter: LowPassFilterDiscreteorContin_b
                               * Referenced by: '<S153>/K'
                               */
  real_T LowPassFilterDiscreteorContin_h;
                              /* Mask Parameter: LowPassFilterDiscreteorContin_h
                               * Referenced by: '<S7>/Time constant'
                               */
  real_T LowPassFilterDiscreteorContin_d;
                              /* Mask Parameter: LowPassFilterDiscreteorContin_d
                               * Referenced by: '<S135>/Time constant'
                               */
  real_T LowPassFilterDiscreteorContin_m;
                              /* Mask Parameter: LowPassFilterDiscreteorContin_m
                               * Referenced by: '<S163>/Time constant'
                               */
  real_T LowPassFilterDiscreteorConti_b2;
                              /* Mask Parameter: LowPassFilterDiscreteorConti_b2
                               * Referenced by: '<S156>/Time constant'
                               */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S10>/Constant'
                                       */
  real_T CompareToConstant_const_e; /* Mask Parameter: CompareToConstant_const_e
                                     * Referenced by: '<S132>/Constant'
                                     */
  real_T CompareToConstant_const_o; /* Mask Parameter: CompareToConstant_const_o
                                     * Referenced by: '<S138>/Constant'
                                     */
  real_T CompareToConstant1_const;   /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S144>/Constant'
                                      */
  real_T Balance_const;                /* Mask Parameter: Balance_const
                                        * Referenced by: '<S142>/Constant'
                                        */
  real_T CompareToConstant5_const;   /* Mask Parameter: CompareToConstant5_const
                                      * Referenced by: '<S148>/Constant'
                                      */
  real_T CompareToConstant_const_l; /* Mask Parameter: CompareToConstant_const_l
                                     * Referenced by: '<S166>/Constant'
                                     */
  real_T CompareToConstant3_const;   /* Mask Parameter: CompareToConstant3_const
                                      * Referenced by: '<S146>/Constant'
                                      */
  real_T CompareToConstant4_const;   /* Mask Parameter: CompareToConstant4_const
                                      * Referenced by: '<S147>/Constant'
                                      */
  real_T CompareToConstant_const_c; /* Mask Parameter: CompareToConstant_const_c
                                     * Referenced by: '<S159>/Constant'
                                     */
  real_T CompareToConstant2_const;   /* Mask Parameter: CompareToConstant2_const
                                      * Referenced by: '<S145>/Constant'
                                      */
  real_T LowPassFilterDiscreteorConti_fy;
                              /* Mask Parameter: LowPassFilterDiscreteorConti_fy
                               * Referenced by: '<S7>/Constant'
                               */
  real_T LowPassFilterDiscreteorConti_b0;
                              /* Mask Parameter: LowPassFilterDiscreteorConti_b0
                               * Referenced by: '<S135>/Constant'
                               */
  real_T LowPassFilterDiscreteorConti_mr;
                              /* Mask Parameter: LowPassFilterDiscreteorConti_mr
                               * Referenced by: '<S163>/Constant'
                               */
  real_T LowPassFilterDiscreteorConti_oe;
                              /* Mask Parameter: LowPassFilterDiscreteorConti_oe
                               * Referenced by: '<S156>/Constant'
                               */
  uint32_T cartangle_channels;         /* Mask Parameter: cartangle_channels
                                        * Referenced by: '<Root>/cart angle'
                                        */
  uint32_T cartpos_channels;           /* Mask Parameter: cartpos_channels
                                        * Referenced by: '<Root>/cart pos'
                                        */
  uint32_T HILWriteAnalog_channels;   /* Mask Parameter: HILWriteAnalog_channels
                                       * Referenced by: '<Root>/HIL Write Analog'
                                       */
  real_T theta_off_Y0;                 /* Expression: [0]
                                        * Referenced by: '<S1>/theta_off'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S11>/Constant'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S1>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S1>/Discrete-Time Integrator'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S13>/Integrator'
                                        */
  real_T Integrator_UpperSat;          /* Expression: antiwindupUpperLimit
                                        * Referenced by: '<S13>/Integrator'
                                        */
  real_T Integrator_LowerSat;          /* Expression: antiwindupLowerLimit
                                        * Referenced by: '<S13>/Integrator'
                                        */
  real_T Saturation_UpperSat;          /* Expression: windupUpperLimit
                                        * Referenced by: '<S13>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: windupLowerLimit
                                        * Referenced by: '<S13>/Saturation'
                                        */
  real_T u_out_Y0;                     /* Expression: [0]
                                        * Referenced by: '<S2>/u_out'
                                        */
  real_T Constant_Value_o[2];          /* Expression: [-pi 0]
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T KalmanGainM_Value[12];        /* Expression: pInitialization.M
                                        * Referenced by: '<S15>/KalmanGainM'
                                        */
  real_T C_Value[12];                  /* Expression: pInitialization.C
                                        * Referenced by: '<S14>/C'
                                        */
  real_T X0_Value[6];                  /* Expression: pInitialization.X0
                                        * Referenced by: '<S14>/X0'
                                        */
  real_T A_Value[36];                  /* Expression: pInitialization.A
                                        * Referenced by: '<S14>/A'
                                        */
  real_T B_Value[6];                   /* Expression: pInitialization.B
                                        * Referenced by: '<S14>/B'
                                        */
  real_T CovarianceZ_Value[36];        /* Expression: pInitialization.Z
                                        * Referenced by: '<S15>/CovarianceZ'
                                        */
  real_T KalmanGainL_Value[12];        /* Expression: pInitialization.L
                                        * Referenced by: '<S15>/KalmanGainL'
                                        */
  real_T D_Value[2];                   /* Expression: pInitialization.D
                                        * Referenced by: '<S14>/D'
                                        */
  real_T u_out_Y0_h;                   /* Expression: [0]
                                        * Referenced by: '<S3>/u_out'
                                        */
  real_T Constant_Value_e;             /* Expression: pi
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 2*pi
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T KalmanGainM_Value_d[12];      /* Expression: pInitialization.M
                                        * Referenced by: '<S71>/KalmanGainM'
                                        */
  real_T C_Value_h[12];                /* Expression: pInitialization.C
                                        * Referenced by: '<S69>/C'
                                        */
  real_T X0_Value_j[6];                /* Expression: pInitialization.X0
                                        * Referenced by: '<S69>/X0'
                                        */
  real_T A_Value_j[36];                /* Expression: pInitialization.A
                                        * Referenced by: '<S69>/A'
                                        */
  real_T B_Value_o[6];                 /* Expression: pInitialization.B
                                        * Referenced by: '<S69>/B'
                                        */
  real_T CovarianceZ_Value_e[36];      /* Expression: pInitialization.Z
                                        * Referenced by: '<S71>/CovarianceZ'
                                        */
  real_T KalmanGainL_Value_d[12];      /* Expression: pInitialization.L
                                        * Referenced by: '<S71>/KalmanGainL'
                                        */
  real_T D_Value_d[2];                 /* Expression: pInitialization.D
                                        * Referenced by: '<S69>/D'
                                        */
  real_T u_out_Y0_k;                   /* Expression: [0]
                                        * Referenced by: '<S4>/u_out'
                                        */
  real_T Constant_Value_n;             /* Expression: 0
                                        * Referenced by: '<S139>/Constant'
                                        */
  real_T upi_Value;                    /* Expression: 2*pi
                                        * Referenced by: '<S4>/2pi'
                                        */
  real_T Constant_Value_m;             /* Expression: pi
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S133>/TSamp'
                                        */
  real_T Gain_Gain;                    /* Expression: -10
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T Integrator_gainval_h;       /* Computed Parameter: Integrator_gainval_h
                                      * Referenced by: '<S141>/Integrator'
                                      */
  real_T Integrator_UpperSat_m;        /* Expression: antiwindupUpperLimit
                                        * Referenced by: '<S141>/Integrator'
                                        */
  real_T Integrator_LowerSat_j;        /* Expression: antiwindupLowerLimit
                                        * Referenced by: '<S141>/Integrator'
                                        */
  real_T Saturation_UpperSat_p;        /* Expression: windupUpperLimit
                                        * Referenced by: '<S141>/Saturation'
                                        */
  real_T Saturation_LowerSat_i;        /* Expression: windupLowerLimit
                                        * Referenced by: '<S141>/Saturation'
                                        */
  real_T Gain1_Gain;                   /* Expression: -0.8
                                        * Referenced by: '<S4>/Gain1'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S160>/Constant'
                                        */
  real_T Constant_Value_ew;            /* Expression: 0
                                        * Referenced by: '<S167>/Constant'
                                        */
  real_T HILInitialize_OOTerminate;/* Expression: set_other_outputs_at_terminate
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  real_T HILInitialize_OOExit;    /* Expression: set_other_outputs_at_switch_out
                                   * Referenced by: '<Root>/HIL Initialize'
                                   */
  real_T HILInitialize_OOStart;        /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_OOEnter;    /* Expression: set_other_outputs_at_switch_in
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  real_T HILInitialize_AOFinal;        /* Expression: final_analog_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_POFinal;        /* Expression: final_pwm_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_AIHigh;         /* Expression: analog_input_maximums
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_AILow;          /* Expression: analog_input_minimums
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_AOHigh;         /* Expression: analog_output_maximums
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_AOLow;          /* Expression: analog_output_minimums
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_AOInitial;      /* Expression: initial_analog_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_AOWatchdog;     /* Expression: watchdog_analog_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_EIFrequency;    /* Expression: encoder_filter_frequency
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_POFrequency;    /* Expression: pwm_frequency
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_POInitial;      /* Expression: initial_pwm_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<Root>/Delay'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 1/650
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Constant_Value_h;             /* Expression: 2*pi
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.1524/5000
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T Constant2_Value;              /* Expression: -pi
                                        * Referenced by: '<S5>/Constant2'
                                        */
  real_T TSamp_WtEt_n;                 /* Computed Parameter: TSamp_WtEt_n
                                        * Referenced by: '<S152>/TSamp'
                                        */
  real_T Integrator_gainval_m;       /* Computed Parameter: Integrator_gainval_m
                                      * Referenced by: '<S169>/Integrator'
                                      */
  real_T Integrator_UpperSat_p;        /* Expression: antiwindupUpperLimit
                                        * Referenced by: '<S169>/Integrator'
                                        */
  real_T Integrator_LowerSat_l;        /* Expression: antiwindupLowerLimit
                                        * Referenced by: '<S169>/Integrator'
                                        */
  real_T Saturation_UpperSat_m;        /* Expression: windupUpperLimit
                                        * Referenced by: '<S169>/Saturation'
                                        */
  real_T Saturation_LowerSat_j;        /* Expression: windupLowerLimit
                                        * Referenced by: '<S169>/Saturation'
                                        */
  real_T TSamp_WtEt_k;                 /* Computed Parameter: TSamp_WtEt_k
                                        * Referenced by: '<S151>/TSamp'
                                        */
  real_T Integrator_gainval_o;       /* Computed Parameter: Integrator_gainval_o
                                      * Referenced by: '<S162>/Integrator'
                                      */
  real_T Integrator_UpperSat_i;        /* Expression: antiwindupUpperLimit
                                        * Referenced by: '<S162>/Integrator'
                                        */
  real_T Integrator_LowerSat_k;        /* Expression: antiwindupLowerLimit
                                        * Referenced by: '<S162>/Integrator'
                                        */
  real_T Saturation_UpperSat_c;        /* Expression: windupUpperLimit
                                        * Referenced by: '<S162>/Saturation'
                                        */
  real_T Saturation_LowerSat_jk;       /* Expression: windupLowerLimit
                                        * Referenced by: '<S162>/Saturation'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 5
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -5
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 8
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -8
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Constant1_Value_k;            /* Expression: 1
                                        * Referenced by: '<S5>/Constant1'
                                        */
  real_T Saturation_UpperSat_e;        /* Expression: 5
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: -5
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Step_Time;                    /* Expression: 0.001
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<Root>/Step'
                                        */
  int32_T HILInitialize_CKChannels[2];
                                 /* Computed Parameter: HILInitialize_CKChannels
                                  * Referenced by: '<Root>/HIL Initialize'
                                  */
  int32_T HILInitialize_CKModes[2]; /* Computed Parameter: HILInitialize_CKModes
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  int32_T HILInitialize_DOWatchdog;
                                 /* Computed Parameter: HILInitialize_DOWatchdog
                                  * Referenced by: '<Root>/HIL Initialize'
                                  */
  int32_T HILInitialize_EIInitial;/* Computed Parameter: HILInitialize_EIInitial
                                   * Referenced by: '<Root>/HIL Initialize'
                                   */
  int32_T HILInitialize_POModes;    /* Computed Parameter: HILInitialize_POModes
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  uint32_T HILInitialize_AIChannels[4];
                                 /* Computed Parameter: HILInitialize_AIChannels
                                  * Referenced by: '<Root>/HIL Initialize'
                                  */
  uint32_T HILInitialize_AOChannels[4];
                                 /* Computed Parameter: HILInitialize_AOChannels
                                  * Referenced by: '<Root>/HIL Initialize'
                                  */
  uint32_T HILInitialize_EIChannels[4];
                                 /* Computed Parameter: HILInitialize_EIChannels
                                  * Referenced by: '<Root>/HIL Initialize'
                                  */
  uint32_T HILInitialize_EIQuadrature;
                               /* Computed Parameter: HILInitialize_EIQuadrature
                                * Referenced by: '<Root>/HIL Initialize'
                                */
  boolean_T Enable_Value;              /* Expression: true()
                                        * Referenced by: '<S14>/Enable'
                                        */
  boolean_T isSqrtUsed_Value;          /* Expression: pInitialization.isSqrtUsed
                                        * Referenced by: '<S62>/isSqrtUsed'
                                        */
  boolean_T Enable_Value_d;            /* Expression: true()
                                        * Referenced by: '<S69>/Enable'
                                        */
  boolean_T isSqrtUsed_Value_f;        /* Expression: pInitialization.isSqrtUsed
                                        * Referenced by: '<S120>/isSqrtUsed'
                                        */
  boolean_T Q_Y0;                      /* Computed Parameter: Q_Y0
                                        * Referenced by: '<S155>/Q'
                                        */
  boolean_T Q_Y0_b;                    /* Computed Parameter: Q_Y0_b
                                        * Referenced by: '<S155>/!Q'
                                        */
  boolean_T HILInitialize_Active;    /* Computed Parameter: HILInitialize_Active
                                      * Referenced by: '<Root>/HIL Initialize'
                                      */
  boolean_T HILInitialize_AOTerminate;
                                /* Computed Parameter: HILInitialize_AOTerminate
                                 * Referenced by: '<Root>/HIL Initialize'
                                 */
  boolean_T HILInitialize_AOExit;    /* Computed Parameter: HILInitialize_AOExit
                                      * Referenced by: '<Root>/HIL Initialize'
                                      */
  boolean_T HILInitialize_DOTerminate;
                                /* Computed Parameter: HILInitialize_DOTerminate
                                 * Referenced by: '<Root>/HIL Initialize'
                                 */
  boolean_T HILInitialize_DOExit;    /* Computed Parameter: HILInitialize_DOExit
                                      * Referenced by: '<Root>/HIL Initialize'
                                      */
  boolean_T HILInitialize_POTerminate;
                                /* Computed Parameter: HILInitialize_POTerminate
                                 * Referenced by: '<Root>/HIL Initialize'
                                 */
  boolean_T HILInitialize_POExit;    /* Computed Parameter: HILInitialize_POExit
                                      * Referenced by: '<Root>/HIL Initialize'
                                      */
  boolean_T HILInitialize_CKPStart;/* Computed Parameter: HILInitialize_CKPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_CKPEnter;/* Computed Parameter: HILInitialize_CKPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_CKStart;  /* Computed Parameter: HILInitialize_CKStart
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_CKEnter;  /* Computed Parameter: HILInitialize_CKEnter
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AIPStart;/* Computed Parameter: HILInitialize_AIPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AIPEnter;/* Computed Parameter: HILInitialize_AIPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOPStart;/* Computed Parameter: HILInitialize_AOPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOPEnter;/* Computed Parameter: HILInitialize_AOPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOStart;  /* Computed Parameter: HILInitialize_AOStart
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AOEnter;  /* Computed Parameter: HILInitialize_AOEnter
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AOReset;  /* Computed Parameter: HILInitialize_AOReset
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOPStart;/* Computed Parameter: HILInitialize_DOPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_DOPEnter;/* Computed Parameter: HILInitialize_DOPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_DOStart;  /* Computed Parameter: HILInitialize_DOStart
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOEnter;  /* Computed Parameter: HILInitialize_DOEnter
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOReset;  /* Computed Parameter: HILInitialize_DOReset
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_EIPStart;/* Computed Parameter: HILInitialize_EIPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_EIPEnter;/* Computed Parameter: HILInitialize_EIPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_EIStart;  /* Computed Parameter: HILInitialize_EIStart
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_EIEnter;  /* Computed Parameter: HILInitialize_EIEnter
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POPStart;/* Computed Parameter: HILInitialize_POPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_POPEnter;/* Computed Parameter: HILInitialize_POPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_POStart;  /* Computed Parameter: HILInitialize_POStart
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POEnter;  /* Computed Parameter: HILInitialize_POEnter
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POReset;  /* Computed Parameter: HILInitialize_POReset
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_OOReset;  /* Computed Parameter: HILInitialize_OOReset
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOFinal;  /* Computed Parameter: HILInitialize_DOFinal
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOInitial;
                                  /* Computed Parameter: HILInitialize_DOInitial
                                   * Referenced by: '<Root>/HIL Initialize'
                                   */
  boolean_T cartangle_Active;          /* Computed Parameter: cartangle_Active
                                        * Referenced by: '<Root>/cart angle'
                                        */
  boolean_T cartpos_Active;            /* Computed Parameter: cartpos_Active
                                        * Referenced by: '<Root>/cart pos'
                                        */
  boolean_T Delay_InitialCondition_e;
                                 /* Computed Parameter: Delay_InitialCondition_e
                                  * Referenced by: '<S5>/Delay'
                                  */
  boolean_T HILWriteAnalog_Active;  /* Computed Parameter: HILWriteAnalog_Active
                                     * Referenced by: '<Root>/HIL Write Analog'
                                     */
  boolean_T Delay1_InitialCondition;
                                  /* Computed Parameter: Delay1_InitialCondition
                                   * Referenced by: '<Root>/Delay1'
                                   */
  P_EnabledSubsystem_Copy_of_Co_T EnabledSubsystem_p;/* '<S98>/Enabled Subsystem' */
  P_MeasurementUpdate_Copy_of_C_T MeasurementUpdate_p;/* '<S91>/MeasurementUpdate' */
  P_EnabledSubsystem_Copy_of_Co_T EnabledSubsystem;/* '<S40>/Enabled Subsystem' */
  P_MeasurementUpdate_Copy_of_C_T MeasurementUpdate;/* '<S34>/MeasurementUpdate' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Copy_of_Controller_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;
  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  void *dwork;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Copy_of_Controller_T Copy_of_Controller_P;

/* Block signals (default storage) */
extern B_Copy_of_Controller_T Copy_of_Controller_B;

/* Block states (default storage) */
extern DW_Copy_of_Controller_T Copy_of_Controller_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_Copy_of_Controller_T Copy_of_Controller_PrevZCX;

/* Model entry point functions */
extern void Copy_of_Controller_initialize(void);
extern void Copy_of_Controller_output(void);
extern void Copy_of_Controller_update(void);
extern void Copy_of_Controller_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern Copy_of_Controller_rtModel *Copy_of_Controller(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_Copy_of_Controller_T *const Copy_of_Controller_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Copy_of_Controller'
 * '<S1>'   : 'Copy_of_Controller/The Eyes'
 * '<S2>'   : 'Copy_of_Controller/balancing'
 * '<S3>'   : 'Copy_of_Controller/down'
 * '<S4>'   : 'Copy_of_Controller/swing'
 * '<S5>'   : 'Copy_of_Controller/switching'
 * '<S6>'   : 'Copy_of_Controller/The Eyes/Low-Pass Filter (Discrete or Continuous)'
 * '<S7>'   : 'Copy_of_Controller/The Eyes/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S8>'   : 'Copy_of_Controller/The Eyes/Low-Pass Filter (Discrete or Continuous)/Initialization'
 * '<S9>'   : 'Copy_of_Controller/The Eyes/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S10>'  : 'Copy_of_Controller/The Eyes/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Constant'
 * '<S11>'  : 'Copy_of_Controller/The Eyes/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S12>'  : 'Copy_of_Controller/The Eyes/Low-Pass Filter (Discrete or Continuous)/Initialization/Init_u'
 * '<S13>'  : 'Copy_of_Controller/The Eyes/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S14>'  : 'Copy_of_Controller/balancing/Kalman Filter'
 * '<S15>'  : 'Copy_of_Controller/balancing/Kalman Filter/CalculatePL'
 * '<S16>'  : 'Copy_of_Controller/balancing/Kalman Filter/CalculateYhat'
 * '<S17>'  : 'Copy_of_Controller/balancing/Kalman Filter/CovarianceOutputConfigurator'
 * '<S18>'  : 'Copy_of_Controller/balancing/Kalman Filter/DataTypeConversionA'
 * '<S19>'  : 'Copy_of_Controller/balancing/Kalman Filter/DataTypeConversionB'
 * '<S20>'  : 'Copy_of_Controller/balancing/Kalman Filter/DataTypeConversionC'
 * '<S21>'  : 'Copy_of_Controller/balancing/Kalman Filter/DataTypeConversionD'
 * '<S22>'  : 'Copy_of_Controller/balancing/Kalman Filter/DataTypeConversionEnable'
 * '<S23>'  : 'Copy_of_Controller/balancing/Kalman Filter/DataTypeConversionG'
 * '<S24>'  : 'Copy_of_Controller/balancing/Kalman Filter/DataTypeConversionH'
 * '<S25>'  : 'Copy_of_Controller/balancing/Kalman Filter/DataTypeConversionN'
 * '<S26>'  : 'Copy_of_Controller/balancing/Kalman Filter/DataTypeConversionP'
 * '<S27>'  : 'Copy_of_Controller/balancing/Kalman Filter/DataTypeConversionP0'
 * '<S28>'  : 'Copy_of_Controller/balancing/Kalman Filter/DataTypeConversionQ'
 * '<S29>'  : 'Copy_of_Controller/balancing/Kalman Filter/DataTypeConversionR'
 * '<S30>'  : 'Copy_of_Controller/balancing/Kalman Filter/DataTypeConversionX'
 * '<S31>'  : 'Copy_of_Controller/balancing/Kalman Filter/DataTypeConversionX0'
 * '<S32>'  : 'Copy_of_Controller/balancing/Kalman Filter/DataTypeConversionu'
 * '<S33>'  : 'Copy_of_Controller/balancing/Kalman Filter/MemoryP'
 * '<S34>'  : 'Copy_of_Controller/balancing/Kalman Filter/Observer'
 * '<S35>'  : 'Copy_of_Controller/balancing/Kalman Filter/ReducedQRN'
 * '<S36>'  : 'Copy_of_Controller/balancing/Kalman Filter/Reshapeyhat'
 * '<S37>'  : 'Copy_of_Controller/balancing/Kalman Filter/ScalarExpansionP0'
 * '<S38>'  : 'Copy_of_Controller/balancing/Kalman Filter/ScalarExpansionQ'
 * '<S39>'  : 'Copy_of_Controller/balancing/Kalman Filter/ScalarExpansionR'
 * '<S40>'  : 'Copy_of_Controller/balancing/Kalman Filter/UseCurrentEstimator'
 * '<S41>'  : 'Copy_of_Controller/balancing/Kalman Filter/checkA'
 * '<S42>'  : 'Copy_of_Controller/balancing/Kalman Filter/checkB'
 * '<S43>'  : 'Copy_of_Controller/balancing/Kalman Filter/checkC'
 * '<S44>'  : 'Copy_of_Controller/balancing/Kalman Filter/checkD'
 * '<S45>'  : 'Copy_of_Controller/balancing/Kalman Filter/checkEnable'
 * '<S46>'  : 'Copy_of_Controller/balancing/Kalman Filter/checkG'
 * '<S47>'  : 'Copy_of_Controller/balancing/Kalman Filter/checkH'
 * '<S48>'  : 'Copy_of_Controller/balancing/Kalman Filter/checkN'
 * '<S49>'  : 'Copy_of_Controller/balancing/Kalman Filter/checkP0'
 * '<S50>'  : 'Copy_of_Controller/balancing/Kalman Filter/checkQ'
 * '<S51>'  : 'Copy_of_Controller/balancing/Kalman Filter/checkR'
 * '<S52>'  : 'Copy_of_Controller/balancing/Kalman Filter/checkReset'
 * '<S53>'  : 'Copy_of_Controller/balancing/Kalman Filter/checkX0'
 * '<S54>'  : 'Copy_of_Controller/balancing/Kalman Filter/checku'
 * '<S55>'  : 'Copy_of_Controller/balancing/Kalman Filter/checky'
 * '<S56>'  : 'Copy_of_Controller/balancing/Kalman Filter/CalculatePL/DataTypeConversionL'
 * '<S57>'  : 'Copy_of_Controller/balancing/Kalman Filter/CalculatePL/DataTypeConversionM'
 * '<S58>'  : 'Copy_of_Controller/balancing/Kalman Filter/CalculatePL/DataTypeConversionP'
 * '<S59>'  : 'Copy_of_Controller/balancing/Kalman Filter/CalculatePL/DataTypeConversionZ'
 * '<S60>'  : 'Copy_of_Controller/balancing/Kalman Filter/CalculatePL/Ground'
 * '<S61>'  : 'Copy_of_Controller/balancing/Kalman Filter/CalculateYhat/Ground'
 * '<S62>'  : 'Copy_of_Controller/balancing/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
 * '<S63>'  : 'Copy_of_Controller/balancing/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S64>'  : 'Copy_of_Controller/balancing/Kalman Filter/Observer/MeasurementUpdate'
 * '<S65>'  : 'Copy_of_Controller/balancing/Kalman Filter/ReducedQRN/Ground'
 * '<S66>'  : 'Copy_of_Controller/balancing/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
 * '<S67>'  : 'Copy_of_Controller/down/Compare To Constant'
 * '<S68>'  : 'Copy_of_Controller/down/Discrete Derivative'
 * '<S69>'  : 'Copy_of_Controller/down/Kalman Filter'
 * '<S70>'  : 'Copy_of_Controller/down/Low-Pass Filter (Discrete or Continuous)'
 * '<S71>'  : 'Copy_of_Controller/down/Kalman Filter/CalculatePL'
 * '<S72>'  : 'Copy_of_Controller/down/Kalman Filter/CalculateYhat'
 * '<S73>'  : 'Copy_of_Controller/down/Kalman Filter/CovarianceOutputConfigurator'
 * '<S74>'  : 'Copy_of_Controller/down/Kalman Filter/DataTypeConversionA'
 * '<S75>'  : 'Copy_of_Controller/down/Kalman Filter/DataTypeConversionB'
 * '<S76>'  : 'Copy_of_Controller/down/Kalman Filter/DataTypeConversionC'
 * '<S77>'  : 'Copy_of_Controller/down/Kalman Filter/DataTypeConversionD'
 * '<S78>'  : 'Copy_of_Controller/down/Kalman Filter/DataTypeConversionEnable'
 * '<S79>'  : 'Copy_of_Controller/down/Kalman Filter/DataTypeConversionG'
 * '<S80>'  : 'Copy_of_Controller/down/Kalman Filter/DataTypeConversionH'
 * '<S81>'  : 'Copy_of_Controller/down/Kalman Filter/DataTypeConversionN'
 * '<S82>'  : 'Copy_of_Controller/down/Kalman Filter/DataTypeConversionP'
 * '<S83>'  : 'Copy_of_Controller/down/Kalman Filter/DataTypeConversionP0'
 * '<S84>'  : 'Copy_of_Controller/down/Kalman Filter/DataTypeConversionQ'
 * '<S85>'  : 'Copy_of_Controller/down/Kalman Filter/DataTypeConversionR'
 * '<S86>'  : 'Copy_of_Controller/down/Kalman Filter/DataTypeConversionReset'
 * '<S87>'  : 'Copy_of_Controller/down/Kalman Filter/DataTypeConversionX'
 * '<S88>'  : 'Copy_of_Controller/down/Kalman Filter/DataTypeConversionX0'
 * '<S89>'  : 'Copy_of_Controller/down/Kalman Filter/DataTypeConversionu'
 * '<S90>'  : 'Copy_of_Controller/down/Kalman Filter/MemoryP'
 * '<S91>'  : 'Copy_of_Controller/down/Kalman Filter/Observer'
 * '<S92>'  : 'Copy_of_Controller/down/Kalman Filter/ReducedQRN'
 * '<S93>'  : 'Copy_of_Controller/down/Kalman Filter/Reset'
 * '<S94>'  : 'Copy_of_Controller/down/Kalman Filter/Reshapeyhat'
 * '<S95>'  : 'Copy_of_Controller/down/Kalman Filter/ScalarExpansionP0'
 * '<S96>'  : 'Copy_of_Controller/down/Kalman Filter/ScalarExpansionQ'
 * '<S97>'  : 'Copy_of_Controller/down/Kalman Filter/ScalarExpansionR'
 * '<S98>'  : 'Copy_of_Controller/down/Kalman Filter/UseCurrentEstimator'
 * '<S99>'  : 'Copy_of_Controller/down/Kalman Filter/checkA'
 * '<S100>' : 'Copy_of_Controller/down/Kalman Filter/checkB'
 * '<S101>' : 'Copy_of_Controller/down/Kalman Filter/checkC'
 * '<S102>' : 'Copy_of_Controller/down/Kalman Filter/checkD'
 * '<S103>' : 'Copy_of_Controller/down/Kalman Filter/checkEnable'
 * '<S104>' : 'Copy_of_Controller/down/Kalman Filter/checkG'
 * '<S105>' : 'Copy_of_Controller/down/Kalman Filter/checkH'
 * '<S106>' : 'Copy_of_Controller/down/Kalman Filter/checkN'
 * '<S107>' : 'Copy_of_Controller/down/Kalman Filter/checkP0'
 * '<S108>' : 'Copy_of_Controller/down/Kalman Filter/checkQ'
 * '<S109>' : 'Copy_of_Controller/down/Kalman Filter/checkR'
 * '<S110>' : 'Copy_of_Controller/down/Kalman Filter/checkReset'
 * '<S111>' : 'Copy_of_Controller/down/Kalman Filter/checkX0'
 * '<S112>' : 'Copy_of_Controller/down/Kalman Filter/checku'
 * '<S113>' : 'Copy_of_Controller/down/Kalman Filter/checky'
 * '<S114>' : 'Copy_of_Controller/down/Kalman Filter/CalculatePL/DataTypeConversionL'
 * '<S115>' : 'Copy_of_Controller/down/Kalman Filter/CalculatePL/DataTypeConversionM'
 * '<S116>' : 'Copy_of_Controller/down/Kalman Filter/CalculatePL/DataTypeConversionP'
 * '<S117>' : 'Copy_of_Controller/down/Kalman Filter/CalculatePL/DataTypeConversionZ'
 * '<S118>' : 'Copy_of_Controller/down/Kalman Filter/CalculatePL/Ground'
 * '<S119>' : 'Copy_of_Controller/down/Kalman Filter/CalculateYhat/Ground'
 * '<S120>' : 'Copy_of_Controller/down/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
 * '<S121>' : 'Copy_of_Controller/down/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S122>' : 'Copy_of_Controller/down/Kalman Filter/Observer/MeasurementUpdate'
 * '<S123>' : 'Copy_of_Controller/down/Kalman Filter/ReducedQRN/Ground'
 * '<S124>' : 'Copy_of_Controller/down/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
 * '<S125>' : 'Copy_of_Controller/down/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S126>' : 'Copy_of_Controller/down/Low-Pass Filter (Discrete or Continuous)/Initialization'
 * '<S127>' : 'Copy_of_Controller/down/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S128>' : 'Copy_of_Controller/down/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Constant'
 * '<S129>' : 'Copy_of_Controller/down/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S130>' : 'Copy_of_Controller/down/Low-Pass Filter (Discrete or Continuous)/Initialization/Init_u'
 * '<S131>' : 'Copy_of_Controller/down/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S132>' : 'Copy_of_Controller/swing/Compare To Constant'
 * '<S133>' : 'Copy_of_Controller/swing/Discrete Derivative'
 * '<S134>' : 'Copy_of_Controller/swing/Low-Pass Filter (Discrete or Continuous)'
 * '<S135>' : 'Copy_of_Controller/swing/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S136>' : 'Copy_of_Controller/swing/Low-Pass Filter (Discrete or Continuous)/Initialization'
 * '<S137>' : 'Copy_of_Controller/swing/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S138>' : 'Copy_of_Controller/swing/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Constant'
 * '<S139>' : 'Copy_of_Controller/swing/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S140>' : 'Copy_of_Controller/swing/Low-Pass Filter (Discrete or Continuous)/Initialization/Init_u'
 * '<S141>' : 'Copy_of_Controller/swing/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S142>' : 'Copy_of_Controller/switching/Balance'
 * '<S143>' : 'Copy_of_Controller/switching/Compare To Constant'
 * '<S144>' : 'Copy_of_Controller/switching/Compare To Constant1'
 * '<S145>' : 'Copy_of_Controller/switching/Compare To Constant2'
 * '<S146>' : 'Copy_of_Controller/switching/Compare To Constant3'
 * '<S147>' : 'Copy_of_Controller/switching/Compare To Constant4'
 * '<S148>' : 'Copy_of_Controller/switching/Compare To Constant5'
 * '<S149>' : 'Copy_of_Controller/switching/Compare To Constant6'
 * '<S150>' : 'Copy_of_Controller/switching/D Latch'
 * '<S151>' : 'Copy_of_Controller/switching/Discrete Derivative'
 * '<S152>' : 'Copy_of_Controller/switching/Discrete Derivative1'
 * '<S153>' : 'Copy_of_Controller/switching/Low-Pass Filter (Discrete or Continuous)'
 * '<S154>' : 'Copy_of_Controller/switching/Low-Pass Filter (Discrete or Continuous)1'
 * '<S155>' : 'Copy_of_Controller/switching/D Latch/D Latch'
 * '<S156>' : 'Copy_of_Controller/switching/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S157>' : 'Copy_of_Controller/switching/Low-Pass Filter (Discrete or Continuous)/Initialization'
 * '<S158>' : 'Copy_of_Controller/switching/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S159>' : 'Copy_of_Controller/switching/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Constant'
 * '<S160>' : 'Copy_of_Controller/switching/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S161>' : 'Copy_of_Controller/switching/Low-Pass Filter (Discrete or Continuous)/Initialization/Init_u'
 * '<S162>' : 'Copy_of_Controller/switching/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S163>' : 'Copy_of_Controller/switching/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant'
 * '<S164>' : 'Copy_of_Controller/switching/Low-Pass Filter (Discrete or Continuous)1/Initialization'
 * '<S165>' : 'Copy_of_Controller/switching/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)'
 * '<S166>' : 'Copy_of_Controller/switching/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Compare To Constant'
 * '<S167>' : 'Copy_of_Controller/switching/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Compare To Zero'
 * '<S168>' : 'Copy_of_Controller/switching/Low-Pass Filter (Discrete or Continuous)1/Initialization/Init_u'
 * '<S169>' : 'Copy_of_Controller/switching/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Discrete'
 */
#endif                                 /* RTW_HEADER_Copy_of_Controller_h_ */
