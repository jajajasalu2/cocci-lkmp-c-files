cocci_test_suite() {
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/lm3646.c 99 */;
	int cocci_id/* drivers/media/i2c/lm3646.c 99 */;
	enum v4l2_flash_led_mode cocci_id/* drivers/media/i2c/lm3646.c 82 */;
	struct lm3646_flash cocci_id/* drivers/media/i2c/lm3646.c 78 */;
	struct lm3646_flash {
		struct device *dev;
		struct lm3646_platform_data *pdata;
		struct regmap *regmap;
		struct v4l2_ctrl_handler ctrls_led;
		struct v4l2_subdev subdev_led;
		u8 mode_reg;
	} cocci_id/* drivers/media/i2c/lm3646.c 66 */;
	enum led_mode{MODE_SHDN=0x0, MODE_TORCH=0x2, MODE_FLASH=0x3,} cocci_id/* drivers/media/i2c/lm3646.c 49 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/lm3646.c 398 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/lm3646.c 391 */[];
	struct lm3646_platform_data cocci_id/* drivers/media/i2c/lm3646.c 355 */;
	struct lm3646_platform_data *cocci_id/* drivers/media/i2c/lm3646.c 341 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/lm3646.c 338 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/lm3646.c 337 */;
	const struct regmap_config cocci_id/* drivers/media/i2c/lm3646.c 265 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/lm3646.c 261 */;
	const struct v4l2_ctrl_ops *cocci_id/* drivers/media/i2c/lm3646.c 207 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/i2c/lm3646.c 206 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/lm3646.c 198 */;
	unsigned int cocci_id/* drivers/media/i2c/lm3646.c 102 */;
	struct lm3646_flash *cocci_id/* drivers/media/i2c/lm3646.c 101 */;
}
