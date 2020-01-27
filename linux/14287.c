cocci_test_suite() {
	u8 *cocci_id/* drivers/media/dvb-frontends/tda10023.c 98 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/tda10023.c 56 */[];
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/tda10023.c 527 */;
	struct tda10023_state cocci_id/* drivers/media/dvb-frontends/tda10023.c 514 */;
	u8 cocci_id/* drivers/media/dvb-frontends/tda10023.c 509 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/tda10023.c 508 */;
	const struct tda10023_config *cocci_id/* drivers/media/dvb-frontends/tda10023.c 507 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/tda10023.c 507 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/tda10023.c 505 */;
	void cocci_id/* drivers/media/dvb-frontends/tda10023.c 499 */;
	s32 cocci_id/* drivers/media/dvb-frontends/tda10023.c 462 */;
	s8 cocci_id/* drivers/media/dvb-frontends/tda10023.c 451 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/tda10023.c 447 */;
	u16 cocci_id/* drivers/media/dvb-frontends/tda10023.c 409 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/tda10023.c 404 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/tda10023.c 391 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/tda10023.c 366 */;
	struct tda10023_state {
		struct i2c_adapter *i2c;
		const struct tda10023_config *config;
		struct dvb_frontend frontend;
		u8 pwm;
		u8 reg0;
		u32 xtal;
		u8 pll_m;
		u8 pll_p;
		u8 pll_n;
		u32 sysclk;
	} cocci_id/* drivers/media/dvb-frontends/tda10023.c 31 */;
	const struct qam_params cocci_id/* drivers/media/dvb-frontends/tda10023.c 298 */[];
	bool cocci_id/* drivers/media/dvb-frontends/tda10023.c 296 */;
	unsigned cocci_id/* drivers/media/dvb-frontends/tda10023.c 295 */;
	u32 cocci_id/* drivers/media/dvb-frontends/tda10023.c 294 */;
	struct qam_params {
		u8 qam,lockthr,mseth,aref,agcrefnyq,eragnyq_thd;
	} cocci_id/* drivers/media/dvb-frontends/tda10023.c 287 */;
	u8 cocci_id/* drivers/media/dvb-frontends/tda10023.c 220 */[];
	u64 cocci_id/* drivers/media/dvb-frontends/tda10023.c 198 */;
	s16 cocci_id/* drivers/media/dvb-frontends/tda10023.c 159 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/tda10023.c 120 */;
	u8 cocci_id/* drivers/media/dvb-frontends/tda10023.c 119 */[2];
	struct tda10023_state *cocci_id/* drivers/media/dvb-frontends/tda10023.c 117 */;
	int cocci_id/* drivers/media/dvb-frontends/tda10023.c 117 */;
}
