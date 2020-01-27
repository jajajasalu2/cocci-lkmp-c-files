cocci_test_suite() {
	const struct ts2020_reg_val cocci_id/* drivers/media/dvb-frontends/ts2020.c 95 */[];
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/ts2020.c 80 */;
	struct i2c_driver cocci_id/* drivers/media/dvb-frontends/ts2020.c 721 */;
	const struct i2c_device_id cocci_id/* drivers/media/dvb-frontends/ts2020.c 714 */[];
	struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/ts2020.c 684 */;
	char *cocci_id/* drivers/media/dvb-frontends/ts2020.c 562 */;
	unsigned int cocci_id/* drivers/media/dvb-frontends/ts2020.c 561 */;
	struct ts2020_config *cocci_id/* drivers/media/dvb-frontends/ts2020.c 556 */;
	const struct i2c_device_id *cocci_id/* drivers/media/dvb-frontends/ts2020.c 554 */;
	void *cocci_id/* drivers/media/dvb-frontends/ts2020.c 535 */;
	void cocci_id/* drivers/media/dvb-frontends/ts2020.c 535 */;
	struct ts2020_config cocci_id/* drivers/media/dvb-frontends/ts2020.c 512 */;
	struct i2c_board_info cocci_id/* drivers/media/dvb-frontends/ts2020.c 509 */;
	struct i2c_client *cocci_id/* drivers/media/dvb-frontends/ts2020.c 508 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/ts2020.c 506 */;
	const struct ts2020_config *cocci_id/* drivers/media/dvb-frontends/ts2020.c 505 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/ts2020.c 504 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/ts2020.c 489 */;
	__s64 cocci_id/* drivers/media/dvb-frontends/ts2020.c 459 */;
	unsigned cocci_id/* drivers/media/dvb-frontends/ts2020.c 458 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/ts2020.c 454 */;
	void cocci_id/* drivers/media/dvb-frontends/ts2020.c 45 */(struct work_struct *work);
	struct ts2020_priv cocci_id/* drivers/media/dvb-frontends/ts2020.c 429 */;
	struct work_struct *cocci_id/* drivers/media/dvb-frontends/ts2020.c 427 */;
	u8 cocci_id/* drivers/media/dvb-frontends/ts2020.c 400 */;
	struct ts2020_reg_val {
		u8 reg;
		u8 val;
	} cocci_id/* drivers/media/dvb-frontends/ts2020.c 40 */;
	__s64 *cocci_id/* drivers/media/dvb-frontends/ts2020.c 396 */;
	long cocci_id/* drivers/media/dvb-frontends/ts2020.c 358 */;
	unsigned long cocci_id/* drivers/media/dvb-frontends/ts2020.c 340 */;
	struct ts2020_priv *cocci_id/* drivers/media/dvb-frontends/ts2020.c 316 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/ts2020.c 314 */;
	int cocci_id/* drivers/media/dvb-frontends/ts2020.c 314 */;
	u8 cocci_id/* drivers/media/dvb-frontends/ts2020.c 196 */[3];
	u16 cocci_id/* drivers/media/dvb-frontends/ts2020.c 195 */;
	u32 cocci_id/* drivers/media/dvb-frontends/ts2020.c 194 */;
	struct ts2020_priv {
		struct i2c_client *client;
		struct mutex regmap_mutex;
		struct regmap_config regmap_config;
		struct regmap *regmap;
		struct dvb_frontend *fe;
		struct delayed_work stat_work;
		int (*get_agc_pwm)(struct dvb_frontend *fe, u8 *_agc_pwm);
		struct i2c_adapter *i2c;
		int i2c_address;
		bool loop_through:1;
		u8 clk_out:2;
		u8 clk_out_div:5;
		bool dont_poll:1;
		u32 frequency_div;
		u32 frequency_khz;
#define TS2020_M88TS2020 0
#define TS2020_M88TS2022 1
		u8 tuner;
	} cocci_id/* drivers/media/dvb-frontends/ts2020.c 18 */;
}
