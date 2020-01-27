cocci_test_suite() {
	struct dentry *cocci_id/* drivers/i2c/busses/i2c-gpio.c 75 */;
	void __exit cocci_id/* drivers/i2c/busses/i2c-gpio.c 515 */;
	void cocci_id/* drivers/i2c/busses/i2c-gpio.c 515 */;
	int __init cocci_id/* drivers/i2c/busses/i2c-gpio.c 503 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-gpio.c 494 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-gpio.c 486 */[];
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-gpio.c 364 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-gpio.c 362 */;
	struct i2c_gpio_platform_data *cocci_id/* drivers/i2c/busses/i2c-gpio.c 360 */;
	enum gpiod_flags cocci_id/* drivers/i2c/busses/i2c-gpio.c 324 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-gpio.c 323 */;
	const char *cocci_id/* drivers/i2c/busses/i2c-gpio.c 322 */;
	struct gpio_desc *cocci_id/* drivers/i2c/busses/i2c-gpio.c 321 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-gpio.c 321 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-gpio.c 292 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-gpio.c 231 */;
	struct i2c_gpio_private_data {
		struct gpio_desc *sda;
		struct gpio_desc *scl;
		struct i2c_adapter adap;
		struct i2c_algo_bit_data bit_data;
		struct i2c_gpio_platform_data pdata;
#ifdef CONFIG_I2C_GPIO_FAULT_INJECTOR
		struct dentry *debug_dir;
		struct completion scl_irq_completion;
		u64 scl_irq_data;
#endif
	} cocci_id/* drivers/i2c/busses/i2c-gpio.c 21 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-gpio.c 168 */(int,
								    void *);
	u32 cocci_id/* drivers/i2c/busses/i2c-gpio.c 134 */;
	struct i2c_gpio_private_data *cocci_id/* drivers/i2c/busses/i2c-gpio.c 133 */;
	u64 cocci_id/* drivers/i2c/busses/i2c-gpio.c 131 */;
	void *cocci_id/* drivers/i2c/busses/i2c-gpio.c 131 */;
	int cocci_id/* drivers/i2c/busses/i2c-gpio.c 131 */;
	struct i2c_algo_bit_data *cocci_id/* drivers/i2c/busses/i2c-gpio.c 109 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-gpio.c 107 */;
}
