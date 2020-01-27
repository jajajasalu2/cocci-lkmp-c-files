cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/tuners/qm1d1c0042.c 77 */[2];
	u8 *cocci_id/* drivers/media/tuners/qm1d1c0042.c 75 */;
	u8 cocci_id/* drivers/media/tuners/qm1d1c0042.c 66 */[2];
	struct qm1d1c0042_state cocci_id/* drivers/media/tuners/qm1d1c0042.c 61 */;
	struct qm1d1c0042_state *cocci_id/* drivers/media/tuners/qm1d1c0042.c 59 */;
	struct qm1d1c0042_config *cocci_id/* drivers/media/tuners/qm1d1c0042.c 59 */;
	struct qm1d1c0042_state {
		struct qm1d1c0042_config cfg;
		struct i2c_client *i2c;
		u8 regs[QM1D1C0042_NUM_REGS];
	} cocci_id/* drivers/media/tuners/qm1d1c0042.c 53 */;
	struct i2c_driver cocci_id/* drivers/media/tuners/qm1d1c0042.c 442 */;
	const struct qm1d1c0042_config cocci_id/* drivers/media/tuners/qm1d1c0042.c 44 */;
	const struct i2c_device_id cocci_id/* drivers/media/tuners/qm1d1c0042.c 436 */[];
	const struct i2c_device_id *cocci_id/* drivers/media/tuners/qm1d1c0042.c 403 */;
	struct i2c_client *cocci_id/* drivers/media/tuners/qm1d1c0042.c 402 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/tuners/qm1d1c0042.c 387 */;
	u8 cocci_id/* drivers/media/tuners/qm1d1c0042.c 320 */;
	struct dvb_frontend *cocci_id/* drivers/media/tuners/qm1d1c0042.c 317 */;
	int cocci_id/* drivers/media/tuners/qm1d1c0042.c 317 */;
	const u8 cocci_id/* drivers/media/tuners/qm1d1c0042.c 28 */[QM1D1C0042_NUM_REG_ROWS][QM1D1C0042_NUM_REGS];
	s64 cocci_id/* drivers/media/tuners/qm1d1c0042.c 239 */;
	s32 cocci_id/* drivers/media/tuners/qm1d1c0042.c 186 */;
	u32 cocci_id/* drivers/media/tuners/qm1d1c0042.c 182 */;
	const u32 cocci_id/* drivers/media/tuners/qm1d1c0042.c 167 */[9][3];
	void *cocci_id/* drivers/media/tuners/qm1d1c0042.c 129 */;
	bool cocci_id/* drivers/media/tuners/qm1d1c0042.c 100 */;
}
