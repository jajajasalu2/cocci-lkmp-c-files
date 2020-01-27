cocci_test_suite() {
	struct mt9m001 {
		struct v4l2_subdev subdev;
		struct v4l2_ctrl_handler hdl;
		struct {
			struct v4l2_ctrl *autoexposure;
			struct v4l2_ctrl *exposure;
		};
		bool streaming;
		struct mutex mutex;
		struct v4l2_rect rect;
		struct clk *clk;
		struct gpio_desc *standby_gpio;
		struct gpio_desc *reset_gpio;
		const struct mt9m001_datafmt *fmt;
		const struct mt9m001_datafmt *fmts;
		int num_fmts;
		unsigned int total_h;
		unsigned short y_skip_top;
		struct media_pad pad;
	} cocci_id/* drivers/media/i2c/mt9m001.c 88 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/mt9m001.c 868 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/mt9m001.c 862 */[];
	const struct dev_pm_ops cocci_id/* drivers/media/i2c/mt9m001.c 858 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/mt9m001.c 852 */[];
	struct i2c_adapter *cocci_id/* drivers/media/i2c/mt9m001.c 732 */;
	const struct mt9m001_datafmt cocci_id/* drivers/media/i2c/mt9m001.c 73 */[];
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/mt9m001.c 722 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/mt9m001.c 713 */;
	const struct v4l2_subdev_sensor_ops cocci_id/* drivers/media/i2c/mt9m001.c 709 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/mt9m001.c 704 */;
	struct v4l2_mbus_config *cocci_id/* drivers/media/i2c/mt9m001.c 693 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/mt9m001.c 680 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/mt9m001.c 679 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/mt9m001.c 648 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/mt9m001.c 643 */;
	u32 *cocci_id/* drivers/media/i2c/mt9m001.c 633 */;
	u32 cocci_id/* drivers/media/i2c/mt9m001.c 62 */;
	const struct mt9m001_datafmt *cocci_id/* drivers/media/i2c/mt9m001.c 61 */;
	struct mt9m001_datafmt {
		u32 code;
		enum v4l2_colorspace colorspace;
	} cocci_id/* drivers/media/i2c/mt9m001.c 55 */;
	unsigned long cocci_id/* drivers/media/i2c/mt9m001.c 528 */;
	s32 cocci_id/* drivers/media/i2c/mt9m001.c 490 */;
	struct mt9m001 cocci_id/* drivers/media/i2c/mt9m001.c 489 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/mt9m001.c 486 */;
	struct device *cocci_id/* drivers/media/i2c/mt9m001.c 475 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/mt9m001.c 436 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/mt9m001.c 419 */;
	struct v4l2_subdev_selection cocci_id/* drivers/media/i2c/mt9m001.c 356 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/mt9m001.c 327 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/mt9m001.c 323 */;
	struct v4l2_subdev_selection *cocci_id/* drivers/media/i2c/mt9m001.c 298 */;
	struct v4l2_rect cocci_id/* drivers/media/i2c/mt9m001.c 261 */;
	const struct mt9m001_reg cocci_id/* drivers/media/i2c/mt9m001.c 190 */[];
	struct mt9m001 *cocci_id/* drivers/media/i2c/mt9m001.c 189 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/mt9m001.c 188 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/mt9m001.c 186 */;
	int cocci_id/* drivers/media/i2c/mt9m001.c 186 */;
	const struct mt9m001_reg *cocci_id/* drivers/media/i2c/mt9m001.c 154 */;
	struct mt9m001_reg {
		u8 reg;
		u16 data;
	} cocci_id/* drivers/media/i2c/mt9m001.c 148 */;
	const u16 cocci_id/* drivers/media/i2c/mt9m001.c 138 */;
	const u8 cocci_id/* drivers/media/i2c/mt9m001.c 137 */;
	const struct i2c_client *cocci_id/* drivers/media/i2c/mt9m001.c 110 */;
}
