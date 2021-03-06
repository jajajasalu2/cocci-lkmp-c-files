cocci_test_suite() {
	const s32 cocci_id/* drivers/media/dvb-frontends/stv0367.c 99 */[RF_LOOKUP_TABLE_SIZE][RF_LOOKUP_TABLE_SIZE];
	enum stv0367_clk_pol cocci_id/* drivers/media/dvb-frontends/stv0367.c 910 */;
	enum stv0367_ts_mode cocci_id/* drivers/media/dvb-frontends/stv0367.c 886 */;
	struct stv0367_state {
		struct dvb_frontend fe;
		struct i2c_adapter *i2c;
		const struct stv0367_config *config;
		u8 chip_id;
		struct stv0367cab_state *cab_state;
		struct stv0367ter_state *ter_state;
		u8 use_i2c_gatectrl;
		u8 deftabs;
		u8 reinit_on_setfrontend;
		u8 auto_if_khz;
		enum active_demod_state activedemod;
	} cocci_id/* drivers/media/dvb-frontends/stv0367.c 78 */;
	short int cocci_id/* drivers/media/dvb-frontends/stv0367.c 706 */;
	enum stv0367_ter_signal_type cocci_id/* drivers/media/dvb-frontends/stv0367.c 653 */;
	unsigned short int cocci_id/* drivers/media/dvb-frontends/stv0367.c 629 */;
	struct stv0367ter_state {
		enum stv0367_ter_signal_type state;
		enum stv0367_ter_if_iq_mode if_iq_mode;
		enum stv0367_ter_mode mode;
		enum fe_guard_interval guard;
		enum stv0367_ter_hierarchy hierarchy;
		u32 frequency;
		enum fe_spectral_inversion sense;
		u8 force;
		u8 bw;
		u8 pBW;
		u32 pBER;
		u32 pPER;
		u32 ucblocks;
		s8 echo_pos;
		u8 first_lock;
		u8 unlock_counter;
		u32 agc_val;
	} cocci_id/* drivers/media/dvb-frontends/stv0367.c 57 */;
	struct stv0367cab_state {
		enum stv0367_cab_signal_type state;
		u32 mclk;
		u32 adc_clk;
		s32 search_range;
		s32 derot_offset;
		int locked;
		u32 freq_khz;
		u32 symbol_rate;
		enum fe_spectral_inversion spect_inv;
		u32 qamfec_status_reg;
	} cocci_id/* drivers/media/dvb-frontends/stv0367.c 43 */;
	u16 cocci_id/* drivers/media/dvb-frontends/stv0367.c 426 */[3][6][5];
	enum active_demod_state{demod_none, demod_ter, demod_cab,} cocci_id/* drivers/media/dvb-frontends/stv0367.c 41 */;
	struct dvb_tuner_ops *cocci_id/* drivers/media/dvb-frontends/stv0367.c 355 */;
	struct dvb_frontend_ops *cocci_id/* drivers/media/dvb-frontends/stv0367.c 354 */;
	struct stv0367ter_state cocci_id/* drivers/media/dvb-frontends/stv0367.c 3302 */;
	struct stv0367ter_state *cocci_id/* drivers/media/dvb-frontends/stv0367.c 3295 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/stv0367.c 321 */;
	struct stv0367_state *cocci_id/* drivers/media/dvb-frontends/stv0367.c 321 */;
	int cocci_id/* drivers/media/dvb-frontends/stv0367.c 31 */;
	struct stv0367cab_state cocci_id/* drivers/media/dvb-frontends/stv0367.c 2893 */;
	struct stv0367_state cocci_id/* drivers/media/dvb-frontends/stv0367.c 2890 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/stv0367.c 2884 */;
	const struct stv0367_config *cocci_id/* drivers/media/dvb-frontends/stv0367.c 2883 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/stv0367.c 2855 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/stv0367.c 2782 */;
	const struct st_register *cocci_id/* drivers/media/dvb-frontends/stv0367.c 262 */;
	s32 cocci_id/* drivers/media/dvb-frontends/stv0367.c 2334 */;
	struct stv0367cab_state *cocci_id/* drivers/media/dvb-frontends/stv0367.c 2328 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/stv0367.c 2326 */;
	enum stv0367_cab_signal_type cocci_id/* drivers/media/dvb-frontends/stv0367.c 2325 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/stv0367.c 2207 */;
	u8 cocci_id/* drivers/media/dvb-frontends/stv0367.c 200 */;
	u32 cocci_id/* drivers/media/dvb-frontends/stv0367.c 198 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/stv0367.c 198 */;
	void cocci_id/* drivers/media/dvb-frontends/stv0367.c 198 */;
	enum stv0367cab_mod cocci_id/* drivers/media/dvb-frontends/stv0367.c 1807 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/stv0367.c 168 */[];
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/stv0367.c 1663 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/stv0367.c 1662 */;
	u8 cocci_id/* drivers/media/dvb-frontends/stv0367.c 166 */[];
	u16 cocci_id/* drivers/media/dvb-frontends/stv0367.c 164 */;
	enum stv0367_ter_mode cocci_id/* drivers/media/dvb-frontends/stv0367.c 1348 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/stv0367.c 125 */;
	u8 cocci_id/* drivers/media/dvb-frontends/stv0367.c 124 */[MAX_XFER_SIZE];
	signed cocci_id/* drivers/media/dvb-frontends/stv0367.c 1186 */;
	const s32 cocci_id/* drivers/media/dvb-frontends/stv0367.c 111 */[RF_LOOKUP_TABLE2_SIZE][RF_LOOKUP_TABLE2_SIZE];
	s8 cocci_id/* drivers/media/dvb-frontends/stv0367.c 1003 */;
}
