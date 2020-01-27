cocci_test_suite() {
	struct ov5647 cocci_id/* drivers/media/i2c/ov5647.c 93 */;
	struct ov5647 {
		struct v4l2_subdev sd;
		struct media_pad pad;
		struct mutex lock;
		struct v4l2_mbus_framefmt format;
		unsigned int width;
		unsigned int height;
		int power_count;
		struct clk *xclk;
	} cocci_id/* drivers/media/i2c/ov5647.c 80 */;
	struct regval_list {
		u16 addr;
		u8 data;
	} cocci_id/* drivers/media/i2c/ov5647.c 75 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/ov5647.c 641 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/ov5647.c 634 */[];
	const struct i2c_device_id cocci_id/* drivers/media/i2c/ov5647.c 627 */[];
	u32 cocci_id/* drivers/media/i2c/ov5647.c 557 */;
	struct ov5647 *cocci_id/* drivers/media/i2c/ov5647.c 553 */;
	struct device *cocci_id/* drivers/media/i2c/ov5647.c 552 */;
	struct v4l2_fwnode_endpoint cocci_id/* drivers/media/i2c/ov5647.c 535 */;
	struct device_node *cocci_id/* drivers/media/i2c/ov5647.c 533 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/i2c/ov5647.c 529 */;
	struct v4l2_rect *cocci_id/* drivers/media/i2c/ov5647.c 511 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/ov5647.c 509 */;
	struct v4l2_subdev_fh *cocci_id/* drivers/media/i2c/ov5647.c 507 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/ov5647.c 470 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/ov5647.c 466 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/ov5647.c 456 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/ov5647.c 455 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/ov5647.c 450 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/ov5647.c 434 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/ov5647.c 425 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/ov5647.c 409 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/ov5647.c 313 */;
	u8 cocci_id/* drivers/media/i2c/ov5647.c 312 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/ov5647.c 309 */;
	int cocci_id/* drivers/media/i2c/ov5647.c 309 */;
	bool cocci_id/* drivers/media/i2c/ov5647.c 292 */;
	struct regval_list *cocci_id/* drivers/media/i2c/ov5647.c 235 */;
	unsigned char cocci_id/* drivers/media/i2c/ov5647.c 216 */[2];
	u16 cocci_id/* drivers/media/i2c/ov5647.c 213 */;
	u8 *cocci_id/* drivers/media/i2c/ov5647.c 213 */;
	unsigned char cocci_id/* drivers/media/i2c/ov5647.c 202 */[3];
	struct regval_list cocci_id/* drivers/media/i2c/ov5647.c 108 */[];
}
