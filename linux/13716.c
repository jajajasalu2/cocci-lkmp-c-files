cocci_test_suite() {
	struct v4l2_dv_timings cocci_id/* drivers/media/i2c/tvp7002.c 938 */;
	unsigned int cocci_id/* drivers/media/i2c/tvp7002.c 886 */;
	struct device_node *cocci_id/* drivers/media/i2c/tvp7002.c 885 */;
	struct v4l2_fwnode_endpoint cocci_id/* drivers/media/i2c/tvp7002.c 883 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/tvp7002.c 881 */;
	struct tvp7002_config *cocci_id/* drivers/media/i2c/tvp7002.c 880 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/tvp7002.c 874 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/tvp7002.c 866 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/tvp7002.c 858 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/tvp7002.c 849 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/tvp7002.c 820 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/tvp7002.c 799 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/tvp7002.c 798 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/tvp7002.c 785 */;
	struct v4l2_enum_dv_timings *cocci_id/* drivers/media/i2c/tvp7002.c 772 */;
	int cocci_id/* drivers/media/i2c/tvp7002.c 771 */;
	const struct v4l2_bt_timings *cocci_id/* drivers/media/i2c/tvp7002.c 747 */;
	const struct i2c_reg_value cocci_id/* drivers/media/i2c/tvp7002.c 72 */[];
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/tvp7002.c 705 */;
	u8 cocci_id/* drivers/media/i2c/tvp7002.c 687 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/tvp7002.c 685 */;
	u32 cocci_id/* drivers/media/i2c/tvp7002.c 612 */;
	const struct tvp7002_timings_definition *cocci_id/* drivers/media/i2c/tvp7002.c 610 */;
	int *cocci_id/* drivers/media/i2c/tvp7002.c 608 */;
	struct i2c_reg_value {
		u8 reg;
		u8 value;
		u8 type;
	} cocci_id/* drivers/media/i2c/tvp7002.c 60 */;
	struct v4l2_dv_timings *cocci_id/* drivers/media/i2c/tvp7002.c 570 */;
	bool cocci_id/* drivers/media/i2c/tvp7002.c 55 */;
	const struct i2c_reg_value *cocci_id/* drivers/media/i2c/tvp7002.c 535 */;
	void cocci_id/* drivers/media/i2c/tvp7002.c 472 */;
	u8 *cocci_id/* drivers/media/i2c/tvp7002.c 442 */;
	struct tvp7002 cocci_id/* drivers/media/i2c/tvp7002.c 431 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/tvp7002.c 429 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/tvp7002.c 429 */;
	struct tvp7002 *cocci_id/* drivers/media/i2c/tvp7002.c 424 */;
	struct tvp7002 {
		struct v4l2_subdev sd;
		struct v4l2_ctrl_handler hdl;
		const struct tvp7002_config *pdata;
		int ver;
		int streaming;
		const struct tvp7002_timings_definition *current_timings;
		struct media_pad pad;
	} cocci_id/* drivers/media/i2c/tvp7002.c 406 */;
	const struct tvp7002_timings_definition cocci_id/* drivers/media/i2c/tvp7002.c 330 */[];
	struct tvp7002_timings_definition {
		struct v4l2_dv_timings timings;
		const struct i2c_reg_value *p_settings;
		enum v4l2_colorspace color_space;
		enum v4l2_field scanmode;
		u16 progressive;
		u16 lines_per_frame;
		u16 cpl_min;
		u16 cpl_max;
	} cocci_id/* drivers/media/i2c/tvp7002.c 318 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/tvp7002.c 1073 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/tvp7002.c 1065 */[];
	const struct i2c_device_id cocci_id/* drivers/media/i2c/tvp7002.c 1058 */[];
}
