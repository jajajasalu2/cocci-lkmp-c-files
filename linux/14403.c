cocci_test_suite() {
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/tda10086.c 755 */;
	struct tda10086_state cocci_id/* drivers/media/dvb-frontends/tda10086.c 740 */;
	struct tda10086_state *cocci_id/* drivers/media/dvb-frontends/tda10086.c 735 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/tda10086.c 733 */;
	const struct tda10086_config *cocci_id/* drivers/media/dvb-frontends/tda10086.c 732 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/tda10086.c 732 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/tda10086.c 696 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/tda10086.c 656 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/tda10086.c 615 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/tda10086.c 60 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/tda10086.c 58 */[];
	u16 *cocci_id/* drivers/media/dvb-frontends/tda10086.c 573 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/tda10086.c 544 */;
	u64 cocci_id/* drivers/media/dvb-frontends/tda10086.c 455 */;
	u8 cocci_id/* drivers/media/dvb-frontends/tda10086.c 453 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/tda10086.c 450 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/tda10086.c 43 */;
	u32 cocci_id/* drivers/media/dvb-frontends/tda10086.c 406 */;
	int cocci_id/* drivers/media/dvb-frontends/tda10086.c 33 */;
	enum fe_sec_mini_cmd cocci_id/* drivers/media/dvb-frontends/tda10086.c 230 */;
	struct tda10086_state {
		struct i2c_adapter *i2c;
		const struct tda10086_config *config;
		struct dvb_frontend frontend;
		u32 frequency;
		u32 symbol_rate;
		bool has_lock;
	} cocci_id/* drivers/media/dvb-frontends/tda10086.c 22 */;
	struct dvb_diseqc_master_cmd *cocci_id/* drivers/media/dvb-frontends/tda10086.c 200 */;
	enum fe_sec_tone_mode cocci_id/* drivers/media/dvb-frontends/tda10086.c 176 */;
	unsigned long cocci_id/* drivers/media/dvb-frontends/tda10086.c 165 */;
	void cocci_id/* drivers/media/dvb-frontends/tda10086.c 163 */;
}
