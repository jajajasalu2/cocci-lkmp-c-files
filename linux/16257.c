cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 840 */;
	const struct i2c_device_id cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 834 */[];
	const struct i2c_client *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 82 */;
	struct i2c_adapter *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 754 */;
	const struct i2c_device_id *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 750 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 742 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 734 */;
	const struct v4l2_subdev_sensor_ops cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 730 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 724 */;
	const struct v4l2_mbus_config *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 712 */;
	struct soc_camera_subdev_desc *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 700 */;
	struct v4l2_mbus_config *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 697 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 687 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 686 */;
	struct v4l2_subdev *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 685 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 677 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 672 */;
	struct mt9t031 *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 665 */;
	struct mt9t031 {
		struct v4l2_subdev subdev;
		struct v4l2_ctrl_handler hdl;
		struct {
			struct v4l2_ctrl *autoexposure;
			struct v4l2_ctrl *exposure;
		};
		struct v4l2_rect rect;
		struct v4l2_clk *clk;
		u16 xskip;
		u16 yskip;
		unsigned int total_h;
		unsigned short y_skip_top;
	} cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 66 */;
	const struct device_type cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 590 */;
	const struct dev_pm_ops cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 585 */;
	u16 cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 567 */;
	struct video_device *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 561 */;
	struct device *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 559 */;
	const u16 cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 530 */;
	u32 cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 522 */;
	unsigned int cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 519 */;
	unsigned long cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 486 */;
	s32 cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 442 */;
	const u32 cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 441 */;
	struct mt9t031 cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 440 */;
	struct v4l2_ctrl *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 437 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 423 */;
	struct v4l2_dbg_register *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 406 */;
	struct v4l2_rect cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 374 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 346 */;
	struct v4l2_subdev_format *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 344 */;
	struct v4l2_subdev_selection *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 319 */;
	struct v4l2_rect *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 198 */;
	s32 *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 179 */;
	u32 *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 132 */;
	struct i2c_client *cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 132 */;
	int cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 132 */;
	const u8 cocci_id/* drivers/staging/media/soc_camera/mt9t031.c 109 */;
}