    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 10;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (Copy_of_Controller_P)
        ;%
            section.nData     = 24;
            section.data(24)  = dumData; %prealloc

                    ;% Copy_of_Controller_P.K
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% Copy_of_Controller_P.K_down
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 6;

                    ;% Copy_of_Controller_P.DiscreteDerivative_ICPrevScaled
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 12;

                    ;% Copy_of_Controller_P.DiscreteDerivative1_ICPrevScale
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 13;

                    ;% Copy_of_Controller_P.DiscreteDerivative_ICPrevScal_f
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 14;

                    ;% Copy_of_Controller_P.LowPassFilterDiscreteorContinuo
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 15;

                    ;% Copy_of_Controller_P.LowPassFilterDiscreteorContin_o
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 16;

                    ;% Copy_of_Controller_P.LowPassFilterDiscreteorContin_b
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 17;

                    ;% Copy_of_Controller_P.LowPassFilterDiscreteorContin_d
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 18;

                    ;% Copy_of_Controller_P.LowPassFilterDiscreteorContin_m
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 19;

                    ;% Copy_of_Controller_P.LowPassFilterDiscreteorConti_b2
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 20;

                    ;% Copy_of_Controller_P.CompareToConstant_const
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 21;

                    ;% Copy_of_Controller_P.CompareToConstant_const_o
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 22;

                    ;% Copy_of_Controller_P.CompareToConstant1_const
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 23;

                    ;% Copy_of_Controller_P.Balance_const
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 24;

                    ;% Copy_of_Controller_P.CompareToConstant5_const
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 25;

                    ;% Copy_of_Controller_P.CompareToConstant_const_l
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 26;

                    ;% Copy_of_Controller_P.CompareToConstant3_const
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 27;

                    ;% Copy_of_Controller_P.CompareToConstant4_const
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 28;

                    ;% Copy_of_Controller_P.CompareToConstant_const_c
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 29;

                    ;% Copy_of_Controller_P.CompareToConstant2_const
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 30;

                    ;% Copy_of_Controller_P.LowPassFilterDiscreteorConti_b0
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 31;

                    ;% Copy_of_Controller_P.LowPassFilterDiscreteorConti_mr
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 32;

                    ;% Copy_of_Controller_P.LowPassFilterDiscreteorConti_oe
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 33;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% Copy_of_Controller_P.cartangle_channels
                    section.data(1).logicalSrcIdx = 24;
                    section.data(1).dtTransOffset = 0;

                    ;% Copy_of_Controller_P.cartpos_channels
                    section.data(2).logicalSrcIdx = 25;
                    section.data(2).dtTransOffset = 1;

                    ;% Copy_of_Controller_P.HILWriteAnalog_channels
                    section.data(3).logicalSrcIdx = 26;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 73;
            section.data(73)  = dumData; %prealloc

                    ;% Copy_of_Controller_P.u_out_Y0
                    section.data(1).logicalSrcIdx = 27;
                    section.data(1).dtTransOffset = 0;

                    ;% Copy_of_Controller_P.Constant_Value
                    section.data(2).logicalSrcIdx = 28;
                    section.data(2).dtTransOffset = 1;

                    ;% Copy_of_Controller_P.KalmanGainM_Value
                    section.data(3).logicalSrcIdx = 29;
                    section.data(3).dtTransOffset = 3;

                    ;% Copy_of_Controller_P.C_Value
                    section.data(4).logicalSrcIdx = 30;
                    section.data(4).dtTransOffset = 15;

                    ;% Copy_of_Controller_P.X0_Value
                    section.data(5).logicalSrcIdx = 31;
                    section.data(5).dtTransOffset = 27;

                    ;% Copy_of_Controller_P.A_Value
                    section.data(6).logicalSrcIdx = 32;
                    section.data(6).dtTransOffset = 33;

                    ;% Copy_of_Controller_P.B_Value
                    section.data(7).logicalSrcIdx = 33;
                    section.data(7).dtTransOffset = 69;

                    ;% Copy_of_Controller_P.CovarianceZ_Value
                    section.data(8).logicalSrcIdx = 34;
                    section.data(8).dtTransOffset = 75;

                    ;% Copy_of_Controller_P.KalmanGainL_Value
                    section.data(9).logicalSrcIdx = 35;
                    section.data(9).dtTransOffset = 111;

                    ;% Copy_of_Controller_P.D_Value
                    section.data(10).logicalSrcIdx = 36;
                    section.data(10).dtTransOffset = 123;

                    ;% Copy_of_Controller_P.u_out_Y0_h
                    section.data(11).logicalSrcIdx = 37;
                    section.data(11).dtTransOffset = 125;

                    ;% Copy_of_Controller_P.Constant_Value_e
                    section.data(12).logicalSrcIdx = 38;
                    section.data(12).dtTransOffset = 126;

                    ;% Copy_of_Controller_P.Constant1_Value
                    section.data(13).logicalSrcIdx = 39;
                    section.data(13).dtTransOffset = 127;

                    ;% Copy_of_Controller_P.KalmanGainM_Value_d
                    section.data(14).logicalSrcIdx = 40;
                    section.data(14).dtTransOffset = 128;

                    ;% Copy_of_Controller_P.C_Value_h
                    section.data(15).logicalSrcIdx = 41;
                    section.data(15).dtTransOffset = 140;

                    ;% Copy_of_Controller_P.X0_Value_j
                    section.data(16).logicalSrcIdx = 42;
                    section.data(16).dtTransOffset = 152;

                    ;% Copy_of_Controller_P.A_Value_j
                    section.data(17).logicalSrcIdx = 43;
                    section.data(17).dtTransOffset = 158;

                    ;% Copy_of_Controller_P.B_Value_o
                    section.data(18).logicalSrcIdx = 44;
                    section.data(18).dtTransOffset = 194;

                    ;% Copy_of_Controller_P.CovarianceZ_Value_e
                    section.data(19).logicalSrcIdx = 45;
                    section.data(19).dtTransOffset = 200;

                    ;% Copy_of_Controller_P.KalmanGainL_Value_d
                    section.data(20).logicalSrcIdx = 46;
                    section.data(20).dtTransOffset = 236;

                    ;% Copy_of_Controller_P.D_Value_d
                    section.data(21).logicalSrcIdx = 47;
                    section.data(21).dtTransOffset = 248;

                    ;% Copy_of_Controller_P.u_out_Y0_k
                    section.data(22).logicalSrcIdx = 48;
                    section.data(22).dtTransOffset = 250;

                    ;% Copy_of_Controller_P.Constant_Value_n
                    section.data(23).logicalSrcIdx = 49;
                    section.data(23).dtTransOffset = 251;

                    ;% Copy_of_Controller_P.upi_Value
                    section.data(24).logicalSrcIdx = 50;
                    section.data(24).dtTransOffset = 252;

                    ;% Copy_of_Controller_P.Constant_Value_m
                    section.data(25).logicalSrcIdx = 51;
                    section.data(25).dtTransOffset = 253;

                    ;% Copy_of_Controller_P.TSamp_WtEt
                    section.data(26).logicalSrcIdx = 52;
                    section.data(26).dtTransOffset = 254;

                    ;% Copy_of_Controller_P.Gain_Gain
                    section.data(27).logicalSrcIdx = 53;
                    section.data(27).dtTransOffset = 255;

                    ;% Copy_of_Controller_P.Integrator_gainval
                    section.data(28).logicalSrcIdx = 54;
                    section.data(28).dtTransOffset = 256;

                    ;% Copy_of_Controller_P.Integrator_UpperSat
                    section.data(29).logicalSrcIdx = 55;
                    section.data(29).dtTransOffset = 257;

                    ;% Copy_of_Controller_P.Integrator_LowerSat
                    section.data(30).logicalSrcIdx = 56;
                    section.data(30).dtTransOffset = 258;

                    ;% Copy_of_Controller_P.Saturation_UpperSat
                    section.data(31).logicalSrcIdx = 57;
                    section.data(31).dtTransOffset = 259;

                    ;% Copy_of_Controller_P.Saturation_LowerSat
                    section.data(32).logicalSrcIdx = 58;
                    section.data(32).dtTransOffset = 260;

                    ;% Copy_of_Controller_P.Gain1_Gain
                    section.data(33).logicalSrcIdx = 59;
                    section.data(33).dtTransOffset = 261;

                    ;% Copy_of_Controller_P.Constant_Value_j
                    section.data(34).logicalSrcIdx = 60;
                    section.data(34).dtTransOffset = 262;

                    ;% Copy_of_Controller_P.Constant_Value_ew
                    section.data(35).logicalSrcIdx = 61;
                    section.data(35).dtTransOffset = 263;

                    ;% Copy_of_Controller_P.HILInitialize_OOTerminate
                    section.data(36).logicalSrcIdx = 62;
                    section.data(36).dtTransOffset = 264;

                    ;% Copy_of_Controller_P.HILInitialize_OOExit
                    section.data(37).logicalSrcIdx = 63;
                    section.data(37).dtTransOffset = 265;

                    ;% Copy_of_Controller_P.HILInitialize_OOStart
                    section.data(38).logicalSrcIdx = 64;
                    section.data(38).dtTransOffset = 266;

                    ;% Copy_of_Controller_P.HILInitialize_OOEnter
                    section.data(39).logicalSrcIdx = 65;
                    section.data(39).dtTransOffset = 267;

                    ;% Copy_of_Controller_P.HILInitialize_AOFinal
                    section.data(40).logicalSrcIdx = 66;
                    section.data(40).dtTransOffset = 268;

                    ;% Copy_of_Controller_P.HILInitialize_POFinal
                    section.data(41).logicalSrcIdx = 67;
                    section.data(41).dtTransOffset = 269;

                    ;% Copy_of_Controller_P.HILInitialize_AIHigh
                    section.data(42).logicalSrcIdx = 68;
                    section.data(42).dtTransOffset = 270;

                    ;% Copy_of_Controller_P.HILInitialize_AILow
                    section.data(43).logicalSrcIdx = 69;
                    section.data(43).dtTransOffset = 271;

                    ;% Copy_of_Controller_P.HILInitialize_AOHigh
                    section.data(44).logicalSrcIdx = 70;
                    section.data(44).dtTransOffset = 272;

                    ;% Copy_of_Controller_P.HILInitialize_AOLow
                    section.data(45).logicalSrcIdx = 71;
                    section.data(45).dtTransOffset = 273;

                    ;% Copy_of_Controller_P.HILInitialize_AOInitial
                    section.data(46).logicalSrcIdx = 72;
                    section.data(46).dtTransOffset = 274;

                    ;% Copy_of_Controller_P.HILInitialize_AOWatchdog
                    section.data(47).logicalSrcIdx = 73;
                    section.data(47).dtTransOffset = 275;

                    ;% Copy_of_Controller_P.HILInitialize_EIFrequency
                    section.data(48).logicalSrcIdx = 74;
                    section.data(48).dtTransOffset = 276;

                    ;% Copy_of_Controller_P.HILInitialize_POFrequency
                    section.data(49).logicalSrcIdx = 75;
                    section.data(49).dtTransOffset = 277;

                    ;% Copy_of_Controller_P.HILInitialize_POInitial
                    section.data(50).logicalSrcIdx = 76;
                    section.data(50).dtTransOffset = 278;

                    ;% Copy_of_Controller_P.Delay_InitialCondition
                    section.data(51).logicalSrcIdx = 77;
                    section.data(51).dtTransOffset = 279;

                    ;% Copy_of_Controller_P.Saturation_UpperSat_k
                    section.data(52).logicalSrcIdx = 78;
                    section.data(52).dtTransOffset = 280;

                    ;% Copy_of_Controller_P.Saturation_LowerSat_k
                    section.data(53).logicalSrcIdx = 79;
                    section.data(53).dtTransOffset = 281;

                    ;% Copy_of_Controller_P.Gain_Gain_k
                    section.data(54).logicalSrcIdx = 80;
                    section.data(54).dtTransOffset = 282;

                    ;% Copy_of_Controller_P.Constant_Value_h
                    section.data(55).logicalSrcIdx = 81;
                    section.data(55).dtTransOffset = 283;

                    ;% Copy_of_Controller_P.Gain2_Gain
                    section.data(56).logicalSrcIdx = 82;
                    section.data(56).dtTransOffset = 284;

                    ;% Copy_of_Controller_P.Constant2_Value
                    section.data(57).logicalSrcIdx = 83;
                    section.data(57).dtTransOffset = 285;

                    ;% Copy_of_Controller_P.TSamp_WtEt_n
                    section.data(58).logicalSrcIdx = 84;
                    section.data(58).dtTransOffset = 286;

                    ;% Copy_of_Controller_P.Integrator_gainval_m
                    section.data(59).logicalSrcIdx = 85;
                    section.data(59).dtTransOffset = 287;

                    ;% Copy_of_Controller_P.Integrator_UpperSat_p
                    section.data(60).logicalSrcIdx = 86;
                    section.data(60).dtTransOffset = 288;

                    ;% Copy_of_Controller_P.Integrator_LowerSat_l
                    section.data(61).logicalSrcIdx = 87;
                    section.data(61).dtTransOffset = 289;

                    ;% Copy_of_Controller_P.Saturation_UpperSat_m
                    section.data(62).logicalSrcIdx = 88;
                    section.data(62).dtTransOffset = 290;

                    ;% Copy_of_Controller_P.Saturation_LowerSat_j
                    section.data(63).logicalSrcIdx = 89;
                    section.data(63).dtTransOffset = 291;

                    ;% Copy_of_Controller_P.TSamp_WtEt_k
                    section.data(64).logicalSrcIdx = 90;
                    section.data(64).dtTransOffset = 292;

                    ;% Copy_of_Controller_P.Integrator_gainval_o
                    section.data(65).logicalSrcIdx = 91;
                    section.data(65).dtTransOffset = 293;

                    ;% Copy_of_Controller_P.Integrator_UpperSat_i
                    section.data(66).logicalSrcIdx = 92;
                    section.data(66).dtTransOffset = 294;

                    ;% Copy_of_Controller_P.Integrator_LowerSat_k
                    section.data(67).logicalSrcIdx = 93;
                    section.data(67).dtTransOffset = 295;

                    ;% Copy_of_Controller_P.Saturation_UpperSat_c
                    section.data(68).logicalSrcIdx = 94;
                    section.data(68).dtTransOffset = 296;

                    ;% Copy_of_Controller_P.Saturation_LowerSat_jk
                    section.data(69).logicalSrcIdx = 95;
                    section.data(69).dtTransOffset = 297;

                    ;% Copy_of_Controller_P.Constant1_Value_k
                    section.data(70).logicalSrcIdx = 96;
                    section.data(70).dtTransOffset = 298;

                    ;% Copy_of_Controller_P.Step_Time
                    section.data(71).logicalSrcIdx = 97;
                    section.data(71).dtTransOffset = 299;

                    ;% Copy_of_Controller_P.Step_Y0
                    section.data(72).logicalSrcIdx = 98;
                    section.data(72).dtTransOffset = 300;

                    ;% Copy_of_Controller_P.Step_YFinal
                    section.data(73).logicalSrcIdx = 99;
                    section.data(73).dtTransOffset = 301;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% Copy_of_Controller_P.HILInitialize_CKChannels
                    section.data(1).logicalSrcIdx = 100;
                    section.data(1).dtTransOffset = 0;

                    ;% Copy_of_Controller_P.HILInitialize_CKModes
                    section.data(2).logicalSrcIdx = 101;
                    section.data(2).dtTransOffset = 2;

                    ;% Copy_of_Controller_P.HILInitialize_DOWatchdog
                    section.data(3).logicalSrcIdx = 102;
                    section.data(3).dtTransOffset = 4;

                    ;% Copy_of_Controller_P.HILInitialize_EIInitial
                    section.data(4).logicalSrcIdx = 103;
                    section.data(4).dtTransOffset = 5;

                    ;% Copy_of_Controller_P.HILInitialize_POModes
                    section.data(5).logicalSrcIdx = 104;
                    section.data(5).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% Copy_of_Controller_P.HILInitialize_AIChannels
                    section.data(1).logicalSrcIdx = 105;
                    section.data(1).dtTransOffset = 0;

                    ;% Copy_of_Controller_P.HILInitialize_AOChannels
                    section.data(2).logicalSrcIdx = 106;
                    section.data(2).dtTransOffset = 4;

                    ;% Copy_of_Controller_P.HILInitialize_EIChannels
                    section.data(3).logicalSrcIdx = 107;
                    section.data(3).dtTransOffset = 8;

                    ;% Copy_of_Controller_P.HILInitialize_EIQuadrature
                    section.data(4).logicalSrcIdx = 108;
                    section.data(4).dtTransOffset = 12;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 45;
            section.data(45)  = dumData; %prealloc

                    ;% Copy_of_Controller_P.Enable_Value
                    section.data(1).logicalSrcIdx = 109;
                    section.data(1).dtTransOffset = 0;

                    ;% Copy_of_Controller_P.isSqrtUsed_Value
                    section.data(2).logicalSrcIdx = 110;
                    section.data(2).dtTransOffset = 1;

                    ;% Copy_of_Controller_P.Enable_Value_d
                    section.data(3).logicalSrcIdx = 111;
                    section.data(3).dtTransOffset = 2;

                    ;% Copy_of_Controller_P.isSqrtUsed_Value_f
                    section.data(4).logicalSrcIdx = 112;
                    section.data(4).dtTransOffset = 3;

                    ;% Copy_of_Controller_P.Q_Y0
                    section.data(5).logicalSrcIdx = 113;
                    section.data(5).dtTransOffset = 4;

                    ;% Copy_of_Controller_P.Q_Y0_b
                    section.data(6).logicalSrcIdx = 114;
                    section.data(6).dtTransOffset = 5;

                    ;% Copy_of_Controller_P.HILInitialize_Active
                    section.data(7).logicalSrcIdx = 115;
                    section.data(7).dtTransOffset = 6;

                    ;% Copy_of_Controller_P.HILInitialize_AOTerminate
                    section.data(8).logicalSrcIdx = 116;
                    section.data(8).dtTransOffset = 7;

                    ;% Copy_of_Controller_P.HILInitialize_AOExit
                    section.data(9).logicalSrcIdx = 117;
                    section.data(9).dtTransOffset = 8;

                    ;% Copy_of_Controller_P.HILInitialize_DOTerminate
                    section.data(10).logicalSrcIdx = 118;
                    section.data(10).dtTransOffset = 9;

                    ;% Copy_of_Controller_P.HILInitialize_DOExit
                    section.data(11).logicalSrcIdx = 119;
                    section.data(11).dtTransOffset = 10;

                    ;% Copy_of_Controller_P.HILInitialize_POTerminate
                    section.data(12).logicalSrcIdx = 120;
                    section.data(12).dtTransOffset = 11;

                    ;% Copy_of_Controller_P.HILInitialize_POExit
                    section.data(13).logicalSrcIdx = 121;
                    section.data(13).dtTransOffset = 12;

                    ;% Copy_of_Controller_P.HILInitialize_CKPStart
                    section.data(14).logicalSrcIdx = 122;
                    section.data(14).dtTransOffset = 13;

                    ;% Copy_of_Controller_P.HILInitialize_CKPEnter
                    section.data(15).logicalSrcIdx = 123;
                    section.data(15).dtTransOffset = 14;

                    ;% Copy_of_Controller_P.HILInitialize_CKStart
                    section.data(16).logicalSrcIdx = 124;
                    section.data(16).dtTransOffset = 15;

                    ;% Copy_of_Controller_P.HILInitialize_CKEnter
                    section.data(17).logicalSrcIdx = 125;
                    section.data(17).dtTransOffset = 16;

                    ;% Copy_of_Controller_P.HILInitialize_AIPStart
                    section.data(18).logicalSrcIdx = 126;
                    section.data(18).dtTransOffset = 17;

                    ;% Copy_of_Controller_P.HILInitialize_AIPEnter
                    section.data(19).logicalSrcIdx = 127;
                    section.data(19).dtTransOffset = 18;

                    ;% Copy_of_Controller_P.HILInitialize_AOPStart
                    section.data(20).logicalSrcIdx = 128;
                    section.data(20).dtTransOffset = 19;

                    ;% Copy_of_Controller_P.HILInitialize_AOPEnter
                    section.data(21).logicalSrcIdx = 129;
                    section.data(21).dtTransOffset = 20;

                    ;% Copy_of_Controller_P.HILInitialize_AOStart
                    section.data(22).logicalSrcIdx = 130;
                    section.data(22).dtTransOffset = 21;

                    ;% Copy_of_Controller_P.HILInitialize_AOEnter
                    section.data(23).logicalSrcIdx = 131;
                    section.data(23).dtTransOffset = 22;

                    ;% Copy_of_Controller_P.HILInitialize_AOReset
                    section.data(24).logicalSrcIdx = 132;
                    section.data(24).dtTransOffset = 23;

                    ;% Copy_of_Controller_P.HILInitialize_DOPStart
                    section.data(25).logicalSrcIdx = 133;
                    section.data(25).dtTransOffset = 24;

                    ;% Copy_of_Controller_P.HILInitialize_DOPEnter
                    section.data(26).logicalSrcIdx = 134;
                    section.data(26).dtTransOffset = 25;

                    ;% Copy_of_Controller_P.HILInitialize_DOStart
                    section.data(27).logicalSrcIdx = 135;
                    section.data(27).dtTransOffset = 26;

                    ;% Copy_of_Controller_P.HILInitialize_DOEnter
                    section.data(28).logicalSrcIdx = 136;
                    section.data(28).dtTransOffset = 27;

                    ;% Copy_of_Controller_P.HILInitialize_DOReset
                    section.data(29).logicalSrcIdx = 137;
                    section.data(29).dtTransOffset = 28;

                    ;% Copy_of_Controller_P.HILInitialize_EIPStart
                    section.data(30).logicalSrcIdx = 138;
                    section.data(30).dtTransOffset = 29;

                    ;% Copy_of_Controller_P.HILInitialize_EIPEnter
                    section.data(31).logicalSrcIdx = 139;
                    section.data(31).dtTransOffset = 30;

                    ;% Copy_of_Controller_P.HILInitialize_EIStart
                    section.data(32).logicalSrcIdx = 140;
                    section.data(32).dtTransOffset = 31;

                    ;% Copy_of_Controller_P.HILInitialize_EIEnter
                    section.data(33).logicalSrcIdx = 141;
                    section.data(33).dtTransOffset = 32;

                    ;% Copy_of_Controller_P.HILInitialize_POPStart
                    section.data(34).logicalSrcIdx = 142;
                    section.data(34).dtTransOffset = 33;

                    ;% Copy_of_Controller_P.HILInitialize_POPEnter
                    section.data(35).logicalSrcIdx = 143;
                    section.data(35).dtTransOffset = 34;

                    ;% Copy_of_Controller_P.HILInitialize_POStart
                    section.data(36).logicalSrcIdx = 144;
                    section.data(36).dtTransOffset = 35;

                    ;% Copy_of_Controller_P.HILInitialize_POEnter
                    section.data(37).logicalSrcIdx = 145;
                    section.data(37).dtTransOffset = 36;

                    ;% Copy_of_Controller_P.HILInitialize_POReset
                    section.data(38).logicalSrcIdx = 146;
                    section.data(38).dtTransOffset = 37;

                    ;% Copy_of_Controller_P.HILInitialize_OOReset
                    section.data(39).logicalSrcIdx = 147;
                    section.data(39).dtTransOffset = 38;

                    ;% Copy_of_Controller_P.HILInitialize_DOFinal
                    section.data(40).logicalSrcIdx = 148;
                    section.data(40).dtTransOffset = 39;

                    ;% Copy_of_Controller_P.HILInitialize_DOInitial
                    section.data(41).logicalSrcIdx = 149;
                    section.data(41).dtTransOffset = 40;

                    ;% Copy_of_Controller_P.cartangle_Active
                    section.data(42).logicalSrcIdx = 150;
                    section.data(42).dtTransOffset = 41;

                    ;% Copy_of_Controller_P.cartpos_Active
                    section.data(43).logicalSrcIdx = 151;
                    section.data(43).dtTransOffset = 42;

                    ;% Copy_of_Controller_P.Delay_InitialCondition_e
                    section.data(44).logicalSrcIdx = 152;
                    section.data(44).dtTransOffset = 43;

                    ;% Copy_of_Controller_P.HILWriteAnalog_Active
                    section.data(45).logicalSrcIdx = 153;
                    section.data(45).dtTransOffset = 44;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_P.EnabledSubsystem_p.deltax_Y0
                    section.data(1).logicalSrcIdx = 154;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_P.MeasurementUpdate_p.Lykyhatkk1_Y0
                    section.data(1).logicalSrcIdx = 155;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_P.EnabledSubsystem.deltax_Y0
                    section.data(1).logicalSrcIdx = 156;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_P.MeasurementUpdate.Lykyhatkk1_Y0
                    section.data(1).logicalSrcIdx = 157;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(10) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 6;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (Copy_of_Controller_B)
        ;%
            section.nData     = 19;
            section.data(19)  = dumData; %prealloc

                    ;% Copy_of_Controller_B.Mod
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% Copy_of_Controller_B.raagpos
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% Copy_of_Controller_B.Probe
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% Copy_of_Controller_B.TSamp
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 4;

                    ;% Copy_of_Controller_B.Probe_o
                    section.data(5).logicalSrcIdx = 5;
                    section.data(5).dtTransOffset = 5;

                    ;% Copy_of_Controller_B.TSamp_n
                    section.data(6).logicalSrcIdx = 6;
                    section.data(6).dtTransOffset = 7;

                    ;% Copy_of_Controller_B.Sum1
                    section.data(7).logicalSrcIdx = 8;
                    section.data(7).dtTransOffset = 8;

                    ;% Copy_of_Controller_B.TmpSignalConversionAtToWorkspac
                    section.data(8).logicalSrcIdx = 9;
                    section.data(8).dtTransOffset = 9;

                    ;% Copy_of_Controller_B.uT
                    section.data(9).logicalSrcIdx = 10;
                    section.data(9).dtTransOffset = 11;

                    ;% Copy_of_Controller_B.uT_e
                    section.data(10).logicalSrcIdx = 11;
                    section.data(10).dtTransOffset = 12;

                    ;% Copy_of_Controller_B.Step
                    section.data(11).logicalSrcIdx = 12;
                    section.data(11).dtTransOffset = 13;

                    ;% Copy_of_Controller_B.TSamp_a
                    section.data(12).logicalSrcIdx = 13;
                    section.data(12).dtTransOffset = 14;

                    ;% Copy_of_Controller_B.Probe_h
                    section.data(13).logicalSrcIdx = 14;
                    section.data(13).dtTransOffset = 15;

                    ;% Copy_of_Controller_B.uT_i
                    section.data(14).logicalSrcIdx = 16;
                    section.data(14).dtTransOffset = 17;

                    ;% Copy_of_Controller_B.Sum
                    section.data(15).logicalSrcIdx = 17;
                    section.data(15).dtTransOffset = 18;

                    ;% Copy_of_Controller_B.Add
                    section.data(16).logicalSrcIdx = 18;
                    section.data(16).dtTransOffset = 19;

                    ;% Copy_of_Controller_B.Sum5
                    section.data(17).logicalSrcIdx = 19;
                    section.data(17).dtTransOffset = 25;

                    ;% Copy_of_Controller_B.Gain3
                    section.data(18).logicalSrcIdx = 20;
                    section.data(18).dtTransOffset = 26;

                    ;% Copy_of_Controller_B.Add_e
                    section.data(19).logicalSrcIdx = 21;
                    section.data(19).dtTransOffset = 27;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% Copy_of_Controller_B.Compare
                    section.data(1).logicalSrcIdx = 22;
                    section.data(1).dtTransOffset = 0;

                    ;% Copy_of_Controller_B.LogicalOperator
                    section.data(2).logicalSrcIdx = 23;
                    section.data(2).dtTransOffset = 1;

                    ;% Copy_of_Controller_B.LogicalOperator_g
                    section.data(3).logicalSrcIdx = 24;
                    section.data(3).dtTransOffset = 2;

                    ;% Copy_of_Controller_B.Down
                    section.data(4).logicalSrcIdx = 26;
                    section.data(4).dtTransOffset = 3;

                    ;% Copy_of_Controller_B.Swing
                    section.data(5).logicalSrcIdx = 27;
                    section.data(5).dtTransOffset = 4;

                    ;% Copy_of_Controller_B.NOT2
                    section.data(6).logicalSrcIdx = 28;
                    section.data(6).dtTransOffset = 5;

                    ;% Copy_of_Controller_B.D
                    section.data(7).logicalSrcIdx = 29;
                    section.data(7).dtTransOffset = 6;

                    ;% Copy_of_Controller_B.LogicalOperator_f
                    section.data(8).logicalSrcIdx = 30;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_B.EnabledSubsystem_p.Product2
                    section.data(1).logicalSrcIdx = 31;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_B.MeasurementUpdate_p.Product3
                    section.data(1).logicalSrcIdx = 32;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_B.EnabledSubsystem.Product2
                    section.data(1).logicalSrcIdx = 34;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_B.MeasurementUpdate.Product3
                    section.data(1).logicalSrcIdx = 35;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(6) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 22;
        sectIdxOffset = 6;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (Copy_of_Controller_DW)
        ;%
            section.nData     = 15;
            section.data(15)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% Copy_of_Controller_DW.UD_DSTATE
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% Copy_of_Controller_DW.Integrator_DSTATE
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% Copy_of_Controller_DW.UD_DSTATE_b
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% Copy_of_Controller_DW.Integrator_DSTATE_f
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% Copy_of_Controller_DW.UD_DSTATE_j
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% Copy_of_Controller_DW.Integrator_DSTATE_i
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% Copy_of_Controller_DW.MemoryX_DSTATE
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% Copy_of_Controller_DW.MemoryX_DSTATE_o
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 13;

                    ;% Copy_of_Controller_DW.HILInitialize_AIMinimums
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 19;

                    ;% Copy_of_Controller_DW.HILInitialize_AIMaximums
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 23;

                    ;% Copy_of_Controller_DW.HILInitialize_AOMinimums
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 27;

                    ;% Copy_of_Controller_DW.HILInitialize_AOMaximums
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 31;

                    ;% Copy_of_Controller_DW.HILInitialize_AOVoltages
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 35;

                    ;% Copy_of_Controller_DW.HILInitialize_FilterFrequency
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 39;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.HILInitialize_Card
                    section.data(1).logicalSrcIdx = 15;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.cartangle_PWORK
                    section.data(1).logicalSrcIdx = 16;
                    section.data(1).dtTransOffset = 0;

                    ;% Copy_of_Controller_DW.cartpos_PWORK
                    section.data(2).logicalSrcIdx = 17;
                    section.data(2).dtTransOffset = 1;

                    ;% Copy_of_Controller_DW.HILWriteAnalog_PWORK
                    section.data(3).logicalSrcIdx = 18;
                    section.data(3).dtTransOffset = 2;

                    ;% Copy_of_Controller_DW.Scope_PWORK.LoggedData
                    section.data(4).logicalSrcIdx = 19;
                    section.data(4).dtTransOffset = 3;

                    ;% Copy_of_Controller_DW.Scope4_PWORK.LoggedData
                    section.data(5).logicalSrcIdx = 20;
                    section.data(5).dtTransOffset = 4;

                    ;% Copy_of_Controller_DW.ToWorkspace_PWORK.LoggedData
                    section.data(6).logicalSrcIdx = 21;
                    section.data(6).dtTransOffset = 5;

                    ;% Copy_of_Controller_DW.systemInput_PWORK.LoggedData
                    section.data(7).logicalSrcIdx = 22;
                    section.data(7).dtTransOffset = 6;

                    ;% Copy_of_Controller_DW.Scope_PWORK_m.LoggedData
                    section.data(8).logicalSrcIdx = 23;
                    section.data(8).dtTransOffset = 7;

                    ;% Copy_of_Controller_DW.TRIGGER_SCOPE_PWORK.LoggedData
                    section.data(9).logicalSrcIdx = 24;
                    section.data(9).dtTransOffset = 10;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.HILInitialize_QuadratureModes
                    section.data(1).logicalSrcIdx = 25;
                    section.data(1).dtTransOffset = 0;

                    ;% Copy_of_Controller_DW.HILInitialize_InitialEICounts
                    section.data(2).logicalSrcIdx = 26;
                    section.data(2).dtTransOffset = 4;

                    ;% Copy_of_Controller_DW.cartangle_Buffer
                    section.data(3).logicalSrcIdx = 27;
                    section.data(3).dtTransOffset = 8;

                    ;% Copy_of_Controller_DW.cartpos_Buffer
                    section.data(4).logicalSrcIdx = 28;
                    section.data(4).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.Delay_DSTATE_f
                    section.data(1).logicalSrcIdx = 29;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.Integrator_PrevResetState
                    section.data(1).logicalSrcIdx = 30;
                    section.data(1).dtTransOffset = 0;

                    ;% Copy_of_Controller_DW.Integrator_PrevResetState_l
                    section.data(2).logicalSrcIdx = 31;
                    section.data(2).dtTransOffset = 1;

                    ;% Copy_of_Controller_DW.DLatch_SubsysRanBC
                    section.data(3).logicalSrcIdx = 32;
                    section.data(3).dtTransOffset = 2;

                    ;% Copy_of_Controller_DW.swing_SubsysRanBC
                    section.data(4).logicalSrcIdx = 33;
                    section.data(4).dtTransOffset = 3;

                    ;% Copy_of_Controller_DW.Integrator_PrevResetState_a
                    section.data(5).logicalSrcIdx = 34;
                    section.data(5).dtTransOffset = 4;

                    ;% Copy_of_Controller_DW.down_SubsysRanBC
                    section.data(6).logicalSrcIdx = 35;
                    section.data(6).dtTransOffset = 5;

                    ;% Copy_of_Controller_DW.balancing_SubsysRanBC
                    section.data(7).logicalSrcIdx = 36;
                    section.data(7).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.Integrator_IC_LOADING
                    section.data(1).logicalSrcIdx = 37;
                    section.data(1).dtTransOffset = 0;

                    ;% Copy_of_Controller_DW.Integrator_IC_LOADING_i
                    section.data(2).logicalSrcIdx = 38;
                    section.data(2).dtTransOffset = 1;

                    ;% Copy_of_Controller_DW.Integrator_IC_LOADING_m
                    section.data(3).logicalSrcIdx = 39;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.icLoad
                    section.data(1).logicalSrcIdx = 40;
                    section.data(1).dtTransOffset = 0;

                    ;% Copy_of_Controller_DW.icLoad_p
                    section.data(2).logicalSrcIdx = 41;
                    section.data(2).dtTransOffset = 1;

                    ;% Copy_of_Controller_DW.swing_MODE
                    section.data(3).logicalSrcIdx = 42;
                    section.data(3).dtTransOffset = 2;

                    ;% Copy_of_Controller_DW.down_MODE
                    section.data(4).logicalSrcIdx = 43;
                    section.data(4).dtTransOffset = 3;

                    ;% Copy_of_Controller_DW.balancing_MODE
                    section.data(5).logicalSrcIdx = 44;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.EnabledSubsystem_p.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 45;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.EnabledSubsystem_p.EnabledSubsystem_MODE
                    section.data(1).logicalSrcIdx = 46;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.MeasurementUpdate_p.MeasurementUpdate_SubsysRanBC
                    section.data(1).logicalSrcIdx = 47;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.MeasurementUpdate_p.MeasurementUpdate_MODE
                    section.data(1).logicalSrcIdx = 48;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.sf_SqrtUsedFcn_m.sfEvent
                    section.data(1).logicalSrcIdx = 49;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.sf_SqrtUsedFcn_m.is_active_c7_ctrlSharedLib
                    section.data(1).logicalSrcIdx = 50;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.sf_SqrtUsedFcn_m.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 51;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.EnabledSubsystem.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 52;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.EnabledSubsystem.EnabledSubsystem_MODE
                    section.data(1).logicalSrcIdx = 53;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(17) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.MeasurementUpdate.MeasurementUpdate_SubsysRanBC
                    section.data(1).logicalSrcIdx = 54;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(18) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.MeasurementUpdate.MeasurementUpdate_MODE
                    section.data(1).logicalSrcIdx = 55;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(19) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.sf_SqrtUsedFcn.sfEvent
                    section.data(1).logicalSrcIdx = 56;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(20) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.sf_SqrtUsedFcn.is_active_c7_ctrlSharedLib
                    section.data(1).logicalSrcIdx = 57;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(21) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Copy_of_Controller_DW.sf_SqrtUsedFcn.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 58;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(22) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 1794288917;
    targMap.checksum1 = 2350996517;
    targMap.checksum2 = 4006753025;
    targMap.checksum3 = 1749609029;

