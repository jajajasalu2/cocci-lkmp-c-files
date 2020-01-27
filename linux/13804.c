cocci_test_suite() {
	const struct imx258_reg_list *cocci_id/* drivers/media/i2c/imx258.c 916 */;
	struct imx258_mode {
		u32 width;
		u32 height;
		u32 vts_def;
		u32 vts_min;
		u32 link_freq_index;
		struct imx258_reg_list reg_list;
	} cocci_id/* drivers/media/i2c/imx258.c 90 */;
	s32 cocci_id/* drivers/media/i2c/imx258.c 865 */;
	const struct imx258_mode *cocci_id/* drivers/media/i2c/imx258.c 863 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/imx258.c 833 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/imx258.c 832 */;
	struct imx258 *cocci_id/* drivers/media/i2c/imx258.c 831 */;
	int cocci_id/* drivers/media/i2c/imx258.c 831 */;
	struct imx258_link_freq_config {
		u32 pixels_per_line;
		struct imx258_reg_list reg_list;
	} cocci_id/* drivers/media/i2c/imx258.c 82 */;
	struct v4l2_subdev_frame_size_enum *cocci_id/* drivers/media/i2c/imx258.c 806 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/imx258.c 804 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/imx258.c 793 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/imx258.c 787 */;
	struct imx258_reg_list {
		u32 num_of_regs;
		const struct imx258_reg *regs;
	} cocci_id/* drivers/media/i2c/imx258.c 76 */;
	struct imx258 cocci_id/* drivers/media/i2c/imx258.c 739 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/imx258.c 736 */;
	struct imx258_reg {
		u16 address;
		u8 val;
	} cocci_id/* drivers/media/i2c/imx258.c 71 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/imx258.c 697 */;
	struct v4l2_subdev_fh *cocci_id/* drivers/media/i2c/imx258.c 695 */;
	unsigned int cocci_id/* drivers/media/i2c/imx258.c 675 */;
	const struct imx258_reg *cocci_id/* drivers/media/i2c/imx258.c 672 */;
	u8 cocci_id/* drivers/media/i2c/imx258.c 657 */[6];
	u8 cocci_id/* drivers/media/i2c/imx258.c 626 */[4];
	u8 cocci_id/* drivers/media/i2c/imx258.c 625 */[2];
	struct i2c_msg cocci_id/* drivers/media/i2c/imx258.c 624 */[2];
	u16 cocci_id/* drivers/media/i2c/imx258.c 621 */;
	u32 *cocci_id/* drivers/media/i2c/imx258.c 621 */;
	struct imx258 {
		struct v4l2_subdev sd;
		struct media_pad pad;
		struct v4l2_ctrl_handler ctrl_handler;
		struct v4l2_ctrl *link_freq;
		struct v4l2_ctrl *pixel_rate;
		struct v4l2_ctrl *vblank;
		struct v4l2_ctrl *hblank;
		struct v4l2_ctrl *exposure;
		const struct imx258_mode *cur_mode;
		struct mutex mutex;
		bool streaming;
	} cocci_id/* drivers/media/i2c/imx258.c 590 */;
	const struct imx258_mode cocci_id/* drivers/media/i2c/imx258.c 554 */[];
	const struct imx258_link_freq_config cocci_id/* drivers/media/i2c/imx258.c 536 */[];
	const s64 cocci_id/* drivers/media/i2c/imx258.c 530 */[];
	u64 cocci_id/* drivers/media/i2c/imx258.c 521 */;
	enum{IMX258_LINK_FREQ_1267MBPS, IMX258_LINK_FREQ_640MBPS,} cocci_id/* drivers/media/i2c/imx258.c 512 */;
	const char *const cocci_id/* drivers/media/i2c/imx258.c 500 */[];
	struct i2c_driver cocci_id/* drivers/media/i2c/imx258.c 1294 */;
	const struct acpi_device_id cocci_id/* drivers/media/i2c/imx258.c 1286 */[];
	const struct dev_pm_ops cocci_id/* drivers/media/i2c/imx258.c 1281 */;
	void cocci_id/* drivers/media/i2c/imx258.c 1192 */;
	s64 cocci_id/* drivers/media/i2c/imx258.c 1101 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/i2c/imx258.c 1100 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/i2c/imx258.c 1092 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/imx258.c 1087 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/imx258.c 1080 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/imx258.c 1076 */;
	const struct imx258_reg cocci_id/* drivers/media/i2c/imx258.c 107 */[];
	u32 cocci_id/* drivers/media/i2c/imx258.c 1057 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/imx258.c 1055 */;
	struct device *cocci_id/* drivers/media/i2c/imx258.c 1031 */;
	int __maybe_unused cocci_id/* drivers/media/i2c/imx258.c 1031 */;
}
