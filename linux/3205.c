cocci_test_suite() {
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/ibmaem.c 981 */;
	char *cocci_id/* drivers/hwmon/ibmaem.c 979 */;
	struct device_attribute *cocci_id/* drivers/hwmon/ibmaem.c 978 */;
	struct device *cocci_id/* drivers/hwmon/ibmaem.c 977 */;
	ssize_t cocci_id/* drivers/hwmon/ibmaem.c 977 */;
	const struct aem_rw_sensor_template *cocci_id/* drivers/hwmon/ibmaem.c 910 */;
	const struct aem_ro_sensor_template *cocci_id/* drivers/hwmon/ibmaem.c 909 */;
	unsigned long cocci_id/* drivers/hwmon/ibmaem.c 890 */;
	const char *cocci_id/* drivers/hwmon/ibmaem.c 886 */;
	struct aem_ipmi_data {
		struct completion read_complete;
		struct ipmi_addr address;
		struct ipmi_user *user;
		int interface;
		struct kernel_ipmi_msg tx_message;
		long tx_msgid;
		void *rx_msg_data;
		unsigned short rx_msg_len;
		unsigned char rx_result;
		int rx_recv_type;
		struct device *bmc_device;
	} cocci_id/* drivers/hwmon/ibmaem.c 88 */;
	unsigned long long cocci_id/* drivers/hwmon/ibmaem.c 868 */;
	signed long cocci_id/* drivers/hwmon/ibmaem.c 830 */;
	u64 cocci_id/* drivers/hwmon/ibmaem.c 829 */;
	struct platform_driver cocci_id/* drivers/hwmon/ibmaem.c 81 */;
	void cocci_id/* drivers/hwmon/ibmaem.c 791 */;
	struct aem_ipmi_data cocci_id/* drivers/hwmon/ibmaem.c 778 */;
	struct aem_find_instance_resp cocci_id/* drivers/hwmon/ibmaem.c 753 */;
	struct aem_find_instance_req cocci_id/* drivers/hwmon/ibmaem.c 634 */;
	struct aem_find_instance_resp *cocci_id/* drivers/hwmon/ibmaem.c 630 */;
	u8 cocci_id/* drivers/hwmon/ibmaem.c 523 */;
	struct aem_find_firmware_resp cocci_id/* drivers/hwmon/ibmaem.c 496 */;
	struct aem_find_firmware_req cocci_id/* drivers/hwmon/ibmaem.c 495 */;
	struct aem_ipmi_data *cocci_id/* drivers/hwmon/ibmaem.c 492 */;
	__be64 *cocci_id/* drivers/hwmon/ibmaem.c 416 */;
	u64 *cocci_id/* drivers/hwmon/ibmaem.c 415 */;
	__be32 *cocci_id/* drivers/hwmon/ibmaem.c 411 */;
	u32 *cocci_id/* drivers/hwmon/ibmaem.c 410 */;
	__be16 *cocci_id/* drivers/hwmon/ibmaem.c 406 */;
	u16 *cocci_id/* drivers/hwmon/ibmaem.c 405 */;
	u8 *cocci_id/* drivers/hwmon/ibmaem.c 400 */;
	struct aem_read_sensor_resp *cocci_id/* drivers/hwmon/ibmaem.c 355 */;
	struct aem_read_sensor_req cocci_id/* drivers/hwmon/ibmaem.c 353 */;
	size_t cocci_id/* drivers/hwmon/ibmaem.c 350 */;
	unsigned short cocci_id/* drivers/hwmon/ibmaem.c 315 */;
	struct ipmi_recv_msg *cocci_id/* drivers/hwmon/ibmaem.c 313 */;
	void *cocci_id/* drivers/hwmon/ibmaem.c 313 */;
	struct aem_driver_data cocci_id/* drivers/hwmon/ibmaem.c 242 */;
	int cocci_id/* drivers/hwmon/ibmaem.c 237 */(struct aem_data *data);
	void cocci_id/* drivers/hwmon/ibmaem.c 236 */(struct aem_data *data);
	void cocci_id/* drivers/hwmon/ibmaem.c 234 */(struct ipmi_recv_msg *msg,
						      void *user_msg_data);
	void cocci_id/* drivers/hwmon/ibmaem.c 233 */(int iface);
	void cocci_id/* drivers/hwmon/ibmaem.c 232 */(int iface,
						      struct device *dev);
	struct aem_driver_data {
		struct list_head aem_devices;
		struct ipmi_smi_watcher bmc_events;
		struct ipmi_user_hndl ipmi_hndlrs;
	} cocci_id/* drivers/hwmon/ibmaem.c 226 */;
	struct aem_read_sensor_resp {
		struct aem_iana_id id;
		u8 bytes[0];
	}__packed cocci_id/* drivers/hwmon/ibmaem.c 220 */;
	struct aem_read_sensor_req {
		struct aem_iana_id id;
		u8 module_handle;
		u8 element;
		u8 subcommand;
		u8 reg;
		u8 rx_buf_size;
	}__packed cocci_id/* drivers/hwmon/ibmaem.c 211 */;
	struct aem_find_instance_resp {
		struct aem_iana_id id;
		u8 num_instances;
		u8 major;
		u8 minor;
		u8 module_handle;
		u16 record_id;
	}__packed cocci_id/* drivers/hwmon/ibmaem.c 201 */;
	struct aem_find_instance_req {
		struct aem_iana_id id;
		u8 instance_number;
		__be16 module_type_id;
	}__packed cocci_id/* drivers/hwmon/ibmaem.c 195 */;
	struct aem_find_firmware_resp {
		struct aem_iana_id id;
		u8 num_instances;
	}__packed cocci_id/* drivers/hwmon/ibmaem.c 189 */;
	struct aem_find_firmware_req {
		struct aem_iana_id id;
		u8 rsvd;
		__be16 index;
		__be16 module_type_id;
	}__packed cocci_id/* drivers/hwmon/ibmaem.c 182 */;
	struct aem_iana_id cocci_id/* drivers/hwmon/ibmaem.c 177 */;
	struct aem_iana_id {
		u8 bytes[3];
	} cocci_id/* drivers/hwmon/ibmaem.c 174 */;
	struct aem_data {
		struct list_head list;
		struct device *hwmon_dev;
		struct platform_device *pdev;
		struct mutex lock;
		char valid;
		unsigned long last_updated;
		u8 ver_major;
		u8 ver_minor;
		u8 module_handle;
		int id;
		struct aem_ipmi_data ipmi;
		void (*update)(struct aem_data *data);
		struct aem_read_sensor_resp *rs_resp;
		struct sensor_device_attribute sensors[AEM_NUM_SENSORS];
		u64 energy[AEM_NUM_ENERGY_REGS];
		unsigned long power_period[AEM_NUM_ENERGY_REGS];
		u16 pcap[AEM2_NUM_PCAP_REGS];
		u8 temp[AEM2_NUM_TEMP_REGS];
	} cocci_id/* drivers/hwmon/ibmaem.c 124 */;
	struct aem_rw_sensor_template {
		char *label;
		ssize_t (*show)(struct device *dev,
				struct device_attribute *devattr, char *buf);
		ssize_t (*set)(struct device *dev,
			       struct device_attribute *devattr,
			       const char *buf, size_t count);
		int index;
	} cocci_id/* drivers/hwmon/ibmaem.c 113 */;
	void __exit cocci_id/* drivers/hwmon/ibmaem.c 1080 */;
	int __init cocci_id/* drivers/hwmon/ibmaem.c 1059 */;
	struct aem_ro_sensor_template {
		char *label;
		ssize_t (*show)(struct device *dev,
				struct device_attribute *devattr, char *buf);
		int index;
	} cocci_id/* drivers/hwmon/ibmaem.c 105 */;
	struct aem_data *cocci_id/* drivers/hwmon/ibmaem.c 1046 */;
	int cocci_id/* drivers/hwmon/ibmaem.c 1046 */;
	const struct aem_rw_sensor_template cocci_id/* drivers/hwmon/ibmaem.c 1015 */[];
	const struct aem_ro_sensor_template cocci_id/* drivers/hwmon/ibmaem.c 1009 */[];
}
