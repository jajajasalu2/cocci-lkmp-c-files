cocci_test_suite() {
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/cx24110.c 606 */;
	struct cx24110_state cocci_id/* drivers/media/dvb-frontends/cx24110.c 591 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/cx24110.c 585 */;
	const struct cx24110_config *cocci_id/* drivers/media/dvb-frontends/cx24110.c 584 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/cx24110.c 582 */;
	enum fe_sec_tone_mode cocci_id/* drivers/media/dvb-frontends/cx24110.c 569 */;
	s32 cocci_id/* drivers/media/dvb-frontends/cx24110.c 544 */;
	unsigned cocci_id/* drivers/media/dvb-frontends/cx24110.c 544 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/cx24110.c 541 */;
	void cocci_id/* drivers/media/dvb-frontends/cx24110.c 508 */;
	u8 cocci_id/* drivers/media/dvb-frontends/cx24110.c 479 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/cx24110.c 474 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/cx24110.c 456 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/cx24110.c 428 */;
	struct {
		u8 reg;
		u8 data;
	} cocci_id/* drivers/media/dvb-frontends/cx24110.c 40 */[];
	struct dvb_diseqc_master_cmd *cocci_id/* drivers/media/dvb-frontends/cx24110.c 399 */;
	unsigned long cocci_id/* drivers/media/dvb-frontends/cx24110.c 376 */;
	enum fe_sec_mini_cmd cocci_id/* drivers/media/dvb-frontends/cx24110.c 372 */;
	enum fe_sec_voltage cocci_id/* drivers/media/dvb-frontends/cx24110.c 357 */;
	struct cx24110_state *cocci_id/* drivers/media/dvb-frontends/cx24110.c 301 */;
	const u8 cocci_id/* drivers/media/dvb-frontends/cx24110.c 299 */[];
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/cx24110.c 299 */;
	int cocci_id/* drivers/media/dvb-frontends/cx24110.c 299 */;
	const u32 cocci_id/* drivers/media/dvb-frontends/cx24110.c 233 */[];
	u32 cocci_id/* drivers/media/dvb-frontends/cx24110.c 227 */;
	enum fe_code_rate cocci_id/* drivers/media/dvb-frontends/cx24110.c 211 */;
	struct cx24110_state {
		struct i2c_adapter *i2c;
		const struct cx24110_config *config;
		struct dvb_frontend frontend;
		u32 lastber;
		u32 lastbler;
		u32 lastesn0;
	} cocci_id/* drivers/media/dvb-frontends/cx24110.c 21 */;
	const int cocci_id/* drivers/media/dvb-frontends/cx24110.c 170 */[FEC_AUTO];
	enum fe_spectral_inversion cocci_id/* drivers/media/dvb-frontends/cx24110.c 134 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/cx24110.c 123 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/cx24110.c 121 */[];
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/cx24110.c 106 */;
}
