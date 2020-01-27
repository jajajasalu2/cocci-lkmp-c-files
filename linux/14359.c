cocci_test_suite() {
	u32 cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 968 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 901 */;
	char *cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 820 */;
	int *cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 816 */;
	struct lgdt3305_state *cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 672 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 671 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 669 */;
	struct lgdt3305_reg cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 588 */[];
	u64 cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 493 */;
	struct lgdt3305_state {
		struct i2c_adapter *i2c_adap;
		const struct lgdt3305_config *cfg;
		struct dvb_frontend frontend;
		enum fe_modulation current_modulation;
		u32 current_frequency;
		u32 snr;
	} cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 43 */;
	u16 cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 315 */;
	enum lgdt3305_tp_valid_polarity cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 231 */;
	enum lgdt3305_tp_clock_mode cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 230 */;
	enum lgdt3305_tp_clock_edge cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 229 */;
	enum lgdt3305_mpeg_mode cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 219 */;
	struct lgdt3305_reg *cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 186 */;
	struct lgdt3305_reg {
		u16 reg;
		u8 val;
	} cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 180 */;
	int cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 16 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 129 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 128 */[];
	u8 *cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 125 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 1116 */;
	struct lgdt3305_state cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 1106 */;
	u8 cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 1100 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 1096 */;
	const struct lgdt3305_config *cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 1095 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 1092 */;
	void cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 1085 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 1077 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 1059 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 105 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/lgdt3305.c 1029 */;
}
