cocci_test_suite() {
	const struct v4l2_area cocci_id/* drivers/media/i2c/imx214.c 952 */;
	const s64 cocci_id/* drivers/media/i2c/imx214.c 949 */[];
	struct v4l2_fwnode_endpoint cocci_id/* drivers/media/i2c/imx214.c 877 */;
	struct fwnode_handle *cocci_id/* drivers/media/i2c/imx214.c 876 */;
	struct device *cocci_id/* drivers/media/i2c/imx214.c 863 */;
	const struct regmap_config cocci_id/* drivers/media/i2c/imx214.c 857 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/imx214.c 851 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/imx214.c 841 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/imx214.c 835 */;
	const struct imx214_mode *cocci_id/* drivers/media/i2c/imx214.c 817 */;
	struct v4l2_subdev_frame_interval_enum *cocci_id/* drivers/media/i2c/imx214.c 815 */;
	struct v4l2_subdev_frame_interval *cocci_id/* drivers/media/i2c/imx214.c 804 */;
	enum{IMX214_TABLE_WAIT_MS=0, IMX214_TABLE_END, IMX214_MAX_RETRIES, IMX214_WAIT_MS,} cocci_id/* drivers/media/i2c/imx214.c 70 */;
	u8 cocci_id/* drivers/media/i2c/imx214.c 690 */[MAX_CMD];
	const struct reg_8 cocci_id/* drivers/media/i2c/imx214.c 688 */[];
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/imx214.c 682 */;
	u8 cocci_id/* drivers/media/i2c/imx214.c 653 */[2];
	struct reg_8 {
		u16 addr;
		u8 val;
	} cocci_id/* drivers/media/i2c/imx214.c 65 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/imx214.c 649 */;
	struct v4l2_subdev_format cocci_id/* drivers/media/i2c/imx214.c 638 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/imx214.c 635 */;
	int cocci_id/* drivers/media/i2c/imx214.c 635 */;
	struct v4l2_subdev_selection *cocci_id/* drivers/media/i2c/imx214.c 621 */;
	enum v4l2_subdev_format_whence cocci_id/* drivers/media/i2c/imx214.c 567 */;
	unsigned int cocci_id/* drivers/media/i2c/imx214.c 567 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/imx214.c 566 */;
	struct imx214 *cocci_id/* drivers/media/i2c/imx214.c 566 */;
	struct v4l2_rect *cocci_id/* drivers/media/i2c/imx214.c 565 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/imx214.c 553 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/imx214.c 535 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/imx214.c 528 */;
	struct imx214 cocci_id/* drivers/media/i2c/imx214.c 516 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/imx214.c 514 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/imx214.c 506 */;
	struct v4l2_subdev_frame_size_enum *cocci_id/* drivers/media/i2c/imx214.c 490 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/imx214.c 478 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/imx214.c 462 */;
	int __maybe_unused cocci_id/* drivers/media/i2c/imx214.c 460 */;
	const struct imx214_mode {
		u32 width;
		u32 height;
		const struct reg_8 *reg_table;
	} cocci_id/* drivers/media/i2c/imx214.c 410 */[];
	struct imx214 {
		struct device *dev;
		struct clk *xclk;
		struct regmap *regmap;
		struct v4l2_subdev sd;
		struct media_pad pad;
		struct v4l2_mbus_framefmt fmt;
		struct v4l2_rect crop;
		struct v4l2_ctrl_handler ctrls;
		struct v4l2_ctrl *pixel_rate;
		struct v4l2_ctrl *link_freq;
		struct v4l2_ctrl *exposure;
		struct v4l2_ctrl *unit_size;
		struct regulator_bulk_data supplies[IMX214_NUM_SUPPLIES];
		struct gpio_desc *enable_gpio;
		struct mutex mutex;
		bool streaming;
	} cocci_id/* drivers/media/i2c/imx214.c 36 */;
	const char *const cocci_id/* drivers/media/i2c/imx214.c 28 */[];
	struct i2c_driver cocci_id/* drivers/media/i2c/imx214.c 1111 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/imx214.c 1100 */[];
	void *cocci_id/* drivers/media/i2c/imx214.c 1040 */;
}
