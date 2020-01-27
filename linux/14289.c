cocci_test_suite() {
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/s5h1409.c 966 */;
	struct s5h1409_state cocci_id/* drivers/media/dvb-frontends/s5h1409.c 949 */;
	u16 cocci_id/* drivers/media/dvb-frontends/s5h1409.c 946 */;
	struct s5h1409_state *cocci_id/* drivers/media/dvb-frontends/s5h1409.c 945 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/s5h1409.c 943 */;
	const struct s5h1409_config *cocci_id/* drivers/media/dvb-frontends/s5h1409.c 942 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/s5h1409.c 942 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/s5h1409.c 940 */;
	void cocci_id/* drivers/media/dvb-frontends/s5h1409.c 934 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/s5h1409.c 928 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/s5h1409.c 917 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/s5h1409.c 911 */;
	u32 cocci_id/* drivers/media/dvb-frontends/s5h1409.c 878 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/s5h1409.c 798 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/s5h1409.c 746 */;
	struct init_tab {
		u8 reg;
		u16 data;
	} cocci_id/* drivers/media/dvb-frontends/s5h1409.c 53 */[];
	int cocci_id/* drivers/media/dvb-frontends/s5h1409.c 46 */;
	enum fe_modulation cocci_id/* drivers/media/dvb-frontends/s5h1409.c 391 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/s5h1409.c 324 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/s5h1409.c 321 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/s5h1409.c 318 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/s5h1409.c 306 */;
	struct qam256_snr_tab {
		u16 val;
		u16 data;
	} cocci_id/* drivers/media/dvb-frontends/s5h1409.c 224 */[];
	struct s5h1409_state {
		struct i2c_adapter *i2c;
		const struct s5h1409_config *config;
		struct dvb_frontend frontend;
		enum fe_modulation current_modulation;
		u32 current_frequency;
		int if_freq;
		u32 is_qam_locked;
#define QAM_STATE_UNTUNED 0
#define QAM_STATE_TUNING_STARTED 1
#define QAM_STATE_INTERLEAVE_SET 2
#define QAM_STATE_QAM_OPTIMIZED_L1 3
#define QAM_STATE_QAM_OPTIMIZED_L2 4
#define QAM_STATE_QAM_OPTIMIZED_L3 5
		u8 qam_state;
	} cocci_id/* drivers/media/dvb-frontends/s5h1409.c 19 */;
	struct qam64_snr_tab {
		u16 val;
		u16 data;
	} cocci_id/* drivers/media/dvb-frontends/s5h1409.c 152 */[];
	struct vsb_snr_tab {
		u16 val;
		u16 data;
	} cocci_id/* drivers/media/dvb-frontends/s5h1409.c 105 */[];
}
