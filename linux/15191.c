cocci_test_suite() {
	struct is31fl32xx_chipdef {
		u8 channels;
		u8 shutdown_reg;
		u8 pwm_update_reg;
		u8 global_control_reg;
		u8 reset_reg;
		u8 pwm_register_base;
		bool pwm_registers_reversed;
		u8 led_control_register_base;
		u8 enable_bits_per_led_control_register;
		int (*reset_func)(struct is31fl32xx_priv *priv);
		int (*sw_shutdown_func)(struct is31fl32xx_priv *priv,
					bool enable);
	} cocci_id/* drivers/leds/leds-is31fl32xx.c 73 */;
	struct i2c_driver cocci_id/* drivers/leds/leds-is31fl32xx.c 490 */;
	const struct i2c_device_id cocci_id/* drivers/leds/leds-is31fl32xx.c 478 */[];
	const struct of_device_id *cocci_id/* drivers/leds/leds-is31fl32xx.c 431 */;
	struct is31fl32xx_priv {
		const struct is31fl32xx_chipdef *cdef;
		struct i2c_client *client;
		unsigned int num_leds;
		struct is31fl32xx_led_data leds[0];
	} cocci_id/* drivers/leds/leds-is31fl32xx.c 43 */;
	const struct i2c_device_id *cocci_id/* drivers/leds/leds-is31fl32xx.c 428 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-is31fl32xx.c 427 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-is31fl32xx.c 415 */[];
	struct device_node *cocci_id/* drivers/leds/leds-is31fl32xx.c 372 */;
	struct is31fl32xx_led_data {
		struct led_classdev cdev;
		u8 channel;
		struct is31fl32xx_priv *priv;
	} cocci_id/* drivers/leds/leds-is31fl32xx.c 37 */;
	struct device *cocci_id/* drivers/leds/leds-is31fl32xx.c 369 */;
	struct is31fl32xx_priv cocci_id/* drivers/leds/leds-is31fl32xx.c 36 */;
	size_t cocci_id/* drivers/leds/leds-is31fl32xx.c 359 */;
	struct is31fl32xx_led_data *cocci_id/* drivers/leds/leds-is31fl32xx.c 355 */;
	u32 cocci_id/* drivers/leds/leds-is31fl32xx.c 333 */;
	const struct device_node *cocci_id/* drivers/leds/leds-is31fl32xx.c 328 */;
	const struct device *cocci_id/* drivers/leds/leds-is31fl32xx.c 327 */;
	const struct is31fl32xx_chipdef *cocci_id/* drivers/leds/leds-is31fl32xx.c 227 */;
	struct is31fl32xx_led_data cocci_id/* drivers/leds/leds-is31fl32xx.c 226 */;
	const struct is31fl32xx_led_data *cocci_id/* drivers/leds/leds-is31fl32xx.c 225 */;
	enum led_brightness cocci_id/* drivers/leds/leds-is31fl32xx.c 223 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-is31fl32xx.c 222 */;
	u8 cocci_id/* drivers/leds/leds-is31fl32xx.c 195 */;
	bool cocci_id/* drivers/leds/leds-is31fl32xx.c 193 */;
	unsigned int cocci_id/* drivers/leds/leds-is31fl32xx.c 160 */;
	struct is31fl32xx_priv *cocci_id/* drivers/leds/leds-is31fl32xx.c 158 */;
	int cocci_id/* drivers/leds/leds-is31fl32xx.c 158 */;
	const struct is31fl32xx_chipdef cocci_id/* drivers/leds/leds-is31fl32xx.c 123 */;
	int cocci_id/* drivers/leds/leds-is31fl32xx.c 121 */(struct is31fl32xx_priv *priv,
							     bool enable);
	int cocci_id/* drivers/leds/leds-is31fl32xx.c 120 */(struct is31fl32xx_priv *priv);
}
