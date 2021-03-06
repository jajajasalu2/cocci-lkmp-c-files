cocci_test_suite() {
	enum lgdt3306a_neverlock_status{LG3306_NL_INIT=0x00, LG3306_NL_PROCESS=0x01, LG3306_NL_LOCK=0x02, LG3306_NL_FAIL=0x03, LG3306_NL_UNKNOWN=0xff,} cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 94 */;
	enum lgdt3306a_lock_status{LG3306_UNLOCK=0x00, LG3306_LOCK=0x01, LG3306_UNKNOWN_LOCK=0xff,} cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 88 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 671 */;
	struct lgdt3306a_state {
		struct i2c_adapter *i2c_adap;
		const struct lgdt3306a_config *cfg;
		struct dvb_frontend frontend;
		enum fe_modulation current_modulation;
		u32 current_frequency;
		u32 snr;
		struct i2c_mux_core *muxc;
	} cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 63 */;
	enum lgdt3306a_tp_valid_polarity cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 262 */;
	enum lgdt3306a_tp_clock_edge cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 261 */;
	struct i2c_driver cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 2272 */;
	const struct i2c_device_id cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 2266 */[];
	enum lgdt3306a_mpeg_mode cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 224 */;
	struct lgdt3306a_config cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 2203 */;
	struct lgdt3306a_config *cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 2197 */;
	const struct i2c_device_id *cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 2195 */;
	struct i2c_client *cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 2188 */;
	struct i2c_mux_core *cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 2186 */;
	struct lgdt3306a_state *cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 2120 */;
	void cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 2120 */;
	u8 cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 2117 */[numDumpRegs];
	int cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 20 */;
	const short cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1888 */[];
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1835 */;
	struct lgdt3306a_state cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1827 */;
	u8 cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1821 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1817 */;
	const struct lgdt3306a_config *cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1816 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1816 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1814 */;
	enum fe_status cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1783 */;
	enum dvbfe_search cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1781 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1773 */;
	unsigned int *cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1752 */;
	unsigned int cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1752 */;
	bool cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1751 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1717 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1657 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1597 */;
	u32 cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1518 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 151 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 150 */[];
	u8 *cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 147 */;
	const u32 cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1469 */[];
	enum lgdt3306a_neverlock_status cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1292 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 127 */;
	enum lgdt3306a_modulation cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1212 */;
	enum lgdt3306a_lock_check cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1208 */;
	enum lgdt3306a_lock_status cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1206 */;
	void cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 118 */(struct lgdt3306a_state *state);
	u16 cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1106 */;
	enum dvbfe_algo cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 1091 */;
	enum lgdt3306a_lock_check{LG3306_SYNC_LOCK, LG3306_FEC_LOCK, LG3306_TR_LOCK, LG3306_AGC_LOCK,} cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 109 */;
	enum lgdt3306a_modulation{LG3306_VSB=0x00, LG3306_QAM64=0x01, LG3306_QAM256=0x02, LG3306_UNKNOWN_MODE=0xff,} cocci_id/* drivers/media/dvb-frontends/lgdt3306a.c 102 */;
}
