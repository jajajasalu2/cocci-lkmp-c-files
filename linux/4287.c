cocci_test_suite() {
	struct calling_interface_buffer cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 97 */;
	size_t cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 86 */;
	struct wmi_smbios_priv *cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 85 */;
	struct calling_interface_buffer *cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 83 */;
	int cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 83 */;
	acpi_status cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 52 */;
	union acpi_object *cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 51 */;
	struct acpi_buffer cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 48 */;
	struct wmi_smbios_priv {
		struct dell_wmi_smbios_buffer *buf;
		struct list_head list;
		struct wmi_device *wdev;
		struct device *child;
		u32 req_buf_size;
	} cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 30 */;
	void cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 272 */;
	struct wmi_driver cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 252 */;
	const struct dmi_header *cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 243 */;
	struct misc_bios_flags_structure cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 232 */;
	struct misc_bios_flags_structure *cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 231 */;
	const struct wmi_device_id cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 224 */[];
	struct misc_bios_flags_structure {
		struct dmi_header header;
		u16 flags0;
	}__packed cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 22 */;
	unsigned long cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 204 */;
	void *cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 185 */;
	struct wmi_smbios_priv cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 159 */;
	u32 cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 151 */;
	struct wmi_driver *cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 148 */;
	const void *cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 146 */;
	struct wmi_ioctl_buffer *cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 111 */;
	struct wmi_device *cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 110 */;
	unsigned int cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 110 */;
	long cocci_id/* drivers/platform/x86/dell-smbios-wmi.c 110 */;
}
