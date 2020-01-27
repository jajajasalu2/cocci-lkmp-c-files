cocci_test_suite() {
	u8 cocci_id/* drivers/media/dvb-frontends/tda10021.c 94 */[2];
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/tda10021.c 79 */[];
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/tda10021.c 63 */;
	u8 cocci_id/* drivers/media/dvb-frontends/tda10021.c 62 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/tda10021.c 60 */;
	struct tda10021_state *cocci_id/* drivers/media/dvb-frontends/tda10021.c 60 */;
	int cocci_id/* drivers/media/dvb-frontends/tda10021.c 60 */;
	u8 cocci_id/* drivers/media/dvb-frontends/tda10021.c 48 */[0x40];
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/tda10021.c 465 */;
	struct tda10021_state cocci_id/* drivers/media/dvb-frontends/tda10021.c 444 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/tda10021.c 437 */;
	const struct tda1002x_config *cocci_id/* drivers/media/dvb-frontends/tda10021.c 436 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/tda10021.c 436 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/tda10021.c 434 */;
	void cocci_id/* drivers/media/dvb-frontends/tda10021.c 428 */;
	s32 cocci_id/* drivers/media/dvb-frontends/tda10021.c 391 */;
	s8 cocci_id/* drivers/media/dvb-frontends/tda10021.c 382 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/tda10021.c 378 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/tda10021.c 338 */;
	u32 cocci_id/* drivers/media/dvb-frontends/tda10021.c 328 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/tda10021.c 324 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/tda10021.c 299 */;
	struct tda10021_state {
		struct i2c_adapter *i2c;
		const struct tda1002x_config *config;
		struct dvb_frontend frontend;
		u8 pwm;
		u8 reg0;
	} cocci_id/* drivers/media/dvb-frontends/tda10021.c 24 */;
	const struct qam_params cocci_id/* drivers/media/dvb-frontends/tda10021.c 226 */[];
	bool cocci_id/* drivers/media/dvb-frontends/tda10021.c 223 */;
	unsigned cocci_id/* drivers/media/dvb-frontends/tda10021.c 222 */;
	struct qam_params {
		u8 conf,agcref,lthr,mseth,aref;
	} cocci_id/* drivers/media/dvb-frontends/tda10021.c 214 */;
	u16 cocci_id/* drivers/media/dvb-frontends/tda10021.c 141 */;
	s16 cocci_id/* drivers/media/dvb-frontends/tda10021.c 140 */;
	enum fe_spectral_inversion cocci_id/* drivers/media/dvb-frontends/tda10021.c 120 */;
}
