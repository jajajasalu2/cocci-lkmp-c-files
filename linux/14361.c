cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/cx22700.c 80 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/cx22700.c 78 */[];
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/cx22700.c 62 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/cx22700.c 390 */;
	struct cx22700_state cocci_id/* drivers/media/dvb-frontends/cx22700.c 379 */;
	struct cx22700_state *cocci_id/* drivers/media/dvb-frontends/cx22700.c 376 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/cx22700.c 374 */;
	const struct cx22700_config *cocci_id/* drivers/media/dvb-frontends/cx22700.c 373 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/cx22700.c 373 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/cx22700.c 371 */;
	void cocci_id/* drivers/media/dvb-frontends/cx22700.c 365 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/cx22700.c 357 */;
	u8 cocci_id/* drivers/media/dvb-frontends/cx22700.c 340 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/cx22700.c 337 */;
	int cocci_id/* drivers/media/dvb-frontends/cx22700.c 336 */;
	u16 cocci_id/* drivers/media/dvb-frontends/cx22700.c 287 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/cx22700.c 283 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/cx22700.c 273 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/cx22700.c 245 */;
	struct cx22700_state {
		struct i2c_adapter *i2c;
		const struct cx22700_config *config;
		struct dvb_frontend frontend;
	} cocci_id/* drivers/media/dvb-frontends/cx22700.c 20 */;
	const enum fe_code_rate cocci_id/* drivers/media/dvb-frontends/cx22700.c 183 */[5];
	const enum fe_modulation cocci_id/* drivers/media/dvb-frontends/cx22700.c 182 */[3];
	const u8 cocci_id/* drivers/media/dvb-frontends/cx22700.c 116 */[6];
	const u8 cocci_id/* drivers/media/dvb-frontends/cx22700.c 115 */[4];
}
