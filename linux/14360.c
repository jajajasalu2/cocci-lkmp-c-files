cocci_test_suite() {
	unsigned char *cocci_id/* drivers/media/dvb-frontends/mb86a16.c 934 */;
	void cocci_id/* drivers/media/dvb-frontends/mb86a16.c 932 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/mb86a16.c 89 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/mb86a16.c 86 */[];
	u8 *cocci_id/* drivers/media/dvb-frontends/mb86a16.c 83 */;
	int *cocci_id/* drivers/media/dvb-frontends/mb86a16.c 758 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/mb86a16.c 67 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/mb86a16.c 571 */;
	unsigned char cocci_id/* drivers/media/dvb-frontends/mb86a16.c 458 */[5];
	unsigned char cocci_id/* drivers/media/dvb-frontends/mb86a16.c 406 */[3];
	unsigned char cocci_id/* drivers/media/dvb-frontends/mb86a16.c 306 */;
	struct mb86a16_state *cocci_id/* drivers/media/dvb-frontends/mb86a16.c 302 */;
	int cocci_id/* drivers/media/dvb-frontends/mb86a16.c 302 */;
	unsigned cocci_id/* drivers/media/dvb-frontends/mb86a16.c 274 */;
	struct mb86a16_state {
		struct i2c_adapter *i2c_adap;
		const struct mb86a16_config *config;
		struct dvb_frontend frontend;
		int frequency;
		int srate;
		int master_clk;
		int deci;
		int csel;
		int rsel;
	} cocci_id/* drivers/media/dvb-frontends/mb86a16.c 22 */;
	unsigned int cocci_id/* drivers/media/dvb-frontends/mb86a16.c 19 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1845 */;
	struct mb86a16_state cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1834 */;
	u8 cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1831 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1829 */;
	const struct mb86a16_config *cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1828 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1828 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1795 */;
	enum dvbfe_algo cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1790 */;
	const struct cnr cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1726 */[];
	struct cnr {
		u8 cn_reg;
		u8 cn_val;
	} cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1721 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1703 */;
	u32 cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1639 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1636 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1605 */;
	enum dvbfe_search cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1603 */;
	enum fe_sec_tone_mode cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1570 */;
	enum fe_sec_mini_cmd cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1542 */;
	struct dvb_diseqc_master_cmd *cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1501 */;
	int cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1034 */[4];
	int cocci_id/* drivers/media/dvb-frontends/mb86a16.c 1007 */[60];
}