cocci_test_suite() {
	struct cdev *cocci_id/* drivers/staging/greybus/fw-management.c 83 */;
	void cocci_id/* drivers/staging/greybus/fw-management.c 715 */;
	struct fw_mgmt cocci_id/* drivers/staging/greybus/fw-management.c 66 */;
	struct kref *cocci_id/* drivers/staging/greybus/fw-management.c 64 */;
	dev_t cocci_id/* drivers/staging/greybus/fw-management.c 59 */;
	struct class *cocci_id/* drivers/staging/greybus/fw-management.c 58 */;
	const struct file_operations cocci_id/* drivers/staging/greybus/fw-management.c 564 */;
	struct gb_bundle *cocci_id/* drivers/staging/greybus/fw-management.c 536 */;
	unsigned long cocci_id/* drivers/staging/greybus/fw-management.c 533 */;
	struct file *cocci_id/* drivers/staging/greybus/fw-management.c 532 */;
	long cocci_id/* drivers/staging/greybus/fw-management.c 532 */;
	unsigned int __user *cocci_id/* drivers/staging/greybus/fw-management.c 493 */;
	struct fw_mgmt_ioc_backend_fw_update cocci_id/* drivers/staging/greybus/fw-management.c 413 */;
	struct fw_mgmt_ioc_intf_load_and_validate cocci_id/* drivers/staging/greybus/fw-management.c 412 */;
	struct fw_mgmt_ioc_get_backend_version cocci_id/* drivers/staging/greybus/fw-management.c 411 */;
	struct fw_mgmt_ioc_get_intf_version cocci_id/* drivers/staging/greybus/fw-management.c 410 */;
	void __user *cocci_id/* drivers/staging/greybus/fw-management.c 408 */;
	unsigned int cocci_id/* drivers/staging/greybus/fw-management.c 407 */;
	struct inode *cocci_id/* drivers/staging/greybus/fw-management.c 386 */;
	struct gb_fw_mgmt_backend_fw_updated_request *cocci_id/* drivers/staging/greybus/fw-management.c 346 */;
	struct gb_connection *cocci_id/* drivers/staging/greybus/fw-management.c 344 */;
	struct gb_operation *cocci_id/* drivers/staging/greybus/fw-management.c 342 */;
	struct gb_fw_mgmt_backend_fw_update_request cocci_id/* drivers/staging/greybus/fw-management.c 301 */;
	char *cocci_id/* drivers/staging/greybus/fw-management.c 299 */;
	struct fw_mgmt *cocci_id/* drivers/staging/greybus/fw-management.c 298 */;
	int cocci_id/* drivers/staging/greybus/fw-management.c 298 */;
	struct gb_fw_mgmt_backend_fw_version_response cocci_id/* drivers/staging/greybus/fw-management.c 247 */;
	struct gb_fw_mgmt_backend_fw_version_request cocci_id/* drivers/staging/greybus/fw-management.c 246 */;
	struct fw_mgmt_ioc_get_backend_version *cocci_id/* drivers/staging/greybus/fw-management.c 243 */;
	struct fw_mgmt {
		struct device *parent;
		struct gb_connection *connection;
		struct kref kref;
		struct list_head node;
		struct ida id_map;
		struct mutex mutex;
		struct completion completion;
		struct cdev cdev;
		struct device *class_device;
		dev_t dev_num;
		unsigned int timeout_jiffies;
		bool disabled;
		bool mode_switch_started;
		bool intf_fw_loaded;
		u8 intf_fw_request_id;
		u8 intf_fw_status;
		u16 intf_fw_major;
		u16 intf_fw_minor;
		u8 backend_fw_request_id;
		u8 backend_fw_status;
	} cocci_id/* drivers/staging/greybus/fw-management.c 23 */;
	struct gb_fw_mgmt_loaded_fw_request *cocci_id/* drivers/staging/greybus/fw-management.c 196 */;
	struct gb_fw_mgmt_load_and_validate_fw_request cocci_id/* drivers/staging/greybus/fw-management.c 142 */;
	u8 cocci_id/* drivers/staging/greybus/fw-management.c 140 */;
	const char *cocci_id/* drivers/staging/greybus/fw-management.c 140 */;
	struct gb_fw_mgmt_interface_fw_version_response cocci_id/* drivers/staging/greybus/fw-management.c 108 */;
	struct fw_mgmt_ioc_get_intf_version *cocci_id/* drivers/staging/greybus/fw-management.c 105 */;
}
