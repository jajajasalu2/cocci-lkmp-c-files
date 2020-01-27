cocci_test_suite() {
	u16 cocci_id/* drivers/media/i2c/ad5820.c 89 */;
	u8 *cocci_id/* drivers/media/i2c/ad5820.c 71 */;
	__be16 cocci_id/* drivers/media/i2c/ad5820.c 61 */;
	struct i2c_msg cocci_id/* drivers/media/i2c/ad5820.c 60 */;
	struct ad5820_device {
		struct v4l2_subdev subdev;
		struct ad5820_platform_data *platform_data;
		struct regulator *vana;
		struct v4l2_ctrl_handler ctrls;
		u32 focus_absolute;
		u32 focus_ramp_time;
		u32 focus_ramp_mode;
		struct gpio_desc *enable_gpio;
		struct mutex power_lock;
		int power_count;
		bool standby;
	} cocci_id/* drivers/media/i2c/ad5820.c 39 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/ad5820.c 377 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/ad5820.c 367 */[];
	const struct i2c_device_id cocci_id/* drivers/media/i2c/ad5820.c 359 */[];
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/ad5820.c 296 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/ad5820.c 295 */;
	struct i2c_client cocci_id/* drivers/media/i2c/ad5820.c 285 */;
	struct device *cocci_id/* drivers/media/i2c/ad5820.c 283 */;
	int __maybe_unused cocci_id/* drivers/media/i2c/ad5820.c 283 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/i2c/ad5820.c 262 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/ad5820.c 258 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/ad5820.c 254 */;
	struct v4l2_subdev_fh *cocci_id/* drivers/media/i2c/ad5820.c 249 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/ad5820.c 249 */;
	int cocci_id/* drivers/media/i2c/ad5820.c 249 */;
	struct ad5820_device *cocci_id/* drivers/media/i2c/ad5820.c 175 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/ad5820.c 170 */;
	struct ad5820_device cocci_id/* drivers/media/i2c/ad5820.c 159 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/ad5820.c 156 */;
	bool cocci_id/* drivers/media/i2c/ad5820.c 105 */;
}
