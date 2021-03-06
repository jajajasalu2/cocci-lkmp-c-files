cocci_test_suite() {
	struct ov5670_mode {
		u32 width;
		u32 height;
		u32 vts_def;
		u32 vts_min;
		u32 link_freq_index;
		const struct ov5670_reg_list reg_list;
	} cocci_id/* drivers/media/i2c/ov5670.c 84 */;
	struct ov5670_link_freq_config {
		u32 pixel_rate;
		const struct ov5670_reg_list reg_list;
	} cocci_id/* drivers/media/i2c/ov5670.c 79 */;
	struct ov5670_reg_list {
		u32 num_of_regs;
		const struct ov5670_reg *regs;
	} cocci_id/* drivers/media/i2c/ov5670.c 74 */;
	struct ov5670_reg {
		u16 address;
		u8 val;
	} cocci_id/* drivers/media/i2c/ov5670.c 69 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/ov5670.c 2556 */;
	const struct acpi_device_id cocci_id/* drivers/media/i2c/ov5670.c 2548 */[];
	const struct dev_pm_ops cocci_id/* drivers/media/i2c/ov5670.c 2543 */;
	const char *cocci_id/* drivers/media/i2c/ov5670.c 2445 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/i2c/ov5670.c 2438 */;
	const struct media_entity_operations cocci_id/* drivers/media/i2c/ov5670.c 2434 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/ov5670.c 2428 */;
	const struct v4l2_subdev_sensor_ops cocci_id/* drivers/media/i2c/ov5670.c 2424 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/ov5670.c 2417 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/ov5670.c 2413 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/ov5670.c 2395 */;
	struct device *cocci_id/* drivers/media/i2c/ov5670.c 2374 */;
	int __maybe_unused cocci_id/* drivers/media/i2c/ov5670.c 2374 */;
	const struct ov5670_reg_list *cocci_id/* drivers/media/i2c/ov5670.c 2265 */;
	u32 *cocci_id/* drivers/media/i2c/ov5670.c 2254 */;
	s32 cocci_id/* drivers/media/i2c/ov5670.c 2215 */;
	const struct ov5670_mode *cocci_id/* drivers/media/i2c/ov5670.c 2214 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/ov5670.c 2184 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/ov5670.c 2183 */;
	struct ov5670 *cocci_id/* drivers/media/i2c/ov5670.c 2182 */;
	int cocci_id/* drivers/media/i2c/ov5670.c 2182 */;
	void cocci_id/* drivers/media/i2c/ov5670.c 2173 */;
	struct v4l2_subdev_frame_size_enum *cocci_id/* drivers/media/i2c/ov5670.c 2157 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/ov5670.c 2155 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/ov5670.c 2144 */;
	s64 cocci_id/* drivers/media/i2c/ov5670.c 2063 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/i2c/ov5670.c 2062 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/ov5670.c 2055 */;
	struct ov5670 cocci_id/* drivers/media/i2c/ov5670.c 2002 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/ov5670.c 1999 */;
	u32 cocci_id/* drivers/media/i2c/ov5670.c 1973 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/ov5670.c 1938 */;
	struct v4l2_subdev_fh *cocci_id/* drivers/media/i2c/ov5670.c 1935 */;
	const struct ov5670_reg *cocci_id/* drivers/media/i2c/ov5670.c 1907 */;
	u8 cocci_id/* drivers/media/i2c/ov5670.c 1881 */[6];
	__be16 cocci_id/* drivers/media/i2c/ov5670.c 1846 */;
	__be32 cocci_id/* drivers/media/i2c/ov5670.c 1845 */;
	u8 *cocci_id/* drivers/media/i2c/ov5670.c 1844 */;
	struct i2c_msg cocci_id/* drivers/media/i2c/ov5670.c 1843 */[2];
	u16 cocci_id/* drivers/media/i2c/ov5670.c 1839 */;
	unsigned int cocci_id/* drivers/media/i2c/ov5670.c 1839 */;
	struct ov5670 {
		struct v4l2_subdev sd;
		struct media_pad pad;
		struct v4l2_ctrl_handler ctrl_handler;
		struct v4l2_ctrl *link_freq;
		struct v4l2_ctrl *pixel_rate;
		struct v4l2_ctrl *vblank;
		struct v4l2_ctrl *hblank;
		struct v4l2_ctrl *exposure;
		const struct ov5670_mode *cur_mode;
		struct mutex mutex;
		bool streaming;
	} cocci_id/* drivers/media/i2c/ov5670.c 1814 */;
	const struct ov5670_mode cocci_id/* drivers/media/i2c/ov5670.c 1745 */[];
	const s64 cocci_id/* drivers/media/i2c/ov5670.c 1736 */[];
	const struct ov5670_link_freq_config cocci_id/* drivers/media/i2c/ov5670.c 1725 */[];
	const char *const cocci_id/* drivers/media/i2c/ov5670.c 1717 */[];
	const struct ov5670_reg cocci_id/* drivers/media/i2c/ov5670.c 104 */[];
}
