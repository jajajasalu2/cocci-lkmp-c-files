cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/media/i2c/ks0127.c 696 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/ks0127.c 688 */[];
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/ks0127.c 653 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/ks0127.c 653 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/ks0127.c 646 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/ks0127.c 638 */;
	u32 *cocci_id/* drivers/media/i2c/ks0127.c 630 */;
	v4l2_std_id *cocci_id/* drivers/media/i2c/ks0127.c 624 */;
	unsigned long long cocci_id/* drivers/media/i2c/ks0127.c 573 */;
	v4l2_std_id cocci_id/* drivers/media/i2c/ks0127.c 534 */;
	u32 cocci_id/* drivers/media/i2c/ks0127.c 402 */;
	struct ks0127 *cocci_id/* drivers/media/i2c/ks0127.c 345 */;
	u8 cocci_id/* drivers/media/i2c/ks0127.c 343 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/ks0127.c 343 */;
	char cocci_id/* drivers/media/i2c/ks0127.c 333 */[];
	struct i2c_msg cocci_id/* drivers/media/i2c/ks0127.c 306 */[];
	char cocci_id/* drivers/media/i2c/ks0127.c 305 */;
	u8 *cocci_id/* drivers/media/i2c/ks0127.c 208 */;
	void cocci_id/* drivers/media/i2c/ks0127.c 205 */;
	u8 cocci_id/* drivers/media/i2c/ks0127.c 203 */[64];
	int cocci_id/* drivers/media/i2c/ks0127.c 198 */;
	struct ks0127 cocci_id/* drivers/media/i2c/ks0127.c 194 */;
	struct ks0127 {
		struct v4l2_subdev sd;
		v4l2_std_id norm;
		u8 regs[256];
	} cocci_id/* drivers/media/i2c/ks0127.c 186 */;
	struct adjust {
		int contrast;
		int bright;
		int hue;
		int ugain;
		int vgain;
	} cocci_id/* drivers/media/i2c/ks0127.c 178 */;
}
