cocci_test_suite() {
	u16 cocci_id/* drivers/media/dvb-frontends/nxt6000.c 80 */;
	u32 cocci_id/* drivers/media/dvb-frontends/nxt6000.c 78 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/nxt6000.c 574 */;
	struct nxt6000_state cocci_id/* drivers/media/dvb-frontends/nxt6000.c 563 */;
	struct nxt6000_state *cocci_id/* drivers/media/dvb-frontends/nxt6000.c 560 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/nxt6000.c 558 */;
	const struct nxt6000_config *cocci_id/* drivers/media/dvb-frontends/nxt6000.c 557 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/nxt6000.c 557 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/nxt6000.c 555 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/nxt6000.c 55 */[];
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/nxt6000.c 538 */;
	short cocci_id/* drivers/media/dvb-frontends/nxt6000.c 531 */;
	u8 cocci_id/* drivers/media/dvb-frontends/nxt6000.c 53 */[];
	u16 *cocci_id/* drivers/media/dvb-frontends/nxt6000.c 527 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/nxt6000.c 513 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/nxt6000.c 469 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/nxt6000.c 427 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/nxt6000.c 41 */;
	int cocci_id/* drivers/media/dvb-frontends/nxt6000.c 31 */;
	struct nxt6000_state {
		struct i2c_adapter *i2c;
		const struct nxt6000_config *config;
		struct dvb_frontend frontend;
	} cocci_id/* drivers/media/dvb-frontends/nxt6000.c 24 */;
	u8 cocci_id/* drivers/media/dvb-frontends/nxt6000.c 210 */;
	void cocci_id/* drivers/media/dvb-frontends/nxt6000.c 208 */;
	enum fe_transmit_mode cocci_id/* drivers/media/dvb-frontends/nxt6000.c 148 */;
	enum fe_spectral_inversion cocci_id/* drivers/media/dvb-frontends/nxt6000.c 130 */;
	enum fe_guard_interval cocci_id/* drivers/media/dvb-frontends/nxt6000.c 107 */;
}
