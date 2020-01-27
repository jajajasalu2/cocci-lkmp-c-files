cocci_test_suite() {
	struct tda7432 cocci_id/* drivers/media/i2c/tda7432.c 84 */;
	struct tda7432 {
		struct v4l2_subdev sd;
		struct v4l2_ctrl_handler hdl;
		struct {
			struct v4l2_ctrl *bass;
			struct v4l2_ctrl *treble;
		};
		struct {
			struct v4l2_ctrl *mute;
			struct v4l2_ctrl *balance;
		};
	} cocci_id/* drivers/media/i2c/tda7432.c 62 */;
	int cocci_id/* drivers/media/i2c/tda7432.c 51 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/tda7432.c 410 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/tda7432.c 404 */[];
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/tda7432.c 347 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/tda7432.c 346 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/tda7432.c 336 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/tda7432.c 332 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/tda7432.c 328 */;
	u8 cocci_id/* drivers/media/i2c/tda7432.c 275 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/tda7432.c 271 */;
	struct tda7432 *cocci_id/* drivers/media/i2c/tda7432.c 265 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/tda7432.c 263 */;
	unsigned char cocci_id/* drivers/media/i2c/tda7432.c 240 */[16];
	unsigned char cocci_id/* drivers/media/i2c/tda7432.c 223 */[2];
}
