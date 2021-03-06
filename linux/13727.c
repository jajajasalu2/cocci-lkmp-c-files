cocci_test_suite() {
	enum v4l2_subdev_format_whence cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 994 */;
	unsigned int cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 994 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 993 */;
	struct et8ek8_sensor *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 992 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 991 */;
	struct et8ek8_mode *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 970 */;
	struct v4l2_mbus_framefmt cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 966 */;
	struct et8ek8_reglist **cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 964 */;
	struct v4l2_subdev_frame_interval_enum *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 962 */;
	struct v4l2_subdev_frame_size_enum *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 924 */;
	u32 cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 890 */[MAX_FMTS];
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 886 */;
	const struct et8ek8_gain {
		u16 analog;
		u16 digital;
	} cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 77 */[];
	struct i2c_client *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 749 */;
	const int cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 727 */;
	s32 cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 683 */;
	const char *const cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 669 */[];
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 665 */;
	enum et8ek8_versions{ET8EK8_REV_1=0x0001, ET8EK8_REV_2,} cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 64 */;
	struct et8ek8_sensor cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 639 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 636 */;
	struct et8ek8_gain cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 557 */;
	void *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 541 */;
	const struct et8ek8_reglist **cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 484 */;
	const void *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 482 */;
	struct v4l2_fract *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 459 */;
	struct et8ek8_sensor {
		struct v4l2_subdev subdev;
		struct media_pad pad;
		struct v4l2_mbus_framefmt format;
		struct gpio_desc *reset;
		struct regulator *vana;
		struct clk *ext_clk;
		u32 xclk_freq;
		u16 version;
		struct v4l2_ctrl_handler ctrl_handler;
		struct v4l2_ctrl *exposure;
		struct v4l2_ctrl *pixel_rate;
		struct et8ek8_reglist *current_reglist;
		u8 priv_mem[ET8EK8_PRIV_MEM_SIZE];
		struct mutex power_lock;
		int power_count;
	} cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 40 */;
	const struct et8ek8_reglist *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 394 */;
	struct et8ek8_reglist *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 379 */;
	struct et8ek8_meta_reglist *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 376 */;
	unsigned char cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 340 */[6];
	u16 cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 225 */;
	unsigned char cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 223 */[ET8EK8_MAX_MSG][6];
	struct i2c_msg cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 222 */[ET8EK8_MAX_MSG];
	const struct et8ek8_reg *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 219 */;
	unsigned char *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 188 */;
	struct i2c_msg *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 187 */;
	void cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 186 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1500 */;
	const struct dev_pm_ops cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1496 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1490 */[];
	const struct of_device_id cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1484 */[];
	int __exit cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1463 */;
	unsigned char cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 146 */[4];
	u32 *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 142 */;
	int __maybe_unused cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1387 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1366 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1360 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1352 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1348 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1342 */;
	struct v4l2_subdev_fh *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1337 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1337 */;
	bool cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1292 */;
	int cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1292 */;
	char *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1238 */;
	struct device_attribute *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1237 */;
	struct device *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1237 */;
	ssize_t cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1236 */;
	u8 cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1125 */;
	u32 cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1103 */;
	struct i2c_msg cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1091 */;
	u8 cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1090 */[PRIV_MEM_WIN_SIZE];
	u8 *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1085 */;
	struct v4l2_subdev_frame_interval *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1047 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/et8ek8/et8ek8_driver.c 1008 */;
}
