cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/platform/x86/wmi.c 98 */;
	const struct acpi_device_id cocci_id/* drivers/platform/x86/wmi.c 91 */[];
	const struct file_operations cocci_id/* drivers/platform/x86/wmi.c 909 */;
	int cocci_id/* drivers/platform/x86/wmi.c 89 */(struct platform_device *device);
	struct wmi_ioctl_buffer *cocci_id/* drivers/platform/x86/wmi.c 845 */;
	struct wmi_ioctl_buffer __user *cocci_id/* drivers/platform/x86/wmi.c 842 */;
	unsigned long cocci_id/* drivers/platform/x86/wmi.c 840 */;
	long cocci_id/* drivers/platform/x86/wmi.c 840 */;
	loff_t *cocci_id/* drivers/platform/x86/wmi.c 831 */;
	size_t cocci_id/* drivers/platform/x86/wmi.c 831 */;
	char __user *cocci_id/* drivers/platform/x86/wmi.c 830 */;
	struct inode *cocci_id/* drivers/platform/x86/wmi.c 809 */;
	struct file *cocci_id/* drivers/platform/x86/wmi.c 809 */;
	struct device_driver *cocci_id/* drivers/platform/x86/wmi.c 786 */;
	struct kobj_uevent_env *cocci_id/* drivers/platform/x86/wmi.c 766 */;
	unsigned int cocci_id/* drivers/platform/x86/wmi.c 724 */;
	struct attribute *cocci_id/* drivers/platform/x86/wmi.c 710 */[];
	struct device_attribute *cocci_id/* drivers/platform/x86/wmi.c 701 */;
	char *cocci_id/* drivers/platform/x86/wmi.c 701 */;
	ssize_t cocci_id/* drivers/platform/x86/wmi.c 700 */;
	struct wmi_device cocci_id/* drivers/platform/x86/wmi.c 667 */;
	struct wmi_device *cocci_id/* drivers/platform/x86/wmi.c 665 */;
	struct wmi_block cocci_id/* drivers/platform/x86/wmi.c 662 */;
	struct wmi_block {
		struct wmi_device dev;
		struct list_head list;
		struct guid_block gblock;
		struct miscdevice char_dev;
		struct mutex char_mutex;
		struct acpi_device *acpi_device;
		wmi_notify_handler handler;
		void *handler_data;
		u64 req_buf_size;
		bool read_takes_no_args;
	} cocci_id/* drivers/platform/x86/wmi.c 54 */;
	wmi_notify_handler cocci_id/* drivers/platform/x86/wmi.c 518 */;
	union acpi_object cocci_id/* drivers/platform/x86/wmi.c 412 */[2];
	struct guid_block {
		char guid[16];
		union {
			char object_id[2];
			struct {
				unsigned char notify_id;
				unsigned char reserved;
			};
		};
		u8 instance_count;
		u8 flags;
	} cocci_id/* drivers/platform/x86/wmi.c 41 */;
	char cocci_id/* drivers/platform/x86/wmi.c 307 */[5];
	union acpi_object cocci_id/* drivers/platform/x86/wmi.c 306 */[1];
	struct acpi_object_list cocci_id/* drivers/platform/x86/wmi.c 305 */;
	acpi_handle cocci_id/* drivers/platform/x86/wmi.c 303 */;
	struct guid_block *cocci_id/* drivers/platform/x86/wmi.c 302 */;
	struct acpi_buffer *cocci_id/* drivers/platform/x86/wmi.c 300 */;
	u8 cocci_id/* drivers/platform/x86/wmi.c 299 */;
	acpi_status cocci_id/* drivers/platform/x86/wmi.c 299 */;
	struct wmi_block *cocci_id/* drivers/platform/x86/wmi.c 299 */;
	union acpi_object cocci_id/* drivers/platform/x86/wmi.c 259 */[3];
	const struct acpi_buffer *cocci_id/* drivers/platform/x86/wmi.c 230 */;
	struct acpi_device_info *cocci_id/* drivers/platform/x86/wmi.c 157 */;
	struct acpi_device_info **cocci_id/* drivers/platform/x86/wmi.c 155 */;
	void __exit cocci_id/* drivers/platform/x86/wmi.c 1466 */;
	void cocci_id/* drivers/platform/x86/wmi.c 1466 */;
	int __init cocci_id/* drivers/platform/x86/wmi.c 1434 */;
	struct module *cocci_id/* drivers/platform/x86/wmi.c 1419 */;
	struct wmi_driver *cocci_id/* drivers/platform/x86/wmi.c 1418 */;
	int __must_check cocci_id/* drivers/platform/x86/wmi.c 1418 */;
	struct device *cocci_id/* drivers/platform/x86/wmi.c 1358 */;
	struct acpi_device *cocci_id/* drivers/platform/x86/wmi.c 1357 */;
	struct platform_device *cocci_id/* drivers/platform/x86/wmi.c 1355 */;
	const struct wmi_device_id *cocci_id/* drivers/platform/x86/wmi.c 135 */;
	union acpi_object *cocci_id/* drivers/platform/x86/wmi.c 1321 */;
	const void *cocci_id/* drivers/platform/x86/wmi.c 132 */;
	struct wmi_driver cocci_id/* drivers/platform/x86/wmi.c 1304 */;
	struct acpi_buffer cocci_id/* drivers/platform/x86/wmi.c 1300 */;
	bool cocci_id/* drivers/platform/x86/wmi.c 1278 */;
	u64 cocci_id/* drivers/platform/x86/wmi.c 1252 */;
	int cocci_id/* drivers/platform/x86/wmi.c 1238 */;
	void *cocci_id/* drivers/platform/x86/wmi.c 1236 */;
	u64 *cocci_id/* drivers/platform/x86/wmi.c 1235 */;
	u32 cocci_id/* drivers/platform/x86/wmi.c 1234 */;
	acpi_physical_address cocci_id/* drivers/platform/x86/wmi.c 1234 */;
	struct guid_block cocci_id/* drivers/platform/x86/wmi.c 1167 */;
	const struct guid_block *cocci_id/* drivers/platform/x86/wmi.c 1146 */;
	uuid_le cocci_id/* drivers/platform/x86/wmi.c 113 */;
	const u8 *cocci_id/* drivers/platform/x86/wmi.c 1119 */;
	const char *cocci_id/* drivers/platform/x86/wmi.c 111 */;
	struct wmi_block **cocci_id/* drivers/platform/x86/wmi.c 111 */;
	const struct device_type cocci_id/* drivers/platform/x86/wmi.c 1028 */;
	struct bus_type cocci_id/* drivers/platform/x86/wmi.c 1007 */;
	struct class cocci_id/* drivers/platform/x86/wmi.c 1003 */;
}
