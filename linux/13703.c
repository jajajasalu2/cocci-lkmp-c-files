cocci_test_suite() {
	struct device *cocci_id/* drivers/media/i2c/ov5695.c 984 */;
	u32 cocci_id/* drivers/media/i2c/ov5695.c 983 */;
	int cocci_id/* drivers/media/i2c/ov5695.c 980 */;
	struct ov5695 {
		struct i2c_client *client;
		struct clk *xvclk;
		struct gpio_desc *reset_gpio;
		struct regulator_bulk_data supplies[OV5695_NUM_SUPPLIES];
		struct v4l2_subdev subdev;
		struct media_pad pad;
		struct v4l2_ctrl_handler ctrl_handler;
		struct v4l2_ctrl *exposure;
		struct v4l2_ctrl *anal_gain;
		struct v4l2_ctrl *digi_gain;
		struct v4l2_ctrl *hblank;
		struct v4l2_ctrl *vblank;
		struct v4l2_ctrl *test_pattern;
		struct mutex mutex;
		bool streaming;
		const struct ov5695_mode *cur_mode;
	} cocci_id/* drivers/media/i2c/ov5695.c 95 */;
	struct v4l2_subdev_frame_size_enum *cocci_id/* drivers/media/i2c/ov5695.c 882 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/ov5695.c 881 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/ov5695.c 880 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/ov5695.c 871 */;
	struct ov5695_mode {
		u32 width;
		u32 height;
		u32 max_fps;
		u32 hts_def;
		u32 vts_def;
		u32 exp_def;
		const struct regval *reg_list;
	} cocci_id/* drivers/media/i2c/ov5695.c 85 */;
	struct regval {
		u16 addr;
		u8 val;
	} cocci_id/* drivers/media/i2c/ov5695.c 80 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/ov5695.c 791 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/ov5695.c 789 */;
	const struct ov5695_mode *cocci_id/* drivers/media/i2c/ov5695.c 788 */;
	__be16 cocci_id/* drivers/media/i2c/ov5695.c 753 */;
	__be32 cocci_id/* drivers/media/i2c/ov5695.c 752 */;
	u8 *cocci_id/* drivers/media/i2c/ov5695.c 751 */;
	struct i2c_msg cocci_id/* drivers/media/i2c/ov5695.c 750 */[2];
	u32 *cocci_id/* drivers/media/i2c/ov5695.c 748 */;
	u16 cocci_id/* drivers/media/i2c/ov5695.c 747 */;
	unsigned int cocci_id/* drivers/media/i2c/ov5695.c 747 */;
	const struct regval *cocci_id/* drivers/media/i2c/ov5695.c 734 */;
	const char *const cocci_id/* drivers/media/i2c/ov5695.c 72 */[];
	u8 cocci_id/* drivers/media/i2c/ov5695.c 709 */[6];
	const s64 cocci_id/* drivers/media/i2c/ov5695.c 692 */[];
	const struct ov5695_mode cocci_id/* drivers/media/i2c/ov5695.c 643 */[];
	const struct regval cocci_id/* drivers/media/i2c/ov5695.c 569 */[];
	struct i2c_driver cocci_id/* drivers/media/i2c/ov5695.c 1382 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/ov5695.c 1375 */[];
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/ov5695.c 1261 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/ov5695.c 1230 */;
	s64 cocci_id/* drivers/media/i2c/ov5695.c 1159 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/ov5695.c 1158 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/i2c/ov5695.c 1157 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/ov5695.c 1150 */;
	struct ov5695 cocci_id/* drivers/media/i2c/ov5695.c 1093 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/ov5695.c 1085 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/ov5695.c 1078 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/ov5695.c 1074 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/i2c/ov5695.c 1069 */;
	const struct dev_pm_ops cocci_id/* drivers/media/i2c/ov5695.c 1063 */;
	struct v4l2_subdev_fh *cocci_id/* drivers/media/i2c/ov5695.c 1042 */;
	int __maybe_unused cocci_id/* drivers/media/i2c/ov5695.c 1021 */;
	struct ov5695 *cocci_id/* drivers/media/i2c/ov5695.c 1014 */;
	void cocci_id/* drivers/media/i2c/ov5695.c 1014 */;
}