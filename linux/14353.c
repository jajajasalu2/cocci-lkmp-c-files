cocci_test_suite() {
	enum atscmh_sccc_code_mode *cocci_id/* drivers/media/dvb-frontends/lg2160.c 998 */;
	enum atscmh_sccc_block_mode *cocci_id/* drivers/media/dvb-frontends/lg2160.c 993 */;
	enum atscmh_rs_code_mode *cocci_id/* drivers/media/dvb-frontends/lg2160.c 986 */;
	enum atscmh_rs_frame_ensemble *cocci_id/* drivers/media/dvb-frontends/lg2160.c 981 */;
	enum atscmh_rs_frame_mode *cocci_id/* drivers/media/dvb-frontends/lg2160.c 976 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/lg2160.c 81 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/lg2160.c 80 */[];
	u16 cocci_id/* drivers/media/dvb-frontends/lg2160.c 77 */;
	enum atscmh_rs_code_mode cocci_id/* drivers/media/dvb-frontends/lg2160.c 679 */;
	enum atscmh_rs_frame_ensemble cocci_id/* drivers/media/dvb-frontends/lg2160.c 654 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/lg2160.c 57 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/lg2160.c 494 */;
	struct lg216x_state {
		struct i2c_adapter *i2c_adap;
		const struct lg2160_config *cfg;
		struct dvb_frontend frontend;
		u32 current_frequency;
		u8 parade_id;
		u8 fic_ver;
		unsigned int last_reset;
	} cocci_id/* drivers/media/dvb-frontends/lg2160.c 39 */;
	u8 cocci_id/* drivers/media/dvb-frontends/lg2160.c 263 */;
	struct lg216x_state *cocci_id/* drivers/media/dvb-frontends/lg2160.c 260 */;
	struct lg216x_reg cocci_id/* drivers/media/dvb-frontends/lg2160.c 187 */[];
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/lg2160.c 1414 */;
	struct lg216x_state cocci_id/* drivers/media/dvb-frontends/lg2160.c 1399 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/lg2160.c 1391 */;
	const struct lg2160_config *cocci_id/* drivers/media/dvb-frontends/lg2160.c 1390 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/lg2160.c 1390 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/lg2160.c 1338 */;
	void cocci_id/* drivers/media/dvb-frontends/lg2160.c 1331 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/lg2160.c 1323 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/lg2160.c 1303 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/lg2160.c 1215 */;
	int cocci_id/* drivers/media/dvb-frontends/lg2160.c 12 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/lg2160.c 1186 */;
	int *cocci_id/* drivers/media/dvb-frontends/lg2160.c 1120 */;
	struct lg216x_reg *cocci_id/* drivers/media/dvb-frontends/lg2160.c 109 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/lg2160.c 1044 */;
	struct lg216x_reg {
		u16 reg;
		u8 val;
	} cocci_id/* drivers/media/dvb-frontends/lg2160.c 103 */;
}
