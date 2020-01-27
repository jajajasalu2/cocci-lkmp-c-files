cocci_test_suite() {
	void cocci_id/* drivers/media/i2c/upd64031a.c 85 */;
	u8 cocci_id/* drivers/media/i2c/upd64031a.c 75 */[2];
	u8 cocci_id/* drivers/media/i2c/upd64031a.c 72 */;
	u8 cocci_id/* drivers/media/i2c/upd64031a.c 63 */[];
	struct upd64031a_state cocci_id/* drivers/media/i2c/upd64031a.c 60 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/upd64031a.c 58 */;
	struct upd64031a_state *cocci_id/* drivers/media/i2c/upd64031a.c 58 */;
	struct upd64031a_state {
		struct v4l2_subdev sd;
		u8 regs[TOT_REGS];
		u8 gr_mode;
		u8 direct_3dycs_connect;
		u8 ext_comp_sync;
		u8 ext_vert_sync;
	} cocci_id/* drivers/media/i2c/upd64031a.c 49 */;
	enum{R00=0, R01, R02, R03, R04, R05, R06, R07, R08, R09, R0A, R0B, R0C, R0D, R0E, R0F, TOT_REGS,} cocci_id/* drivers/media/i2c/upd64031a.c 38 */;
	int cocci_id/* drivers/media/i2c/upd64031a.c 32 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/upd64031a.c 229 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/upd64031a.c 223 */[];
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/upd64031a.c 187 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/upd64031a.c 186 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/upd64031a.c 176 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/upd64031a.c 172 */;
	const struct v4l2_subdev_tuner_ops cocci_id/* drivers/media/i2c/upd64031a.c 168 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/upd64031a.c 160 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/upd64031a.c 151 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/upd64031a.c 144 */;
	u32 cocci_id/* drivers/media/i2c/upd64031a.c 114 */;
	const struct v4l2_frequency *cocci_id/* drivers/media/i2c/upd64031a.c 100 */;
}
