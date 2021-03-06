cocci_test_suite() {
	u32 cocci_id/* drivers/media/dvb-frontends/dib7000m.c 970 */;
	struct dtv_frontend_properties cocci_id/* drivers/media/dvb-frontends/dib7000m.c 968 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/dib7000m.c 88 */;
	u8 cocci_id/* drivers/media/dvb-frontends/dib7000m.c 759 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/dib7000m.c 758 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/dib7000m.c 754 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/dib7000m.c 752 */;
	u16 cocci_id/* drivers/media/dvb-frontends/dib7000m.c 736 */[9];
	struct dibx000_agc_config *cocci_id/* drivers/media/dvb-frontends/dib7000m.c 681 */;
	enum dib7000m_power_mode{DIB7000M_POWER_ALL=0, DIB7000M_POWER_NO, DIB7000M_POWER_INTERF_ANALOG_AGC, DIB7000M_POWER_COR4_DINTLV_ICIRM_EQUAL_CFROD, DIB7000M_POWER_COR4_CRY_ESRAM_MOUT_NUD, DIB7000M_POWER_INTERFACE_ONLY,} cocci_id/* drivers/media/dvb-frontends/dib7000m.c 66 */;
	u16 cocci_id/* drivers/media/dvb-frontends/dib7000m.c 640 */;
	struct dib7000m_state *cocci_id/* drivers/media/dvb-frontends/dib7000m.c 638 */;
	u16 cocci_id/* drivers/media/dvb-frontends/dib7000m.c 536 */[];
	const struct dibx000_bandwidth_config *cocci_id/* drivers/media/dvb-frontends/dib7000m.c 394 */;
	struct dib7000m_state {
		struct dvb_frontend demod;
		struct dib7000m_config cfg;
		u8 i2c_addr;
		struct i2c_adapter *i2c_adap;
		struct dibx000_i2c_master i2c_master;
		u8 reg_offs;
		u16 wbd_ref;
		u8 current_band;
		u32 current_bandwidth;
		struct dibx000_agc_config *current_agc;
		u32 timf;
		u32 timf_default;
		u32 internal_clk;
		u8 div_force_off:1;
		u8 div_state:1;
		u16 div_sync_wait;
		u16 revision;
		u8 agc_state;
		struct i2c_msg msg[2];
		u8 i2c_write_buffer[4];
		u8 i2c_read_buffer[2];
		struct mutex i2c_buffer_lock;
	} cocci_id/* drivers/media/dvb-frontends/dib7000m.c 30 */;
	enum dibx000_adc_states cocci_id/* drivers/media/dvb-frontends/dib7000m.c 261 */;
	enum dib7000m_power_mode cocci_id/* drivers/media/dvb-frontends/dib7000m.c 209 */;
	int cocci_id/* drivers/media/dvb-frontends/dib7000m.c 20 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/dib7000m.c 1416 */;
	struct dib7000m_config cocci_id/* drivers/media/dvb-frontends/dib7000m.c 1410 */;
	struct dib7000m_state cocci_id/* drivers/media/dvb-frontends/dib7000m.c 1406 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/dib7000m.c 1402 */;
	struct dib7000m_config *cocci_id/* drivers/media/dvb-frontends/dib7000m.c 1402 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/dib7000m.c 1401 */;
	enum dibx000_i2c_interface cocci_id/* drivers/media/dvb-frontends/dib7000m.c 1325 */;
	void cocci_id/* drivers/media/dvb-frontends/dib7000m.c 1318 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/dib7000m.c 1312 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/dib7000m.c 1298 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/dib7000m.c 1284 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/dib7000m.c 1263 */;
}
