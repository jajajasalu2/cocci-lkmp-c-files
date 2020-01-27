cocci_test_suite() {
	u16 cocci_id/* drivers/media/i2c/wm8739.c 91 */;
	u8 cocci_id/* drivers/media/i2c/wm8739.c 89 */;
	unsigned int cocci_id/* drivers/media/i2c/wm8739.c 88 */;
	struct wm8739_state cocci_id/* drivers/media/i2c/wm8739.c 59 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/wm8739.c 57 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/wm8739.c 57 */;
	struct wm8739_state *cocci_id/* drivers/media/i2c/wm8739.c 52 */;
	struct wm8739_state {
		struct v4l2_subdev sd;
		struct v4l2_ctrl_handler hdl;
		struct {
			struct v4l2_ctrl *volume;
			struct v4l2_ctrl *mute;
			struct v4l2_ctrl *balance;
		};
		u32 clock_freq;
	} cocci_id/* drivers/media/i2c/wm8739.c 40 */;
	enum{R0=0, R1, R5=5, R6, R7, R8, R9, R15=15, TOT_REGS,} cocci_id/* drivers/media/i2c/wm8739.c 34 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/wm8739.c 253 */;
	int cocci_id/* drivers/media/i2c/wm8739.c 25 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/wm8739.c 247 */[];
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/wm8739.c 182 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/wm8739.c 181 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/wm8739.c 172 */;
	const struct v4l2_subdev_audio_ops cocci_id/* drivers/media/i2c/wm8739.c 168 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/wm8739.c 164 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/wm8739.c 160 */;
	u32 cocci_id/* drivers/media/i2c/wm8739.c 121 */;
	long cocci_id/* drivers/media/i2c/wm8739.c 105 */;
}
