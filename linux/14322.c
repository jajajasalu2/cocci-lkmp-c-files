cocci_test_suite() {
	u8 cocci_id/* drivers/media/dvb-frontends/tda8261.c 89 */[4];
	u32 cocci_id/* drivers/media/dvb-frontends/tda8261.c 88 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/tda8261.c 85 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/tda8261.c 74 */;
	int cocci_id/* drivers/media/dvb-frontends/tda8261.c 74 */;
	const u8 cocci_id/* drivers/media/dvb-frontends/tda8261.c 72 */[];
	const u32 cocci_id/* drivers/media/dvb-frontends/tda8261.c 71 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/tda8261.c 54 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/tda8261.c 31 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/tda8261.c 27 */;
	struct tda8261_state cocci_id/* drivers/media/dvb-frontends/tda8261.c 171 */;
	struct tda8261_state {
		struct dvb_frontend *fe;
		struct i2c_adapter *i2c;
		const struct tda8261_config *config;
		u32 frequency;
		u32 bandwidth;
	} cocci_id/* drivers/media/dvb-frontends/tda8261.c 17 */;
	struct tda8261_state *cocci_id/* drivers/media/dvb-frontends/tda8261.c 169 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/tda8261.c 167 */;
	const struct tda8261_config *cocci_id/* drivers/media/dvb-frontends/tda8261.c 166 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/tda8261.c 165 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/tda8261.c 151 */;
	void cocci_id/* drivers/media/dvb-frontends/tda8261.c 143 */;
}
