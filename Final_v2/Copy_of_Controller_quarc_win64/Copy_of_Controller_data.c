/*
 * Copy_of_Controller_data.c
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

#include "Copy_of_Controller.h"

/* Block parameters (default storage) */
P_Copy_of_Controller_T Copy_of_Controller_P = {
  /* Variable: K
   * Referenced by: '<S1>/Gain3'
   */
  { 61.673881547355172, 42.429905201963031, 39.017078618349579,
    -0.090621953305622574, -450.54571555173851, -101.28481157448276 },

  /* Variable: K_down
   * Referenced by: '<S2>/Gain3'
   */
  { 32.450213562237977, 22.798214126770603, 4.5794372411157882,
    0.029216435584111515, 145.05773005128574, 22.648268881779654 },

  /* Mask Parameter: DiscreteDerivative_ICPrevScaled
   * Referenced by: '<S124>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative1_ICPrevScale
   * Referenced by: '<S141>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_f
   * Referenced by: '<S140>/UD'
   */
  0.0,

  /* Mask Parameter: LowPassFilterDiscreteorContinuo
   * Referenced by: '<S125>/K'
   */
  1.0,

  /* Mask Parameter: LowPassFilterDiscreteorContin_o
   * Referenced by: '<S143>/K'
   */
  1.0,

  /* Mask Parameter: LowPassFilterDiscreteorContin_b
   * Referenced by: '<S142>/K'
   */
  1.0,

  /* Mask Parameter: LowPassFilterDiscreteorContin_d
   * Referenced by: '<S126>/Time constant'
   */
  0.01,

  /* Mask Parameter: LowPassFilterDiscreteorContin_m
   * Referenced by: '<S152>/Time constant'
   */
  0.01,

  /* Mask Parameter: LowPassFilterDiscreteorConti_b2
   * Referenced by: '<S145>/Time constant'
   */
  0.01,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S123>/Constant'
   */
  0.62831853071795862,

  /* Mask Parameter: CompareToConstant_const_o
   * Referenced by: '<S129>/Constant'
   */
  2.0,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S134>/Constant'
   */
  1.5707963267948966,

  /* Mask Parameter: CompareToConstant5_const
   * Referenced by: '<S138>/Constant'
   */
  0.1,

  /* Mask Parameter: CompareToConstant_const_l
   * Referenced by: '<S155>/Constant'
   */
  2.0,

  /* Mask Parameter: CompareToConstant3_const
   * Referenced by: '<S136>/Constant'
   */
  0.1,

  /* Mask Parameter: CompareToConstant4_const
   * Referenced by: '<S137>/Constant'
   */
  1.0,

  /* Mask Parameter: CompareToConstant_const_c
   * Referenced by: '<S148>/Constant'
   */
  2.0,

  /* Mask Parameter: CompareToConstant2_const
   * Referenced by: '<S135>/Constant'
   */
  0.1,

  /* Mask Parameter: Balance_const
   * Referenced by: '<S133>/Constant'
   */
  0.4,

  /* Mask Parameter: LowPassFilterDiscreteorConti_b0
   * Referenced by: '<S126>/Constant'
   */
  1.0,

  /* Mask Parameter: LowPassFilterDiscreteorConti_mr
   * Referenced by: '<S152>/Constant'
   */
  1.0,

  /* Mask Parameter: LowPassFilterDiscreteorConti_oe
   * Referenced by: '<S145>/Constant'
   */
  1.0,

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

  /* Expression: [0]
   * Referenced by: '<S1>/u_out'
   */
  0.0,

  /* Expression: [-pi 0]
   * Referenced by: '<S1>/Constant'
   */
  { -3.1415926535897931, 0.0 },

  /* Expression: pInitialization.M
   * Referenced by: '<S6>/KalmanGainM'
   */
  { 0.40206025714970023, 0.040682518847074134, 0.19131055678958617,
    1.8721978824685984E-19, -7.8276716768415013E-15, -8.3311487444357287E-16,
    -1.353347104086307E-16, -1.5869572218582996E-16, 6.0036824991315011E-16,
    -1.3009600987130741E-8, 0.0881679129802658, 0.098119093555829234 },

  /* Expression: pInitialization.C
   * Referenced by: '<S5>/C'
   */
  { 0.29028, 0.0, 0.44289470999999997, 0.0, 0.20074735213124997, 0.0, 0.0, 0.0,
    0.0, -1.1077420496732719, 0.0, 10.394832036070891 },

  /* Expression: pInitialization.X0
   * Referenced by: '<S5>/X0'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: pInitialization.A
   * Referenced by: '<S5>/A'
   */
  { 1.0024703058545708, 0.0080099014061766043, 1.6013215329302366E-5, 0.0, 0.0,
    0.0, -0.0045517392910462357, 0.99998178821992578, 0.0039999757144194509, 0.0,
    0.0, 0.0, 0.0046218607517503887, 1.8479840808716814E-5, 1.0000000246347134,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.006968401249068279, 0.00019995121335460465,
    1.6109328830475741E-7, 0.0, 0.0, 0.0, -1.1244571560871961E-8,
    0.99999999999094069, 0.0009999999999961626, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S5>/B'
   */
  { 0.00050061883788603755, 2.0016519161627954E-6, 2.6683195918706538E-9,
    0.0031992194136736705, 2.5774926128761164E-6, 1.0918453479726534E-9 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S6>/CovarianceZ'
   */
  { 124.61358845348678, -61.346814452162604, -24.81751433169326,
    3.6057699372413289E-16, 2.3463410681455514E-13, 2.4873967987621177E-14,
    -61.346814452162619, 72.726649990563615, -69.717831496214217,
    -7.7065386621565882E-16, 1.1849980568368727E-12, 1.2612856220936458E-13,
    -24.817514331693257, -69.717831496214217, 199.22948903602762,
    1.1881722284249247E-15, -3.343584206226685E-12, -3.5573688218624887E-13,
    3.6057699372413274E-16, -7.7065386621565882E-16, 1.1881722284249247E-15,
    1.0000485609741423, -1.1049740492971361E-5, -1.1900488770753616E-6,
    2.3463410681455514E-13, 1.1849980568368725E-12, -3.3435842062266854E-12,
    -1.1049740492971366E-5, 1112.8662555889671, 118.6792073048684,
    2.487396798762118E-14, 1.2612856220936455E-13, -3.5573688218624897E-13,
    -1.1900488770753616E-6, 118.67920730486838, 12.741633422209253 },

  /* Expression: pInitialization.L
   * Referenced by: '<S6>/KalmanGainL'
   */
  { 0.40375250349113, 0.043905776353745013, 0.19147972886733766,
    -4.4169091215432681E-18, -3.0125134344833252E-14, -3.2502901110773282E-15,
    9.94286374333051E-16, -1.3489705577744769E-16, -6.5292418806433532E-16,
    -1.08206653026955E-9, 0.088167912976869864, 0.098207261468807538 },

  /* Expression: pInitialization.D
   * Referenced by: '<S5>/D'
   */
  { 0.0, 0.0 },

  /* Expression: [0]
   * Referenced by: '<S2>/u_out'
   */
  0.0,

  /* Expression: pi
   * Referenced by: '<S2>/Constant'
   */
  3.1415926535897931,

  /* Expression: 2*pi
   * Referenced by: '<S2>/Constant1'
   */
  6.2831853071795862,

  /* Expression: pInitialization.M
   * Referenced by: '<S62>/KalmanGainM'
   */
  { -0.21191264815193642, -0.3728064115179085, 0.32427361160286788,
    -9.9003269946551826E-18, 2.3247243139763057E-14, 2.4876277133998719E-15,
    -4.0927723213939196E-15, -2.4074784283711992E-16, 5.9190092374028151E-15,
    -1.3009600924195872E-8, 0.088167912980342059, 0.098119093555837367 },

  /* Expression: pInitialization.C
   * Referenced by: '<S60>/C'
   */
  { 0.29027681981462955, 0.0, -0.44286696392900859, 0.0, 0.20069932381855193,
    0.0, 0.0, 0.0, 0.0, -1.1077420496732719, 0.0, 10.394832036070891 },

  /* Expression: pInitialization.X0
   * Referenced by: '<S60>/X0'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: pInitialization.A
   * Referenced by: '<S60>/A'
   */
  { 0.99520254840361544, 0.0079808247354536781, 1.5974442682809616E-5, 0.0, 0.0,
    0.0, -0.0055969868376773788, 0.99997760641846334, 0.0039999701381445273, 0.0,
    0.0, 0.0, -0.0046050479615958369, -1.8434955572275255E-5,
    0.99999997541022123, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.006968401249068279,
    0.00019995121335460465, 1.6109328830475741E-7, 0.0, 0.0, 0.0,
    -1.1244571560871961E-8, 0.99999999999094069, 0.0009999999999961626, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S60>/B'
   */
  { 0.00049880154596585488, 1.9968053353512024E-6, 2.6634727300653473E-9,
    0.0031992194136736705, 2.5774926128761164E-6, 1.0918453479726534E-9 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S62>/CovarianceZ'
   */
  { 199.16390396470553, 41.514288339509982, -207.008591355442,
    1.154833763095265E-14, -2.2785179380136481E-11, -2.4320767227611105E-12,
    41.514288339509974, 50.962974196109506, 33.837273661786391,
    2.87744699116473E-15, 7.5696686619131768E-12, 8.0644235244761732E-13,
    -207.008591355442, 33.8372736617864, 390.22524268207587,
    -1.0846532700475852E-14, 5.0816504136506847E-11, 5.4210369485756757E-12,
    1.1548337630952652E-14, 2.87744699116473E-15, -1.0846532700475852E-14,
    1.0000485609741421, -1.1049740500801094E-5, -1.1900488778492045E-6,
    -2.2785179380136481E-11, 7.5696686619131768E-12, 5.0816504136506841E-11,
    -1.1049740500801091E-5, 1112.86625558975, 118.67920730495185,
    -2.4320767227611109E-12, 8.0644235244761722E-13, 5.4210369485756749E-12,
    -1.1900488778492045E-6, 118.67920730495187, 12.741633422218159 },

  /* Expression: pInitialization.L
   * Referenced by: '<S62>/KalmanGainL'
   */
  { -0.21030271043560803, -0.37449527872088384, 0.32277900392921888,
    -2.2530764772264103E-17, 2.2956656121858317E-14, 2.4993423395323156E-15,
    -4.3899079502012163E-15, -4.7472153264552479E-16, 5.9338212027435821E-15,
    -1.0820665284886374E-9, 0.088167912976945748, 0.098207261468815643 },

  /* Expression: pInitialization.D
   * Referenced by: '<S60>/D'
   */
  { 0.0, 0.0 },

  /* Expression: [0]
   * Referenced by: '<S3>/u_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S130>/Constant'
   */
  0.0,

  /* Expression: pi
   * Referenced by: '<S3>/Constant'
   */
  3.1415926535897931,

  /* Expression: 2*pi
   * Referenced by: '<S3>/Constant1'
   */
  6.2831853071795862,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S124>/TSamp'
   */
  1000.0,

  /* Expression: -10
   * Referenced by: '<S3>/Gain'
   */
  -10.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S132>/Integrator'
   */
  0.001,

  /* Expression: antiwindupUpperLimit
   * Referenced by: '<S132>/Integrator'
   */
  0.0,

  /* Expression: antiwindupLowerLimit
   * Referenced by: '<S132>/Integrator'
   */
  0.0,

  /* Expression: windupUpperLimit
   * Referenced by: '<S132>/Saturation'
   */
  0.0,

  /* Expression: windupLowerLimit
   * Referenced by: '<S132>/Saturation'
   */
  0.0,

  /* Expression: -0.8
   * Referenced by: '<S3>/Gain1'
   */
  -0.8,

  /* Expression: 0
   * Referenced by: '<S149>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S156>/Constant'
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

  /* Expression: 0.0
   * Referenced by: '<Root>/Delay'
   */
  0.0,

  /* Expression: 5
   * Referenced by: '<Root>/Saturation'
   */
  5.0,

  /* Expression: -5
   * Referenced by: '<Root>/Saturation'
   */
  -5.0,

  /* Expression: 1/650
   * Referenced by: '<Root>/Gain'
   */
  0.0015384615384615385,

  /* Expression: 2*pi
   * Referenced by: '<Root>/Constant'
   */
  6.2831853071795862,

  /* Expression: 0.1524/5000
   * Referenced by: '<Root>/Gain2'
   */
  3.0480000000000003E-5,

  /* Expression: -pi
   * Referenced by: '<S4>/Constant2'
   */
  -3.1415926535897931,

  /* Computed Parameter: TSamp_WtEt_n
   * Referenced by: '<S141>/TSamp'
   */
  1000.0,

  /* Computed Parameter: Integrator_gainval_m
   * Referenced by: '<S158>/Integrator'
   */
  0.001,

  /* Expression: antiwindupUpperLimit
   * Referenced by: '<S158>/Integrator'
   */
  0.0,

  /* Expression: antiwindupLowerLimit
   * Referenced by: '<S158>/Integrator'
   */
  0.0,

  /* Expression: windupUpperLimit
   * Referenced by: '<S158>/Saturation'
   */
  0.0,

  /* Expression: windupLowerLimit
   * Referenced by: '<S158>/Saturation'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt_k
   * Referenced by: '<S140>/TSamp'
   */
  1000.0,

  /* Computed Parameter: Integrator_gainval_o
   * Referenced by: '<S151>/Integrator'
   */
  0.001,

  /* Expression: antiwindupUpperLimit
   * Referenced by: '<S151>/Integrator'
   */
  0.0,

  /* Expression: antiwindupLowerLimit
   * Referenced by: '<S151>/Integrator'
   */
  0.0,

  /* Expression: windupUpperLimit
   * Referenced by: '<S151>/Saturation'
   */
  0.0,

  /* Expression: windupLowerLimit
   * Referenced by: '<S151>/Saturation'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S4>/Constant1'
   */
  1.0,

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

  /* Expression: true()
   * Referenced by: '<S5>/Enable'
   */
  true,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S53>/isSqrtUsed'
   */
  false,

  /* Expression: true()
   * Referenced by: '<S60>/Enable'
   */
  true,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S111>/isSqrtUsed'
   */
  false,

  /* Computed Parameter: Q_Y0
   * Referenced by: '<S144>/Q'
   */
  false,

  /* Computed Parameter: Q_Y0_b
   * Referenced by: '<S144>/!Q'
   */
  true,

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

  /* Computed Parameter: Delay_InitialCondition_e
   * Referenced by: '<S4>/Delay'
   */
  false,

  /* Computed Parameter: HILWriteAnalog_Active
   * Referenced by: '<Root>/HIL Write Analog'
   */
  false,

  /* Start of '<S89>/Enabled Subsystem' */
  {
    /* Expression: 0
     * Referenced by: '<S115>/deltax'
     */
    0.0
  }
  ,

  /* End of '<S89>/Enabled Subsystem' */

  /* Start of '<S82>/MeasurementUpdate' */
  {
    /* Expression: 0
     * Referenced by: '<S113>/L*(y[k]-yhat[k|k-1])'
     */
    0.0
  }
  ,

  /* End of '<S82>/MeasurementUpdate' */

  /* Start of '<S31>/Enabled Subsystem' */
  {
    /* Expression: 0
     * Referenced by: '<S57>/deltax'
     */
    0.0
  }
  ,

  /* End of '<S31>/Enabled Subsystem' */

  /* Start of '<S25>/MeasurementUpdate' */
  {
    /* Expression: 0
     * Referenced by: '<S55>/L*(y[k]-yhat[k|k-1])'
     */
    0.0
  }
  /* End of '<S25>/MeasurementUpdate' */
};
