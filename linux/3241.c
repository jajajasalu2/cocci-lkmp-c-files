cocci_test_suite() {
	struct ibmpex_driver_data cocci_id/* drivers/hwmon/ibmpex.c 99 */;
	struct ibmpex_driver_data {
		struct list_head bmc_data;
		struct ipmi_smi_watcher bmc_events;
		struct ipmi_user_hndl ipmi_hndlrs;
	} cocci_id/* drivers/hwmon/ibmpex.c 93 */;
	struct ibmpex_bmc_data {
		struct list_head list;
		struct device *hwmon_dev;
		struct device *bmc_device;
		struct mutex lock;
		char valid;
		unsigned long last_updated;
		struct ipmi_addr address;
		struct completion read_complete;
		struct ipmi_user *user;
		int interface;
		struct kernel_ipmi_msg tx_message;
		unsigned char tx_msg_data[IPMI_MAX_MSG_LENGTH];
		long tx_msgid;
		unsigned char rx_msg_data[IPMI_MAX_MSG_LENGTH];
		unsigned long rx_msg_len;
		unsigned char rx_result;
		int rx_recv_type;
		unsigned char sensor_major;
		unsigned char sensor_minor;
		unsigned char num_sensors;
		struct ibmpex_sensor_data *sensors;
	} cocci_id/* drivers/hwmon/ibmpex.c 64 */;
	void __exit cocci_id/* drivers/hwmon/ibmpex.c 580 */;
	int __init cocci_id/* drivers/hwmon/ibmpex.c 575 */;
	struct ibmpex_sensor_data {
		int in_use;
		s16 values[PEX_NUM_SENSOR_FUNCS];
		int multiplier;
		struct sensor_device_attribute_2 attr[PEX_NUM_SENSOR_FUNCS];
	} cocci_id/* drivers/hwmon/ibmpex.c 56 */;
	struct ipmi_recv_msg *cocci_id/* drivers/hwmon/ibmpex.c 546 */;
	void *cocci_id/* drivers/hwmon/ibmpex.c 546 */;
	void cocci_id/* drivers/hwmon/ibmpex.c 54 */(int iface);
	void cocci_id/* drivers/hwmon/ibmpex.c 53 */(int iface,
						     struct device *dev);
	void cocci_id/* drivers/hwmon/ibmpex.c 52 */(struct ipmi_recv_msg *msg,
						     void *user_msg_data);
	void cocci_id/* drivers/hwmon/ibmpex.c 512 */;
	const char *const cocci_id/* drivers/hwmon/ibmpex.c 46 */[];
	const u8 cocci_id/* drivers/hwmon/ibmpex.c 39 */[];
	char *cocci_id/* drivers/hwmon/ibmpex.c 331 */;
	struct ibmpex_bmc_data *cocci_id/* drivers/hwmon/ibmpex.c 327 */;
	int cocci_id/* drivers/hwmon/ibmpex.c 327 */;
	__be16 *cocci_id/* drivers/hwmon/ibmpex.c 32 */;
	u16 cocci_id/* drivers/hwmon/ibmpex.c 30 */;
	const char *cocci_id/* drivers/hwmon/ibmpex.c 30 */;
	size_t cocci_id/* drivers/hwmon/ibmpex.c 281 */;
	struct device_attribute *cocci_id/* drivers/hwmon/ibmpex.c 280 */;
	struct device *cocci_id/* drivers/hwmon/ibmpex.c 279 */;
	ssize_t cocci_id/* drivers/hwmon/ibmpex.c 279 */;
	struct sensor_device_attribute_2 *cocci_id/* drivers/hwmon/ibmpex.c 270 */;
}
