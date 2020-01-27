cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/zl10039.c 91 */;
	u8 cocci_id/* drivers/media/dvb-frontends/zl10039.c 90 */[MAX_XFER_SIZE];
	const u8 *cocci_id/* drivers/media/dvb-frontends/zl10039.c 87 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/zl10039.c 62 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/zl10039.c 61 */[];
	const size_t cocci_id/* drivers/media/dvb-frontends/zl10039.c 59 */;
	const enum zl10039_reg_addr cocci_id/* drivers/media/dvb-frontends/zl10039.c 58 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/zl10039.c 58 */;
	const struct zl10039_state *cocci_id/* drivers/media/dvb-frontends/zl10039.c 57 */;
	enum zl10039_reg_addr{PLL0=0, PLL1, PLL2, PLL3, RFFE, BASE0, BASE1, BASE2, LO0, LO1, LO2, LO3, LO4, LO5, LO6, GENERAL,} cocci_id/* drivers/media/dvb-frontends/zl10039.c 38 */;
	struct zl10039_state {
		struct i2c_adapter *i2c;
		u8 i2c_addr;
		u8 id;
	} cocci_id/* drivers/media/dvb-frontends/zl10039.c 32 */;
	struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/zl10039.c 290 */;
	enum zl10039_model_id{ID_ZL10039=1,} cocci_id/* drivers/media/dvb-frontends/zl10039.c 28 */;
	struct zl10039_state cocci_id/* drivers/media/dvb-frontends/zl10039.c 257 */;
	struct zl10039_state *cocci_id/* drivers/media/dvb-frontends/zl10039.c 254 */;
	u8 cocci_id/* drivers/media/dvb-frontends/zl10039.c 252 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/zl10039.c 252 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/zl10039.c 251 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/zl10039.c 244 */;
	void cocci_id/* drivers/media/dvb-frontends/zl10039.c 235 */;
	u32 cocci_id/* drivers/media/dvb-frontends/zl10039.c 182 */;
	u8 cocci_id/* drivers/media/dvb-frontends/zl10039.c 180 */[6];
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/zl10039.c 178 */;
	int cocci_id/* drivers/media/dvb-frontends/zl10039.c 17 */;
	const u8 cocci_id/* drivers/media/dvb-frontends/zl10039.c 125 */;
}
