cocci_test_suite() {
	void cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 89 */;
	const struct regmap_config cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 68 */;
	bool cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 63 */;
	const struct chip_desc cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 53 */[];
	struct ltc4306 {
		struct regmap *regmap;
		struct gpio_chip gpiochip;
		const struct chip_desc *chip;
	} cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 47 */;
	struct chip_desc {
		u8 nchans;
		u8 num_gpios;
	} cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 42 */;
	enum ltc_type{ltc_4305, ltc_4306,} cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 37 */;
	struct i2c_driver cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 306 */;
	struct gpio_desc *cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 214 */;
	const struct chip_desc *cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 211 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 210 */;
	struct i2c_client *cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 208 */;
	const struct of_device_id cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 201 */[];
	const struct i2c_device_id cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 194 */[];
	struct ltc4306 *cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 188 */;
	u32 cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 186 */;
	struct i2c_mux_core *cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 186 */;
	int cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 186 */;
	struct device *cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 154 */;
	unsigned long cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 132 */;
	unsigned int cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 113 */;
	struct gpio_chip *cocci_id/* drivers/i2c/muxes/i2c-mux-ltc4306.c 112 */;
}
