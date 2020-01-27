cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/zl10353.c 68 */[2];
	u8 cocci_id/* drivers/media/dvb-frontends/zl10353.c 66 */[1];
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/zl10353.c 615 */;
	struct zl10353_config cocci_id/* drivers/media/dvb-frontends/zl10353.c 607 */;
	struct zl10353_state cocci_id/* drivers/media/dvb-frontends/zl10353.c 601 */;
	struct zl10353_state *cocci_id/* drivers/media/dvb-frontends/zl10353.c 597 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/zl10353.c 595 */;
	const struct zl10353_config *cocci_id/* drivers/media/dvb-frontends/zl10353.c 594 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/zl10353.c 594 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/zl10353.c 592 */;
	u8 cocci_id/* drivers/media/dvb-frontends/zl10353.c 546 */[6];
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/zl10353.c 533 */;
	const u8 cocci_id/* drivers/media/dvb-frontends/zl10353.c 53 */[];
	u32 *cocci_id/* drivers/media/dvb-frontends/zl10353.c 481 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/zl10353.c 450 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/zl10353.c 43 */;
	u8 cocci_id/* drivers/media/dvb-frontends/zl10353.c 42 */[2];
	const u8 cocci_id/* drivers/media/dvb-frontends/zl10353.c 365 */[8];
	u16 cocci_id/* drivers/media/dvb-frontends/zl10353.c 364 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/zl10353.c 360 */;
	int cocci_id/* drivers/media/dvb-frontends/zl10353.c 31 */;
	struct zl10353_state {
		struct i2c_adapter *i2c;
		struct dvb_frontend frontend;
		struct zl10353_config config;
		u32 bandwidth;
		u32 ucblocks;
		u32 frequency;
	} cocci_id/* drivers/media/dvb-frontends/zl10353.c 20 */;
	u8 cocci_id/* drivers/media/dvb-frontends/zl10353.c 160 */[];
	u64 cocci_id/* drivers/media/dvb-frontends/zl10353.c 137 */;
	u32 cocci_id/* drivers/media/dvb-frontends/zl10353.c 134 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/zl10353.c 131 */;
	void cocci_id/* drivers/media/dvb-frontends/zl10353.c 130 */;
	u8 cocci_id/* drivers/media/dvb-frontends/zl10353.c 117 */;
}
