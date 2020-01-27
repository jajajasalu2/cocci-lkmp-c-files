cocci_test_suite() {
	enum{MXL_DEFAULT_MODULATION=0, MXL_DVBT, MXL_ATSC, MXL_QAM, MXL_ANALOG_CABLE, MXL_ANALOG_OTA,} cocci_id/* drivers/media/tuners/mxl5005s.c 97 */;
	enum master_control_state{MC_LOAD_START=1, MC_POWER_DOWN, MC_SYNTH_RESET, MC_SEQ_OFF,} cocci_id/* drivers/media/tuners/mxl5005s.c 89 */;
	struct mxl5005s_state *cocci_id/* drivers/media/tuners/mxl5005s.c 724 */;
	u16 cocci_id/* drivers/media/tuners/mxl5005s.c 722 */;
	struct dvb_tuner_ops cocci_id/* drivers/media/tuners/mxl5005s.c 4112 */;
	struct mxl5005s_state cocci_id/* drivers/media/tuners/mxl5005s.c 4100 */;
	struct i2c_adapter *cocci_id/* drivers/media/tuners/mxl5005s.c 4094 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/tuners/mxl5005s.c 4076 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/tuners/mxl5005s.c 3987 */;
	struct mxl5005s_config *cocci_id/* drivers/media/tuners/mxl5005s.c 3959 */;
	u8 cocci_id/* drivers/media/tuners/mxl5005s.c 3930 */[MXL5005S_REG_WRITING_TABLE_LEN_MAX];
	u8 cocci_id/* drivers/media/tuners/mxl5005s.c 3878 */[3];
	struct i2c_msg cocci_id/* drivers/media/tuners/mxl5005s.c 3853 */;
	u8 cocci_id/* drivers/media/tuners/mxl5005s.c 3852 */[2];
	u8 cocci_id/* drivers/media/tuners/mxl5005s.c 3652 */[];
	const u8 cocci_id/* drivers/media/tuners/mxl5005s.c 3620 */[];
	int cocci_id/* drivers/media/tuners/mxl5005s.c 3616 */;
	int *cocci_id/* drivers/media/tuners/mxl5005s.c 3613 */;
	u8 *cocci_id/* drivers/media/tuners/mxl5005s.c 3612 */;
	const u8 cocci_id/* drivers/media/tuners/mxl5005s.c 3563 */[8];
	u32 *cocci_id/* drivers/media/tuners/mxl5005s.c 3509 */;
	unsigned char cocci_id/* drivers/media/tuners/mxl5005s.c 345 */;
	unsigned char cocci_id/* drivers/media/tuners/mxl5005s.c 340 */[MXL5005S_REG_WRITING_TABLE_LEN_MAX];
	unsigned long cocci_id/* drivers/media/tuners/mxl5005s.c 337 */;
	int cocci_id/* drivers/media/tuners/mxl5005s.c 320 */(struct dvb_frontend *fe,
							      u32 mod_type,
							      u32 bandwidth);
	u16 cocci_id/* drivers/media/tuners/mxl5005s.c 319 */(struct dvb_frontend *fe);
	int cocci_id/* drivers/media/tuners/mxl5005s.c 317 */(struct dvb_frontend *fe,
							      u8 *addrtable,
							      u8 *datatable,
							      u8 len);
	void cocci_id/* drivers/media/tuners/mxl5005s.c 313 */(struct dvb_frontend *fe);
	u16 cocci_id/* drivers/media/tuners/mxl5005s.c 312 */(struct dvb_frontend *fe,
							      u32 RF_Freq);
	u16 cocci_id/* drivers/media/tuners/mxl5005s.c 309 */(struct dvb_frontend *fe,
							      u8 GPIO_Num,
							      u8 GPIO_Val);
	u16 cocci_id/* drivers/media/tuners/mxl5005s.c 307 */(struct dvb_frontend *fe,
							      u16 controlNum,
							      u32 value,
							      u16 controlGroup);
	u16 cocci_id/* drivers/media/tuners/mxl5005s.c 306 */(struct dvb_frontend *fe,
							      u8 RegNum,
							      u8 *RegVal);
	u32 cocci_id/* drivers/media/tuners/mxl5005s.c 305 */(u32 value,
							      u32 resolution);
	u16 cocci_id/* drivers/media/tuners/mxl5005s.c 303 */(struct dvb_frontend *fe,
							      u8 *RegNum,
							      u8 *RegVal,
							      int *count);
	void cocci_id/* drivers/media/tuners/mxl5005s.c 301 */(struct dvb_frontend *fe,
							       u8 address,
							       u8 bit,
							       u8 bitVal);
	u16 cocci_id/* drivers/media/tuners/mxl5005s.c 300 */(struct dvb_frontend *fe,
							      u16 controlNum,
							      u32 *value);
	u16 cocci_id/* drivers/media/tuners/mxl5005s.c 299 */(struct dvb_frontend *fe,
							      u16 ControlNum,
							      u32 value);
	u16 cocci_id/* drivers/media/tuners/mxl5005s.c 298 */(u8 *MasterReg,
							      int state);
	struct mxl5005s_state {
		u8 Mode;
		u8 IF_Mode;
		u32 Chan_Bandwidth;
		u32 IF_OUT;
		u16 IF_OUT_LOAD;
		u32 RF_IN;
		u32 Fxtal;
		u8 AGC_Mode;
		u16 TOP;
		u8 CLOCK_OUT;
		u8 DIV_OUT;
		u8 CAPSELECT;
		u8 EN_RSSI;
		u8 Mod_Type;
		u8 TF_Type;
		u32 RF_LO;
		u32 IF_LO;
		u32 TG_LO;
		u16 Init_Ctrl_Num;
		struct TunerControl Init_Ctrl[INITCTRL_NUM];
		u16 CH_Ctrl_Num;
		struct TunerControl CH_Ctrl[CHCTRL_NUM];
		u16 MXL_Ctrl_Num;
		struct TunerControl MXL_Ctrl[MXLCTRL_NUM];
		u16 TunerRegs_Num;
		struct TunerReg TunerRegs[TUNER_REGS_NUM];
		struct mxl5005s_config *config;
		struct dvb_frontend *frontend;
		struct i2c_adapter *i2c;
		u32 current_mode;
	} cocci_id/* drivers/media/tuners/mxl5005s.c 242 */;
	struct TunerControl {
		u16 Ctrl_Num;
		u16 size;
		u16 addr[25];
		u16 bit[25];
		u16 val[25];
	} cocci_id/* drivers/media/tuners/mxl5005s.c 233 */;
	enum{MXL5005S_BANDWIDTH_6MHZ=6000000, MXL5005S_BANDWIDTH_7MHZ=7000000, MXL5005S_BANDWIDTH_8MHZ=8000000,} cocci_id/* drivers/media/tuners/mxl5005s.c 225 */;
	enum{MXL5005S_STANDARD_DVBT, MXL5005S_STANDARD_ATSC,} cocci_id/* drivers/media/tuners/mxl5005s.c 218 */;
	u32 cocci_id/* drivers/media/tuners/mxl5005s.c 1674 */;
	u8 cocci_id/* drivers/media/tuners/mxl5005s.c 1672 */;
	struct dvb_frontend *cocci_id/* drivers/media/tuners/mxl5005s.c 1662 */;
	void cocci_id/* drivers/media/tuners/mxl5005s.c 1662 */;
	enum{DN_IQTN_AMP_CUT=1, BB_MODE, BB_BUF, BB_BUF_OA, BB_ALPF_BANDSELECT, BB_IQSWAP, BB_DLPF_BANDSEL, RFSYN_CHP_GAIN, RFSYN_EN_CHP_HIGAIN, AGC_IF, AGC_RF, IF_DIVVAL, IF_VCO_BIAS, CHCAL_INT_MOD_IF, CHCAL_FRAC_MOD_IF, DRV_RES_SEL, I_DRIVER, EN_AAF, EN_3P, EN_AUX_3P, SEL_AAF_BAND, SEQ_ENCLK16_CLK_OUT, SEQ_SEL4_16B, XTAL_CAPSELECT, IF_SEL_DBL, RFSYN_R_DIV, SEQ_EXTSYNTHCALIF, SEQ_EXTDCCAL, AGC_EN_RSSI, RFA_ENCLKRFAGC, RFA_RSSI_REFH, RFA_RSSI_REF, RFA_RSSI_REFL, RFA_FLR, RFA_CEIL, SEQ_EXTIQFSMPULSE, OVERRIDE_1, BB_INITSTATE_DLPF_TUNE, TG_R_DIV, EN_CHP_LIN_B, DN_POLY=51, DN_RFGAIN, DN_CAP_RFLPF, DN_EN_VHFUHFBAR, DN_GAIN_ADJUST, DN_IQTNBUF_AMP, DN_IQTNGNBFBIAS_BST, RFSYN_EN_OUTMUX, RFSYN_SEL_VCO_OUT, RFSYN_SEL_VCO_HI, RFSYN_SEL_DIVM, RFSYN_RF_DIV_BIAS, DN_SEL_FREQ, RFSYN_VCO_BIAS, CHCAL_INT_MOD_RF, CHCAL_FRAC_MOD_RF, RFSYN_LPF_R, CHCAL_EN_INT_RF, TG_LO_DIVVAL, TG_LO_SELVAL, TG_DIV_VAL, TG_VCO_BIAS, SEQ_EXTPOWERUP, OVERRIDE_2, OVERRIDE_3, OVERRIDE_4, SEQ_FSM_PULSE, GPIO_4B, GPIO_3B, GPIO_4, GPIO_3, GPIO_1B, DAC_A_ENABLE, DAC_B_ENABLE, DAC_DIN_A, DAC_DIN_B,

#ifdef _MXL_PRODUCTION
 RFSYN_EN_DIV, RFSYN_DIVM, DN_BYPASS_AGC_I2C

#endif
,} cocci_id/* drivers/media/tuners/mxl5005s.c 112 */;
	struct TunerReg {
		u16 Reg_Num;
		u16 Reg_Val;
	} cocci_id/* drivers/media/tuners/mxl5005s.c 107 */;
}
