cocci_test_suite() {
	const u8 cocci_id/* drivers/w1/masters/ds2482.c 83 */[8];
	struct i2c_driver cocci_id/* drivers/w1/masters/ds2482.c 553 */;
	const struct i2c_device_id cocci_id/* drivers/w1/masters/ds2482.c 547 */[];
	struct ds2482_data cocci_id/* drivers/w1/masters/ds2482.c 458 */;
	struct ds2482_data *cocci_id/* drivers/w1/masters/ds2482.c 448 */;
	const struct i2c_device_id *cocci_id/* drivers/w1/masters/ds2482.c 446 */;
	struct i2c_client *cocci_id/* drivers/w1/masters/ds2482.c 445 */;
	struct ds2482_w1_chan *cocci_id/* drivers/w1/masters/ds2482.c 351 */;
	void *cocci_id/* drivers/w1/masters/ds2482.c 349 */;
	void cocci_id/* drivers/w1/masters/ds2482.c 325 */;
	int cocci_id/* drivers/w1/masters/ds2482.c 32 */;
	u8 cocci_id/* drivers/w1/masters/ds2482.c 131 */;
	struct ds2482_data {
		struct i2c_client *client;
		struct mutex access_lock;
		int w1_count;
		struct ds2482_w1_chan w1_ch[8];
		u8 channel;
		u8 read_prt;
		u8 reg_config;
	} cocci_id/* drivers/w1/masters/ds2482.c 111 */;
	struct ds2482_w1_chan {
		struct ds2482_data *pdev;
		u8 channel;
		struct w1_bus_master w1_bm;
	} cocci_id/* drivers/w1/masters/ds2482.c 105 */;
}
