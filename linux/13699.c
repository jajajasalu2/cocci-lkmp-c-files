cocci_test_suite() {
	unsigned char cocci_id/* drivers/media/i2c/mt9v011.c 99 */[3];
	char *cocci_id/* drivers/media/i2c/mt9v011.c 83 */;
	__be16 cocci_id/* drivers/media/i2c/mt9v011.c 73 */;
	unsigned char cocci_id/* drivers/media/i2c/mt9v011.c 70 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/mt9v011.c 587 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/mt9v011.c 581 */[];
	struct mt9v011_platform_data *cocci_id/* drivers/media/i2c/mt9v011.c 551 */;
	struct mt9v011 {
		struct v4l2_subdev sd;
#ifdef CONFIG_MEDIA_CONTROLLER
		struct media_pad pad;
#endif
		struct v4l2_ctrl_handler ctrls;
		unsigned width,height;
		unsigned xtal;
		unsigned hflip:1;
		unsigned vflip:1;
		u16 global_gain,exposure;
		s16 red_bal,blue_bal;
	} cocci_id/* drivers/media/i2c/mt9v011.c 50 */;
	struct mt9v011 cocci_id/* drivers/media/i2c/mt9v011.c 496 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/mt9v011.c 482 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/mt9v011.c 481 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/mt9v011.c 470 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/mt9v011.c 465 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/mt9v011.c 460 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/mt9v011.c 452 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/mt9v011.c 448 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/mt9v011.c 413 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/mt9v011.c 405 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/mt9v011.c 396 */;
	struct v4l2_fract *cocci_id/* drivers/media/i2c/mt9v011.c 380 */;
	struct v4l2_subdev_frame_interval *cocci_id/* drivers/media/i2c/mt9v011.c 368 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/mt9v011.c 344 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/mt9v011.c 342 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/mt9v011.c 331 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/mt9v011.c 330 */;
	u32 cocci_id/* drivers/media/i2c/mt9v011.c 227 */;
	int cocci_id/* drivers/media/i2c/mt9v011.c 21 */;
	u64 cocci_id/* drivers/media/i2c/mt9v011.c 206 */;
	unsigned cocci_id/* drivers/media/i2c/mt9v011.c 204 */;
	struct mt9v011 *cocci_id/* drivers/media/i2c/mt9v011.c 203 */;
	u32 *cocci_id/* drivers/media/i2c/mt9v011.c 201 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/mt9v011.c 201 */;
	void cocci_id/* drivers/media/i2c/mt9v011.c 201 */;
	u16 cocci_id/* drivers/media/i2c/mt9v011.c 138 */;
	s16 cocci_id/* drivers/media/i2c/mt9v011.c 138 */;
	const struct i2c_reg_value cocci_id/* drivers/media/i2c/mt9v011.c 124 */[];
	struct i2c_reg_value {
		unsigned char reg;
		u16 value;
	} cocci_id/* drivers/media/i2c/mt9v011.c 115 */;
}
