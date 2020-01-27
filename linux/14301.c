cocci_test_suite() {
	struct snr_tab {
		u8 val;
		u8 data;
	} cocci_id/* drivers/media/dvb-frontends/tda10048.c 855 */[];
	u16 *cocci_id/* drivers/media/dvb-frontends/tda10048.c 838 */;
	u64 cocci_id/* drivers/media/dvb-frontends/tda10048.c 814 */;
	u32 cocci_id/* drivers/media/dvb-frontends/tda10048.c 812 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/tda10048.c 809 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/tda10048.c 783 */;
	u8 cocci_id/* drivers/media/dvb-frontends/tda10048.c 473 */;
	const struct firmware *cocci_id/* drivers/media/dvb-frontends/tda10048.c 469 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/tda10048.c 257 */;
	u16 cocci_id/* drivers/media/dvb-frontends/tda10048.c 252 */;
	const u8 *cocci_id/* drivers/media/dvb-frontends/tda10048.c 252 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/tda10048.c 234 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/tda10048.c 232 */[];
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/tda10048.c 214 */;
	struct pll_tab {
		u32 clk_freq_khz;
		u32 if_freq_khz;
	} cocci_id/* drivers/media/dvb-frontends/tda10048.c 194 */[];
	struct init_tab {
		u8 reg;
		u16 data;
	} cocci_id/* drivers/media/dvb-frontends/tda10048.c 147 */[];
	struct tda10048_state {
		struct i2c_adapter *i2c;
		struct tda10048_config config;
		struct dvb_frontend frontend;
		int fwloaded;
		u32 freq_if_hz;
		u32 xtal_hz;
		u32 pll_mfactor;
		u32 pll_nfactor;
		u32 pll_pfactor;
		u32 sample_freq;
		u32 bandwidth;
	} cocci_id/* drivers/media/dvb-frontends/tda10048.c 127 */;
	unsigned int cocci_id/* drivers/media/dvb-frontends/tda10048.c 120 */;
	int cocci_id/* drivers/media/dvb-frontends/tda10048.c 1170 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/tda10048.c 1107 */;
	struct tda10048_state cocci_id/* drivers/media/dvb-frontends/tda10048.c 1091 */;
	struct tda10048_state *cocci_id/* drivers/media/dvb-frontends/tda10048.c 1086 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/tda10048.c 1084 */;
	const struct tda10048_config *cocci_id/* drivers/media/dvb-frontends/tda10048.c 1083 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/tda10048.c 1083 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/tda10048.c 1081 */;
	struct tda10048_config *cocci_id/* drivers/media/dvb-frontends/tda10048.c 1049 */;
	void cocci_id/* drivers/media/dvb-frontends/tda10048.c 1046 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/tda10048.c 1033 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/tda10048.c 1020 */;
}
