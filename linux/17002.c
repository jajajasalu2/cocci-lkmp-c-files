cocci_test_suite() {
	bool cocci_id/* drivers/input/touchscreen/ili210x.c 96 */;
	const u8 *cocci_id/* drivers/input/touchscreen/ili210x.c 96 */;
	unsigned int *cocci_id/* drivers/input/touchscreen/ili210x.c 85 */;
	u8 *cocci_id/* drivers/input/touchscreen/ili210x.c 77 */;
	struct i2c_msg cocci_id/* drivers/input/touchscreen/ili210x.c 51 */[];
	struct i2c_driver cocci_id/* drivers/input/touchscreen/ili210x.c 463 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/ili210x.c 455 */[];
	long cocci_id/* drivers/input/touchscreen/ili210x.c 448 */;
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/ili210x.c 447 */[];
	struct ili210x {
		struct i2c_client *client;
		struct input_dev *input;
		struct gpio_desc *reset_gpio;
		struct touchscreen_properties prop;
		const struct ili2xxx_chip *chip;
		bool stop;
	} cocci_id/* drivers/input/touchscreen/ili210x.c 39 */;
	unsigned int cocci_id/* drivers/input/touchscreen/ili210x.c 356 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/ili210x.c 354 */;
	struct gpio_desc *cocci_id/* drivers/input/touchscreen/ili210x.c 353 */;
	const struct ili2xxx_chip *cocci_id/* drivers/input/touchscreen/ili210x.c 351 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/ili210x.c 348 */;
	void cocci_id/* drivers/input/touchscreen/ili210x.c 332 */;
	const struct attribute_group cocci_id/* drivers/input/touchscreen/ili210x.c 327 */;
	struct attribute *cocci_id/* drivers/input/touchscreen/ili210x.c 318 */;
	umode_t cocci_id/* drivers/input/touchscreen/ili210x.c 317 */;
	struct kobject *cocci_id/* drivers/input/touchscreen/ili210x.c 317 */;
	struct attribute *cocci_id/* drivers/input/touchscreen/ili210x.c 312 */[];
	u8 cocci_id/* drivers/input/touchscreen/ili210x.c 294 */;
	int cocci_id/* drivers/input/touchscreen/ili210x.c 293 */;
	unsigned long cocci_id/* drivers/input/touchscreen/ili210x.c 292 */;
	struct ili210x *cocci_id/* drivers/input/touchscreen/ili210x.c 291 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/ili210x.c 290 */;
	const char *cocci_id/* drivers/input/touchscreen/ili210x.c 288 */;
	size_t cocci_id/* drivers/input/touchscreen/ili210x.c 288 */;
	struct device_attribute *cocci_id/* drivers/input/touchscreen/ili210x.c 287 */;
	struct device *cocci_id/* drivers/input/touchscreen/ili210x.c 286 */;
	ssize_t cocci_id/* drivers/input/touchscreen/ili210x.c 286 */;
	struct ili2xxx_chip {
		int (*read_reg)(struct i2c_client *client, u8 reg, void *buf,
				size_t len);
		int (*get_touch_data)(struct i2c_client *client, u8 *data);
		bool (*parse_touch_data)(const u8 *data, unsigned int finger,
					 unsigned int *x, unsigned int *y);
		bool (*continue_polling)(const u8 *data, bool touch);
		unsigned int max_touches;
		unsigned int resolution;
		bool has_calibrate_reg;
	} cocci_id/* drivers/input/touchscreen/ili210x.c 27 */;
	u8 cocci_id/* drivers/input/touchscreen/ili210x.c 264 */[ILI210X_DATA_SIZE];
	irqreturn_t cocci_id/* drivers/input/touchscreen/ili210x.c 259 */;
	void *cocci_id/* drivers/input/touchscreen/ili210x.c 259 */;
	u16 cocci_id/* drivers/input/touchscreen/ili210x.c 210 */;
	u32 cocci_id/* drivers/input/touchscreen/ili210x.c 142 */;
	s16 cocci_id/* drivers/input/touchscreen/ili210x.c 112 */;
	const struct ili2xxx_chip cocci_id/* drivers/input/touchscreen/ili210x.c 101 */;
}
