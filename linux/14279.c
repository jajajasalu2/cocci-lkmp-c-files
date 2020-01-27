cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/ves1x93.c 85 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/ves1x93.c 493 */;
	struct ves1x93_state cocci_id/* drivers/media/dvb-frontends/ves1x93.c 453 */;
	u8 cocci_id/* drivers/media/dvb-frontends/ves1x93.c 450 */;
	u8 cocci_id/* drivers/media/dvb-frontends/ves1x93.c 45 */[];
	struct ves1x93_state *cocci_id/* drivers/media/dvb-frontends/ves1x93.c 449 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/ves1x93.c 447 */;
	const struct ves1x93_config *cocci_id/* drivers/media/dvb-frontends/ves1x93.c 446 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/ves1x93.c 446 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/ves1x93.c 444 */;
	void cocci_id/* drivers/media/dvb-frontends/ves1x93.c 427 */;
	char cocci_id/* drivers/media/dvb-frontends/ves1x93.c 402 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/ves1x93.c 397 */;
	int cocci_id/* drivers/media/dvb-frontends/ves1x93.c 39 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/ves1x93.c 343 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/ves1x93.c 331 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/ves1x93.c 290 */;
	enum fe_sec_voltage cocci_id/* drivers/media/dvb-frontends/ves1x93.c 273 */;
	struct ves1x93_state {
		struct i2c_adapter *i2c;
		const struct ves1x93_config *config;
		struct dvb_frontend frontend;
		enum fe_spectral_inversion inversion;
		u8 *init_1x93_tab;
		u8 *init_1x93_wtab;
		u8 tab_size;
		u8 demod_type;
		u32 frequency;
	} cocci_id/* drivers/media/dvb-frontends/ves1x93.c 24 */;
	unsigned int cocci_id/* drivers/media/dvb-frontends/ves1x93.c 171 */;
	u32 cocci_id/* drivers/media/dvb-frontends/ves1x93.c 162 */;
	enum fe_code_rate cocci_id/* drivers/media/dvb-frontends/ves1x93.c 157 */;
	enum fe_spectral_inversion cocci_id/* drivers/media/dvb-frontends/ves1x93.c 121 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/ves1x93.c 101 */[];
}
