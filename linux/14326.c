cocci_test_suite() {
	u8 cocci_id/* drivers/media/dvb-frontends/stv0299.c 98 */[];
	const u8 cocci_id/* drivers/media/dvb-frontends/stv0299.c 85 */[];
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/stv0299.c 74 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/stv0299.c 695 */;
	struct stv0299_state cocci_id/* drivers/media/dvb-frontends/stv0299.c 673 */;
	struct stv0299_state *cocci_id/* drivers/media/dvb-frontends/stv0299.c 669 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/stv0299.c 667 */;
	const struct stv0299_config *cocci_id/* drivers/media/dvb-frontends/stv0299.c 666 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/stv0299.c 666 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/stv0299.c 664 */;
	void cocci_id/* drivers/media/dvb-frontends/stv0299.c 658 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/stv0299.c 642 */;
	int cocci_id/* drivers/media/dvb-frontends/stv0299.c 62 */;
	s32 cocci_id/* drivers/media/dvb-frontends/stv0299.c 597 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/stv0299.c 594 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/stv0299.c 513 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/stv0299.c 501 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/stv0299.c 473 */;
	struct stv0299_state {
		struct i2c_adapter *i2c;
		const struct stv0299_config *config;
		struct dvb_frontend frontend;
		u8 initialised:1;
		u32 tuner_frequency;
		u32 symbol_rate;
		enum fe_code_rate fec_inner;
		int errmode;
		u32 ucblocks;
		u8 mcr_reg;
	} cocci_id/* drivers/media/dvb-frontends/stv0299.c 45 */;
	ktime_t cocci_id/* drivers/media/dvb-frontends/stv0299.c 400 */[10];
	ktime_t cocci_id/* drivers/media/dvb-frontends/stv0299.c 399 */;
	unsigned long cocci_id/* drivers/media/dvb-frontends/stv0299.c 391 */;
	enum fe_sec_voltage cocci_id/* drivers/media/dvb-frontends/stv0299.c 346 */;
	enum fe_sec_tone_mode cocci_id/* drivers/media/dvb-frontends/stv0299.c 323 */;
	enum fe_sec_mini_cmd cocci_id/* drivers/media/dvb-frontends/stv0299.c 295 */;
	struct dvb_diseqc_master_cmd *cocci_id/* drivers/media/dvb-frontends/stv0299.c 264 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/stv0299.c 242 */;
	s8 cocci_id/* drivers/media/dvb-frontends/stv0299.c 237 */;
	u8 cocci_id/* drivers/media/dvb-frontends/stv0299.c 236 */[3];
	u32 cocci_id/* drivers/media/dvb-frontends/stv0299.c 233 */;
	u64 cocci_id/* drivers/media/dvb-frontends/stv0299.c 216 */;
	u8 cocci_id/* drivers/media/dvb-frontends/stv0299.c 166 */;
	enum fe_code_rate cocci_id/* drivers/media/dvb-frontends/stv0299.c 164 */[];
	enum fe_code_rate cocci_id/* drivers/media/dvb-frontends/stv0299.c 162 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/stv0299.c 100 */[];
}