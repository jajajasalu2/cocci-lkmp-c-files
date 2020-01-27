cocci_test_suite() {
	u8 cocci_id/* drivers/media/dvb-frontends/nxt200x.c 872 */[2];
	const struct firmware *cocci_id/* drivers/media/dvb-frontends/nxt200x.c 870 */;
	u8 cocci_id/* drivers/media/dvb-frontends/nxt200x.c 87 */[MAX_XFER_SIZE];
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/nxt200x.c 867 */;
	const u8 *cocci_id/* drivers/media/dvb-frontends/nxt200x.c 85 */;
	u32 cocci_id/* drivers/media/dvb-frontends/nxt200x.c 823 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/nxt200x.c 798 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/nxt200x.c 786 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/nxt200x.c 769 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/nxt200x.c 74 */;
	u8 cocci_id/* drivers/media/dvb-frontends/nxt200x.c 71 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/nxt200x.c 71 */;
	struct nxt200x_state *cocci_id/* drivers/media/dvb-frontends/nxt200x.c 71 */;
	int cocci_id/* drivers/media/dvb-frontends/nxt200x.c 55 */;
	u8 cocci_id/* drivers/media/dvb-frontends/nxt200x.c 529 */[5];
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/nxt200x.c 527 */;
	struct nxt200x_state {
		struct i2c_adapter *i2c;
		const struct nxt200x_config *config;
		struct dvb_frontend frontend;
		nxt_chip_type demod_chip;
		u8 initialised:1;
	} cocci_id/* drivers/media/dvb-frontends/nxt200x.c 44 */;
	u16 cocci_id/* drivers/media/dvb-frontends/nxt200x.c 412 */;
	u8 cocci_id/* drivers/media/dvb-frontends/nxt200x.c 411 */[3];
	u8 cocci_id/* drivers/media/dvb-frontends/nxt200x.c 293 */[9];
	void cocci_id/* drivers/media/dvb-frontends/nxt200x.c 291 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/nxt200x.c 1191 */;
	struct nxt200x_state cocci_id/* drivers/media/dvb-frontends/nxt200x.c 1147 */;
	u8 cocci_id/* drivers/media/dvb-frontends/nxt200x.c 1144 */[];
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/nxt200x.c 1141 */;
	const struct nxt200x_config *cocci_id/* drivers/media/dvb-frontends/nxt200x.c 1140 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/nxt200x.c 1138 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/nxt200x.c 1124 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/nxt200x.c 112 */[];
}
