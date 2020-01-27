cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/sp887x.c 81 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/sp887x.c 79 */[2];
	u8 cocci_id/* drivers/media/dvb-frontends/sp887x.c 78 */[];
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/sp887x.c 585 */;
	struct sp887x_state cocci_id/* drivers/media/dvb-frontends/sp887x.c 573 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/sp887x.c 568 */;
	const struct sp887x_config *cocci_id/* drivers/media/dvb-frontends/sp887x.c 567 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/sp887x.c 567 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/sp887x.c 565 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/sp887x.c 551 */;
	const struct firmware *cocci_id/* drivers/media/dvb-frontends/sp887x.c 523 */;
	u32 cocci_id/* drivers/media/dvb-frontends/sp887x.c 472 */;
	u16 cocci_id/* drivers/media/dvb-frontends/sp887x.c 471 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/sp887x.c 453 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/sp887x.c 42 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/sp887x.c 419 */;
	u8 cocci_id/* drivers/media/dvb-frontends/sp887x.c 40 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/sp887x.c 40 */;
	struct sp887x_state *cocci_id/* drivers/media/dvb-frontends/sp887x.c 40 */;
	unsigned cocci_id/* drivers/media/dvb-frontends/sp887x.c 353 */;
	const u32 cocci_id/* drivers/media/dvb-frontends/sp887x.c 309 */[];
	unsigned int cocci_id/* drivers/media/dvb-frontends/sp887x.c 289 */;
	int *cocci_id/* drivers/media/dvb-frontends/sp887x.c 287 */;
	void cocci_id/* drivers/media/dvb-frontends/sp887x.c 287 */;
	struct sp887x_state {
		struct i2c_adapter *i2c;
		const struct sp887x_config *config;
		struct dvb_frontend frontend;
		u8 initialised:1;
	} cocci_id/* drivers/media/dvb-frontends/sp887x.c 25 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/sp887x.c 212 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/sp887x.c 212 */;
	int cocci_id/* drivers/media/dvb-frontends/sp887x.c 212 */;
	const unsigned char *cocci_id/* drivers/media/dvb-frontends/sp887x.c 143 */;
	u8 cocci_id/* drivers/media/dvb-frontends/sp887x.c 140 */[BLOCKSIZE + 2];
}
