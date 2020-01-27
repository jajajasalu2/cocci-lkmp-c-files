cocci_test_suite() {
	u8 *cocci_id/* drivers/media/dvb-frontends/stv0297.c 95 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/stv0297.c 672 */;
	struct stv0297_state cocci_id/* drivers/media/dvb-frontends/stv0297.c 657 */;
	struct stv0297_state *cocci_id/* drivers/media/dvb-frontends/stv0297.c 654 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/stv0297.c 652 */;
	const struct stv0297_config *cocci_id/* drivers/media/dvb-frontends/stv0297.c 651 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/stv0297.c 651 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/stv0297.c 649 */;
	void cocci_id/* drivers/media/dvb-frontends/stv0297.c 643 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/stv0297.c 607 */;
	int cocci_id/* drivers/media/dvb-frontends/stv0297.c 606 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/stv0297.c 59 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/stv0297.c 57 */[];
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/stv0297.c 43 */;
	enum fe_spectral_inversion cocci_id/* drivers/media/dvb-frontends/stv0297.c 409 */;
	unsigned long cocci_id/* drivers/media/dvb-frontends/stv0297.c 408 */;
	u8 cocci_id/* drivers/media/dvb-frontends/stv0297.c 375 */[2];
	u16 cocci_id/* drivers/media/dvb-frontends/stv0297.c 353 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/stv0297.c 349 */;
	u8 cocci_id/* drivers/media/dvb-frontends/stv0297.c 335 */[3];
	u32 *cocci_id/* drivers/media/dvb-frontends/stv0297.c 332 */;
	u8 cocci_id/* drivers/media/dvb-frontends/stv0297.c 323 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/stv0297.c 319 */;
	enum fe_modulation cocci_id/* drivers/media/dvb-frontends/stv0297.c 225 */;
	struct stv0297_state {
		struct i2c_adapter *i2c;
		const struct stv0297_config *config;
		struct dvb_frontend frontend;
		unsigned long last_ber;
		unsigned long base_freq;
	} cocci_id/* drivers/media/dvb-frontends/stv0297.c 21 */;
	s32 cocci_id/* drivers/media/dvb-frontends/stv0297.c 209 */;
	unsigned char cocci_id/* drivers/media/dvb-frontends/stv0297.c 182 */;
	long cocci_id/* drivers/media/dvb-frontends/stv0297.c 172 */;
	short cocci_id/* drivers/media/dvb-frontends/stv0297.c 152 */;
	u64 cocci_id/* drivers/media/dvb-frontends/stv0297.c 125 */;
	u32 cocci_id/* drivers/media/dvb-frontends/stv0297.c 123 */;
}
