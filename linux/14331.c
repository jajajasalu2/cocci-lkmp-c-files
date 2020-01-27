cocci_test_suite() {
	enum fe_status cocci_id/* drivers/media/dvb-frontends/ds3000.c 889 */;
	s32 cocci_id/* drivers/media/dvb-frontends/ds3000.c 865 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/ds3000.c 851 */;
	struct ds3000_state *cocci_id/* drivers/media/dvb-frontends/ds3000.c 824 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/ds3000.c 822 */;
	const struct ds3000_config *cocci_id/* drivers/media/dvb-frontends/ds3000.c 821 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/ds3000.c 821 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/ds3000.c 819 */;
	void cocci_id/* drivers/media/dvb-frontends/ds3000.c 808 */;
	u8 cocci_id/* drivers/media/dvb-frontends/ds3000.c 760 */;
	enum fe_sec_mini_cmd cocci_id/* drivers/media/dvb-frontends/ds3000.c 756 */;
	struct dvb_diseqc_master_cmd *cocci_id/* drivers/media/dvb-frontends/ds3000.c 691 */;
	enum fe_sec_tone_mode cocci_id/* drivers/media/dvb-frontends/ds3000.c 656 */;
	u16 cocci_id/* drivers/media/dvb-frontends/ds3000.c 624 */;
	const u16 cocci_id/* drivers/media/dvb-frontends/ds3000.c 539 */[];
	u16 *cocci_id/* drivers/media/dvb-frontends/ds3000.c 524 */;
	u32 cocci_id/* drivers/media/dvb-frontends/ds3000.c 464 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/ds3000.c 462 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/ds3000.c 459 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/ds3000.c 421 */;
	enum fe_sec_voltage cocci_id/* drivers/media/dvb-frontends/ds3000.c 394 */;
	const struct firmware *cocci_id/* drivers/media/dvb-frontends/ds3000.c 336 */;
	int cocci_id/* drivers/media/dvb-frontends/ds3000.c 330 */(struct dvb_frontend *fe,
								   const struct firmware *fw);
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/ds3000.c 304 */[];
	u8 *cocci_id/* drivers/media/dvb-frontends/ds3000.c 265 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/ds3000.c 264 */;
	const u8 *cocci_id/* drivers/media/dvb-frontends/ds3000.c 261 */;
	struct ds3000_state {
		struct i2c_adapter *i2c;
		const struct ds3000_config *config;
		struct dvb_frontend frontend;
		u16 prevUCBS2;
	} cocci_id/* drivers/media/dvb-frontends/ds3000.c 220 */;
	int cocci_id/* drivers/media/dvb-frontends/ds3000.c 21 */;
	u8 cocci_id/* drivers/media/dvb-frontends/ds3000.c 121 */[];
	enum dvbfe_algo cocci_id/* drivers/media/dvb-frontends/ds3000.c 1051 */;
	unsigned int *cocci_id/* drivers/media/dvb-frontends/ds3000.c 1037 */;
	unsigned int cocci_id/* drivers/media/dvb-frontends/ds3000.c 1036 */;
	bool cocci_id/* drivers/media/dvb-frontends/ds3000.c 1035 */;
}
