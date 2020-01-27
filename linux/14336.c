cocci_test_suite() {
	const struct stb6100_regmask cocci_id/* drivers/media/dvb-frontends/stb6100.c 95 */[];
	struct stb6100_regmask {
		u8 mask;
		u8 set;
	} cocci_id/* drivers/media/dvb-frontends/stb6100.c 90 */;
	const char *cocci_id/* drivers/media/dvb-frontends/stb6100.c 72 */[];
	const struct stb6100_lkup cocci_id/* drivers/media/dvb-frontends/stb6100.c 54 */[];
	struct stb6100_state cocci_id/* drivers/media/dvb-frontends/stb6100.c 537 */;
	struct stb6100_state *cocci_id/* drivers/media/dvb-frontends/stb6100.c 535 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/stb6100.c 533 */;
	const struct stb6100_config *cocci_id/* drivers/media/dvb-frontends/stb6100.c 532 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/stb6100.c 531 */;
	void cocci_id/* drivers/media/dvb-frontends/stb6100.c 52 */(struct dvb_frontend *fe);
	const struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/stb6100.c 515 */;
	struct stb6100_lkup {
		u32 val_low;
		u32 val_high;
		u8 reg;
	} cocci_id/* drivers/media/dvb-frontends/stb6100.c 46 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/stb6100.c 329 */;
	const struct stb6100_lkup *cocci_id/* drivers/media/dvb-frontends/stb6100.c 327 */;
	u8 cocci_id/* drivers/media/dvb-frontends/stb6100.c 304 */[STB6100_NUMREGS];
	u32 cocci_id/* drivers/media/dvb-frontends/stb6100.c 245 */;
	u8 cocci_id/* drivers/media/dvb-frontends/stb6100.c 244 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/stb6100.c 241 */;
	int cocci_id/* drivers/media/dvb-frontends/stb6100.c 20 */;
	u8 cocci_id/* drivers/media/dvb-frontends/stb6100.c 176 */[MAX_XFER_SIZE];
	unsigned int cocci_id/* drivers/media/dvb-frontends/stb6100.c 170 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/stb6100.c 152 */;
	u8 cocci_id/* drivers/media/dvb-frontends/stb6100.c 113 */[];
	void cocci_id/* drivers/media/dvb-frontends/stb6100.c 113 */;
}
