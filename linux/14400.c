cocci_test_suite() {
	void cocci_id/* drivers/media/dvb-frontends/l64781.c 68 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/l64781.c 551 */;
	struct l64781_state cocci_id/* drivers/media/dvb-frontends/l64781.c 500 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/l64781.c 496 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/l64781.c 494 */[];
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/l64781.c 490 */;
	const struct l64781_config *cocci_id/* drivers/media/dvb-frontends/l64781.c 489 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/l64781.c 487 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/l64781.c 473 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/l64781.c 44 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/l64781.c 391 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/l64781.c 379 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/l64781.c 350 */;
	struct l64781_state {
		struct i2c_adapter *i2c;
		const struct l64781_config *config;
		struct dvb_frontend frontend;
		unsigned int first:1;
	} cocci_id/* drivers/media/dvb-frontends/l64781.c 20 */;
	u8 cocci_id/* drivers/media/dvb-frontends/l64781.c 124 */;
	u32 cocci_id/* drivers/media/dvb-frontends/l64781.c 119 */;
	const u32 cocci_id/* drivers/media/dvb-frontends/l64781.c 118 */;
	const u8 cocci_id/* drivers/media/dvb-frontends/l64781.c 113 */[];
	struct l64781_state *cocci_id/* drivers/media/dvb-frontends/l64781.c 111 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/l64781.c 110 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/l64781.c 108 */;
	int cocci_id/* drivers/media/dvb-frontends/l64781.c 108 */;
}
