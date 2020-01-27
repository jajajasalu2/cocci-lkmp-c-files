cocci_test_suite() {
	const u8 cocci_id/* drivers/media/i2c/adv7393.c 77 */[];
	struct adv7393_state cocci_id/* drivers/media/i2c/adv7393.c 67 */;
	struct adv7393_state {
		struct v4l2_subdev sd;
		struct v4l2_ctrl_handler hdl;
		u8 reg00;
		u8 reg01;
		u8 reg02;
		u8 reg35;
		u8 reg80;
		u8 reg82;
		u32 output;
		v4l2_std_id std;
	} cocci_id/* drivers/media/i2c/adv7393.c 47 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/adv7393.c 457 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/adv7393.c 451 */[];
	bool cocci_id/* drivers/media/i2c/adv7393.c 43 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/adv7393.c 385 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/adv7393.c 384 */;
	struct adv7393_state *cocci_id/* drivers/media/i2c/adv7393.c 354 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/adv7393.c 352 */;
	int cocci_id/* drivers/media/i2c/adv7393.c 352 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/adv7393.c 347 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/adv7393.c 342 */;
	u32 cocci_id/* drivers/media/i2c/adv7393.c 327 */;
	v4l2_std_id cocci_id/* drivers/media/i2c/adv7393.c 311 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/adv7393.c 307 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/adv7393.c 303 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/adv7393.c 283 */;
	unsigned long long cocci_id/* drivers/media/i2c/adv7393.c 277 */;
	u8 cocci_id/* drivers/media/i2c/adv7393.c 212 */;
	const struct adv7393_std_info *cocci_id/* drivers/media/i2c/adv7393.c 138 */;
	const struct adv7393_std_info cocci_id/* drivers/media/i2c/adv7393.c 110 */[];
}
