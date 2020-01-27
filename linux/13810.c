cocci_test_suite() {
	struct s5k4ecgx cocci_id/* drivers/media/i2c/s5k4ecgx.c 941 */;
	struct s5k4ecgx_platform_data *cocci_id/* drivers/media/i2c/s5k4ecgx.c 931 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/s5k4ecgx.c 929 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/i2c/s5k4ecgx.c 904 */;
	const struct v4l2_ctrl_ops *cocci_id/* drivers/media/i2c/s5k4ecgx.c 903 */;
	const struct s5k4ecgx_gpio *cocci_id/* drivers/media/i2c/s5k4ecgx.c 871 */;
	const struct s5k4ecgx_platform_data *cocci_id/* drivers/media/i2c/s5k4ecgx.c 869 */;
	void cocci_id/* drivers/media/i2c/s5k4ecgx.c 856 */;
	unsigned long cocci_id/* drivers/media/i2c/s5k4ecgx.c 844 */;
	const char *cocci_id/* drivers/media/i2c/s5k4ecgx.c 842 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/s5k4ecgx.c 833 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/s5k4ecgx.c 829 */;
	const struct v4l2_rect *cocci_id/* drivers/media/i2c/s5k4ecgx.c 745 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/s5k4ecgx.c 744 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/s5k4ecgx.c 737 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/i2c/s5k4ecgx.c 700 */;
	struct v4l2_subdev_fh *cocci_id/* drivers/media/i2c/s5k4ecgx.c 687 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/s5k4ecgx.c 661 */;
	unsigned int cocci_id/* drivers/media/i2c/s5k4ecgx.c 628 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/s5k4ecgx.c 622 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/s5k4ecgx.c 613 */;
	const struct s5k4ecgx_pixfmt *cocci_id/* drivers/media/i2c/s5k4ecgx.c 583 */;
	const struct s5k4ecgx_frmsize *cocci_id/* drivers/media/i2c/s5k4ecgx.c 582 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/s5k4ecgx.c 542 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/s5k4ecgx.c 539 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/s5k4ecgx.c 529 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/s5k4ecgx.c 528 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/s5k4ecgx.c 527 */;
	const struct s5k4ecgx_frmsize **cocci_id/* drivers/media/i2c/s5k4ecgx.c 500 */;
	struct s5k4ecgx *cocci_id/* drivers/media/i2c/s5k4ecgx.c 485 */;
	int cocci_id/* drivers/media/i2c/s5k4ecgx.c 485 */;
	u32 cocci_id/* drivers/media/i2c/s5k4ecgx.c 457 */;
	const u8 *cocci_id/* drivers/media/i2c/s5k4ecgx.c 328 */;
	const struct firmware *cocci_id/* drivers/media/i2c/s5k4ecgx.c 327 */;
	u8 cocci_id/* drivers/media/i2c/s5k4ecgx.c 228 */[4];
	__be16 *cocci_id/* drivers/media/i2c/s5k4ecgx.c 219 */;
	struct i2c_msg cocci_id/* drivers/media/i2c/s5k4ecgx.c 204 */[2];
	u8 cocci_id/* drivers/media/i2c/s5k4ecgx.c 203 */[2];
	u16 cocci_id/* drivers/media/i2c/s5k4ecgx.c 201 */;
	u16 *cocci_id/* drivers/media/i2c/s5k4ecgx.c 201 */;
	struct s5k4ecgx {
		struct v4l2_subdev sd;
		struct media_pad pad;
		struct v4l2_ctrl_handler handler;
		struct s5k4ecgx_platform_data *pdata;
		const struct s5k4ecgx_pixfmt *curr_pixfmt;
		const struct s5k4ecgx_frmsize *curr_frmsize;
		struct mutex lock;
		u8 streaming;
		u8 set_params;
		struct regulator_bulk_data supplies[S5K4ECGX_NUM_SUPPLIES];
		struct s5k4ecgx_gpio gpio[GPIO_NUM];
	} cocci_id/* drivers/media/i2c/s5k4ecgx.c 180 */;
	enum s5k4ecgx_gpio_id{STBY, RST, GPIO_NUM,} cocci_id/* drivers/media/i2c/s5k4ecgx.c 174 */;
	const char *const cocci_id/* drivers/media/i2c/s5k4ecgx.c 161 */[];
	const struct s5k4ecgx_pixfmt cocci_id/* drivers/media/i2c/s5k4ecgx.c 157 */[];
	struct s5k4ecgx_pixfmt {
		u32 code;
		u32 colorspace;
		u16 reg_p_format;
	} cocci_id/* drivers/media/i2c/s5k4ecgx.c 149 */;
	const struct s5k4ecgx_frmsize cocci_id/* drivers/media/i2c/s5k4ecgx.c 131 */[];
	struct regval_list {
		u32 addr;
		u16 val;
	} cocci_id/* drivers/media/i2c/s5k4ecgx.c 122 */;
	struct s5k4ecgx_frmsize {
		struct v4l2_frmsize_discrete size;
		struct v4l2_rect input_window;
	} cocci_id/* drivers/media/i2c/s5k4ecgx.c 116 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/s5k4ecgx.c 1015 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/s5k4ecgx.c 1009 */[];
}