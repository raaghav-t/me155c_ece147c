    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
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
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (CL_modelid_P)
        ;%
            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% CL_modelid_P.K
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% CL_modelid_P.amp
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 6;

                    ;% CL_modelid_P.omega
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% CL_modelid_P.cartangle_channels
                    section.data(1).logicalSrcIdx = 3;
                    section.data(1).dtTransOffset = 0;

                    ;% CL_modelid_P.cartpos_channels
                    section.data(2).logicalSrcIdx = 4;
                    section.data(2).dtTransOffset = 1;

                    ;% CL_modelid_P.HILWriteAnalog_channels
                    section.data(3).logicalSrcIdx = 5;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 37;
            section.data(37)  = dumData; %prealloc

                    ;% CL_modelid_P.Lykyhatkk1_Y0
                    section.data(1).logicalSrcIdx = 6;
                    section.data(1).dtTransOffset = 0;

                    ;% CL_modelid_P.deltax_Y0
                    section.data(2).logicalSrcIdx = 7;
                    section.data(2).dtTransOffset = 1;

                    ;% CL_modelid_P.HILInitialize_OOTerminate
                    section.data(3).logicalSrcIdx = 8;
                    section.data(3).dtTransOffset = 2;

                    ;% CL_modelid_P.HILInitialize_OOExit
                    section.data(4).logicalSrcIdx = 9;
                    section.data(4).dtTransOffset = 3;

                    ;% CL_modelid_P.HILInitialize_OOStart
                    section.data(5).logicalSrcIdx = 10;
                    section.data(5).dtTransOffset = 4;

                    ;% CL_modelid_P.HILInitialize_OOEnter
                    section.data(6).logicalSrcIdx = 11;
                    section.data(6).dtTransOffset = 5;

                    ;% CL_modelid_P.HILInitialize_AOFinal
                    section.data(7).logicalSrcIdx = 12;
                    section.data(7).dtTransOffset = 6;

                    ;% CL_modelid_P.HILInitialize_POFinal
                    section.data(8).logicalSrcIdx = 13;
                    section.data(8).dtTransOffset = 7;

                    ;% CL_modelid_P.HILInitialize_AIHigh
                    section.data(9).logicalSrcIdx = 14;
                    section.data(9).dtTransOffset = 8;

                    ;% CL_modelid_P.HILInitialize_AILow
                    section.data(10).logicalSrcIdx = 15;
                    section.data(10).dtTransOffset = 9;

                    ;% CL_modelid_P.HILInitialize_AOHigh
                    section.data(11).logicalSrcIdx = 16;
                    section.data(11).dtTransOffset = 10;

                    ;% CL_modelid_P.HILInitialize_AOLow
                    section.data(12).logicalSrcIdx = 17;
                    section.data(12).dtTransOffset = 11;

                    ;% CL_modelid_P.HILInitialize_AOInitial
                    section.data(13).logicalSrcIdx = 18;
                    section.data(13).dtTransOffset = 12;

                    ;% CL_modelid_P.HILInitialize_AOWatchdog
                    section.data(14).logicalSrcIdx = 19;
                    section.data(14).dtTransOffset = 13;

                    ;% CL_modelid_P.HILInitialize_EIFrequency
                    section.data(15).logicalSrcIdx = 20;
                    section.data(15).dtTransOffset = 14;

                    ;% CL_modelid_P.HILInitialize_POFrequency
                    section.data(16).logicalSrcIdx = 21;
                    section.data(16).dtTransOffset = 15;

                    ;% CL_modelid_P.HILInitialize_POInitial
                    section.data(17).logicalSrcIdx = 22;
                    section.data(17).dtTransOffset = 16;

                    ;% CL_modelid_P.KalmanGainM_Value
                    section.data(18).logicalSrcIdx = 23;
                    section.data(18).dtTransOffset = 17;

                    ;% CL_modelid_P.C_Value
                    section.data(19).logicalSrcIdx = 24;
                    section.data(19).dtTransOffset = 29;

                    ;% CL_modelid_P.Gain_Gain
                    section.data(20).logicalSrcIdx = 25;
                    section.data(20).dtTransOffset = 41;

                    ;% CL_modelid_P.Gain2_Gain
                    section.data(21).logicalSrcIdx = 26;
                    section.data(21).dtTransOffset = 42;

                    ;% CL_modelid_P.X0_Value
                    section.data(22).logicalSrcIdx = 27;
                    section.data(22).dtTransOffset = 43;

                    ;% CL_modelid_P.Saturation_UpperSat
                    section.data(23).logicalSrcIdx = 28;
                    section.data(23).dtTransOffset = 49;

                    ;% CL_modelid_P.Saturation_LowerSat
                    section.data(24).logicalSrcIdx = 29;
                    section.data(24).dtTransOffset = 50;

                    ;% CL_modelid_P.SineWave_Bias
                    section.data(25).logicalSrcIdx = 30;
                    section.data(25).dtTransOffset = 51;

                    ;% CL_modelid_P.SineWave_Hsin
                    section.data(26).logicalSrcIdx = 31;
                    section.data(26).dtTransOffset = 52;

                    ;% CL_modelid_P.SineWave_HCos
                    section.data(27).logicalSrcIdx = 32;
                    section.data(27).dtTransOffset = 53;

                    ;% CL_modelid_P.SineWave_PSin
                    section.data(28).logicalSrcIdx = 33;
                    section.data(28).dtTransOffset = 54;

                    ;% CL_modelid_P.SineWave_PCos
                    section.data(29).logicalSrcIdx = 34;
                    section.data(29).dtTransOffset = 55;

                    ;% CL_modelid_P.A_Value
                    section.data(30).logicalSrcIdx = 35;
                    section.data(30).dtTransOffset = 56;

                    ;% CL_modelid_P.B_Value
                    section.data(31).logicalSrcIdx = 36;
                    section.data(31).dtTransOffset = 92;

                    ;% CL_modelid_P.CovarianceZ_Value
                    section.data(32).logicalSrcIdx = 37;
                    section.data(32).dtTransOffset = 98;

                    ;% CL_modelid_P.KalmanGainL_Value
                    section.data(33).logicalSrcIdx = 38;
                    section.data(33).dtTransOffset = 134;

                    ;% CL_modelid_P.D_Value
                    section.data(34).logicalSrcIdx = 39;
                    section.data(34).dtTransOffset = 146;

                    ;% CL_modelid_P.Step_Time
                    section.data(35).logicalSrcIdx = 40;
                    section.data(35).dtTransOffset = 148;

                    ;% CL_modelid_P.Step_Y0
                    section.data(36).logicalSrcIdx = 41;
                    section.data(36).dtTransOffset = 149;

                    ;% CL_modelid_P.Step_YFinal
                    section.data(37).logicalSrcIdx = 42;
                    section.data(37).dtTransOffset = 150;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% CL_modelid_P.HILInitialize_CKChannels
                    section.data(1).logicalSrcIdx = 43;
                    section.data(1).dtTransOffset = 0;

                    ;% CL_modelid_P.HILInitialize_CKModes
                    section.data(2).logicalSrcIdx = 44;
                    section.data(2).dtTransOffset = 2;

                    ;% CL_modelid_P.HILInitialize_DOWatchdog
                    section.data(3).logicalSrcIdx = 45;
                    section.data(3).dtTransOffset = 4;

                    ;% CL_modelid_P.HILInitialize_EIInitial
                    section.data(4).logicalSrcIdx = 46;
                    section.data(4).dtTransOffset = 5;

                    ;% CL_modelid_P.HILInitialize_POModes
                    section.data(5).logicalSrcIdx = 47;
                    section.data(5).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% CL_modelid_P.HILInitialize_AIChannels
                    section.data(1).logicalSrcIdx = 48;
                    section.data(1).dtTransOffset = 0;

                    ;% CL_modelid_P.HILInitialize_AOChannels
                    section.data(2).logicalSrcIdx = 49;
                    section.data(2).dtTransOffset = 4;

                    ;% CL_modelid_P.HILInitialize_EIChannels
                    section.data(3).logicalSrcIdx = 50;
                    section.data(3).dtTransOffset = 8;

                    ;% CL_modelid_P.HILInitialize_EIQuadrature
                    section.data(4).logicalSrcIdx = 51;
                    section.data(4).dtTransOffset = 12;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 40;
            section.data(40)  = dumData; %prealloc

                    ;% CL_modelid_P.HILInitialize_Active
                    section.data(1).logicalSrcIdx = 52;
                    section.data(1).dtTransOffset = 0;

                    ;% CL_modelid_P.HILInitialize_AOTerminate
                    section.data(2).logicalSrcIdx = 53;
                    section.data(2).dtTransOffset = 1;

                    ;% CL_modelid_P.HILInitialize_AOExit
                    section.data(3).logicalSrcIdx = 54;
                    section.data(3).dtTransOffset = 2;

                    ;% CL_modelid_P.HILInitialize_DOTerminate
                    section.data(4).logicalSrcIdx = 55;
                    section.data(4).dtTransOffset = 3;

                    ;% CL_modelid_P.HILInitialize_DOExit
                    section.data(5).logicalSrcIdx = 56;
                    section.data(5).dtTransOffset = 4;

                    ;% CL_modelid_P.HILInitialize_POTerminate
                    section.data(6).logicalSrcIdx = 57;
                    section.data(6).dtTransOffset = 5;

                    ;% CL_modelid_P.HILInitialize_POExit
                    section.data(7).logicalSrcIdx = 58;
                    section.data(7).dtTransOffset = 6;

                    ;% CL_modelid_P.HILInitialize_CKPStart
                    section.data(8).logicalSrcIdx = 59;
                    section.data(8).dtTransOffset = 7;

                    ;% CL_modelid_P.HILInitialize_CKPEnter
                    section.data(9).logicalSrcIdx = 60;
                    section.data(9).dtTransOffset = 8;

                    ;% CL_modelid_P.HILInitialize_CKStart
                    section.data(10).logicalSrcIdx = 61;
                    section.data(10).dtTransOffset = 9;

                    ;% CL_modelid_P.HILInitialize_CKEnter
                    section.data(11).logicalSrcIdx = 62;
                    section.data(11).dtTransOffset = 10;

                    ;% CL_modelid_P.HILInitialize_AIPStart
                    section.data(12).logicalSrcIdx = 63;
                    section.data(12).dtTransOffset = 11;

                    ;% CL_modelid_P.HILInitialize_AIPEnter
                    section.data(13).logicalSrcIdx = 64;
                    section.data(13).dtTransOffset = 12;

                    ;% CL_modelid_P.HILInitialize_AOPStart
                    section.data(14).logicalSrcIdx = 65;
                    section.data(14).dtTransOffset = 13;

                    ;% CL_modelid_P.HILInitialize_AOPEnter
                    section.data(15).logicalSrcIdx = 66;
                    section.data(15).dtTransOffset = 14;

                    ;% CL_modelid_P.HILInitialize_AOStart
                    section.data(16).logicalSrcIdx = 67;
                    section.data(16).dtTransOffset = 15;

                    ;% CL_modelid_P.HILInitialize_AOEnter
                    section.data(17).logicalSrcIdx = 68;
                    section.data(17).dtTransOffset = 16;

                    ;% CL_modelid_P.HILInitialize_AOReset
                    section.data(18).logicalSrcIdx = 69;
                    section.data(18).dtTransOffset = 17;

                    ;% CL_modelid_P.HILInitialize_DOPStart
                    section.data(19).logicalSrcIdx = 70;
                    section.data(19).dtTransOffset = 18;

                    ;% CL_modelid_P.HILInitialize_DOPEnter
                    section.data(20).logicalSrcIdx = 71;
                    section.data(20).dtTransOffset = 19;

                    ;% CL_modelid_P.HILInitialize_DOStart
                    section.data(21).logicalSrcIdx = 72;
                    section.data(21).dtTransOffset = 20;

                    ;% CL_modelid_P.HILInitialize_DOEnter
                    section.data(22).logicalSrcIdx = 73;
                    section.data(22).dtTransOffset = 21;

                    ;% CL_modelid_P.HILInitialize_DOReset
                    section.data(23).logicalSrcIdx = 74;
                    section.data(23).dtTransOffset = 22;

                    ;% CL_modelid_P.HILInitialize_EIPStart
                    section.data(24).logicalSrcIdx = 75;
                    section.data(24).dtTransOffset = 23;

                    ;% CL_modelid_P.HILInitialize_EIPEnter
                    section.data(25).logicalSrcIdx = 76;
                    section.data(25).dtTransOffset = 24;

                    ;% CL_modelid_P.HILInitialize_EIStart
                    section.data(26).logicalSrcIdx = 77;
                    section.data(26).dtTransOffset = 25;

                    ;% CL_modelid_P.HILInitialize_EIEnter
                    section.data(27).logicalSrcIdx = 78;
                    section.data(27).dtTransOffset = 26;

                    ;% CL_modelid_P.HILInitialize_POPStart
                    section.data(28).logicalSrcIdx = 79;
                    section.data(28).dtTransOffset = 27;

                    ;% CL_modelid_P.HILInitialize_POPEnter
                    section.data(29).logicalSrcIdx = 80;
                    section.data(29).dtTransOffset = 28;

                    ;% CL_modelid_P.HILInitialize_POStart
                    section.data(30).logicalSrcIdx = 81;
                    section.data(30).dtTransOffset = 29;

                    ;% CL_modelid_P.HILInitialize_POEnter
                    section.data(31).logicalSrcIdx = 82;
                    section.data(31).dtTransOffset = 30;

                    ;% CL_modelid_P.HILInitialize_POReset
                    section.data(32).logicalSrcIdx = 83;
                    section.data(32).dtTransOffset = 31;

                    ;% CL_modelid_P.HILInitialize_OOReset
                    section.data(33).logicalSrcIdx = 84;
                    section.data(33).dtTransOffset = 32;

                    ;% CL_modelid_P.HILInitialize_DOFinal
                    section.data(34).logicalSrcIdx = 85;
                    section.data(34).dtTransOffset = 33;

                    ;% CL_modelid_P.HILInitialize_DOInitial
                    section.data(35).logicalSrcIdx = 86;
                    section.data(35).dtTransOffset = 34;

                    ;% CL_modelid_P.cartangle_Active
                    section.data(36).logicalSrcIdx = 87;
                    section.data(36).dtTransOffset = 35;

                    ;% CL_modelid_P.cartpos_Active
                    section.data(37).logicalSrcIdx = 88;
                    section.data(37).dtTransOffset = 36;

                    ;% CL_modelid_P.Enable_Value
                    section.data(38).logicalSrcIdx = 89;
                    section.data(38).dtTransOffset = 37;

                    ;% CL_modelid_P.HILWriteAnalog_Active
                    section.data(39).logicalSrcIdx = 90;
                    section.data(39).dtTransOffset = 38;

                    ;% CL_modelid_P.isSqrtUsed_Value
                    section.data(40).logicalSrcIdx = 91;
                    section.data(40).dtTransOffset = 39;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
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
        nTotSects     = 1;
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
        ;% Auto data (CL_modelid_B)
        ;%
            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% CL_modelid_B.raagang
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% CL_modelid_B.raagpos
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% CL_modelid_B.TmpSignalConversionAtToWorkspac
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% CL_modelid_B.Gain3
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 4;

                    ;% CL_modelid_B.SineWave
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 5;

                    ;% CL_modelid_B.Sum1
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 6;

                    ;% CL_modelid_B.Add
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 7;

                    ;% CL_modelid_B.Step
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 13;

                    ;% CL_modelid_B.Product2
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 14;

                    ;% CL_modelid_B.Product3
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 20;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
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
        nTotSects     = 7;
        sectIdxOffset = 1;

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
        ;% Auto data (CL_modelid_DW)
        ;%
            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% CL_modelid_DW.MemoryX_DSTATE
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% CL_modelid_DW.HILInitialize_AIMinimums
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 6;

                    ;% CL_modelid_DW.HILInitialize_AIMaximums
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 10;

                    ;% CL_modelid_DW.HILInitialize_AOMinimums
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 14;

                    ;% CL_modelid_DW.HILInitialize_AOMaximums
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 18;

                    ;% CL_modelid_DW.HILInitialize_AOVoltages
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 22;

                    ;% CL_modelid_DW.HILInitialize_FilterFrequency
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 26;

                    ;% CL_modelid_DW.lastSin
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 30;

                    ;% CL_modelid_DW.lastCos
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 31;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% CL_modelid_DW.HILInitialize_Card
                    section.data(1).logicalSrcIdx = 9;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% CL_modelid_DW.cartangle_PWORK
                    section.data(1).logicalSrcIdx = 10;
                    section.data(1).dtTransOffset = 0;

                    ;% CL_modelid_DW.cartpos_PWORK
                    section.data(2).logicalSrcIdx = 11;
                    section.data(2).dtTransOffset = 1;

                    ;% CL_modelid_DW.HILWriteAnalog_PWORK
                    section.data(3).logicalSrcIdx = 12;
                    section.data(3).dtTransOffset = 2;

                    ;% CL_modelid_DW.Scope_PWORK.LoggedData
                    section.data(4).logicalSrcIdx = 13;
                    section.data(4).dtTransOffset = 3;

                    ;% CL_modelid_DW.Scope4_PWORK.LoggedData
                    section.data(5).logicalSrcIdx = 14;
                    section.data(5).dtTransOffset = 4;

                    ;% CL_modelid_DW.ToWorkspace_PWORK.LoggedData
                    section.data(6).logicalSrcIdx = 15;
                    section.data(6).dtTransOffset = 5;

                    ;% CL_modelid_DW.ToWorkspace1_PWORK.LoggedData
                    section.data(7).logicalSrcIdx = 16;
                    section.data(7).dtTransOffset = 6;

                    ;% CL_modelid_DW.ToWorkspace2_PWORK.LoggedData
                    section.data(8).logicalSrcIdx = 17;
                    section.data(8).dtTransOffset = 7;

                    ;% CL_modelid_DW.systemInput_PWORK.LoggedData
                    section.data(9).logicalSrcIdx = 18;
                    section.data(9).dtTransOffset = 8;

                    ;% CL_modelid_DW.TRIGGER_SCOPE_PWORK.LoggedData
                    section.data(10).logicalSrcIdx = 19;
                    section.data(10).dtTransOffset = 10;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% CL_modelid_DW.HILInitialize_QuadratureModes
                    section.data(1).logicalSrcIdx = 20;
                    section.data(1).dtTransOffset = 0;

                    ;% CL_modelid_DW.HILInitialize_InitialEICounts
                    section.data(2).logicalSrcIdx = 21;
                    section.data(2).dtTransOffset = 4;

                    ;% CL_modelid_DW.cartangle_Buffer
                    section.data(3).logicalSrcIdx = 22;
                    section.data(3).dtTransOffset = 8;

                    ;% CL_modelid_DW.cartpos_Buffer
                    section.data(4).logicalSrcIdx = 23;
                    section.data(4).dtTransOffset = 9;

                    ;% CL_modelid_DW.systemEnable
                    section.data(5).logicalSrcIdx = 24;
                    section.data(5).dtTransOffset = 10;

                    ;% CL_modelid_DW.sfEvent
                    section.data(6).logicalSrcIdx = 25;
                    section.data(6).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% CL_modelid_DW.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 26;
                    section.data(1).dtTransOffset = 0;

                    ;% CL_modelid_DW.MeasurementUpdate_SubsysRanBC
                    section.data(2).logicalSrcIdx = 27;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% CL_modelid_DW.is_active_c7_ctrlSharedLib
                    section.data(1).logicalSrcIdx = 28;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% CL_modelid_DW.icLoad
                    section.data(1).logicalSrcIdx = 29;
                    section.data(1).dtTransOffset = 0;

                    ;% CL_modelid_DW.doneDoubleBufferReInit
                    section.data(2).logicalSrcIdx = 30;
                    section.data(2).dtTransOffset = 1;

                    ;% CL_modelid_DW.EnabledSubsystem_MODE
                    section.data(3).logicalSrcIdx = 31;
                    section.data(3).dtTransOffset = 2;

                    ;% CL_modelid_DW.MeasurementUpdate_MODE
                    section.data(4).logicalSrcIdx = 32;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
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


    targMap.checksum0 = 2742639235;
    targMap.checksum1 = 131875556;
    targMap.checksum2 = 2232486249;
    targMap.checksum3 = 3624283904;

