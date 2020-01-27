cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/media/i2c/imx290.c 869 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/imx290.c 863 */[];
	const struct regmap_config cocci_id/* drivers/media/i2c/imx290.c 84 */;
	const struct imx290_pixfmt cocci_id/* drivers/media/i2c/imx290.c 80 */[];
	struct imx290_pixfmt {
		u32 code;
	} cocci_id/* drivers/media/i2c/imx290.c 76 */;
	u32 cocci_id/* drivers/media/i2c/imx290.c 679 */;
	struct fwnode_handle *cocci_id/* drivers/media/i2c/imx290.c 677 */;
	const struct media_entity_operations cocci_id/* drivers/media/i2c/imx290.c 670 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/imx290.c 665 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/imx290.c 658 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/imx290.c 654 */;
	const struct dev_pm_ops cocci_id/* drivers/media/i2c/imx290.c 650 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/imx290.c 639 */;
	unsigned int cocci_id/* drivers/media/i2c/imx290.c 601 */;
	struct device *cocci_id/* drivers/media/i2c/imx290.c 599 */;
	struct imx290 {
		struct device *dev;
		struct clk *xclk;
		struct regmap *regmap;
		struct v4l2_subdev sd;
		struct v4l2_fwnode_endpoint ep;
		struct media_pad pad;
		struct v4l2_mbus_framefmt current_format;
		const struct imx290_mode *current_mode;
		struct regulator_bulk_data supplies[IMX290_NUM_SUPPLIES];
		struct gpio_desc *rst_gpio;
		struct v4l2_ctrl_handler ctrls;
		struct v4l2_ctrl *link_freq;
		struct v4l2_ctrl *pixel_rate;
		struct mutex lock;
	} cocci_id/* drivers/media/i2c/imx290.c 55 */;
	struct v4l2_subdev_format cocci_id/* drivers/media/i2c/imx290.c 491 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/imx290.c 489 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/imx290.c 488 */;
	int cocci_id/* drivers/media/i2c/imx290.c 488 */;
	struct imx290_mode {
		u32 width;
		u32 height;
		u32 pixel_rate;
		u32 link_freq_index;
		const struct imx290_regval *data;
		u32 data_size;
	} cocci_id/* drivers/media/i2c/imx290.c 45 */;
	const struct imx290_mode *cocci_id/* drivers/media/i2c/imx290.c 447 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/imx290.c 425 */;
	struct imx290 *cocci_id/* drivers/media/i2c/imx290.c 424 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/imx290.c 422 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/imx290.c 410 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/imx290.c 404 */;
	struct imx290_regval {
		u16 reg;
		u8 val;
	} cocci_id/* drivers/media/i2c/imx290.c 40 */;
	struct imx290 cocci_id/* drivers/media/i2c/imx290.c 383 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/imx290.c 380 */;
	u8 cocci_id/* drivers/media/i2c/imx290.c 326 */;
	const char *const cocci_id/* drivers/media/i2c/imx290.c 32 */[];
	const struct imx290_regval *cocci_id/* drivers/media/i2c/imx290.c 307 */;
	u16 cocci_id/* drivers/media/i2c/imx290.c 277 */;
	u8 *cocci_id/* drivers/media/i2c/imx290.c 277 */;
	const struct imx290_mode cocci_id/* drivers/media/i2c/imx290.c 253 */[];
	const s64 cocci_id/* drivers/media/i2c/imx290.c 248 */[];
	const struct imx290_regval cocci_id/* drivers/media/i2c/imx290.c 153 */[];
}
