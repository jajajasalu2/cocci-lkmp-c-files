cocci_test_suite() {
	struct i2c_adapter *cocci_id/* drivers/media/i2c/tw9910.c 937 */;
	struct tw9910_video_info *cocci_id/* drivers/media/i2c/tw9910.c 936 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/tw9910.c 932 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/tw9910.c 921 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/tw9910.c 914 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/tw9910.c 907 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/tw9910.c 890 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/tw9910.c 889 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/tw9910.c 888 */;
	int cocci_id/* drivers/media/i2c/tw9910.c 888 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/tw9910.c 880 */;
	u32 cocci_id/* drivers/media/i2c/tw9910.c 777 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/tw9910.c 752 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/tw9910.c 750 */;
	struct v4l2_subdev_selection *cocci_id/* drivers/media/i2c/tw9910.c 724 */;
	u32 *cocci_id/* drivers/media/i2c/tw9910.c 649 */;
	struct gpio_desc *cocci_id/* drivers/media/i2c/tw9910.c 587 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/tw9910.c 575 */;
	__u64 cocci_id/* drivers/media/i2c/tw9910.c 569 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/tw9910.c 554 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/tw9910.c 552 */;
	unsigned int cocci_id/* drivers/media/i2c/tw9910.c 517 */;
	const unsigned int cocci_id/* drivers/media/i2c/tw9910.c 515 */;
	v4l2_std_id cocci_id/* drivers/media/i2c/tw9910.c 511 */;
	v4l2_std_id *cocci_id/* drivers/media/i2c/tw9910.c 501 */;
	__u32 cocci_id/* drivers/media/i2c/tw9910.c 433 */;
	const struct tw9910_scale_ctrl *cocci_id/* drivers/media/i2c/tw9910.c 428 */;
	void cocci_id/* drivers/media/i2c/tw9910.c 401 */;
	s32 cocci_id/* drivers/media/i2c/tw9910.c 341 */;
	u8 cocci_id/* drivers/media/i2c/tw9910.c 338 */;
	struct tw9910_priv cocci_id/* drivers/media/i2c/tw9910.c 334 */;
	const struct i2c_client *cocci_id/* drivers/media/i2c/tw9910.c 332 */;
	struct tw9910_priv *cocci_id/* drivers/media/i2c/tw9910.c 332 */;
	const struct tw9910_scale_ctrl cocci_id/* drivers/media/i2c/tw9910.c 239 */[];
	struct tw9910_priv {
		struct v4l2_subdev subdev;
		struct clk *clk;
		struct tw9910_video_info *info;
		struct gpio_desc *pdn_gpio;
		struct gpio_desc *rstb_gpio;
		const struct tw9910_scale_ctrl *scale;
		v4l2_std_id norm;
		u32 revision;
	} cocci_id/* drivers/media/i2c/tw9910.c 228 */;
	struct tw9910_scale_ctrl {
		char *name;
		unsigned short width;
		unsigned short height;
		u16 hscale;
		u16 vscale;
	} cocci_id/* drivers/media/i2c/tw9910.c 220 */;
	struct regval_list {
		unsigned char reg_num;
		unsigned char value;
	} cocci_id/* drivers/media/i2c/tw9910.c 215 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/tw9910.c 1014 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/tw9910.c 1008 */[];
}
