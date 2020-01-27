cocci_test_suite() {
	u16 *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 960 */;
	enum EIFFilter{IFFILTER_SAW=0, IFFILTER_DISCRETE=1,} cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 95 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 913 */;
	const struct firmware *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 892 */;
	const char *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 890 */;
	enum app_env{APPENV_STATIC=0, APPENV_PORTABLE=1, APPENV_MOBILE=2,} cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 89 */;
	struct SNoiseCal {
		int cpOpt;
		short cpNexpOfs;
		short tdCal2k;
		short tdCal8k;
	} cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 82 */;
	struct SCfgAgc {
		enum AGC_CTRL_MODE ctrlMode;
		u16 outputLevel;
		u16 settleLevel;
		u16 minOutputLevel;
		u16 maxOutputLevel;
		u16 speed;
		u16 R1;
		u16 R2;
		u16 R3;
	} cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 69 */;
	enum OperationMode{OM_Default, OM_DVBT_Diversity_Front, OM_DVBT_Diversity_End,} cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 63 */;
	const u16 cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 629 */[];
	enum AGC_CTRL_MODE{AGC_CTRL_AUTO=0, AGC_CTRL_USER, AGC_CTRL_OFF,} cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 57 */;
	struct SCfgAgc *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 553 */;
	const u16 cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 518 */;
	int cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 513 */(struct drxd_state *state);
	enum CDrxdState{DRXD_UNINITIALIZED=0, DRXD_STOPPED, DRXD_STARTED,} cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 51 */;
	enum CSCDState{CSCD_INIT=0, CSCD_SET, CSCD_SAVED,} cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 45 */;
	struct device *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 2918 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 2917 */;
	void *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 2917 */;
	const struct drxd_config *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 2916 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 2916 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 2885 */;
	void cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 2878 */;
	u8 cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 286 */[CHUNK_SIZE + 4];
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 2819 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 2778 */;
	u8 cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 271 */[8];
	const u8 *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 2583 */;
	u8 cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 258 */[6];
	enum app_env cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 2515 */;
	u16 cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 2469 */;
	u32 cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 2430 */;
	struct drxd_state *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 2430 */;
	int cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 2430 */;
	u8 cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 231 */[2];
	u8 cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 228 */[4];
	u8 cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 225 */;
	u64 cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 217 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 201 */[2];
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 191 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 1899 */;
	struct SNoiseCal *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 1863 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 1598 */;
	s16 cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 1590 */;
	s32 cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 1585 */;
	struct drxd_state {
		struct dvb_frontend frontend;
		struct dvb_frontend_ops ops;
		struct dtv_frontend_properties props;
		const struct firmware *fw;
		struct device *dev;
		struct i2c_adapter *i2c;
		void *priv;
		struct drxd_config config;
		int i2c_access;
		int init_done;
		struct mutex mutex;
		u8 chip_adr;
		u16 hi_cfg_timing_div;
		u16 hi_cfg_bridge_delay;
		u16 hi_cfg_wakeup_key;
		u16 hi_cfg_ctrl;
		u16 intermediate_freq;
		u16 osc_clock_freq;
		enum CSCDState cscd_state;
		enum CDrxdState drxd_state;
		u16 sys_clock_freq;
		s16 osc_clock_deviation;
		u16 expected_sys_clock_freq;
		u16 insert_rs_byte;
		u16 enable_parallel;
		int operation_mode;
		struct SCfgAgc if_agc_cfg;
		struct SCfgAgc rf_agc_cfg;
		struct SNoiseCal noise_cal;
		u32 fe_fs_add_incr;
		u32 org_fe_fs_add_incr;
		u16 current_fe_if_incr;
		u16 m_FeAgRegAgPwd;
		u16 m_FeAgRegAgAgcSio;
		u16 m_EcOcRegOcModeLop;
		u16 m_EcOcRegSncSncLvl;
		u8 *m_InitAtomicRead;
		u8 *m_HiI2cPatch;
		u8 *m_ResetCEFR;
		u8 *m_InitFE_1;
		u8 *m_InitFE_2;
		u8 *m_InitCP;
		u8 *m_InitCE;
		u8 *m_InitEQ;
		u8 *m_InitSC;
		u8 *m_InitEC;
		u8 *m_ResetECRAM;
		u8 *m_InitDiversityFront;
		u8 *m_InitDiversityEnd;
		u8 *m_DisableDiversity;
		u8 *m_StartDiversityFront;
		u8 *m_StartDiversityEnd;
		u8 *m_DiversityDelay8MHZ;
		u8 *m_DiversityDelay6MHZ;
		u8 *microcode;
		u32 microcode_length;
		int type_A;
		int PGA;
		int diversity;
		int tuner_mirrors;
		enum app_env app_env_default;
		enum app_env app_env_diversity;
	} cocci_id/* drivers/media/dvb-frontends/drxd_hard.c 100 */;
}