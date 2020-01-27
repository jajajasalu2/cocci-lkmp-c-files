cocci_test_suite() {
	struct fsi_driver cocci_id/* drivers/i2c/busses/i2c-fsi.c 762 */;
	const struct fsi_device_id cocci_id/* drivers/i2c/busses/i2c-fsi.c 757 */[];
	struct device *cocci_id/* drivers/i2c/busses/i2c-fsi.c 677 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-fsi.c 661 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-fsi.c 656 */;
	struct i2c_bus_recovery_info cocci_id/* drivers/i2c/busses/i2c-fsi.c 646 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-fsi.c 640 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-fsi.c 529 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-fsi.c 526 */;
	struct fsi_device *cocci_id/* drivers/i2c/busses/i2c-fsi.c 482 */;
	struct fsi_i2c_master *cocci_id/* drivers/i2c/busses/i2c-fsi.c 481 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-fsi.c 478 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-fsi.c 475 */;
	struct fsi_i2c_port *cocci_id/* drivers/i2c/busses/i2c-fsi.c 475 */;
	int cocci_id/* drivers/i2c/busses/i2c-fsi.c 475 */;
	u16 cocci_id/* drivers/i2c/busses/i2c-fsi.c 438 */;
	void cocci_id/* drivers/i2c/busses/i2c-fsi.c 375 */;
	bool cocci_id/* drivers/i2c/busses/i2c-fsi.c 237 */;
	__be32 cocci_id/* drivers/i2c/busses/i2c-fsi.c 167 */;
	u32 *cocci_id/* drivers/i2c/busses/i2c-fsi.c 164 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-fsi.c 163 */;
	struct fsi_i2c_port {
		struct list_head list;
		struct i2c_adapter adapter;
		struct fsi_i2c_master *master;
		u16 port;
		u16 xfrd;
	} cocci_id/* drivers/i2c/busses/i2c-fsi.c 155 */;
	struct fsi_i2c_master {
		struct fsi_device *fsi;
		u8 fifo_size;
		struct list_head ports;
		struct mutex lock;
	} cocci_id/* drivers/i2c/busses/i2c-fsi.c 148 */;
}
