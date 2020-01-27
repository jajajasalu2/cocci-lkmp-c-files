cocci_test_suite() {
	struct device_node *cocci_id/* drivers/i2c/muxes/i2c-arb-gpio-challenge.c 99 */;
	struct device *cocci_id/* drivers/i2c/muxes/i2c-arb-gpio-challenge.c 98 */;
	struct platform_device *cocci_id/* drivers/i2c/muxes/i2c-arb-gpio-challenge.c 96 */;
	const struct i2c_arbitrator_data *cocci_id/* drivers/i2c/muxes/i2c-arb-gpio-challenge.c 87 */;
	u32 cocci_id/* drivers/i2c/muxes/i2c-arb-gpio-challenge.c 85 */;
	struct i2c_mux_core *cocci_id/* drivers/i2c/muxes/i2c-arb-gpio-challenge.c 85 */;
	int cocci_id/* drivers/i2c/muxes/i2c-arb-gpio-challenge.c 85 */;
	unsigned long cocci_id/* drivers/i2c/muxes/i2c-arb-gpio-challenge.c 45 */;
	struct i2c_arbitrator_data {
		struct gpio_desc *our_gpio;
		struct gpio_desc *their_gpio;
		unsigned int slew_delay_us;
		unsigned int wait_retry_us;
		unsigned int wait_free_us;
	} cocci_id/* drivers/i2c/muxes/i2c-arb-gpio-challenge.c 28 */;
	struct platform_driver cocci_id/* drivers/i2c/muxes/i2c-arb-gpio-challenge.c 192 */;
	const struct of_device_id cocci_id/* drivers/i2c/muxes/i2c-arb-gpio-challenge.c 186 */[];
	struct gpio_desc *cocci_id/* drivers/i2c/muxes/i2c-arb-gpio-challenge.c 103 */;
	struct i2c_arbitrator_data *cocci_id/* drivers/i2c/muxes/i2c-arb-gpio-challenge.c 102 */;
}
