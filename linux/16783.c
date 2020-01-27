cocci_test_suite() {
	const void *cocci_id/* drivers/input/rmi4/rmi_i2c.c 76 */;
	u8 cocci_id/* drivers/input/rmi4/rmi_i2c.c 61 */[2];
	struct i2c_driver cocci_id/* drivers/input/rmi4/rmi_i2c.c 375 */;
	const struct i2c_device_id cocci_id/* drivers/input/rmi4/rmi_i2c.c 369 */[];
	struct device *cocci_id/* drivers/input/rmi4/rmi_i2c.c 304 */;
	struct rmi_i2c_xport {
		struct rmi_transport_dev xport;
		struct i2c_client *client;
		struct mutex page_mutex;
		int page;
		u8 *tx_buf;
		size_t tx_buf_size;
		struct regulator_bulk_data supplies[2];
		u32 startup_delay;
	} cocci_id/* drivers/input/rmi4/rmi_i2c.c 27 */;
	struct rmi_i2c_xport cocci_id/* drivers/input/rmi4/rmi_i2c.c 206 */;
	struct rmi_i2c_xport *cocci_id/* drivers/input/rmi4/rmi_i2c.c 203 */;
	struct rmi_device_platform_data *cocci_id/* drivers/input/rmi4/rmi_i2c.c 200 */;
	const struct i2c_device_id *cocci_id/* drivers/input/rmi4/rmi_i2c.c 198 */;
	struct i2c_client *cocci_id/* drivers/input/rmi4/rmi_i2c.c 197 */;
	int cocci_id/* drivers/input/rmi4/rmi_i2c.c 197 */;
	void cocci_id/* drivers/input/rmi4/rmi_i2c.c 182 */;
	const struct of_device_id cocci_id/* drivers/input/rmi4/rmi_i2c.c 175 */[];
	const struct rmi_transport_ops cocci_id/* drivers/input/rmi4/rmi_i2c.c 169 */;
	struct i2c_msg cocci_id/* drivers/input/rmi4/rmi_i2c.c 132 */[];
	u8 cocci_id/* drivers/input/rmi4/rmi_i2c.c 130 */;
	void *cocci_id/* drivers/input/rmi4/rmi_i2c.c 125 */;
	size_t cocci_id/* drivers/input/rmi4/rmi_i2c.c 125 */;
	u16 cocci_id/* drivers/input/rmi4/rmi_i2c.c 124 */;
	struct rmi_transport_dev *cocci_id/* drivers/input/rmi4/rmi_i2c.c 124 */;
}
