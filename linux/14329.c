cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/media/dvb-frontends/mn88443x.c 788 */;
	const struct i2c_device_id cocci_id/* drivers/media/dvb-frontends/mn88443x.c 780 */[];
	const struct of_device_id cocci_id/* drivers/media/dvb-frontends/mn88443x.c 772 */[];
	const struct mn88443x_spec cocci_id/* drivers/media/dvb-frontends/mn88443x.c 764 */;
	struct mn88443x_spec *cocci_id/* drivers/media/dvb-frontends/mn88443x.c 682 */;
	struct device *cocci_id/* drivers/media/dvb-frontends/mn88443x.c 672 */;
	struct mn88443x_config *cocci_id/* drivers/media/dvb-frontends/mn88443x.c 670 */;
	const struct i2c_device_id *cocci_id/* drivers/media/dvb-frontends/mn88443x.c 668 */;
	struct i2c_client *cocci_id/* drivers/media/dvb-frontends/mn88443x.c 667 */;
	const struct regmap_config cocci_id/* drivers/media/dvb-frontends/mn88443x.c 661 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/mn88443x.c 642 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/mn88443x.c 628 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/mn88443x.c 613 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/mn88443x.c 611 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/mn88443x.c 610 */;
	int cocci_id/* drivers/media/dvb-frontends/mn88443x.c 610 */;
	u8 cocci_id/* drivers/media/dvb-frontends/mn88443x.c 565 */;
	bool cocci_id/* drivers/media/dvb-frontends/mn88443x.c 372 */;
	s64 cocci_id/* drivers/media/dvb-frontends/mn88443x.c 318 */;
	u64 cocci_id/* drivers/media/dvb-frontends/mn88443x.c 265 */;
	u32 cocci_id/* drivers/media/dvb-frontends/mn88443x.c 264 */;
	struct mn88443x_priv *cocci_id/* drivers/media/dvb-frontends/mn88443x.c 227 */;
	void cocci_id/* drivers/media/dvb-frontends/mn88443x.c 227 */;
	struct regmap *cocci_id/* drivers/media/dvb-frontends/mn88443x.c 209 */;
	struct mn88443x_priv {
		const struct mn88443x_spec *spec;
		struct dvb_frontend fe;
		struct clk *mclk;
		struct gpio_desc *reset_gpio;
		u32 clk_freq;
		u32 if_freq;
		bool use_clkbuf;
		struct i2c_client *client_s;
		struct regmap *regmap_s;
		struct i2c_client *client_t;
		struct regmap *regmap_t;
	} cocci_id/* drivers/media/dvb-frontends/mn88443x.c 186 */;
	struct mn88443x_spec {
		bool primary;
	} cocci_id/* drivers/media/dvb-frontends/mn88443x.c 182 */;
}
