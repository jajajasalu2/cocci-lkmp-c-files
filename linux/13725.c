cocci_test_suite() {
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/ov6650.c 997 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/i2c/ov6650.c 989 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/ov6650.c 983 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/ov6650.c 975 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/ov6650.c 967 */;
	const struct v4l2_mbus_config *cocci_id/* drivers/media/i2c/ov6650.c 940 */;
	struct v4l2_mbus_config *cocci_id/* drivers/media/i2c/ov6650.c 925 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/ov6650.c 915 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/ov6650.c 910 */;
	struct v4l2_mbus_framefmt cocci_id/* drivers/media/i2c/ov6650.c 893 */;
	unsigned long cocci_id/* drivers/media/i2c/ov6650.c 820 */;
	const struct ov6650_xclk *cocci_id/* drivers/media/i2c/ov6650.c 819 */;
	struct v4l2_fract *cocci_id/* drivers/media/i2c/ov6650.c 760 */;
	struct v4l2_subdev_frame_interval *cocci_id/* drivers/media/i2c/ov6650.c 742 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/ov6650.c 732 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/ov6650.c 731 */;
	u32 cocci_id/* drivers/media/i2c/ov6650.c 588 */;
	struct v4l2_subdev_selection cocci_id/* drivers/media/i2c/ov6650.c 578 */;
	bool cocci_id/* drivers/media/i2c/ov6650.c 565 */;
	struct v4l2_rect *cocci_id/* drivers/media/i2c/ov6650.c 565 */;
	int cocci_id/* drivers/media/i2c/ov6650.c 565 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/ov6650.c 541 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/ov6650.c 539 */;
	__s32 cocci_id/* drivers/media/i2c/ov6650.c 509 */;
	struct v4l2_subdev_selection *cocci_id/* drivers/media/i2c/ov6650.c 471 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/ov6650.c 444 */;
	__u64 cocci_id/* drivers/media/i2c/ov6650.c 438 */;
	u8 cocci_id/* drivers/media/i2c/ov6650.c 429 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/ov6650.c 425 */;
	uint8_t cocci_id/* drivers/media/i2c/ov6650.c 343 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/ov6650.c 342 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/ov6650.c 341 */;
	struct ov6650 cocci_id/* drivers/media/i2c/ov6650.c 340 */;
	struct ov6650 *cocci_id/* drivers/media/i2c/ov6650.c 340 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/ov6650.c 338 */;
	const struct i2c_client *cocci_id/* drivers/media/i2c/ov6650.c 326 */;
	unsigned char cocci_id/* drivers/media/i2c/ov6650.c 281 */[2];
	struct i2c_msg cocci_id/* drivers/media/i2c/ov6650.c 253 */;
	u8 *cocci_id/* drivers/media/i2c/ov6650.c 249 */;
	const struct v4l2_mbus_framefmt cocci_id/* drivers/media/i2c/ov6650.c 237 */;
	u32 cocci_id/* drivers/media/i2c/ov6650.c 228 */[];
	const struct ov6650_xclk cocci_id/* drivers/media/i2c/ov6650.c 209 */[];
	struct ov6650_xclk {
		unsigned long rate;
		u8 clkrc;
	} cocci_id/* drivers/media/i2c/ov6650.c 204 */;
	struct ov6650 {
		struct v4l2_subdev subdev;
		struct v4l2_ctrl_handler hdl;
		struct {
			struct v4l2_ctrl *autoexposure;
			struct v4l2_ctrl *exposure;
		};
		struct {
			struct v4l2_ctrl *autogain;
			struct v4l2_ctrl *gain;
		};
		struct {
			struct v4l2_ctrl *autowb;
			struct v4l2_ctrl *blue;
			struct v4l2_ctrl *red;
		};
		struct v4l2_clk *clk;
		bool half_scale;
		struct v4l2_rect rect;
		struct v4l2_fract tpf;
		u32 code;
	} cocci_id/* drivers/media/i2c/ov6650.c 178 */;
	struct ov6650_reg {
		u8 reg;
		u8 val;
	} cocci_id/* drivers/media/i2c/ov6650.c 173 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/ov6650.c 1083 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/ov6650.c 1077 */[];
}
