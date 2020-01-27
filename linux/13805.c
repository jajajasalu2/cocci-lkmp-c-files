cocci_test_suite() {
	const struct ov13858_mode cocci_id/* drivers/media/i2c/ov13858.c 981 */[];
	const struct ov13858_link_freq_config cocci_id/* drivers/media/i2c/ov13858.c 962 */[OV13858_NUM_OF_LINK_FREQS];
	const s64 cocci_id/* drivers/media/i2c/ov13858.c 956 */[OV13858_NUM_OF_LINK_FREQS];
	struct ov13858_link_freq_config {
		u32 pixels_per_line;
		struct ov13858_reg_list reg_list;
	} cocci_id/* drivers/media/i2c/ov13858.c 95 */;
	u64 cocci_id/* drivers/media/i2c/ov13858.c 947 */;
	const char *const cocci_id/* drivers/media/i2c/ov13858.c 928 */[];
	struct ov13858_reg_list {
		u32 num_of_regs;
		const struct ov13858_reg *regs;
	} cocci_id/* drivers/media/i2c/ov13858.c 89 */;
	struct ov13858_reg {
		u16 address;
		u8 val;
	} cocci_id/* drivers/media/i2c/ov13858.c 84 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/ov13858.c 1790 */;
	const struct acpi_device_id cocci_id/* drivers/media/i2c/ov13858.c 1782 */[];
	const struct dev_pm_ops cocci_id/* drivers/media/i2c/ov13858.c 1777 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/ov13858.c 1770 */[];
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/ov13858.c 1687 */;
	void cocci_id/* drivers/media/i2c/ov13858.c 1680 */;
	const struct ov13858_mode *cocci_id/* drivers/media/i2c/ov13858.c 1599 */;
	s64 cocci_id/* drivers/media/i2c/ov13858.c 1593 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/i2c/ov13858.c 1592 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/i2c/ov13858.c 1584 */;
	const struct media_entity_operations cocci_id/* drivers/media/i2c/ov13858.c 1580 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/ov13858.c 1574 */;
	const struct v4l2_subdev_sensor_ops cocci_id/* drivers/media/i2c/ov13858.c 1570 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/ov13858.c 1563 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/ov13858.c 1559 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/ov13858.c 1541 */;
	struct device *cocci_id/* drivers/media/i2c/ov13858.c 1517 */;
	int __maybe_unused cocci_id/* drivers/media/i2c/ov13858.c 1517 */;
	const struct ov13858_reg_list *cocci_id/* drivers/media/i2c/ov13858.c 1415 */;
	u32 *cocci_id/* drivers/media/i2c/ov13858.c 1404 */;
	s32 cocci_id/* drivers/media/i2c/ov13858.c 1355 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/ov13858.c 1321 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/ov13858.c 1320 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/ov13858.c 1318 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/ov13858.c 1317 */;
	struct ov13858 *cocci_id/* drivers/media/i2c/ov13858.c 1316 */;
	int cocci_id/* drivers/media/i2c/ov13858.c 1316 */;
	struct v4l2_subdev_frame_size_enum *cocci_id/* drivers/media/i2c/ov13858.c 1291 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/ov13858.c 1278 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/ov13858.c 1272 */;
	struct ov13858 cocci_id/* drivers/media/i2c/ov13858.c 1213 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/ov13858.c 1210 */;
	const struct ov13858_reg cocci_id/* drivers/media/i2c/ov13858.c 120 */[];
	u32 cocci_id/* drivers/media/i2c/ov13858.c 1189 */;
	struct v4l2_subdev_fh *cocci_id/* drivers/media/i2c/ov13858.c 1148 */;
	const struct ov13858_reg *cocci_id/* drivers/media/i2c/ov13858.c 1119 */;
	u8 cocci_id/* drivers/media/i2c/ov13858.c 1094 */[6];
	__be16 cocci_id/* drivers/media/i2c/ov13858.c 1061 */;
	__be32 cocci_id/* drivers/media/i2c/ov13858.c 1060 */;
	u8 *cocci_id/* drivers/media/i2c/ov13858.c 1058 */;
	struct i2c_msg cocci_id/* drivers/media/i2c/ov13858.c 1057 */[2];
	u16 cocci_id/* drivers/media/i2c/ov13858.c 1053 */;
	struct ov13858_mode {
		u32 width;
		u32 height;
		u32 vts_def;
		u32 vts_min;
		u32 link_freq_index;
		struct ov13858_reg_list reg_list;
	} cocci_id/* drivers/media/i2c/ov13858.c 103 */;
	struct ov13858 {
		struct v4l2_subdev sd;
		struct media_pad pad;
		struct v4l2_ctrl_handler ctrl_handler;
		struct v4l2_ctrl *link_freq;
		struct v4l2_ctrl *pixel_rate;
		struct v4l2_ctrl *vblank;
		struct v4l2_ctrl *hblank;
		struct v4l2_ctrl *exposure;
		const struct ov13858_mode *cur_mode;
		struct mutex mutex;
		bool streaming;
	} cocci_id/* drivers/media/i2c/ov13858.c 1028 */;
}
