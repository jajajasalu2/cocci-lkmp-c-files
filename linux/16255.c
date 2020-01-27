cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 979 */;
	const struct i2c_device_id cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 973 */[];
	struct ov9740_priv *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 924 */;
	const struct i2c_device_id *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 922 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 914 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 908 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 902 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 894 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 889 */;
	struct soc_camera_subdev_desc *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 878 */;
	struct i2c_client *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 877 */;
	struct v4l2_mbus_config *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 875 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 811 */;
	__u64 cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 805 */;
	u8 cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 794 */;
	struct v4l2_dbg_register *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 790 */;
	struct ov9740_priv cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 744 */;
	struct v4l2_ctrl *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 741 */;
	struct v4l2_subdev_selection *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 722 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 710 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 709 */;
	struct v4l2_subdev *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 708 */;
	int cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 708 */;
	struct v4l2_subdev_format *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 689 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 668 */;
	bool cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 563 */;
	u32 cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 557 */;
	u32 *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 543 */;
	void cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 543 */;
	const struct ov9740_reg *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 484 */;
	struct {
		u16 reg;
		u8 val;
	}__packed cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 429 */;
	struct i2c_msg cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 428 */;
	struct i2c_msg cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 399 */[];
	u16 cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 396 */;
	u8 *cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 396 */;
	u32 cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 391 */[];
	const struct ov9740_reg cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 210 */[];
	struct ov9740_priv {
		struct v4l2_subdev subdev;
		struct v4l2_ctrl_handler hdl;
		struct v4l2_clk *clk;
		u16 model;
		u8 revision;
		u8 manid;
		u8 smiaver;
		bool flag_vflip;
		bool flag_hflip;
		struct v4l2_mbus_framefmt current_mf;
		bool current_enable;
	} cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 192 */;
	struct ov9740_reg {
		u16 reg;
		u8 val;
	} cocci_id/* drivers/staging/media/soc_camera/soc_ov9740.c 187 */;
}
