cocci_test_suite() {
	struct mt9v111_dev cocci_id/* drivers/media/i2c/mt9v111.c 999 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/mt9v111.c 996 */;
	const struct media_entity_operations cocci_id/* drivers/media/i2c/mt9v111.c 990 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/mt9v111.c 983 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/mt9v111.c 974 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/mt9v111.c 968 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/mt9v111.c 964 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/mt9v111.c 864 */;
	struct v4l2_subdev_frame_size_enum *cocci_id/* drivers/media/i2c/mt9v111.c 849 */;
	struct v4l2_subdev_frame_interval_enum *cocci_id/* drivers/media/i2c/mt9v111.c 826 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/mt9v111.c 814 */;
	enum v4l2_subdev_format_whence cocci_id/* drivers/media/i2c/mt9v111.c 796 */;
	unsigned int cocci_id/* drivers/media/i2c/mt9v111.c 795 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/mt9v111.c 794 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/mt9v111.c 792 */;
	struct v4l2_subdev_frame_interval *cocci_id/* drivers/media/i2c/mt9v111.c 777 */;
	struct v4l2_fract *cocci_id/* drivers/media/i2c/mt9v111.c 449 */;
	struct mt9v111_dev *cocci_id/* drivers/media/i2c/mt9v111.c 278 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/mt9v111.c 277 */;
	u16 cocci_id/* drivers/media/i2c/mt9v111.c 275 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/mt9v111.c 275 */;
	int cocci_id/* drivers/media/i2c/mt9v111.c 275 */;
	u8 cocci_id/* drivers/media/i2c/mt9v111.c 252 */[3];
	struct i2c_msg cocci_id/* drivers/media/i2c/mt9v111.c 251 */;
	char *cocci_id/* drivers/media/i2c/mt9v111.c 234 */;
	__be16 cocci_id/* drivers/media/i2c/mt9v111.c 223 */;
	struct i2c_msg cocci_id/* drivers/media/i2c/mt9v111.c 222 */[2];
	u8 cocci_id/* drivers/media/i2c/mt9v111.c 220 */;
	u16 *cocci_id/* drivers/media/i2c/mt9v111.c 220 */;
	struct v4l2_rect cocci_id/* drivers/media/i2c/mt9v111.c 195 */[];
	u32 cocci_id/* drivers/media/i2c/mt9v111.c 187 */[];
	struct mt9v111_mbus_fmt {
		u32 code;
	} cocci_id/* drivers/media/i2c/mt9v111.c 170 */[];
	struct i2c_driver cocci_id/* drivers/media/i2c/mt9v111.c 1270 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/mt9v111.c 1265 */[];
	struct v4l2_fract cocci_id/* drivers/media/i2c/mt9v111.c 1110 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/mt9v111.c 1071 */;
	struct v4l2_mbus_framefmt cocci_id/* drivers/media/i2c/mt9v111.c 106 */;
	struct mt9v111_dev {
		struct device *dev;
		struct i2c_client *client;
		u8 addr_space;
		struct v4l2_subdev sd;
#if IS_ENABLED(CONFIG_MEDIA_CONTROLLER)
		struct media_pad pad;
#endif
		struct v4l2_ctrl *auto_awb;
		struct v4l2_ctrl *auto_exp;
		struct v4l2_ctrl *hblank;
		struct v4l2_ctrl *vblank;
		struct v4l2_ctrl_handler ctrls;
		struct v4l2_mbus_framefmt fmt;
		unsigned int fps;
		struct mutex pwr_mutex;
		int pwr_count;
		struct mutex stream_mutex;
		bool streaming;
		bool pending;
		struct clk *clk;
		u32 sysclk;
		struct gpio_desc *oe;
		struct gpio_desc *standby;
		struct gpio_desc *reset;
	} cocci_id/*  1 */;
}
