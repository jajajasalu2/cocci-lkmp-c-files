cocci_test_suite() {
	struct work_struct *cocci_id/* drivers/platform/x86/asus-wireless.c 91 */;
	struct asus_wireless_data cocci_id/* drivers/platform/x86/asus-wireless.c 83 */;
	u64 cocci_id/* drivers/platform/x86/asus-wireless.c 81 */;
	enum led_brightness cocci_id/* drivers/platform/x86/asus-wireless.c 77 */;
	struct led_classdev *cocci_id/* drivers/platform/x86/asus-wireless.c 77 */;
	acpi_string cocci_id/* drivers/platform/x86/asus-wireless.c 66 */;
	union acpi_object cocci_id/* drivers/platform/x86/asus-wireless.c 56 */;
	struct acpi_object_list cocci_id/* drivers/platform/x86/asus-wireless.c 55 */;
	u64 *cocci_id/* drivers/platform/x86/asus-wireless.c 53 */;
	acpi_status cocci_id/* drivers/platform/x86/asus-wireless.c 52 */;
	acpi_handle cocci_id/* drivers/platform/x86/asus-wireless.c 52 */;
	const char *cocci_id/* drivers/platform/x86/asus-wireless.c 52 */;
	const struct acpi_device_id cocci_id/* drivers/platform/x86/asus-wireless.c 45 */[];
	const struct hswc_params cocci_id/* drivers/platform/x86/asus-wireless.c 33 */;
	struct asus_wireless_data {
		struct input_dev *idev;
		struct acpi_device *adev;
		const struct hswc_params *hswc_params;
		struct workqueue_struct *wq;
		struct work_struct led_work;
		struct led_classdev led;
		int led_state;
	} cocci_id/* drivers/platform/x86/asus-wireless.c 23 */;
	struct acpi_driver cocci_id/* drivers/platform/x86/asus-wireless.c 189 */;
	struct hswc_params {
		u8 on;
		u8 off;
		u8 status;
	} cocci_id/* drivers/platform/x86/asus-wireless.c 17 */;
	const struct hswc_params *cocci_id/* drivers/platform/x86/asus-wireless.c 154 */;
	char *cocci_id/* drivers/platform/x86/asus-wireless.c 152 */;
	const struct acpi_device_id *cocci_id/* drivers/platform/x86/asus-wireless.c 129 */;
	struct asus_wireless_data *cocci_id/* drivers/platform/x86/asus-wireless.c 128 */;
	struct acpi_device *cocci_id/* drivers/platform/x86/asus-wireless.c 126 */;
	int cocci_id/* drivers/platform/x86/asus-wireless.c 126 */;
	u32 cocci_id/* drivers/platform/x86/asus-wireless.c 111 */;
	void cocci_id/* drivers/platform/x86/asus-wireless.c 111 */;
}
