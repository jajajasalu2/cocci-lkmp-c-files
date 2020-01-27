cocci_test_suite() {
	u32 cocci_id/* drivers/media/i2c/upd64083.c 91 */;
	u8 cocci_id/* drivers/media/i2c/upd64083.c 76 */;
	u8 cocci_id/* drivers/media/i2c/upd64083.c 64 */[2];
	void cocci_id/* drivers/media/i2c/upd64083.c 61 */;
	u8 cocci_id/* drivers/media/i2c/upd64083.c 51 */[];
	struct upd64083_state cocci_id/* drivers/media/i2c/upd64083.c 46 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/upd64083.c 44 */;
	struct upd64083_state *cocci_id/* drivers/media/i2c/upd64083.c 44 */;
	struct upd64083_state {
		struct v4l2_subdev sd;
		u8 mode;
		u8 ext_y_adc;
		u8 regs[TOT_REGS];
	} cocci_id/* drivers/media/i2c/upd64083.c 37 */;
	enum{R00=0, R01, R02, R03, R04, R05, R06, R07, R08, R09, R0A, R0B, R0C, R0D, R0E, R0F, R10, R11, R12, R13, R14, R15, R16, TOT_REGS,} cocci_id/* drivers/media/i2c/upd64083.c 28 */;
	bool cocci_id/* drivers/media/i2c/upd64083.c 22 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/upd64083.c 200 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/upd64083.c 194 */[];
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/upd64083.c 158 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/upd64083.c 148 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/upd64083.c 144 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/upd64083.c 136 */;
	u8 cocci_id/* drivers/media/i2c/upd64083.c 125 */[7];
	struct i2c_client *cocci_id/* drivers/media/i2c/upd64083.c 124 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/upd64083.c 115 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/upd64083.c 108 */;
	int cocci_id/* drivers/media/i2c/upd64083.c 108 */;
}
