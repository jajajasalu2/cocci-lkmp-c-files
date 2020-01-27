cocci_test_suite() {
	const struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/s5k6a3.c 89 */;
	const struct v4l2_mbus_framefmt cocci_id/* drivers/media/i2c/s5k6a3.c 81 */[];
	struct s5k6a3 cocci_id/* drivers/media/i2c/s5k6a3.c 78 */;
	const char *const cocci_id/* drivers/media/i2c/s5k6a3.c 70 */[];
	struct s5k6a3 {
		struct device *dev;
		struct v4l2_subdev subdev;
		struct media_pad pad;
		struct regulator_bulk_data supplies[S5K6A3_NUM_SUPPLIES];
		int gpio_reset;
		struct mutex lock;
		struct v4l2_mbus_framefmt format;
		struct clk *clock;
		u32 clock_frequency;
		int power_count;
	} cocci_id/* drivers/media/i2c/s5k6a3.c 57 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/s5k6a3.c 375 */;
	enum{S5K6A3_SUPP_VDDA, S5K6A3_SUPP_VDDIO, S5K6A3_SUPP_AFVDD, S5K6A3_NUM_SUPPLIES,} cocci_id/* drivers/media/i2c/s5k6a3.c 37 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/s5k6a3.c 368 */[];
	const struct i2c_device_id cocci_id/* drivers/media/i2c/s5k6a3.c 362 */[];
	struct device *cocci_id/* drivers/media/i2c/s5k6a3.c 280 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/s5k6a3.c 278 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/s5k6a3.c 273 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/s5k6a3.c 269 */;
	int cocci_id/* drivers/media/i2c/s5k6a3.c 234 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/i2c/s5k6a3.c 185 */;
	struct v4l2_subdev_fh *cocci_id/* drivers/media/i2c/s5k6a3.c 174 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/s5k6a3.c 168 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/s5k6a3.c 155 */;
	u32 cocci_id/* drivers/media/i2c/s5k6a3.c 127 */;
	enum v4l2_subdev_format_whence cocci_id/* drivers/media/i2c/s5k6a3.c 127 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/s5k6a3.c 126 */;
	struct s5k6a3 *cocci_id/* drivers/media/i2c/s5k6a3.c 126 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/s5k6a3.c 125 */;
	void cocci_id/* drivers/media/i2c/s5k6a3.c 112 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/s5k6a3.c 103 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/s5k6a3.c 101 */;
}
