cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/stv6110.c 60 */;
	u8 cocci_id/* drivers/media/dvb-frontends/stv6110.c 59 */[MAX_XFER_SIZE];
	void cocci_id/* drivers/media/dvb-frontends/stv6110.c 48 */;
	struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/stv6110.c 424 */;
	struct stv6110_priv cocci_id/* drivers/media/dvb-frontends/stv6110.c 411 */;
	s32 cocci_id/* drivers/media/dvb-frontends/stv6110.c 40 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/stv6110.c 386 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/stv6110.c 384 */[];
	struct stv6110_priv *cocci_id/* drivers/media/dvb-frontends/stv6110.c 383 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/stv6110.c 381 */;
	const struct stv6110_config *cocci_id/* drivers/media/dvb-frontends/stv6110.c 380 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/stv6110.c 379 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/stv6110.c 361 */;
	u8 cocci_id/* drivers/media/dvb-frontends/stv6110.c 350 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/stv6110.c 347 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/stv6110.c 338 */;
	struct stv6110_priv {
		int i2c_address;
		struct i2c_adapter *i2c;
		u32 mclk;
		u8 clk_div;
		u8 gain;
		u8 regs[8];
	} cocci_id/* drivers/media/dvb-frontends/stv6110.c 24 */;
	int cocci_id/* drivers/media/dvb-frontends/stv6110.c 22 */;
	u32 cocci_id/* drivers/media/dvb-frontends/stv6110.c 146 */;
	enum fe_rolloff cocci_id/* drivers/media/dvb-frontends/stv6110.c 146 */;
}
