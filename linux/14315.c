cocci_test_suite() {
	struct regdata cocci_id/* drivers/media/dvb-frontends/s921.c 73 */[];
	struct regdata {
		u8 reg;
		u8 data;
	} cocci_id/* drivers/media/dvb-frontends/s921.c 68 */;
	struct s921_bandselect_val {
		u32 freq_low;
		u8 band_reg;
	} cocci_id/* drivers/media/dvb-frontends/s921.c 54 */[];
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/s921.c 493 */;
	struct s921_state cocci_id/* drivers/media/dvb-frontends/s921.c 479 */;
	struct s921_state *cocci_id/* drivers/media/dvb-frontends/s921.c 478 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/s921.c 475 */;
	const struct s921_config *cocci_id/* drivers/media/dvb-frontends/s921.c 474 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/s921.c 474 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/s921.c 472 */;
	void cocci_id/* drivers/media/dvb-frontends/s921.c 464 */;
	enum dvbfe_algo cocci_id/* drivers/media/dvb-frontends/s921.c 459 */;
	unsigned int *cocci_id/* drivers/media/dvb-frontends/s921.c 443 */;
	unsigned int cocci_id/* drivers/media/dvb-frontends/s921.c 442 */;
	bool cocci_id/* drivers/media/dvb-frontends/s921.c 441 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/s921.c 429 */;
	struct s921_state {
		struct i2c_adapter *i2c;
		const struct s921_config *config;
		struct dvb_frontend frontend;
		u32 currentfreq;
	} cocci_id/* drivers/media/dvb-frontends/s921.c 39 */;
	enum fe_status cocci_id/* drivers/media/dvb-frontends/s921.c 384 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/s921.c 382 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/s921.c 343 */;
	u64 cocci_id/* drivers/media/dvb-frontends/s921.c 264 */;
	unsigned long cocci_id/* drivers/media/dvb-frontends/s921.c 262 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/s921.c 234 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/s921.c 230 */;
	int cocci_id/* drivers/media/dvb-frontends/s921.c 23 */;
	struct regdata *cocci_id/* drivers/media/dvb-frontends/s921.c 218 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/s921.c 202 */;
	u8 cocci_id/* drivers/media/dvb-frontends/s921.c 201 */[];
}
