cocci_test_suite() {
	u16 cocci_id/* drivers/media/i2c/wm8775.c 86 */;
	u8 cocci_id/* drivers/media/i2c/wm8775.c 84 */;
	void cocci_id/* drivers/media/i2c/wm8775.c 81 */;
	struct wm8775_state cocci_id/* drivers/media/i2c/wm8775.c 60 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/wm8775.c 58 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/wm8775.c 58 */;
	struct wm8775_state *cocci_id/* drivers/media/i2c/wm8775.c 53 */;
	struct wm8775_state {
		struct v4l2_subdev sd;
		struct v4l2_ctrl_handler hdl;
		struct v4l2_ctrl *mute;
		struct v4l2_ctrl *vol;
		struct v4l2_ctrl *bal;
		struct v4l2_ctrl *loud;
		u8 input;
	} cocci_id/* drivers/media/i2c/wm8775.c 43 */;
	enum{R7=7, R11=11, R12, R13, R14, R15, R16, R17, R18, R19, R20, R21, R23=23, TOT_REGS,} cocci_id/* drivers/media/i2c/wm8775.c 34 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/wm8775.c 299 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/wm8775.c 293 */[];
	struct wm8775_platform_data *cocci_id/* drivers/media/i2c/wm8775.c 202 */;
	bool cocci_id/* drivers/media/i2c/wm8775.c 199 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/wm8775.c 194 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/wm8775.c 193 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/wm8775.c 178 */;
	const struct v4l2_subdev_audio_ops cocci_id/* drivers/media/i2c/wm8775.c 174 */;
	const struct v4l2_subdev_tuner_ops cocci_id/* drivers/media/i2c/wm8775.c 170 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/wm8775.c 166 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/wm8775.c 162 */;
	const struct v4l2_frequency *cocci_id/* drivers/media/i2c/wm8775.c 154 */;
	int cocci_id/* drivers/media/i2c/wm8775.c 145 */;
	u32 cocci_id/* drivers/media/i2c/wm8775.c 106 */;
}
