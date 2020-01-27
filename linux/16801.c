cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/input/misc/drv2667.c 475 */;
	const struct of_device_id cocci_id/* drivers/input/misc/drv2667.c 468 */[];
	const struct i2c_device_id cocci_id/* drivers/input/misc/drv2667.c 461 */[];
	struct device *cocci_id/* drivers/input/misc/drv2667.c 430 */;
	int __maybe_unused cocci_id/* drivers/input/misc/drv2667.c 430 */;
	const struct i2c_device_id *cocci_id/* drivers/input/misc/drv2667.c 335 */;
	struct i2c_client *cocci_id/* drivers/input/misc/drv2667.c 334 */;
	const struct regmap_config cocci_id/* drivers/input/misc/drv2667.c 324 */;
	const struct reg_sequence cocci_id/* drivers/input/misc/drv2667.c 257 */[];
	int cocci_id/* drivers/input/misc/drv2667.c 246 */;
	struct drv2667_data *cocci_id/* drivers/input/misc/drv2667.c 245 */;
	struct input_dev *cocci_id/* drivers/input/misc/drv2667.c 243 */;
	void cocci_id/* drivers/input/misc/drv2667.c 243 */;
	struct ff_effect *cocci_id/* drivers/input/misc/drv2667.c 227 */;
	void *cocci_id/* drivers/input/misc/drv2667.c 226 */;
	struct drv2667_data cocci_id/* drivers/input/misc/drv2667.c 182 */;
	struct work_struct *cocci_id/* drivers/input/misc/drv2667.c 180 */;
	unsigned int cocci_id/* drivers/input/misc/drv2667.c 129 */;
	const struct reg_default cocci_id/* drivers/input/misc/drv2667.c 111 */[];
	struct drv2667_data {
		struct input_dev *input_dev;
		struct i2c_client *client;
		struct regmap *regmap;
		struct work_struct work;
		struct regulator *regulator;
		u32 page;
		u32 magnitude;
		u32 frequency;
	} cocci_id/* drivers/input/misc/drv2667.c 100 */;
}
