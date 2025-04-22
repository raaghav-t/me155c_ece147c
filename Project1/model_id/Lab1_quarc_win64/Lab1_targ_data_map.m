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
        ;% Auto data (Lab1_P)
        ;%
            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% Lab1_P.amp
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% Lab1_P.omega
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% Lab1_P.HILReadEncoder_channels
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% Lab1_P.HILWriteAnalog_channels
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 24;
            section.data(24)  = dumData; %prealloc

                    ;% Lab1_P.HILInitialize_OOTerminate
                    section.data(1).logicalSrcIdx = 4;
                    section.data(1).dtTransOffset = 0;

                    ;% Lab1_P.HILInitialize_OOExit
                    section.data(2).logicalSrcIdx = 5;
                    section.data(2).dtTransOffset = 1;

                    ;% Lab1_P.HILInitialize_OOStart
                    section.data(3).logicalSrcIdx = 6;
                    section.data(3).dtTransOffset = 2;

                    ;% Lab1_P.HILInitialize_OOEnter
                    section.data(4).logicalSrcIdx = 7;
                    section.data(4).dtTransOffset = 3;

                    ;% Lab1_P.HILInitialize_AOFinal
                    section.data(5).logicalSrcIdx = 8;
                    section.data(5).dtTransOffset = 4;

                    ;% Lab1_P.HILInitialize_POFinal
                    section.data(6).logicalSrcIdx = 9;
                    section.data(6).dtTransOffset = 5;

                    ;% Lab1_P.HILInitialize_AIHigh
                    section.data(7).logicalSrcIdx = 10;
                    section.data(7).dtTransOffset = 6;

                    ;% Lab1_P.HILInitialize_AILow
                    section.data(8).logicalSrcIdx = 11;
                    section.data(8).dtTransOffset = 7;

                    ;% Lab1_P.HILInitialize_AOHigh
                    section.data(9).logicalSrcIdx = 12;
                    section.data(9).dtTransOffset = 8;

                    ;% Lab1_P.HILInitialize_AOLow
                    section.data(10).logicalSrcIdx = 13;
                    section.data(10).dtTransOffset = 9;

                    ;% Lab1_P.HILInitialize_AOInitial
                    section.data(11).logicalSrcIdx = 14;
                    section.data(11).dtTransOffset = 10;

                    ;% Lab1_P.HILInitialize_AOWatchdog
                    section.data(12).logicalSrcIdx = 15;
                    section.data(12).dtTransOffset = 11;

                    ;% Lab1_P.HILInitialize_EIFrequency
                    section.data(13).logicalSrcIdx = 16;
                    section.data(13).dtTransOffset = 12;

                    ;% Lab1_P.HILInitialize_POFrequency
                    section.data(14).logicalSrcIdx = 17;
                    section.data(14).dtTransOffset = 13;

                    ;% Lab1_P.HILInitialize_POInitial
                    section.data(15).logicalSrcIdx = 18;
                    section.data(15).dtTransOffset = 14;

                    ;% Lab1_P.Gain_Gain
                    section.data(16).logicalSrcIdx = 19;
                    section.data(16).dtTransOffset = 15;

                    ;% Lab1_P.SineWave_Bias
                    section.data(17).logicalSrcIdx = 20;
                    section.data(17).dtTransOffset = 16;

                    ;% Lab1_P.SineWave_Hsin
                    section.data(18).logicalSrcIdx = 21;
                    section.data(18).dtTransOffset = 17;

                    ;% Lab1_P.SineWave_HCos
                    section.data(19).logicalSrcIdx = 22;
                    section.data(19).dtTransOffset = 18;

                    ;% Lab1_P.SineWave_PSin
                    section.data(20).logicalSrcIdx = 23;
                    section.data(20).dtTransOffset = 19;

                    ;% Lab1_P.SineWave_PCos
                    section.data(21).logicalSrcIdx = 24;
                    section.data(21).dtTransOffset = 20;

                    ;% Lab1_P.Step_Time
                    section.data(22).logicalSrcIdx = 25;
                    section.data(22).dtTransOffset = 21;

                    ;% Lab1_P.Step_Y0
                    section.data(23).logicalSrcIdx = 26;
                    section.data(23).dtTransOffset = 22;

                    ;% Lab1_P.Step_YFinal
                    section.data(24).logicalSrcIdx = 27;
                    section.data(24).dtTransOffset = 23;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% Lab1_P.HILInitialize_CKChannels
                    section.data(1).logicalSrcIdx = 28;
                    section.data(1).dtTransOffset = 0;

                    ;% Lab1_P.HILInitialize_CKModes
                    section.data(2).logicalSrcIdx = 29;
                    section.data(2).dtTransOffset = 2;

                    ;% Lab1_P.HILInitialize_DOWatchdog
                    section.data(3).logicalSrcIdx = 30;
                    section.data(3).dtTransOffset = 4;

                    ;% Lab1_P.HILInitialize_EIInitial
                    section.data(4).logicalSrcIdx = 31;
                    section.data(4).dtTransOffset = 5;

                    ;% Lab1_P.HILInitialize_POModes
                    section.data(5).logicalSrcIdx = 32;
                    section.data(5).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% Lab1_P.HILInitialize_AIChannels
                    section.data(1).logicalSrcIdx = 33;
                    section.data(1).dtTransOffset = 0;

                    ;% Lab1_P.HILInitialize_AOChannels
                    section.data(2).logicalSrcIdx = 34;
                    section.data(2).dtTransOffset = 4;

                    ;% Lab1_P.HILInitialize_EIChannels
                    section.data(3).logicalSrcIdx = 35;
                    section.data(3).dtTransOffset = 8;

                    ;% Lab1_P.HILInitialize_EIQuadrature
                    section.data(4).logicalSrcIdx = 36;
                    section.data(4).dtTransOffset = 12;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 37;
            section.data(37)  = dumData; %prealloc

                    ;% Lab1_P.HILInitialize_Active
                    section.data(1).logicalSrcIdx = 37;
                    section.data(1).dtTransOffset = 0;

                    ;% Lab1_P.HILInitialize_AOTerminate
                    section.data(2).logicalSrcIdx = 38;
                    section.data(2).dtTransOffset = 1;

                    ;% Lab1_P.HILInitialize_AOExit
                    section.data(3).logicalSrcIdx = 39;
                    section.data(3).dtTransOffset = 2;

                    ;% Lab1_P.HILInitialize_DOTerminate
                    section.data(4).logicalSrcIdx = 40;
                    section.data(4).dtTransOffset = 3;

                    ;% Lab1_P.HILInitialize_DOExit
                    section.data(5).logicalSrcIdx = 41;
                    section.data(5).dtTransOffset = 4;

                    ;% Lab1_P.HILInitialize_POTerminate
                    section.data(6).logicalSrcIdx = 42;
                    section.data(6).dtTransOffset = 5;

                    ;% Lab1_P.HILInitialize_POExit
                    section.data(7).logicalSrcIdx = 43;
                    section.data(7).dtTransOffset = 6;

                    ;% Lab1_P.HILInitialize_CKPStart
                    section.data(8).logicalSrcIdx = 44;
                    section.data(8).dtTransOffset = 7;

                    ;% Lab1_P.HILInitialize_CKPEnter
                    section.data(9).logicalSrcIdx = 45;
                    section.data(9).dtTransOffset = 8;

                    ;% Lab1_P.HILInitialize_CKStart
                    section.data(10).logicalSrcIdx = 46;
                    section.data(10).dtTransOffset = 9;

                    ;% Lab1_P.HILInitialize_CKEnter
                    section.data(11).logicalSrcIdx = 47;
                    section.data(11).dtTransOffset = 10;

                    ;% Lab1_P.HILInitialize_AIPStart
                    section.data(12).logicalSrcIdx = 48;
                    section.data(12).dtTransOffset = 11;

                    ;% Lab1_P.HILInitialize_AIPEnter
                    section.data(13).logicalSrcIdx = 49;
                    section.data(13).dtTransOffset = 12;

                    ;% Lab1_P.HILInitialize_AOPStart
                    section.data(14).logicalSrcIdx = 50;
                    section.data(14).dtTransOffset = 13;

                    ;% Lab1_P.HILInitialize_AOPEnter
                    section.data(15).logicalSrcIdx = 51;
                    section.data(15).dtTransOffset = 14;

                    ;% Lab1_P.HILInitialize_AOStart
                    section.data(16).logicalSrcIdx = 52;
                    section.data(16).dtTransOffset = 15;

                    ;% Lab1_P.HILInitialize_AOEnter
                    section.data(17).logicalSrcIdx = 53;
                    section.data(17).dtTransOffset = 16;

                    ;% Lab1_P.HILInitialize_AOReset
                    section.data(18).logicalSrcIdx = 54;
                    section.data(18).dtTransOffset = 17;

                    ;% Lab1_P.HILInitialize_DOPStart
                    section.data(19).logicalSrcIdx = 55;
                    section.data(19).dtTransOffset = 18;

                    ;% Lab1_P.HILInitialize_DOPEnter
                    section.data(20).logicalSrcIdx = 56;
                    section.data(20).dtTransOffset = 19;

                    ;% Lab1_P.HILInitialize_DOStart
                    section.data(21).logicalSrcIdx = 57;
                    section.data(21).dtTransOffset = 20;

                    ;% Lab1_P.HILInitialize_DOEnter
                    section.data(22).logicalSrcIdx = 58;
                    section.data(22).dtTransOffset = 21;

                    ;% Lab1_P.HILInitialize_DOReset
                    section.data(23).logicalSrcIdx = 59;
                    section.data(23).dtTransOffset = 22;

                    ;% Lab1_P.HILInitialize_EIPStart
                    section.data(24).logicalSrcIdx = 60;
                    section.data(24).dtTransOffset = 23;

                    ;% Lab1_P.HILInitialize_EIPEnter
                    section.data(25).logicalSrcIdx = 61;
                    section.data(25).dtTransOffset = 24;

                    ;% Lab1_P.HILInitialize_EIStart
                    section.data(26).logicalSrcIdx = 62;
                    section.data(26).dtTransOffset = 25;

                    ;% Lab1_P.HILInitialize_EIEnter
                    section.data(27).logicalSrcIdx = 63;
                    section.data(27).dtTransOffset = 26;

                    ;% Lab1_P.HILInitialize_POPStart
                    section.data(28).logicalSrcIdx = 64;
                    section.data(28).dtTransOffset = 27;

                    ;% Lab1_P.HILInitialize_POPEnter
                    section.data(29).logicalSrcIdx = 65;
                    section.data(29).dtTransOffset = 28;

                    ;% Lab1_P.HILInitialize_POStart
                    section.data(30).logicalSrcIdx = 66;
                    section.data(30).dtTransOffset = 29;

                    ;% Lab1_P.HILInitialize_POEnter
                    section.data(31).logicalSrcIdx = 67;
                    section.data(31).dtTransOffset = 30;

                    ;% Lab1_P.HILInitialize_POReset
                    section.data(32).logicalSrcIdx = 68;
                    section.data(32).dtTransOffset = 31;

                    ;% Lab1_P.HILInitialize_OOReset
                    section.data(33).logicalSrcIdx = 69;
                    section.data(33).dtTransOffset = 32;

                    ;% Lab1_P.HILInitialize_DOFinal
                    section.data(34).logicalSrcIdx = 70;
                    section.data(34).dtTransOffset = 33;

                    ;% Lab1_P.HILInitialize_DOInitial
                    section.data(35).logicalSrcIdx = 71;
                    section.data(35).dtTransOffset = 34;

                    ;% Lab1_P.HILReadEncoder_Active
                    section.data(36).logicalSrcIdx = 72;
                    section.data(36).dtTransOffset = 35;

                    ;% Lab1_P.HILWriteAnalog_Active
                    section.data(37).logicalSrcIdx = 73;
                    section.data(37).dtTransOffset = 36;

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
        ;% Auto data (Lab1_B)
        ;%
            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% Lab1_B.raag
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% Lab1_B.Step
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

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
        nTotSects     = 4;
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
        ;% Auto data (Lab1_DW)
        ;%
            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% Lab1_DW.HILInitialize_AIMinimums
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% Lab1_DW.HILInitialize_AIMaximums
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 4;

                    ;% Lab1_DW.HILInitialize_AOMinimums
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 8;

                    ;% Lab1_DW.HILInitialize_AOMaximums
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 12;

                    ;% Lab1_DW.HILInitialize_AOVoltages
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 16;

                    ;% Lab1_DW.HILInitialize_FilterFrequency
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 20;

                    ;% Lab1_DW.lastSin
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 24;

                    ;% Lab1_DW.lastCos
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 25;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Lab1_DW.HILInitialize_Card
                    section.data(1).logicalSrcIdx = 8;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% Lab1_DW.HILReadEncoder_PWORK
                    section.data(1).logicalSrcIdx = 9;
                    section.data(1).dtTransOffset = 0;

                    ;% Lab1_DW.Scope_PWORK.LoggedData
                    section.data(2).logicalSrcIdx = 10;
                    section.data(2).dtTransOffset = 1;

                    ;% Lab1_DW.ToWorkspace_PWORK.LoggedData
                    section.data(3).logicalSrcIdx = 11;
                    section.data(3).dtTransOffset = 2;

                    ;% Lab1_DW.HILWriteAnalog_PWORK
                    section.data(4).logicalSrcIdx = 12;
                    section.data(4).dtTransOffset = 3;

                    ;% Lab1_DW.TRIGGER_SCOPE_PWORK.LoggedData
                    section.data(5).logicalSrcIdx = 13;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% Lab1_DW.HILInitialize_QuadratureModes
                    section.data(1).logicalSrcIdx = 14;
                    section.data(1).dtTransOffset = 0;

                    ;% Lab1_DW.HILInitialize_InitialEICounts
                    section.data(2).logicalSrcIdx = 15;
                    section.data(2).dtTransOffset = 4;

                    ;% Lab1_DW.HILReadEncoder_Buffer
                    section.data(3).logicalSrcIdx = 16;
                    section.data(3).dtTransOffset = 8;

                    ;% Lab1_DW.systemEnable
                    section.data(4).logicalSrcIdx = 17;
                    section.data(4).dtTransOffset = 10;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
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


    targMap.checksum0 = 3769348690;
    targMap.checksum1 = 3279122686;
    targMap.checksum2 = 4000393200;
    targMap.checksum3 = 3051421137;

