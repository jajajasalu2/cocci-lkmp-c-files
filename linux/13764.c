cocci_test_suite() {
	bool cocci_id/* drivers/media/i2c/lm3560.c 91 */;
	enum lm3560_led_id cocci_id/* drivers/media/i2c/lm3560.c 91 */;
	struct lm3560_flash *cocci_id/* drivers/media/i2c/lm3560.c 90 */;
	int cocci_id/* drivers/media/i2c/lm3560.c 90 */;
	struct lm3560_flash cocci_id/* drivers/media/i2c/lm3560.c 65 */;
	struct lm3560_flash {
		struct device *dev;
		struct lm3560_platform_data *pdata;
		struct regmap *regmap;
		struct mutex lock;
		enum v4l2_flash_led_mode led_mode;
		struct v4l2_ctrl_handler ctrls_led[LM3560_LED_MAX];
		struct v4l2_subdev subdev_led[LM3560_LED_MAX];
	} cocci_id/* drivers/media/i2c/lm3560.c 53 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/lm3560.c 468 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/lm3560.c 460 */[];
	struct lm3560_platform_data *cocci_id/* drivers/media/i2c/lm3560.c 398 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/lm3560.c 395 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/lm3560.c 394 */;
	enum led_enable{MODE_SHDN=0x0, MODE_TORCH=0x2, MODE_FLASH=0x3,} cocci_id/* drivers/media/i2c/lm3560.c 36 */;
	char *cocci_id/* drivers/media/i2c/lm3560.c 350 */;
	const struct regmap_config cocci_id/* drivers/media/i2c/lm3560.c 343 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/lm3560.c 339 */;
	const struct v4l2_ctrl_ops *cocci_id/* drivers/media/i2c/lm3560.c 285 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/i2c/lm3560.c 284 */;
	u32 cocci_id/* drivers/media/i2c/lm3560.c 282 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/lm3560.c 267 */[LM3560_LED_MAX];
	s32 cocci_id/* drivers/media/i2c/lm3560.c 168 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/lm3560.c 160 */;
	u8 cocci_id/* drivers/media/i2c/lm3560.c 141 */;
	unsigned int cocci_id/* drivers/media/i2c/lm3560.c 138 */;
}
