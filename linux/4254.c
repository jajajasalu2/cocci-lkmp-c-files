cocci_test_suite() {
	char cocci_id/* drivers/platform/x86/asus-laptop.c 854 */[16];
	struct backlight_properties cocci_id/* drivers/platform/x86/asus-laptop.c 807 */;
	struct backlight_device *cocci_id/* drivers/platform/x86/asus-laptop.c 806 */;
	const struct backlight_ops cocci_id/* drivers/platform/x86/asus-laptop.c 789 */;
	struct asus_led cocci_id/* drivers/platform/x86/asus-laptop.c 635 */;
	struct asus_led *cocci_id/* drivers/platform/x86/asus-laptop.c 635 */;
	enum led_brightness cocci_id/* drivers/platform/x86/asus-laptop.c 633 */;
	struct led_classdev *cocci_id/* drivers/platform/x86/asus-laptop.c 633 */;
	struct work_struct *cocci_id/* drivers/platform/x86/asus-laptop.c 625 */;
	union acpi_object cocci_id/* drivers/platform/x86/asus-laptop.c 584 */;
	struct acpi_object_list cocci_id/* drivers/platform/x86/asus-laptop.c 583 */;
	short cocci_id/* drivers/platform/x86/asus-laptop.c 441 */;
	bool cocci_id/* drivers/platform/x86/asus-laptop.c 414 */;
	char *cocci_id/* drivers/platform/x86/asus-laptop.c 397 */;
	acpi_status cocci_id/* drivers/platform/x86/asus-laptop.c 391 */;
	acpi_handle *cocci_id/* drivers/platform/x86/asus-laptop.c 389 */;
	acpi_handle cocci_id/* drivers/platform/x86/asus-laptop.c 388 */;
	const char *cocci_id/* drivers/platform/x86/asus-laptop.c 388 */;
	int cocci_id/* drivers/platform/x86/asus-laptop.c 388 */;
	struct acpi_buffer *cocci_id/* drivers/platform/x86/asus-laptop.c 362 */;
	const struct key_entry cocci_id/* drivers/platform/x86/asus-laptop.c 281 */[];
	struct asus_laptop {
		char *name;
		struct acpi_table_header *dsdt_info;
		struct platform_device *platform_device;
		struct acpi_device *device;
		struct backlight_device *backlight_device;
		struct input_dev *inputdev;
		struct key_entry *keymap;
		struct input_dev *pega_accel_poll;
		struct asus_led wled;
		struct asus_led bled;
		struct asus_led mled;
		struct asus_led tled;
		struct asus_led rled;
		struct asus_led pled;
		struct asus_led gled;
		struct asus_led kled;
		struct workqueue_struct *led_workqueue;
		int wled_type;
		int bled_type;
		int wireless_status;
		bool have_rsts;
		bool is_pega_lucid;
		bool pega_acc_live;
		int pega_acc_x;
		int pega_acc_y;
		int pega_acc_z;
		struct asus_rfkill wlan;
		struct asus_rfkill bluetooth;
		struct asus_rfkill wwan;
		struct asus_rfkill wimax;
		struct asus_rfkill gps;
		acpi_handle handle;
		u32 ledd_status;
		u8 light_level;
		u8 light_switch;
		u16 event_count[128];
	} cocci_id/* drivers/platform/x86/asus-laptop.c 236 */;
	struct asus_rfkill {
		int control_id;
		struct rfkill *rfkill;
		struct asus_laptop *asus;
	} cocci_id/* drivers/platform/x86/asus-laptop.c 225 */;
	struct asus_led {
		int wk;
		struct work_struct work;
		struct led_classdev led;
		struct asus_laptop *asus;
		const char *method;
	} cocci_id/* drivers/platform/x86/asus-laptop.c 214 */;
	void __exit cocci_id/* drivers/platform/x86/asus-laptop.c 1971 */;
	int __init cocci_id/* drivers/platform/x86/asus-laptop.c 1947 */;
	struct acpi_driver cocci_id/* drivers/platform/x86/asus-laptop.c 1934 */;
	const struct acpi_device_id cocci_id/* drivers/platform/x86/asus-laptop.c 1927 */[];
	struct asus_laptop cocci_id/* drivers/platform/x86/asus-laptop.c 1840 */;
	struct asus_laptop *cocci_id/* drivers/platform/x86/asus-laptop.c 1835 */;
	struct acpi_device *cocci_id/* drivers/platform/x86/asus-laptop.c 1833 */;
	uint cocci_id/* drivers/platform/x86/asus-laptop.c 1715 */;
	union acpi_object *cocci_id/* drivers/platform/x86/asus-laptop.c 1686 */;
	struct acpi_buffer cocci_id/* drivers/platform/x86/asus-laptop.c 1685 */;
	struct platform_driver cocci_id/* drivers/platform/x86/asus-laptop.c 1672 */;
	const struct attribute_group cocci_id/* drivers/platform/x86/asus-laptop.c 1634 */;
	struct device cocci_id/* drivers/platform/x86/asus-laptop.c 1579 */;
	struct device *cocci_id/* drivers/platform/x86/asus-laptop.c 1579 */;
	struct attribute *cocci_id/* drivers/platform/x86/asus-laptop.c 1576 */;
	umode_t cocci_id/* drivers/platform/x86/asus-laptop.c 1575 */;
	struct kobject *cocci_id/* drivers/platform/x86/asus-laptop.c 1575 */;
	struct attribute *cocci_id/* drivers/platform/x86/asus-laptop.c 1560 */[];
	u16 cocci_id/* drivers/platform/x86/asus-laptop.c 1528 */;
	u32 cocci_id/* drivers/platform/x86/asus-laptop.c 1525 */;
	void cocci_id/* drivers/platform/x86/asus-laptop.c 1525 */;
	struct input_dev *cocci_id/* drivers/platform/x86/asus-laptop.c 1484 */;
	const struct rfkill_ops *cocci_id/* drivers/platform/x86/asus-laptop.c 1350 */;
	struct asus_rfkill *cocci_id/* drivers/platform/x86/asus-laptop.c 1311 */;
	const struct rfkill_ops cocci_id/* drivers/platform/x86/asus-laptop.c 1305 */;
	void *cocci_id/* drivers/platform/x86/asus-laptop.c 1298 */;
	unsigned long long cocci_id/* drivers/platform/x86/asus-laptop.c 1248 */;
	int *cocci_id/* drivers/platform/x86/asus-laptop.c 1213 */;
	size_t cocci_id/* drivers/platform/x86/asus-laptop.c 1037 */;
	struct device_attribute *cocci_id/* drivers/platform/x86/asus-laptop.c 1027 */;
	ssize_t cocci_id/* drivers/platform/x86/asus-laptop.c 1027 */;
}