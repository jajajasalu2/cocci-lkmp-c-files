cocci_test_suite() {
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 801 */;
	struct m88rs2000_state cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 788 */;
	struct m88rs2000_state *cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 785 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 783 */;
	const struct m88rs2000_config *cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 782 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 782 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 78 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 75 */[];
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 746 */;
	void cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 740 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 713 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 702 */;
	enum fe_status cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 600 */;
	u8 cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 570 */;
	enum fe_code_rate cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 568 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 56 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 499 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 472 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 456 */;
	struct inittab *cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 439 */;
	enum fe_sec_voltage cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 405 */;
	int cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 37 */;
	struct inittab cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 317 */[];
	struct inittab {
		u8 cmd;
		u8 reg;
		u8 val;
	} cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 283 */;
	enum fe_sec_tone_mode cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 256 */;
	struct m88rs2000_state {
		struct i2c_adapter *i2c;
		const struct m88rs2000_config *config;
		struct dvb_frontend frontend;
		u8 no_lock_count;
		u32 tuner_frequency;
		u32 symbol_rate;
		enum fe_code_rate fec_inner;
		u8 tuner_level;
		int errmode;
	} cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 25 */;
	enum fe_sec_mini_cmd cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 238 */;
	struct dvb_diseqc_master_cmd *cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 194 */;
	u8 cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 153 */[3];
	u64 cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 151 */;
	s32 cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 123 */;
	s16 cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 119 */;
	u32 cocci_id/* drivers/media/dvb-frontends/m88rs2000.c 101 */;
}
