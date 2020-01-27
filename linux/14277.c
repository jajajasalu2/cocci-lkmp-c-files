cocci_test_suite() {
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/af9013.c 96 */;
	u64 cocci_id/* drivers/media/dvb-frontends/af9013.c 883 */;
	const struct af9013_reg_mask_val *cocci_id/* drivers/media/dvb-frontends/af9013.c 836 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/af9013.c 811 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/af9013.c 802 */;
	u8 cocci_id/* drivers/media/dvb-frontends/af9013.c 522 */[7];
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/af9013.c 515 */;
	u8 cocci_id/* drivers/media/dvb-frontends/af9013.c 403 */[3];
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/af9013.c 398 */;
	struct i2c_driver cocci_id/* drivers/media/dvb-frontends/af9013.c 1564 */;
	const struct i2c_device_id cocci_id/* drivers/media/dvb-frontends/af9013.c 1558 */[];
	const struct regmap_config cocci_id/* drivers/media/dvb-frontends/af9013.c 1445 */;
	const struct regmap_bus cocci_id/* drivers/media/dvb-frontends/af9013.c 1441 */;
	struct af9013_platform_data *cocci_id/* drivers/media/dvb-frontends/af9013.c 1437 */;
	const struct i2c_device_id *cocci_id/* drivers/media/dvb-frontends/af9013.c 1434 */;
	const unsigned int cocci_id/* drivers/media/dvb-frontends/af9013.c 1410 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/af9013.c 1407 */;
	size_t cocci_id/* drivers/media/dvb-frontends/af9013.c 1401 */;
	const void *cocci_id/* drivers/media/dvb-frontends/af9013.c 1400 */;
	void *cocci_id/* drivers/media/dvb-frontends/af9013.c 1400 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/af9013.c 1326 */[2];
	struct af9013_state {
		struct i2c_client *client;
		struct regmap *regmap;
		struct i2c_mux_core *muxc;
		struct dvb_frontend fe;
		u32 clk;
		u8 tuner;
		u32 if_frequency;
		u8 ts_mode;
		u8 ts_output_pin;
		bool spec_inv;
		u8 api_version[4];
		u8 gpio[4];
		u32 bandwidth_hz;
		enum fe_status fe_status;
		u8 strength_en,rf_agc_50,rf_agc_80,if_agc_50,if_agc_80;
		unsigned long set_frontend_jiffies;
		unsigned long read_status_jiffies;
		unsigned long strength_jiffies;
		unsigned long cnr_jiffies;
		unsigned long ber_ucb_jiffies;
		u16 dvbv3_snr;
		u16 dvbv3_strength;
		u32 dvbv3_ber;
		u32 dvbv3_ucblocks;
		bool first_tune;
	} cocci_id/* drivers/media/dvb-frontends/af9013.c 13 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/af9013.c 1284 */[1];
	u8 cocci_id/* drivers/media/dvb-frontends/af9013.c 1283 */[21];
	const u8 *cocci_id/* drivers/media/dvb-frontends/af9013.c 1280 */;
	struct i2c_client *cocci_id/* drivers/media/dvb-frontends/af9013.c 1260 */;
	struct af9013_state *cocci_id/* drivers/media/dvb-frontends/af9013.c 1259 */;
	u32 cocci_id/* drivers/media/dvb-frontends/af9013.c 1257 */;
	struct i2c_mux_core *cocci_id/* drivers/media/dvb-frontends/af9013.c 1257 */;
	int cocci_id/* drivers/media/dvb-frontends/af9013.c 1257 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/af9013.c 1222 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/af9013.c 1213 */;
	u8 cocci_id/* drivers/media/dvb-frontends/af9013.c 1187 */[2];
	u8 cocci_id/* drivers/media/dvb-frontends/af9013.c 1181 */;
	u8 cocci_id/* drivers/media/dvb-frontends/af9013.c 112 */[6];
	bool cocci_id/* drivers/media/dvb-frontends/af9013.c 111 */;
	const char *cocci_id/* drivers/media/dvb-frontends/af9013.c 1033 */;
	const struct firmware *cocci_id/* drivers/media/dvb-frontends/af9013.c 1032 */;
	u16 cocci_id/* drivers/media/dvb-frontends/af9013.c 1031 */;
	u8 cocci_id/* drivers/media/dvb-frontends/af9013.c 1030 */[4];
	unsigned int cocci_id/* drivers/media/dvb-frontends/af9013.c 1029 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/af9013.c 1023 */;
}
