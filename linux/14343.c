cocci_test_suite() {
	struct dvb_diseqc_master_cmd *cocci_id/* drivers/media/dvb-frontends/cx24116.c 947 */;
	struct cx24116_cmd cocci_id/* drivers/media/dvb-frontends/cx24116.c 907 */;
	enum fe_sec_tone_mode cocci_id/* drivers/media/dvb-frontends/cx24116.c 861 */;
	enum fe_sec_voltage cocci_id/* drivers/media/dvb-frontends/cx24116.c 833 */;
	void cocci_id/* drivers/media/dvb-frontends/cx24116.c 805 */;
	const u32 cocci_id/* drivers/media/dvb-frontends/cx24116.c 744 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/cx24116.c 743 */;
	u16 cocci_id/* drivers/media/dvb-frontends/cx24116.c 716 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/cx24116.c 711 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/cx24116.c 695 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/cx24116.c 672 */;
	unsigned char cocci_id/* drivers/media/dvb-frontends/cx24116.c 556 */[4];
	struct cx24116_cmd *cocci_id/* drivers/media/dvb-frontends/cx24116.c 514 */;
	const struct firmware *cocci_id/* drivers/media/dvb-frontends/cx24116.c 466 */;
	int cocci_id/* drivers/media/dvb-frontends/cx24116.c 460 */(struct dvb_frontend *fe,
								    const struct firmware *fw);
	u32 cocci_id/* drivers/media/dvb-frontends/cx24116.c 443 */;
	enum fe_modulation cocci_id/* drivers/media/dvb-frontends/cx24116.c 402 */;
	enum fe_delivery_system cocci_id/* drivers/media/dvb-frontends/cx24116.c 402 */;
	enum fe_code_rate cocci_id/* drivers/media/dvb-frontends/cx24116.c 402 */;
	struct cx24116_modfec {
		enum fe_delivery_system delivery_system;
		enum fe_modulation modulation;
		enum fe_code_rate fec;
		u8 mask;
		u8 val;
	} cocci_id/* drivers/media/dvb-frontends/cx24116.c 359 */[];
	enum fe_spectral_inversion cocci_id/* drivers/media/dvb-frontends/cx24116.c 272 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/cx24116.c 249 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/cx24116.c 247 */[];
	u8 *cocci_id/* drivers/media/dvb-frontends/cx24116.c 214 */;
	const u8 *cocci_id/* drivers/media/dvb-frontends/cx24116.c 210 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/cx24116.c 190 */;
	struct cx24116_state {
		struct i2c_adapter *i2c;
		const struct cx24116_config *config;
		struct dvb_frontend frontend;
		struct cx24116_tuning dcur;
		struct cx24116_tuning dnxt;
		u8 skip_fw_load;
		u8 burst;
		struct cx24116_cmd dsec_cmd;
	} cocci_id/* drivers/media/dvb-frontends/cx24116.c 173 */;
	struct cx24116_cmd {
		u8 len;
		u8 args[CX24116_ARGLEN];
	} cocci_id/* drivers/media/dvb-frontends/cx24116.c 168 */;
	struct cx24116_tuning {
		u32 frequency;
		u32 symbol_rate;
		enum fe_spectral_inversion inversion;
		enum fe_code_rate fec;
		enum fe_delivery_system delsys;
		enum fe_modulation modulation;
		enum fe_pilot pilot;
		enum fe_rolloff rolloff;
		u8 fec_val;
		u8 fec_mask;
		u8 inversion_val;
		u8 pilot_val;
		u8 rolloff_val;
	} cocci_id/* drivers/media/dvb-frontends/cx24116.c 148 */;
	enum dvbfe_algo cocci_id/* drivers/media/dvb-frontends/cx24116.c 1447 */;
	unsigned int *cocci_id/* drivers/media/dvb-frontends/cx24116.c 1428 */;
	unsigned int cocci_id/* drivers/media/dvb-frontends/cx24116.c 1428 */;
	bool cocci_id/* drivers/media/dvb-frontends/cx24116.c 1427 */;
	enum cmds{CMD_SET_VCO=0x10, CMD_TUNEREQUEST=0x11, CMD_MPEGCONFIG=0x13, CMD_TUNERINIT=0x14, CMD_BANDWIDTH=0x15, CMD_GETAGC=0x19, CMD_LNBCONFIG=0x20, CMD_LNBSEND=0x21, CMD_LNBDCLEVEL=0x22, CMD_SET_TONE=0x23, CMD_UPDFWVERS=0x35, CMD_TUNERSLEEP=0x36, CMD_AGCCONTROL=0x3b,} cocci_id/* drivers/media/dvb-frontends/cx24116.c 131 */;
	enum fe_status cocci_id/* drivers/media/dvb-frontends/cx24116.c 1207 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/cx24116.c 1205 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/cx24116.c 1132 */;
	int cocci_id/* drivers/media/dvb-frontends/cx24116.c 1109 */;
	struct cx24116_state *cocci_id/* drivers/media/dvb-frontends/cx24116.c 1108 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/cx24116.c 1106 */;
	const struct cx24116_config *cocci_id/* drivers/media/dvb-frontends/cx24116.c 1105 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/cx24116.c 1105 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/cx24116.c 1103 */;
	enum fe_sec_mini_cmd cocci_id/* drivers/media/dvb-frontends/cx24116.c 1044 */;
}
