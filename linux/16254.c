cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 995 */;
	const struct i2c_device_id cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 989 */[];
	u32 cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 90 */;
	const struct mt9v022_datafmt *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 89 */;
	struct mt9v022_platform_data *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 887 */;
	struct i2c_adapter *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 886 */;
	const struct i2c_device_id *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 882 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 874 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 866 */;
	const struct v4l2_subdev_sensor_ops cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 862 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 856 */;
	struct mt9v022_datafmt {
		u32 code;
		enum v4l2_colorspace colorspace;
	} cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 83 */;
	u16 cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 816 */;
	unsigned int cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 814 */;
	const struct v4l2_mbus_config *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 808 */;
	struct soc_camera_subdev_desc *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 794 */;
	struct v4l2_mbus_config *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 791 */;
	struct mt9v022 *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 781 */;
	struct i2c_client *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 780 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 778 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 777 */;
	struct v4l2_subdev *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 776 */;
	int cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 776 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 768 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 763 */;
	u32 *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 753 */;
	s32 cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 601 */;
	unsigned long cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 531 */;
	struct mt9v022 cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 526 */;
	struct v4l2_ctrl *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 523 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 500 */;
	struct v4l2_dbg_register *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 483 */;
	struct v4l2_subdev_selection cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 406 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 384 */;
	struct v4l2_subdev_format *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 382 */;
	struct v4l2_subdev_selection *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 357 */;
	struct v4l2_rect cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 281 */;
	char *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 27 */;
	const u16 cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 192 */;
	const u8 cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 191 */;
	const struct i2c_client *cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 164 */;
	struct mt9v022 {
		struct v4l2_subdev subdev;
		struct v4l2_ctrl_handler hdl;
		struct {
			struct v4l2_ctrl *autoexposure;
			struct v4l2_ctrl *exposure;
		};
		struct {
			struct v4l2_ctrl *autogain;
			struct v4l2_ctrl *gain;
		};
		struct v4l2_ctrl *hblank;
		struct v4l2_ctrl *vblank;
		struct v4l2_rect rect;
		struct v4l2_clk *clk;
		const struct mt9v022_datafmt *fmt;
		const struct mt9v022_datafmt *fmts;
		const struct mt9v02x_register *reg;
		int num_fmts;
		enum mt9v022_model model;
		u16 chip_control;
		u16 chip_version;
		unsigned short y_skip_top;
	} cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 137 */;
	enum mt9v022_model{MT9V022IX7ATM, MT9V022IX7ATC,} cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 132 */;
	const struct mt9v02x_register cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 122 */;
	struct mt9v02x_register {
		u8 max_total_shutter_width;
		u8 pixclk_fv_lv;
	} cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 117 */;
	const struct mt9v022_datafmt cocci_id/* drivers/staging/media/soc_camera/soc_mt9v022.c 101 */[];
}
