cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/mt312.c 89 */;
	u8 cocci_id/* drivers/media/dvb-frontends/mt312.c 88 */[MAX_XFER_SIZE];
	const u8 *cocci_id/* drivers/media/dvb-frontends/mt312.c 85 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/mt312.c 797 */;
	struct mt312_state cocci_id/* drivers/media/dvb-frontends/mt312.c 783 */;
	struct mt312_state *cocci_id/* drivers/media/dvb-frontends/mt312.c 780 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/mt312.c 778 */;
	const struct mt312_config *cocci_id/* drivers/media/dvb-frontends/mt312.c 777 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/mt312.c 777 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/mt312.c 738 */;
	void cocci_id/* drivers/media/dvb-frontends/mt312.c 731 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/mt312.c 723 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/mt312.c 638 */;
	u8 cocci_id/* drivers/media/dvb-frontends/mt312.c 55 */[1];
	const u8 cocci_id/* drivers/media/dvb-frontends/mt312.c 540 */[3];
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/mt312.c 54 */[2];
	const u8 cocci_id/* drivers/media/dvb-frontends/mt312.c 538 */[10];
	u8 cocci_id/* drivers/media/dvb-frontends/mt312.c 535 */[5];
	const size_t cocci_id/* drivers/media/dvb-frontends/mt312.c 51 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/mt312.c 51 */;
	const enum mt312_reg_addr cocci_id/* drivers/media/dvb-frontends/mt312.c 50 */;
	s16 cocci_id/* drivers/media/dvb-frontends/mt312.c 484 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/mt312.c 478 */;
	u8 cocci_id/* drivers/media/dvb-frontends/mt312.c 466 */[3];
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/mt312.c 433 */;
	const enum fe_sec_voltage cocci_id/* drivers/media/dvb-frontends/mt312.c 417 */;
	int cocci_id/* drivers/media/dvb-frontends/mt312.c 40 */;
	const enum fe_sec_tone_mode cocci_id/* drivers/media/dvb-frontends/mt312.c 393 */;
	const u8 cocci_id/* drivers/media/dvb-frontends/mt312.c 372 */[2];
	const enum fe_sec_mini_cmd cocci_id/* drivers/media/dvb-frontends/mt312.c 369 */;
	struct dvb_diseqc_master_cmd *cocci_id/* drivers/media/dvb-frontends/mt312.c 332 */;
	struct mt312_state {
		struct i2c_adapter *i2c;
		const struct mt312_config *config;
		struct dvb_frontend frontend;
		u8 id;
		unsigned long xtal;
		u8 freq_mult;
	} cocci_id/* drivers/media/dvb-frontends/mt312.c 29 */;
	u8 cocci_id/* drivers/media/dvb-frontends/mt312.c 254 */[8];
	u8 cocci_id/* drivers/media/dvb-frontends/mt312.c 220 */;
	const enum fe_code_rate cocci_id/* drivers/media/dvb-frontends/mt312.c 215 */[8];
	enum fe_code_rate *cocci_id/* drivers/media/dvb-frontends/mt312.c 213 */;
	u8 cocci_id/* drivers/media/dvb-frontends/mt312.c 166 */[2];
	u16 cocci_id/* drivers/media/dvb-frontends/mt312.c 164 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/mt312.c 159 */;
	enum fe_spectral_inversion *cocci_id/* drivers/media/dvb-frontends/mt312.c 144 */;
	const u8 cocci_id/* drivers/media/dvb-frontends/mt312.c 138 */;
}
