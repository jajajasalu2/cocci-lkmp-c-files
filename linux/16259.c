cocci_test_suite() {
	u16 cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 974 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 963 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 955 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 947 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 943 */;
	struct v4l2_mbus_config *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 911 */;
	struct v4l2_subdev_selection *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 887 */;
	struct v4l2_rect cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 857 */;
	struct regval_list {
		u16 reg_num;
		u8 value;
	} cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 85 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 842 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 841 */;
	struct v4l2_subdev *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 840 */;
	int cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 840 */;
	struct ov5642 *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 824 */;
	struct i2c_client *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 823 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 822 */;
	struct v4l2_subdev_format *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 820 */;
	struct regval_list *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 722 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 710 */;
	__u64 cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 704 */;
	u8 cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 695 */;
	struct v4l2_dbg_register *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 691 */;
	unsigned char cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 663 */[3];
	unsigned char cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 642 */[2];
	u8 *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 638 */;
	u32 cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 627 */;
	const struct ov5642_datafmt *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 626 */;
	const struct i2c_client *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 620 */;
	const struct ov5642_datafmt cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 616 */[];
	struct ov5642 {
		struct v4l2_subdev subdev;
		const struct ov5642_datafmt *fmt;
		struct v4l2_rect crop_rect;
		struct v4l2_clk *clk;
		int total_width;
		int total_height;
	} cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 605 */;
	struct ov5642_datafmt {
		u32 code;
		enum v4l2_colorspace colorspace;
	} cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 600 */;
	struct regval_list cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 551 */[];
	struct i2c_driver cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 1071 */;
	const struct of_device_id cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 1064 */[];
	const struct i2c_device_id cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 1057 */[];
	struct ov5642 cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 1019 */;
	struct soc_camera_subdev_desc *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 1011 */;
	const struct i2c_device_id *cocci_id/* drivers/staging/media/soc_camera/soc_ov5642.c 1008 */;
}
