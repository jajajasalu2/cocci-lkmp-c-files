cocci_test_suite() {
	struct ov2640_priv *cocci_id/* drivers/media/i2c/ov2640.c 921 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/ov2640.c 919 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/ov2640.c 917 */;
	const struct regval_list *cocci_id/* drivers/media/i2c/ov2640.c 838 */;
	u32 cocci_id/* drivers/media/i2c/ov2640.c 822 */;
	void cocci_id/* drivers/media/i2c/ov2640.c 787 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/ov2640.c 775 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/ov2640.c 758 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/ov2640.c 756 */;
	struct ov2640_priv cocci_id/* drivers/media/i2c/ov2640.c 717 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/ov2640.c 714 */;
	const char *const cocci_id/* drivers/media/i2c/ov2640.c 706 */[];
	s32 cocci_id/* drivers/media/i2c/ov2640.c 675 */;
	u8 cocci_id/* drivers/media/i2c/ov2640.c 673 */;
	const struct i2c_client *cocci_id/* drivers/media/i2c/ov2640.c 648 */;
	u32 cocci_id/* drivers/media/i2c/ov2640.c 636 */[];
	const struct ov2640_win_size cocci_id/* drivers/media/i2c/ov2640.c 579 */[];
	const struct regval_list cocci_id/* drivers/media/i2c/ov2640.c 541 */[];
	struct ov2640_win_size {
		char *name;
		u32 width;
		u32 height;
		const struct regval_list *regs;
	} cocci_id/* drivers/media/i2c/ov2640.c 288 */;
	struct regval_list {
		u8 reg_num;
		u8 value;
	} cocci_id/* drivers/media/i2c/ov2640.c 283 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/ov2640.c 1299 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/ov2640.c 1293 */[];
	const struct i2c_device_id cocci_id/* drivers/media/i2c/ov2640.c 1287 */[];
	struct i2c_adapter *cocci_id/* drivers/media/i2c/ov2640.c 1196 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/ov2640.c 1148 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/ov2640.c 1144 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/ov2640.c 1136 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/ov2640.c 1125 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/ov2640.c 1121 */;
	const char *cocci_id/* drivers/media/i2c/ov2640.c 1085 */;
	struct v4l2_subdev_selection *cocci_id/* drivers/media/i2c/ov2640.c 1041 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/ov2640.c 1030 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/ov2640.c 1029 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/ov2640.c 1028 */;
	int cocci_id/* drivers/media/i2c/ov2640.c 1028 */;
	const struct ov2640_win_size *cocci_id/* drivers/media/i2c/ov2640.c 1013 */;
	struct ov2640_priv {
		struct v4l2_subdev subdev;
#if defined(CONFIG_MEDIA_CONTROLLER)
		struct media_pad pad;
#endif
		struct v4l2_ctrl_handler hdl;
		u32 cfmt_code;
		struct clk *clk;
		const struct ov2640_win_size *win;
		struct gpio_desc *resetb_gpio;
		struct gpio_desc *pwdn_gpio;
		struct mutex lock;
		bool streaming;
		int power_count;
	} cocci_id/*  1 */;
}
