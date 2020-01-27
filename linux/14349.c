cocci_test_suite() {
	u8 cocci_id/* drivers/media/dvb-frontends/or51132.c 99 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/or51132.c 86 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/or51132.c 83 */;
	const u8 *cocci_id/* drivers/media/dvb-frontends/or51132.c 60 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/or51132.c 566 */;
	struct or51132_state cocci_id/* drivers/media/dvb-frontends/or51132.c 555 */;
	struct or51132_state *cocci_id/* drivers/media/dvb-frontends/or51132.c 552 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/or51132.c 550 */;
	const struct or51132_config *cocci_id/* drivers/media/dvb-frontends/or51132.c 549 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/or51132.c 549 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/or51132.c 547 */;
	void cocci_id/* drivers/media/dvb-frontends/or51132.c 541 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/or51132.c 532 */;
	u16 cocci_id/* drivers/media/dvb-frontends/or51132.c 516 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/or51132.c 510 */;
	u32 cocci_id/* drivers/media/dvb-frontends/or51132.c 443 */;
	struct or51132_state {
		struct i2c_adapter *i2c;
		const struct or51132_config *config;
		struct dvb_frontend frontend;
		enum fe_modulation current_modulation;
		u32 snr;
		u32 current_frequency;
	} cocci_id/* drivers/media/dvb-frontends/or51132.c 41 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/or51132.c 401 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/or51132.c 362 */;
	int cocci_id/* drivers/media/dvb-frontends/or51132.c 34 */;
	const char *cocci_id/* drivers/media/dvb-frontends/or51132.c 300 */;
	enum fe_modulation cocci_id/* drivers/media/dvb-frontends/or51132.c 280 */;
	u8 cocci_id/* drivers/media/dvb-frontends/or51132.c 222 */[3];
	u32 *cocci_id/* drivers/media/dvb-frontends/or51132.c 202 */;
	__le32 *cocci_id/* drivers/media/dvb-frontends/or51132.c 128 */;
	u8 cocci_id/* drivers/media/dvb-frontends/or51132.c 121 */[8];
	const u8 cocci_id/* drivers/media/dvb-frontends/or51132.c 120 */[];
	const struct firmware *cocci_id/* drivers/media/dvb-frontends/or51132.c 117 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/or51132.c 102 */[2];
	u8 cocci_id/* drivers/media/dvb-frontends/or51132.c 101 */[2];
}
