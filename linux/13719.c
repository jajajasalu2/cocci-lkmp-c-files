cocci_test_suite() {
	const u8 *cocci_id/* drivers/media/i2c/saa7110.c 76 */;
	unsigned int cocci_id/* drivers/media/i2c/saa7110.c 76 */;
	u8 cocci_id/* drivers/media/i2c/saa7110.c 67 */;
	struct saa7110 cocci_id/* drivers/media/i2c/saa7110.c 55 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/saa7110.c 449 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/saa7110.c 443 */[];
	struct saa7110 {
		struct v4l2_subdev sd;
		struct v4l2_ctrl_handler hdl;
		u8 reg[SAA7110_NR_REG];
		v4l2_std_id norm;
		int input;
		int enable;
		wait_queue_head_t wq;
	} cocci_id/* drivers/media/i2c/saa7110.c 41 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/saa7110.c 362 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/saa7110.c 361 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/saa7110.c 355 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/saa7110.c 347 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/saa7110.c 343 */;
	int cocci_id/* drivers/media/i2c/saa7110.c 32 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/saa7110.c 318 */;
	u32 cocci_id/* drivers/media/i2c/saa7110.c 291 */;
	v4l2_std_id *cocci_id/* drivers/media/i2c/saa7110.c 252 */;
	unsigned long long cocci_id/* drivers/media/i2c/saa7110.c 242 */;
	u32 *cocci_id/* drivers/media/i2c/saa7110.c 235 */;
	struct saa7110 *cocci_id/* drivers/media/i2c/saa7110.c 180 */;
	v4l2_std_id cocci_id/* drivers/media/i2c/saa7110.c 177 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/saa7110.c 177 */;
	const unsigned char cocci_id/* drivers/media/i2c/saa7110.c 167 */[1 + SAA7110_NR_REG];
	const unsigned char *cocci_id/* drivers/media/i2c/saa7110.c 152 */;
	const unsigned char cocci_id/* drivers/media/i2c/saa7110.c 122 */[9][8];
}
