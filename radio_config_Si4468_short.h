#if 1
#undef RF_MODEM_RAW_CONTROL_10                      // Override RSSI averaging
#define RF_MODEM_RAW_CONTROL_10 0x11, 0x20, 0x0A, 0x45, 0x03, 0x00, 0x00, 0x01, 0x00, 0xFF, 0x06, 0x18, 0x10, 0x40


#undef RF_MODEM_AGC_CONTROL_1
#define RF_MODEM_AGC_CONTROL_1 0x11, 0x20, 0x01, 0x35, 0xF1             // Override AGC gain increase

#undef RF_GPIO_PIN_CFG
#define RF_GPIO_PIN_CFG GLOBAL_GPIO_PIN_CFG

#undef RF_GLOBAL_CLK_CFG_1
#define RF_GLOBAL_CLK_CFG_1 GLOBAL_CLK_CFG


#undef RADIO_CONFIGURATION_DATA_ARRAY
#define RADIO_CONFIGURATION_DATA_ARRAY { \
		0x10, RF_MODEM_MOD_TYPE_12_1, \
/*      0x05, RF_MODEM_FREQ_DEV_0_1_1, */ \
        0x10, RF_MODEM_TX_RAMP_DELAY_12_1, \
        0x10, RF_MODEM_BCR_NCO_OFFSET_2_12_1, \
        0x07, RF_MODEM_AFC_LIMITER_1_3_1, \
        0x05, RF_MODEM_AGC_CONTROL_1_1, \
        0x10, RF_MODEM_AGC_WINDOW_SIZE_12_1, \
        0x0E, RF_MODEM_RAW_CONTROL_10, \
 /*     0x06, RF_MODEM_RAW_SEARCH2_2_1, */ \
 /*       0x06, RF_MODEM_SPIKE_DET_2_1, */ \
 /*       0x05, RF_MODEM_RSSI_MUTE_1_1, */ \
        0x09, RF_MODEM_DSA_CTRL1_5_1, \
        0x10, RF_MODEM_CHFLT_RX1_CHFLT_COE13_7_0_12_1, \
        0x10, RF_MODEM_CHFLT_RX1_CHFLT_COE1_7_0_12_1, \
        0x10, RF_MODEM_CHFLT_RX2_CHFLT_COE7_7_0_12_1, \
        0x05, RF_PA_TC_1_1, \
        0x0B, RF_SYNTH_PFDCP_CPFF_7_1, \
/*        0x0C, RF_FREQ_CONTROL_INTE_8_1, */ \
        0x00 \
 }
 #endif
 
