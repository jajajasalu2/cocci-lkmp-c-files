cocci_test_suite() {
	const struct key_entry cocci_id/* drivers/platform/x86/dell-wmi.c 78 */[];
	void __exit cocci_id/* drivers/platform/x86/dell-wmi.c 723 */;
	void cocci_id/* drivers/platform/x86/dell-wmi.c 723 */;
	int __init cocci_id/* drivers/platform/x86/dell-wmi.c 705 */;
	struct wmi_driver cocci_id/* drivers/platform/x86/dell-wmi.c 695 */;
	const struct wmi_device_id cocci_id/* drivers/platform/x86/dell-wmi.c 690 */[];
	struct dell_wmi_priv cocci_id/* drivers/platform/x86/dell-wmi.c 674 */;
	const void *cocci_id/* drivers/platform/x86/dell-wmi.c 664 */;
	struct calling_interface_buffer cocci_id/* drivers/platform/x86/dell-wmi.c 648 */;
	struct calling_interface_buffer *cocci_id/* drivers/platform/x86/dell-wmi.c 645 */;
	bool cocci_id/* drivers/platform/x86/dell-wmi.c 643 */;
	int cocci_id/* drivers/platform/x86/dell-wmi.c 643 */;
	struct dell_wmi_priv *cocci_id/* drivers/platform/x86/dell-wmi.c 622 */;
	struct wmi_device *cocci_id/* drivers/platform/x86/dell-wmi.c 620 */;
	const struct key_entry *cocci_id/* drivers/platform/x86/dell-wmi.c 564 */;
	struct key_entry cocci_id/* drivers/platform/x86/dell-wmi.c 546 */;
	struct key_entry *cocci_id/* drivers/platform/x86/dell-wmi.c 516 */;
	struct dell_dmi_results cocci_id/* drivers/platform/x86/dell-wmi.c 515 */;
	const struct dmi_system_id cocci_id/* drivers/platform/x86/dell-wmi.c 51 */[]__initconst;
	u16 cocci_id/* drivers/platform/x86/dell-wmi.c 482 */;
	const struct dell_bios_keymap_entry *cocci_id/* drivers/platform/x86/dell-wmi.c 478 */;
	struct dell_bios_keymap_entry cocci_id/* drivers/platform/x86/dell-wmi.c 459 */;
	struct dell_bios_hotkey_table cocci_id/* drivers/platform/x86/dell-wmi.c 455 */;
	const struct dmi_system_id *cocci_id/* drivers/platform/x86/dell-wmi.c 45 */;
	struct dell_bios_hotkey_table *cocci_id/* drivers/platform/x86/dell-wmi.c 444 */;
	struct dell_dmi_results *cocci_id/* drivers/platform/x86/dell-wmi.c 443 */;
	const struct dmi_header *cocci_id/* drivers/platform/x86/dell-wmi.c 441 */;
	void *cocci_id/* drivers/platform/x86/dell-wmi.c 441 */;
	u32 cocci_id/* drivers/platform/x86/dell-wmi.c 430 */;
	struct dell_wmi_priv {
		struct input_dev *input_dev;
		u32 interface_version;
	} cocci_id/* drivers/platform/x86/dell-wmi.c 40 */;
	acpi_size cocci_id/* drivers/platform/x86/dell-wmi.c 359 */;
	u16 *cocci_id/* drivers/platform/x86/dell-wmi.c 358 */;
	union acpi_object *cocci_id/* drivers/platform/x86/dell-wmi.c 355 */;
	const u16 cocci_id/* drivers/platform/x86/dell-wmi.c 199 */[256];
	struct dell_dmi_results {
		int err;
		int keymap_size;
		struct key_entry *keymap;
	} cocci_id/* drivers/platform/x86/dell-wmi.c 192 */;
	struct dell_bios_hotkey_table {
		struct dmi_header header;
		struct dell_bios_keymap_entry keymap[];
	} cocci_id/* drivers/platform/x86/dell-wmi.c 186 */;
	struct dell_bios_keymap_entry {
		u16 scancode;
		u16 keycode;
	} cocci_id/* drivers/platform/x86/dell-wmi.c 181 */;
}
