cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/s5h1432.c 65 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/s5h1432.c 62 */[];
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/s5h1432.c 48 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/s5h1432.c 352 */;
	int cocci_id/* drivers/media/dvb-frontends/s5h1432.c 35 */;
	struct s5h1432_state cocci_id/* drivers/media/dvb-frontends/s5h1432.c 340 */;
	struct s5h1432_state *cocci_id/* drivers/media/dvb-frontends/s5h1432.c 336 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/s5h1432.c 334 */;
	const struct s5h1432_config *cocci_id/* drivers/media/dvb-frontends/s5h1432.c 333 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/s5h1432.c 333 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/s5h1432.c 331 */;
	void cocci_id/* drivers/media/dvb-frontends/s5h1432.c 325 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/s5h1432.c 320 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/s5h1432.c 314 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/s5h1432.c 298 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/s5h1432.c 292 */;
	u8 cocci_id/* drivers/media/dvb-frontends/s5h1432.c 239 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/s5h1432.c 170 */;
	struct s5h1432_state {
		struct i2c_adapter *i2c;
		const struct s5h1432_config *config;
		struct dvb_frontend frontend;
		enum fe_modulation current_modulation;
		unsigned int first_tune:1;
		u32 current_frequency;
		int if_freq;
		u8 inversion;
	} cocci_id/* drivers/media/dvb-frontends/s5h1432.c 17 */;
	u32 cocci_id/* drivers/media/dvb-frontends/s5h1432.c 110 */;
}
