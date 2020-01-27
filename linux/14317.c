cocci_test_suite() {
	u8 cocci_id/* drivers/media/dvb-frontends/or51211.c 97 */[585];
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/or51211.c 79 */;
	u8 cocci_id/* drivers/media/dvb-frontends/or51211.c 76 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/or51211.c 76 */;
	struct or51211_state *cocci_id/* drivers/media/dvb-frontends/or51211.c 76 */;
	const u8 *cocci_id/* drivers/media/dvb-frontends/or51211.c 58 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/or51211.c 515 */;
	struct or51211_state cocci_id/* drivers/media/dvb-frontends/or51211.c 504 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/or51211.c 499 */;
	const struct or51211_config *cocci_id/* drivers/media/dvb-frontends/or51211.c 498 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/or51211.c 498 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/or51211.c 496 */;
	void cocci_id/* drivers/media/dvb-frontends/or51211.c 489 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/or51211.c 481 */;
	struct or51211_state {
		struct i2c_adapter *i2c;
		const struct or51211_config *config;
		struct dvb_frontend frontend;
		struct bt878 *bt;
		u8 initialized:1;
		u32 snr;
		u32 current_frequency;
	} cocci_id/* drivers/media/dvb-frontends/or51211.c 40 */;
	u8 cocci_id/* drivers/media/dvb-frontends/or51211.c 38 */[];
	unsigned char cocci_id/* drivers/media/dvb-frontends/or51211.c 355 */[14];
	unsigned char cocci_id/* drivers/media/dvb-frontends/or51211.c 354 */[];
	const struct firmware *cocci_id/* drivers/media/dvb-frontends/or51211.c 353 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/or51211.c 332 */;
	int cocci_id/* drivers/media/dvb-frontends/or51211.c 33 */;
	u16 cocci_id/* drivers/media/dvb-frontends/or51211.c 316 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/or51211.c 310 */;
	u8 cocci_id/* drivers/media/dvb-frontends/or51211.c 285 */[3];
	u8 cocci_id/* drivers/media/dvb-frontends/or51211.c 284 */[2];
	u32 cocci_id/* drivers/media/dvb-frontends/or51211.c 266 */;
	unsigned char cocci_id/* drivers/media/dvb-frontends/or51211.c 229 */[2];
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/or51211.c 226 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/or51211.c 207 */;
	u8 cocci_id/* drivers/media/dvb-frontends/or51211.c 155 */[14];
}