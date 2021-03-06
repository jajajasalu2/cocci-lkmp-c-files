cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 994 */;
	const struct i2c_device_id cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 988 */[];
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 96 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 95 */[];
	enum I2C_REG cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 93 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 93 */;
	struct lgdt330x_config cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 920 */;
	struct lgdt330x_state *cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 92 */;
	struct i2c_board_info cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 919 */;
	struct i2c_client *cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 918 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 916 */;
	const struct lgdt330x_config *cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 914 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 881 */;
	u8 cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 864 */[1];
	const struct i2c_device_id *cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 861 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 857 */;
	void cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 838 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 829 */;
	u64 cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 695 */;
	const u8 *cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 66 */;
	u8 cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 623 */[3];
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 622 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 619 */;
	u16 cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 601 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 593 */;
	u8 cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 495 */[5];
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 492 */;
	u32 cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 475 */;
	struct lgdt330x_state {
		struct i2c_client *client;
		struct lgdt330x_config config;
		struct dvb_frontend frontend;
		enum fe_modulation current_modulation;
		u32 snr;
		u16 ucblocks;
		unsigned long last_stats_time;
		u32 current_frequency;
	} cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 47 */;
	int cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 38 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 300 */;
	const u8 cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 189 */[];
	char *cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 183 */;
	u8 cocci_id/* drivers/media/dvb-frontends/lgdt330x.c 127 */;
}
