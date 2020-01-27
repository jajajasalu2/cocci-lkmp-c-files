cocci_test_suite() {
	struct regmap *cocci_id/* drivers/media/i2c/ov772x.c 977 */;
	struct ov772x_priv *cocci_id/* drivers/media/i2c/ov772x.c 975 */;
	int cocci_id/* drivers/media/i2c/ov772x.c 975 */;
	const struct ov772x_win_size **cocci_id/* drivers/media/i2c/ov772x.c 957 */;
	const struct ov772x_color_format **cocci_id/* drivers/media/i2c/ov772x.c 956 */;
	const struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/ov772x.c 955 */;
	void cocci_id/* drivers/media/i2c/ov772x.c 955 */;
	u32 cocci_id/* drivers/media/i2c/ov772x.c 937 */;
	const struct ov772x_win_size *cocci_id/* drivers/media/i2c/ov772x.c 937 */;
	int cocci_id/* drivers/media/i2c/ov772x.c 896 */(struct ov772x_priv *priv,
							 const struct ov772x_color_format *cfmt,
							 const struct ov772x_win_size *win);
	struct i2c_client *cocci_id/* drivers/media/i2c/ov772x.c 844 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/ov772x.c 830 */;
	__u64 cocci_id/* drivers/media/i2c/ov772x.c 824 */;
	unsigned int cocci_id/* drivers/media/i2c/ov772x.c 814 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/ov772x.c 810 */;
	u8 cocci_id/* drivers/media/i2c/ov772x.c 762 */;
	struct ov772x_priv cocci_id/* drivers/media/i2c/ov772x.c 759 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/ov772x.c 756 */;
	struct v4l2_fract *cocci_id/* drivers/media/i2c/ov772x.c 710 */;
	struct v4l2_subdev_frame_interval *cocci_id/* drivers/media/i2c/ov772x.c 707 */;
	unsigned long cocci_id/* drivers/media/i2c/ov772x.c 630 */;
	const unsigned int cocci_id/* drivers/media/i2c/ov772x.c 544 */[];
	const struct ov772x_win_size cocci_id/* drivers/media/i2c/ov772x.c 517 */[];
	const struct ov772x_color_format cocci_id/* drivers/media/i2c/ov772x.c 442 */[];
	struct ov772x_priv {
		struct v4l2_subdev subdev;
		struct v4l2_ctrl_handler hdl;
		struct clk *clk;
		struct regmap *regmap;
		struct ov772x_camera_info *info;
		struct gpio_desc *pwdn_gpio;
		struct gpio_desc *rstb_gpio;
		const struct ov772x_color_format *cfmt;
		const struct ov772x_win_size *win;
		struct v4l2_ctrl *vflip_ctrl;
		struct v4l2_ctrl *hflip_ctrl;
		struct v4l2_ctrl *band_filter_ctrl;
		unsigned int fps;
		struct mutex lock;
		int power_count;
		int streaming;
#ifdef CONFIG_MEDIA_CONTROLLER
		struct media_pad pad;
#endif
	} cocci_id/* drivers/media/i2c/ov772x.c 415 */;
	struct ov772x_win_size {
		char *name;
		unsigned char com7_bit;
		unsigned int sizeimage;
		struct v4l2_rect rect;
	} cocci_id/* drivers/media/i2c/ov772x.c 408 */;
	struct ov772x_color_format {
		u32 code;
		enum v4l2_colorspace colorspace;
		u8 dsp3;
		u8 dsp4;
		u8 com3;
		u8 com7;
	} cocci_id/* drivers/media/i2c/ov772x.c 399 */;
	struct {
		unsigned int mult;
		u8 com4;
	} cocci_id/* drivers/media/i2c/ov772x.c 385 */[];
	struct i2c_driver cocci_id/* drivers/media/i2c/ov772x.c 1483 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/ov772x.c 1476 */[];
	const struct i2c_device_id cocci_id/* drivers/media/i2c/ov772x.c 1470 */[];
	const struct regmap_config cocci_id/* drivers/media/i2c/ov772x.c 1359 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/ov772x.c 1345 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/ov772x.c 1337 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/ov772x.c 1331 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/ov772x.c 1321 */;
	struct v4l2_subdev_frame_interval_enum *cocci_id/* drivers/media/i2c/ov772x.c 1303 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/ov772x.c 1302 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/ov772x.c 1301 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/ov772x.c 1290 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/ov772x.c 1286 */;
	const char *cocci_id/* drivers/media/i2c/ov772x.c 1238 */;
	const struct ov772x_color_format *cocci_id/* drivers/media/i2c/ov772x.c 1185 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/ov772x.c 1164 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/ov772x.c 1162 */;
	struct v4l2_subdev_selection *cocci_id/* drivers/media/i2c/ov772x.c 1140 */;
	unsigned short cocci_id/* drivers/media/i2c/ov772x.c 1118 */;
}
