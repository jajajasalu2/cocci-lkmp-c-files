cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/input/misc/drv260x.c 656 */;
	const struct of_device_id cocci_id/* drivers/input/misc/drv260x.c 647 */[];
	const struct i2c_device_id cocci_id/* drivers/input/misc/drv260x.c 641 */[];
	int __maybe_unused cocci_id/* drivers/input/misc/drv260x.c 608 */;
	u32 cocci_id/* drivers/input/misc/drv260x.c 465 */;
	struct device *cocci_id/* drivers/input/misc/drv260x.c 463 */;
	const struct i2c_device_id *cocci_id/* drivers/input/misc/drv260x.c 461 */;
	struct i2c_client *cocci_id/* drivers/input/misc/drv260x.c 460 */;
	const struct regmap_config cocci_id/* drivers/input/misc/drv260x.c 450 */;
	const struct reg_sequence cocci_id/* drivers/input/misc/drv260x.c 329 */[];
	struct drv260x_data *cocci_id/* drivers/input/misc/drv260x.c 292 */;
	struct input_dev *cocci_id/* drivers/input/misc/drv260x.c 290 */;
	void cocci_id/* drivers/input/misc/drv260x.c 290 */;
	struct ff_effect *cocci_id/* drivers/input/misc/drv260x.c 272 */;
	void *cocci_id/* drivers/input/misc/drv260x.c 271 */;
	struct drv260x_data cocci_id/* drivers/input/misc/drv260x.c 250 */;
	struct work_struct *cocci_id/* drivers/input/misc/drv260x.c 248 */;
	unsigned int cocci_id/* drivers/input/misc/drv260x.c 243 */;
	int cocci_id/* drivers/input/misc/drv260x.c 243 */;
	const struct reg_default cocci_id/* drivers/input/misc/drv260x.c 196 */[];
	struct drv260x_data {
		struct input_dev *input_dev;
		struct i2c_client *client;
		struct regmap *regmap;
		struct work_struct work;
		struct gpio_desc *enable_gpio;
		struct regulator *regulator;
		u32 magnitude;
		u32 mode;
		u32 library;
		int rated_voltage;
		int overdrive_voltage;
	} cocci_id/* drivers/input/misc/drv260x.c 182 */;
}
