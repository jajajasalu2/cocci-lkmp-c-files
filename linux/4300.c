cocci_test_suite() {
	int cocci_id/* drivers/platform/x86/huawei-wmi.c 92 */;
	struct platform_device *cocci_id/* drivers/platform/x86/huawei-wmi.c 884 */;
	struct huawei_wmi cocci_id/* drivers/platform/x86/huawei-wmi.c 852 */;
	struct platform_driver cocci_id/* drivers/platform/x86/huawei-wmi.c 839 */;
	const struct wmi_device_id *cocci_id/* drivers/platform/x86/huawei-wmi.c 786 */;
	const struct wmi_device_id cocci_id/* drivers/platform/x86/huawei-wmi.c 778 */[];
	struct input_dev **cocci_id/* drivers/platform/x86/huawei-wmi.c 754 */;
	const struct key_entry cocci_id/* drivers/platform/x86/huawei-wmi.c 75 */[];
	struct input_dev *cocci_id/* drivers/platform/x86/huawei-wmi.c 732 */;
	u32 cocci_id/* drivers/platform/x86/huawei-wmi.c 730 */;
	struct huawei_wmi *cocci_id/* drivers/platform/x86/huawei-wmi.c 73 */;
	const struct key_entry *cocci_id/* drivers/platform/x86/huawei-wmi.c 693 */;
	struct huawei_wmi {
		bool battery_available;
		bool fn_lock_available;
		struct huawei_wmi_debug debug;
		struct input_dev *idev[2];
		struct led_classdev cdev;
		struct device *dev;
		struct mutex wmi_lock;
	} cocci_id/* drivers/platform/x86/huawei-wmi.c 61 */;
	struct seq_file *cocci_id/* drivers/platform/x86/huawei-wmi.c 603 */;
	void *cocci_id/* drivers/platform/x86/huawei-wmi.c 603 */;
	struct huawei_wmi_debug {
		struct dentry *root;
		u64 arg;
	} cocci_id/* drivers/platform/x86/huawei-wmi.c 56 */;
	struct quirk_entry *cocci_id/* drivers/platform/x86/huawei-wmi.c 54 */;
	void cocci_id/* drivers/platform/x86/huawei-wmi.c 507 */;
	struct acpi_battery_hook cocci_id/* drivers/platform/x86/huawei-wmi.c 487 */;
	struct quirk_entry {
		bool battery_reset;
		bool ec_micmute;
		bool report_brightness;
	} cocci_id/* drivers/platform/x86/huawei-wmi.c 48 */;
	struct power_supply *cocci_id/* drivers/platform/x86/huawei-wmi.c 471 */;
	const char *cocci_id/* drivers/platform/x86/huawei-wmi.c 433 */;
	size_t cocci_id/* drivers/platform/x86/huawei-wmi.c 433 */;
	union hwmi_arg {
		u64 cmd;
		u8 args[8];
	} cocci_id/* drivers/platform/x86/huawei-wmi.c 43 */;
	char *cocci_id/* drivers/platform/x86/huawei-wmi.c 387 */;
	struct device_attribute *cocci_id/* drivers/platform/x86/huawei-wmi.c 386 */;
	struct device *cocci_id/* drivers/platform/x86/huawei-wmi.c 385 */;
	ssize_t cocci_id/* drivers/platform/x86/huawei-wmi.c 385 */;
	enum{BATTERY_THRESH_GET=0x00001103, BATTERY_THRESH_SET=0x00001003, FN_LOCK_GET=0x00000604, FN_LOCK_SET=0x00000704, MICMUTE_LED_SET=0x00000b04,} cocci_id/* drivers/platform/x86/huawei-wmi.c 35 */;
	union hwmi_arg cocci_id/* drivers/platform/x86/huawei-wmi.c 344 */;
	u8 cocci_id/* drivers/platform/x86/huawei-wmi.c 323 */[0x100];
	int *cocci_id/* drivers/platform/x86/huawei-wmi.c 321 */;
	struct acpi_object_list cocci_id/* drivers/platform/x86/huawei-wmi.c 265 */;
	union acpi_object cocci_id/* drivers/platform/x86/huawei-wmi.c 264 */[3];
	acpi_handle cocci_id/* drivers/platform/x86/huawei-wmi.c 262 */;
	enum led_brightness cocci_id/* drivers/platform/x86/huawei-wmi.c 257 */;
	struct led_classdev *cocci_id/* drivers/platform/x86/huawei-wmi.c 256 */;
	union acpi_object *cocci_id/* drivers/platform/x86/huawei-wmi.c 175 */;
	struct acpi_buffer cocci_id/* drivers/platform/x86/huawei-wmi.c 173 */;
	u64 cocci_id/* drivers/platform/x86/huawei-wmi.c 170 */;
	u8 *cocci_id/* drivers/platform/x86/huawei-wmi.c 170 */;
	acpi_status cocci_id/* drivers/platform/x86/huawei-wmi.c 149 */;
	struct acpi_buffer *cocci_id/* drivers/platform/x86/huawei-wmi.c 147 */;
	const struct dmi_system_id cocci_id/* drivers/platform/x86/huawei-wmi.c 122 */[];
	struct quirk_entry cocci_id/* drivers/platform/x86/huawei-wmi.c 113 */;
	const struct dmi_system_id *cocci_id/* drivers/platform/x86/huawei-wmi.c 104 */;
	int __init cocci_id/* drivers/platform/x86/huawei-wmi.c 104 */;
}
