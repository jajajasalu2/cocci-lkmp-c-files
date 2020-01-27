cocci_test_suite() {
	const struct ths7303_platform_data *cocci_id/* drivers/media/i2c/ths7303.c 87 */;
	enum ths7303_filter_mode cocci_id/* drivers/media/i2c/ths7303.c 83 */;
	enum ths7303_filter_mode{THS7303_FILTER_MODE_480I_576I, THS7303_FILTER_MODE_480P_576P, THS7303_FILTER_MODE_720P_1080I, THS7303_FILTER_MODE_1080P, THS7303_FILTER_MODE_DISABLE,} cocci_id/* drivers/media/i2c/ths7303.c 43 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/ths7303.c 378 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/ths7303.c 370 */[];
	struct ths7303_state {
		struct v4l2_subdev sd;
		const struct ths7303_platform_data *pdata;
		struct v4l2_bt_timings bt;
		int std_id;
		int stream_on;
	} cocci_id/* drivers/media/i2c/ths7303.c 35 */;
	struct ths7303_state cocci_id/* drivers/media/i2c/ths7303.c 343 */;
	struct ths7303_platform_data *cocci_id/* drivers/media/i2c/ths7303.c 328 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/ths7303.c 326 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/ths7303.c 325 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/ths7303.c 320 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/ths7303.c 312 */;
	u32 cocci_id/* drivers/media/i2c/ths7303.c 289 */;
	struct v4l2_bt_timings *cocci_id/* drivers/media/i2c/ths7303.c 288 */;
	u8 cocci_id/* drivers/media/i2c/ths7303.c 264 */;
	void cocci_id/* drivers/media/i2c/ths7303.c 264 */;
	const char *const cocci_id/* drivers/media/i2c/ths7303.c 253 */[8];
	const char *const cocci_id/* drivers/media/i2c/ths7303.c 246 */[4];
	const char *const cocci_id/* drivers/media/i2c/ths7303.c 241 */[2];
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/ths7303.c 227 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/ths7303.c 219 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/ths7303.c 210 */;
	struct v4l2_dv_timings *cocci_id/* drivers/media/i2c/ths7303.c 197 */;
	struct ths7303_state *cocci_id/* drivers/media/i2c/ths7303.c 154 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/ths7303.c 152 */;
	int cocci_id/* drivers/media/i2c/ths7303.c 152 */;
	v4l2_std_id cocci_id/* drivers/media/i2c/ths7303.c 139 */;
}
