cocci_test_suite() {
	u8 cocci_id/* drivers/media/dvb-frontends/horus3a.c 90 */[2];
	int cocci_id/* drivers/media/dvb-frontends/horus3a.c 88 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/horus3a.c 51 */[1];
	u8 cocci_id/* drivers/media/dvb-frontends/horus3a.c 50 */[MAX_WRITE_REGSIZE + 1];
	struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/horus3a.c 391 */;
	u8 cocci_id/* drivers/media/dvb-frontends/horus3a.c 38 */;
	u32 cocci_id/* drivers/media/dvb-frontends/horus3a.c 38 */;
	const u8 *cocci_id/* drivers/media/dvb-frontends/horus3a.c 38 */;
	void cocci_id/* drivers/media/dvb-frontends/horus3a.c 37 */;
	struct horus3a_priv cocci_id/* drivers/media/dvb-frontends/horus3a.c 342 */;
	struct horus3a_priv *cocci_id/* drivers/media/dvb-frontends/horus3a.c 340 */;
	u8 cocci_id/* drivers/media/dvb-frontends/horus3a.c 339 */[3];
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/horus3a.c 337 */;
	const struct horus3a_config *cocci_id/* drivers/media/dvb-frontends/horus3a.c 336 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/horus3a.c 335 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/horus3a.c 321 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/horus3a.c 313 */;
	struct horus3a_priv {
		u32 frequency;
		u8 i2c_address;
		struct i2c_adapter *i2c;
		enum horus3a_state state;
		void *set_tuner_data;
		int (*set_tuner)(void *, int);
	} cocci_id/* drivers/media/dvb-frontends/horus3a.c 28 */;
	enum horus3a_state{STATE_UNKNOWN, STATE_SLEEP, STATE_ACTIVE,} cocci_id/* drivers/media/dvb-frontends/horus3a.c 22 */;
	u8 cocci_id/* drivers/media/dvb-frontends/horus3a.c 177 */[5];
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/horus3a.c 167 */;
}
