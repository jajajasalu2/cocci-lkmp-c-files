cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/input/keyboard/adp5588-keys.c 656 */;
	const struct i2c_device_id cocci_id/* drivers/input/keyboard/adp5588-keys.c 649 */[];
	const struct dev_pm_ops cocci_id/* drivers/input/keyboard/adp5588-keys.c 643 */;
	u8 cocci_id/* drivers/input/keyboard/adp5588-keys.c 516 */;
	unsigned short cocci_id/* drivers/input/keyboard/adp5588-keys.c 474 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/adp5588-keys.c 437 */;
	const struct i2c_device_id *cocci_id/* drivers/input/keyboard/adp5588-keys.c 432 */;
	struct i2c_client *cocci_id/* drivers/input/keyboard/adp5588-keys.c 431 */;
	struct adp5588_kpad {
		struct i2c_client *client;
		struct input_dev *input;
		struct delayed_work work;
		unsigned long delay;
		unsigned short keycode[ADP5588_KEYMAPSIZE];
		const struct adp5588_gpi_map *gpimap;
		unsigned short gpimapsize;
#ifdef CONFIG_GPIOLIB
		unsigned char gpiomap[ADP5588_MAXGPIO];
		bool export_gpio;
		struct gpio_chip gc;
		struct mutex gpio_lock;
		u8 dat_out[3];
		u8 dir[3];
#endif
	} cocci_id/* drivers/input/keyboard/adp5588-keys.c 40 */;
	unsigned char cocci_id/* drivers/input/keyboard/adp5588-keys.c 335 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/adp5588-keys.c 314 */;
	void *cocci_id/* drivers/input/keyboard/adp5588-keys.c 314 */;
	struct adp5588_kpad cocci_id/* drivers/input/keyboard/adp5588-keys.c 295 */;
	struct work_struct *cocci_id/* drivers/input/keyboard/adp5588-keys.c 292 */;
	void cocci_id/* drivers/input/keyboard/adp5588-keys.c 236 */;
	const struct adp5588_gpio_platform_data *cocci_id/* drivers/input/keyboard/adp5588-keys.c 186 */;
	struct device *cocci_id/* drivers/input/keyboard/adp5588-keys.c 184 */;
	bool cocci_id/* drivers/input/keyboard/adp5588-keys.c 160 */[ADP5588_MAXGPIO];
	const struct adp5588_kpad_platform_data *cocci_id/* drivers/input/keyboard/adp5588-keys.c 158 */;
	struct adp5588_kpad *cocci_id/* drivers/input/keyboard/adp5588-keys.c 157 */;
	int cocci_id/* drivers/input/keyboard/adp5588-keys.c 157 */;
	unsigned int cocci_id/* drivers/input/keyboard/adp5588-keys.c 116 */;
	struct gpio_chip *cocci_id/* drivers/input/keyboard/adp5588-keys.c 113 */;
	unsigned cocci_id/* drivers/input/keyboard/adp5588-keys.c 113 */;
}
