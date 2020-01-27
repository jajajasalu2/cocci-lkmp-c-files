cocci_test_suite() {
	struct ipmi_driver_data cocci_id/* drivers/acpi/acpi_ipmi.c 97 */;
	void cocci_id/* drivers/acpi/acpi_ipmi.c 95 */(struct ipmi_recv_msg *msg,
						       void *user_msg_data);
	void cocci_id/* drivers/acpi/acpi_ipmi.c 94 */(int iface);
	void cocci_id/* drivers/acpi/acpi_ipmi.c 93 */(int iface,
						       struct device *dev);
	struct acpi_ipmi_buffer {
		u8 status;
		u8 length;
		u8 data[ACPI_IPMI_MAX_MSG_LENGTH];
	} cocci_id/* drivers/acpi/acpi_ipmi.c 87 */;
	struct acpi_ipmi_device cocci_id/* drivers/acpi/acpi_ipmi.c 626 */;
	void __exit cocci_id/* drivers/acpi/acpi_ipmi.c 608 */;
	struct acpi_ipmi_msg {
		struct list_head head;
		struct ipmi_addr addr;
		long tx_msgid;
		struct completion tx_complete;
		struct kernel_ipmi_msg tx_message;
		int msg_done;
		u8 data[ACPI_IPMI_MAX_MSG_LENGTH];
		u8 rx_len;
		struct acpi_ipmi_device *device;
		struct kref kref;
	} cocci_id/* drivers/acpi/acpi_ipmi.c 59 */;
	acpi_status cocci_id/* drivers/acpi/acpi_ipmi.c 588 */;
	int __init cocci_id/* drivers/acpi/acpi_ipmi.c 585 */;
	void *cocci_id/* drivers/acpi/acpi_ipmi.c 525 */;
	u32 cocci_id/* drivers/acpi/acpi_ipmi.c 523 */;
	bool cocci_id/* drivers/acpi/acpi_ipmi.c 487 */;
	struct ipmi_smi_info cocci_id/* drivers/acpi/acpi_ipmi.c 440 */;
	struct ipmi_driver_data {
		struct list_head ipmi_devices;
		struct ipmi_smi_watcher bmc_events;
		const struct ipmi_user_hndl ipmi_hndlrs;
		struct mutex ipmi_lock;
		struct acpi_ipmi_device *selected_smi;
	} cocci_id/* drivers/acpi/acpi_ipmi.c 43 */;
	struct ipmi_recv_msg *cocci_id/* drivers/acpi/acpi_ipmi.c 374 */;
	struct acpi_ipmi_msg cocci_id/* drivers/acpi/acpi_ipmi.c 340 */;
	struct acpi_ipmi_device {
		struct list_head head;
		struct list_head tx_msg_list;
		spinlock_t tx_msg_lock;
		acpi_handle handle;
		struct device *dev;
		struct ipmi_user *user_interface;
		int ipmi_ifnum;
		long curr_msgid;
		bool dead;
		struct kref kref;
	} cocci_id/* drivers/acpi/acpi_ipmi.c 26 */;
	unsigned long cocci_id/* drivers/acpi/acpi_ipmi.c 247 */;
	struct acpi_ipmi_buffer *cocci_id/* drivers/acpi/acpi_ipmi.c 245 */;
	struct kernel_ipmi_msg *cocci_id/* drivers/acpi/acpi_ipmi.c 244 */;
	acpi_integer *cocci_id/* drivers/acpi/acpi_ipmi.c 242 */;
	acpi_physical_address cocci_id/* drivers/acpi/acpi_ipmi.c 241 */;
	struct acpi_ipmi_msg *cocci_id/* drivers/acpi/acpi_ipmi.c 240 */;
	int cocci_id/* drivers/acpi/acpi_ipmi.c 240 */;
	struct acpi_ipmi_device *cocci_id/* drivers/acpi/acpi_ipmi.c 156 */;
	void cocci_id/* drivers/acpi/acpi_ipmi.c 156 */;
	struct kref *cocci_id/* drivers/acpi/acpi_ipmi.c 148 */;
	struct ipmi_user *cocci_id/* drivers/acpi/acpi_ipmi.c 115 */;
	acpi_handle cocci_id/* drivers/acpi/acpi_ipmi.c 111 */;
	struct device *cocci_id/* drivers/acpi/acpi_ipmi.c 111 */;
}
