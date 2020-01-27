cocci_test_suite() {
	const u8 *cocci_id/* drivers/media/i2c/bt819.c 91 */;
	unsigned int cocci_id/* drivers/media/i2c/bt819.c 91 */;
	struct timing cocci_id/* drivers/media/i2c/bt819.c 70 */[];
	struct timing {
		int hactive;
		int hdelay;
		int vactive;
		int vdelay;
		int hscale;
		int vscale;
	} cocci_id/* drivers/media/i2c/bt819.c 60 */;
	struct bt819 cocci_id/* drivers/media/i2c/bt819.c 52 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/bt819.c 469 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/bt819.c 461 */[];
	struct bt819 {
		struct v4l2_subdev sd;
		struct v4l2_ctrl_handler hdl;
		unsigned char reg[32];
		v4l2_std_id norm;
		int input;
		int enable;
	} cocci_id/* drivers/media/i2c/bt819.c 40 */;
	const char *cocci_id/* drivers/media/i2c/bt819.c 389 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/bt819.c 384 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/bt819.c 383 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/bt819.c 377 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/bt819.c 369 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/bt819.c 365 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/bt819.c 326 */;
	u32 cocci_id/* drivers/media/i2c/bt819.c 285 */;
	unsigned long long cocci_id/* drivers/media/i2c/bt819.c 240 */;
	v4l2_std_id cocci_id/* drivers/media/i2c/bt819.c 235 */;
	u32 *cocci_id/* drivers/media/i2c/bt819.c 230 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/bt819.c 230 */;
	int cocci_id/* drivers/media/i2c/bt819.c 230 */;
	v4l2_std_id *cocci_id/* drivers/media/i2c/bt819.c 225 */;
	struct timing *cocci_id/* drivers/media/i2c/bt819.c 175 */;
	struct bt819 *cocci_id/* drivers/media/i2c/bt819.c 174 */;
	unsigned char cocci_id/* drivers/media/i2c/bt819.c 140 */[];
	u8 cocci_id/* drivers/media/i2c/bt819.c 131 */;
	u8 cocci_id/* drivers/media/i2c/bt819.c 101 */[32];
}
