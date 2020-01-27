cocci_test_suite() {
	struct mapping_table_entry *cocci_id/* drivers/input/rmi4/rmi_smbus.c 91 */;
	struct mapping_table_entry cocci_id/* drivers/input/rmi4/rmi_smbus.c 84 */;
	struct rmi_smb_xport cocci_id/* drivers/input/rmi4/rmi_smbus.c 83 */;
	u16 cocci_id/* drivers/input/rmi4/rmi_smbus.c 80 */;
	bool cocci_id/* drivers/input/rmi4/rmi_smbus.c 80 */;
	u8 *cocci_id/* drivers/input/rmi4/rmi_smbus.c 80 */;
	struct rmi_transport_dev *cocci_id/* drivers/input/rmi4/rmi_smbus.c 79 */;
	struct i2c_client *cocci_id/* drivers/input/rmi4/rmi_smbus.c 44 */;
	struct i2c_driver cocci_id/* drivers/input/rmi4/rmi_smbus.c 417 */;
	const struct i2c_device_id cocci_id/* drivers/input/rmi4/rmi_smbus.c 411 */[];
	struct rmi_device *cocci_id/* drivers/input/rmi4/rmi_smbus.c 378 */;
	struct i2c_client cocci_id/* drivers/input/rmi4/rmi_smbus.c 376 */;
	struct device *cocci_id/* drivers/input/rmi4/rmi_smbus.c 374 */;
	int __maybe_unused cocci_id/* drivers/input/rmi4/rmi_smbus.c 374 */;
	struct rmi_smb_xport {
		struct rmi_transport_dev xport;
		struct i2c_client *client;
		struct mutex page_mutex;
		int page;
		u8 table_index;
		struct mutex mappingtable_mutex;
		struct mapping_table_entry mapping_table[RMI_SMB2_MAP_SIZE];
	} cocci_id/* drivers/input/rmi4/rmi_smbus.c 31 */;
	struct rmi_device_platform_data *cocci_id/* drivers/input/rmi4/rmi_smbus.c 272 */;
	const struct i2c_device_id *cocci_id/* drivers/input/rmi4/rmi_smbus.c 270 */;
	const struct rmi_transport_ops cocci_id/* drivers/input/rmi4/rmi_smbus.c 263 */;
	struct mapping_table_entry {
		__le16 rmiaddr;
		u8 readcount;
		u8 flags;
	} cocci_id/* drivers/input/rmi4/rmi_smbus.c 25 */;
	int cocci_id/* drivers/input/rmi4/rmi_smbus.c 234 */;
	struct rmi_smb_xport *cocci_id/* drivers/input/rmi4/rmi_smbus.c 226 */;
	void cocci_id/* drivers/input/rmi4/rmi_smbus.c 226 */;
	u8 cocci_id/* drivers/input/rmi4/rmi_smbus.c 194 */;
	void *cocci_id/* drivers/input/rmi4/rmi_smbus.c 189 */;
	size_t cocci_id/* drivers/input/rmi4/rmi_smbus.c 189 */;
	const void *cocci_id/* drivers/input/rmi4/rmi_smbus.c 137 */;
}
