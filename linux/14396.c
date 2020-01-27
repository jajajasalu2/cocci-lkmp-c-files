cocci_test_suite() {
	struct ascot2e_band_sett cocci_id/* drivers/media/dvb-frontends/ascot2e.c 74 */[];
	struct ascot2e_band_sett {
		u8 if_out_sel;
		u8 agc_sel;
		u8 mix_oll;
		u8 rf_gain;
		u8 if_bpf_gc;
		u8 fif_offset;
		u8 bw_offset;
		u8 bw;
		u8 rf_oldet;
		u8 if_bpf_f0;
	} cocci_id/* drivers/media/dvb-frontends/ascot2e.c 54 */;
	struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/ascot2e.c 529 */;
	struct ascot2e_priv cocci_id/* drivers/media/dvb-frontends/ascot2e.c 480 */;
	struct ascot2e_priv *cocci_id/* drivers/media/dvb-frontends/ascot2e.c 478 */;
	u8 cocci_id/* drivers/media/dvb-frontends/ascot2e.c 477 */[4];
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/ascot2e.c 475 */;
	const struct ascot2e_config *cocci_id/* drivers/media/dvb-frontends/ascot2e.c 474 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/ascot2e.c 473 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/ascot2e.c 459 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/ascot2e.c 451 */;
	enum ascot2e_tv_system_t{ASCOT2E_DTV_DVBT_5, ASCOT2E_DTV_DVBT_6, ASCOT2E_DTV_DVBT_7, ASCOT2E_DTV_DVBT_8, ASCOT2E_DTV_DVBT2_1_7, ASCOT2E_DTV_DVBT2_5, ASCOT2E_DTV_DVBT2_6, ASCOT2E_DTV_DVBT2_7, ASCOT2E_DTV_DVBT2_8, ASCOT2E_DTV_DVBC_6, ASCOT2E_DTV_DVBC_8, ASCOT2E_DTV_DVBC2_6, ASCOT2E_DTV_DVBC2_8, ASCOT2E_DTV_UNKNOWN,} cocci_id/* drivers/media/dvb-frontends/ascot2e.c 37 */;
	u8 cocci_id/* drivers/media/dvb-frontends/ascot2e.c 314 */[10];
	struct ascot2e_priv {
		u32 frequency;
		u8 i2c_address;
		struct i2c_adapter *i2c;
		enum ascot2e_state state;
		void *set_tuner_data;
		int (*set_tuner)(void *, int);
	} cocci_id/* drivers/media/dvb-frontends/ascot2e.c 28 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/ascot2e.c 271 */;
	enum ascot2e_tv_system_t cocci_id/* drivers/media/dvb-frontends/ascot2e.c 268 */;
	enum ascot2e_state{STATE_UNKNOWN, STATE_SLEEP, STATE_ACTIVE,} cocci_id/* drivers/media/dvb-frontends/ascot2e.c 22 */;
	u8 cocci_id/* drivers/media/dvb-frontends/ascot2e.c 216 */[2];
	int cocci_id/* drivers/media/dvb-frontends/ascot2e.c 214 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/ascot2e.c 194 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/ascot2e.c 158 */[2];
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/ascot2e.c 117 */[1];
	u8 cocci_id/* drivers/media/dvb-frontends/ascot2e.c 116 */[MAX_WRITE_REGSIZE + 1];
	u8 cocci_id/* drivers/media/dvb-frontends/ascot2e.c 104 */;
	u32 cocci_id/* drivers/media/dvb-frontends/ascot2e.c 104 */;
	const u8 *cocci_id/* drivers/media/dvb-frontends/ascot2e.c 104 */;
	void cocci_id/* drivers/media/dvb-frontends/ascot2e.c 103 */;
}
