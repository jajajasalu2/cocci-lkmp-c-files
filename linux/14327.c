cocci_test_suite() {
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/ec100.c 77 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/ec100.c 49 */[2];
	u8 *cocci_id/* drivers/media/dvb-frontends/ec100.c 46 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/ec100.c 294 */;
	struct ec100_config cocci_id/* drivers/media/dvb-frontends/ec100.c 285 */;
	struct ec100_state cocci_id/* drivers/media/dvb-frontends/ec100.c 279 */;
	u8 cocci_id/* drivers/media/dvb-frontends/ec100.c 276 */;
	struct ec100_state *cocci_id/* drivers/media/dvb-frontends/ec100.c 275 */;
	int cocci_id/* drivers/media/dvb-frontends/ec100.c 274 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/ec100.c 272 */;
	const struct ec100_config *cocci_id/* drivers/media/dvb-frontends/ec100.c 271 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/ec100.c 271 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/ec100.c 269 */;
	void cocci_id/* drivers/media/dvb-frontends/ec100.c 263 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/ec100.c 24 */[1];
	u16 *cocci_id/* drivers/media/dvb-frontends/ec100.c 231 */;
	u8 cocci_id/* drivers/media/dvb-frontends/ec100.c 23 */[2];
	u16 cocci_id/* drivers/media/dvb-frontends/ec100.c 204 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/ec100.c 199 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/ec100.c 163 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/ec100.c 154 */;
	struct ec100_state {
		struct i2c_adapter *i2c;
		struct dvb_frontend frontend;
		struct ec100_config config;
		u16 ber;
	} cocci_id/* drivers/media/dvb-frontends/ec100.c 11 */;
}
