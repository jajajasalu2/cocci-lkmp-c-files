cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/media/i2c/vs6624.c 843 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/vs6624.c 836 */[];
	const unsigned *cocci_id/* drivers/media/i2c/vs6624.c 747 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/i2c/vs6624.c 746 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/vs6624.c 742 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/vs6624.c 741 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/vs6624.c 735 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/vs6624.c 729 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/vs6624.c 723 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/vs6624.c 716 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/vs6624.c 712 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/vs6624.c 705 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/vs6624.c 698 */;
	struct v4l2_fract *cocci_id/* drivers/media/i2c/vs6624.c 666 */;
	struct v4l2_subdev_frame_interval *cocci_id/* drivers/media/i2c/vs6624.c 653 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/vs6624.c 641 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/vs6624.c 563 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/vs6624.c 550 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/vs6624.c 549 */;
	int cocci_id/* drivers/media/i2c/vs6624.c 548 */;
	const struct v4l2_mbus_framefmt cocci_id/* drivers/media/i2c/vs6624.c 53 */;
	const u16 *cocci_id/* drivers/media/i2c/vs6624.c 510 */;
	u8 cocci_id/* drivers/media/i2c/vs6624.c 501 */[3];
	u8 cocci_id/* drivers/media/i2c/vs6624.c 498 */;
	u8 cocci_id/* drivers/media/i2c/vs6624.c 486 */[2];
	u16 cocci_id/* drivers/media/i2c/vs6624.c 483 */;
	struct vs6624 cocci_id/* drivers/media/i2c/vs6624.c 479 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/vs6624.c 477 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/vs6624.c 477 */;
	struct vs6624 *cocci_id/* drivers/media/i2c/vs6624.c 473 */;
	const u16 cocci_id/* drivers/media/i2c/vs6624.c 435 */[];
	const struct vs6624_format {
		u32 mbus_code;
		enum v4l2_colorspace colorspace;
	} cocci_id/* drivers/media/i2c/vs6624.c 35 */[];
	struct vs6624 {
		struct v4l2_subdev sd;
		struct v4l2_ctrl_handler hdl;
		struct v4l2_fract frame_rate;
		struct v4l2_mbus_framefmt fmt;
		unsigned ce_pin;
	} cocci_id/* drivers/media/i2c/vs6624.c 27 */;
}
