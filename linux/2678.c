cocci_test_suite() {
	unsigned char (*cocci_id/* drivers/i2c/busses/i2c-parport.c 80 */[])(struct parport *);
	void (*cocci_id/* drivers/i2c/busses/i2c-parport.c 74 */[])(struct parport *,
								    unsigned char);
	unsigned char cocci_id/* drivers/i2c/busses/i2c-parport.c 69 */;
	int cocci_id/* drivers/i2c/busses/i2c-parport.c 44 */[MAX_DEVICE];
	struct i2c_par {
		struct pardevice *pdev;
		struct i2c_adapter adapter;
		struct i2c_algo_bit_data algo_data;
		struct i2c_smbus_alert_setup alert_data;
		struct i2c_client *ara;
		struct list_head node;
	} cocci_id/* drivers/i2c/busses/i2c-parport.c 32 */;
	void __exit cocci_id/* drivers/i2c/busses/i2c-parport.c 305 */;
	int __init cocci_id/* drivers/i2c/busses/i2c-parport.c 290 */;
	struct parport_driver cocci_id/* drivers/i2c/busses/i2c-parport.c 281 */;
	struct i2c_par cocci_id/* drivers/i2c/busses/i2c-parport.c 177 */;
	struct pardev_cb cocci_id/* drivers/i2c/busses/i2c-parport.c 164 */;
	int cocci_id/* drivers/i2c/busses/i2c-parport.c 163 */;
	struct i2c_par *cocci_id/* drivers/i2c/busses/i2c-parport.c 162 */;
	struct parport *cocci_id/* drivers/i2c/busses/i2c-parport.c 160 */;
	void cocci_id/* drivers/i2c/busses/i2c-parport.c 160 */;
	struct i2c_client *cocci_id/* drivers/i2c/busses/i2c-parport.c 150 */;
	void *cocci_id/* drivers/i2c/busses/i2c-parport.c 147 */;
	const struct i2c_algo_bit_data cocci_id/* drivers/i2c/busses/i2c-parport.c 136 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-parport.c 103 */;
	const struct lineop *cocci_id/* drivers/i2c/busses/i2c-parport.c 101 */;
}
