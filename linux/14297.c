cocci_test_suite() {
	u8 cocci_id/* drivers/media/dvb-frontends/tda665x.c 95 */[4];
	u32 cocci_id/* drivers/media/dvb-frontends/tda665x.c 90 */;
	u8 cocci_id/* drivers/media/dvb-frontends/tda665x.c 69 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/tda665x.c 57 */;
	int cocci_id/* drivers/media/dvb-frontends/tda665x.c 57 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/tda665x.c 29 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/tda665x.c 25 */;
	struct tda665x_state cocci_id/* drivers/media/dvb-frontends/tda665x.c 210 */;
	struct dvb_tuner_info *cocci_id/* drivers/media/dvb-frontends/tda665x.c 208 */;
	struct tda665x_state *cocci_id/* drivers/media/dvb-frontends/tda665x.c 207 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/tda665x.c 205 */;
	const struct tda665x_config *cocci_id/* drivers/media/dvb-frontends/tda665x.c 204 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/tda665x.c 203 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/tda665x.c 196 */;
	void cocci_id/* drivers/media/dvb-frontends/tda665x.c 188 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/tda665x.c 181 */;
	struct tda665x_state {
		struct dvb_frontend *fe;
		struct i2c_adapter *i2c;
		const struct tda665x_config *config;
		u32 frequency;
		u32 bandwidth;
	} cocci_id/* drivers/media/dvb-frontends/tda665x.c 16 */;
}
