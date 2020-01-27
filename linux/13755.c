cocci_test_suite() {
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/i2c/ov7740.c 978 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/ov7740.c 977 */;
	unsigned int cocci_id/* drivers/media/i2c/ov7740.c 945 */;
	struct regmap *cocci_id/* drivers/media/i2c/ov7740.c 944 */;
	struct ov7740 *cocci_id/* drivers/media/i2c/ov7740.c 942 */;
	int cocci_id/* drivers/media/i2c/ov7740.c 942 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/i2c/ov7740.c 917 */;
	struct v4l2_subdev_fh *cocci_id/* drivers/media/i2c/ov7740.c 904 */;
	struct ov7740 cocci_id/* drivers/media/i2c/ov7740.c 894 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/ov7740.c 892 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/ov7740.c 885 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/ov7740.c 877 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/ov7740.c 852 */;
	const struct ov7740_framesize *cocci_id/* drivers/media/i2c/ov7740.c 811 */;
	const struct ov7740_pixfmt *cocci_id/* drivers/media/i2c/ov7740.c 810 */;
	const struct ov7740_framesize **cocci_id/* drivers/media/i2c/ov7740.c 761 */;
	const struct ov7740_pixfmt **cocci_id/* drivers/media/i2c/ov7740.c 760 */;
	struct v4l2_subdev_frame_size_enum *cocci_id/* drivers/media/i2c/ov7740.c 744 */;
	struct v4l2_subdev_frame_interval_enum *cocci_id/* drivers/media/i2c/ov7740.c 725 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/ov7740.c 724 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/ov7740.c 723 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/ov7740.c 713 */;
	const struct ov7740_pixfmt cocci_id/* drivers/media/i2c/ov7740.c 695 */[];
	const struct reg_sequence cocci_id/* drivers/media/i2c/ov7740.c 689 */[];
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/ov7740.c 676 */;
	struct v4l2_fract *cocci_id/* drivers/media/i2c/ov7740.c 655 */;
	struct v4l2_subdev_frame_interval *cocci_id/* drivers/media/i2c/ov7740.c 653 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/ov7740.c 586 */;
	u8 cocci_id/* drivers/media/i2c/ov7740.c 535 */;
	enum v4l2_exposure_auto_type cocci_id/* drivers/media/i2c/ov7740.c 490 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/ov7740.c 451 */;
	unsigned char cocci_id/* drivers/media/i2c/ov7740.c 415 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/ov7740.c 325 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/ov7740.c 286 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/ov7740.c 271 */;
	const struct ov7740_framesize cocci_id/* drivers/media/i2c/ov7740.c 260 */[];
	struct ov7740_framesize {
		u16 width;
		u16 height;
		const struct reg_sequence *regs;
		u32 reg_num;
	} cocci_id/* drivers/media/i2c/ov7740.c 136 */;
	struct ov7740_pixfmt {
		u32 mbus_code;
		enum v4l2_colorspace colorspace;
		const struct reg_sequence *regs;
		u32 reg_num;
	} cocci_id/* drivers/media/i2c/ov7740.c 129 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/ov7740.c 1221 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/ov7740.c 1215 */[];
	const struct dev_pm_ops cocci_id/* drivers/media/i2c/ov7740.c 1211 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/ov7740.c 1205 */[];
	struct device *cocci_id/* drivers/media/i2c/ov7740.c 1196 */;
	int __maybe_unused cocci_id/* drivers/media/i2c/ov7740.c 1196 */;
	const struct regmap_config cocci_id/* drivers/media/i2c/ov7740.c 1059 */;
	void cocci_id/* drivers/media/i2c/ov7740.c 1052 */;
	struct ov7740 {
		struct v4l2_subdev subdev;
#if defined(CONFIG_MEDIA_CONTROLLER)
		struct media_pad pad;
#endif
		struct v4l2_mbus_framefmt format;
		const struct ov7740_pixfmt *fmt;
		const struct ov7740_framesize *frmsize;
		struct regmap *regmap;
		struct clk *xvclk;
		struct v4l2_ctrl_handler ctrl_handler;
		struct {
			struct v4l2_ctrl *auto_gain;
			struct v4l2_ctrl *gain;
		};
		struct {
			struct v4l2_ctrl *auto_wb;
			struct v4l2_ctrl *blue_balance;
			struct v4l2_ctrl *red_balance;
		};
		struct {
			struct v4l2_ctrl *hflip;
			struct v4l2_ctrl *vflip;
		};
		struct {
			struct v4l2_ctrl *auto_exposure;
			struct v4l2_ctrl *exposure;
		};
		struct {
			struct v4l2_ctrl *saturation;
			struct v4l2_ctrl *hue;
		};
		struct v4l2_ctrl *brightness;
		struct v4l2_ctrl *contrast;
		struct mutex mutex;
		bool streaming;
		struct gpio_desc *resetb_gpio;
		struct gpio_desc *pwdn_gpio;
	} cocci_id/*  1 */;
}
