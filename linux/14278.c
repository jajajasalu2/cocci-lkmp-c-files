cocci_test_suite() {
	enum dvbfe_algo cocci_id/* drivers/media/dvb-frontends/cx24123.c 999 */;
	unsigned int *cocci_id/* drivers/media/dvb-frontends/cx24123.c 984 */;
	unsigned int cocci_id/* drivers/media/dvb-frontends/cx24123.c 983 */;
	bool cocci_id/* drivers/media/dvb-frontends/cx24123.c 982 */;
	enum fe_sec_tone_mode cocci_id/* drivers/media/dvb-frontends/cx24123.c 956 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/cx24123.c 936 */;
	u16 cocci_id/* drivers/media/dvb-frontends/cx24123.c 892 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/cx24123.c 874 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/cx24123.c 858 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/cx24123.c 821 */;
	enum fe_sec_mini_cmd cocci_id/* drivers/media/dvb-frontends/cx24123.c 785 */;
	int cocci_id/* drivers/media/dvb-frontends/cx24123.c 784 */;
	struct dvb_diseqc_master_cmd *cocci_id/* drivers/media/dvb-frontends/cx24123.c 749 */;
	enum fe_sec_voltage cocci_id/* drivers/media/dvb-frontends/cx24123.c 710 */;
	struct cx24123_AGC_val {
		u32 symbolrate_low;
		u32 symbolrate_high;
		u32 VCAprogdata;
		u32 VGAprogdata;
		u32 FILTune;
	} cocci_id/* drivers/media/dvb-frontends/cx24123.c 66 */[];
	unsigned long cocci_id/* drivers/media/dvb-frontends/cx24123.c 580 */;
	struct cx24123_AGC_val *cocci_id/* drivers/media/dvb-frontends/cx24123.c 512 */;
	struct cx24123_bandselect_val *cocci_id/* drivers/media/dvb-frontends/cx24123.c 511 */;
	u64 cocci_id/* drivers/media/dvb-frontends/cx24123.c 443 */;
	struct cx24123_state {
		struct i2c_adapter *i2c;
		const struct cx24123_config *config;
		struct dvb_frontend frontend;
		u32 VCAarg;
		u32 VGAarg;
		u32 bandselectarg;
		u32 pllarg;
		u32 FILTune;
		struct i2c_adapter tuner_i2c_adapter;
		u8 demod_rev;
		u32 currentfreq;
		u32 currentsymbolrate;
	} cocci_id/* drivers/media/dvb-frontends/cx24123.c 43 */;
	u32 cocci_id/* drivers/media/dvb-frontends/cx24123.c 428 */;
	enum fe_code_rate *cocci_id/* drivers/media/dvb-frontends/cx24123.c 387 */;
	enum fe_code_rate cocci_id/* drivers/media/dvb-frontends/cx24123.c 325 */;
	u8 cocci_id/* drivers/media/dvb-frontends/cx24123.c 310 */;
	enum fe_spectral_inversion *cocci_id/* drivers/media/dvb-frontends/cx24123.c 308 */;
	enum fe_spectral_inversion cocci_id/* drivers/media/dvb-frontends/cx24123.c 280 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/cx24123.c 257 */[];
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/cx24123.c 236 */;
	u8 cocci_id/* drivers/media/dvb-frontends/cx24123.c 235 */[];
	struct {
		u8 reg;
		u8 data;
	} cocci_id/* drivers/media/dvb-frontends/cx24123.c 184 */[];
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/cx24123.c 1074 */;
	struct cx24123_state cocci_id/* drivers/media/dvb-frontends/cx24123.c 1046 */;
	struct cx24123_state *cocci_id/* drivers/media/dvb-frontends/cx24123.c 1045 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/cx24123.c 1042 */;
	const struct cx24123_config *cocci_id/* drivers/media/dvb-frontends/cx24123.c 1041 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/cx24123.c 1041 */;
	struct cx24123_bandselect_val {
		u32 freq_low;
		u32 freq_high;
		u32 VCOdivider;
		u32 progdata;
	} cocci_id/* drivers/media/dvb-frontends/cx24123.c 104 */[];
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/cx24123.c 1039 */;
	const struct i2c_algorithm cocci_id/* drivers/media/dvb-frontends/cx24123.c 1026 */;
	void cocci_id/* drivers/media/dvb-frontends/cx24123.c 1004 */;
}
