cocci_test_suite() {
	enum intel_hid_dsm_fn_codes{INTEL_HID_DSM_FN_INVALID, INTEL_HID_DSM_BTNL_FN, INTEL_HID_DSM_HDMM_FN, INTEL_HID_DSM_HDSM_FN, INTEL_HID_DSM_HDEM_FN, INTEL_HID_DSM_BTNS_FN, INTEL_HID_DSM_BTNE_FN, INTEL_HID_DSM_HEBC_V1_FN, INTEL_HID_DSM_VGBS_FN, INTEL_HID_DSM_HEBC_V2_FN, INTEL_HID_DSM_FN_MAX,} cocci_id/* drivers/platform/x86/intel-hid.c 91 */;
	struct intel_hid_priv {
		struct input_dev *input_dev;
		struct input_dev *array;
		bool wakeup_mode;
	} cocci_id/* drivers/platform/x86/intel-hid.c 83 */;
	const struct dmi_system_id cocci_id/* drivers/platform/x86/intel-hid.c 65 */[];
	void __exit cocci_id/* drivers/platform/x86/intel-hid.c 583 */;
	int __init cocci_id/* drivers/platform/x86/intel-hid.c 573 */;
	struct acpi_device *cocci_id/* drivers/platform/x86/intel-hid.c 560 */;
	const struct acpi_device_id *cocci_id/* drivers/platform/x86/intel-hid.c 559 */;
	u32 cocci_id/* drivers/platform/x86/intel-hid.c 557 */;
	void **cocci_id/* drivers/platform/x86/intel-hid.c 557 */;
	void *cocci_id/* drivers/platform/x86/intel-hid.c 557 */;
	acpi_status __init cocci_id/* drivers/platform/x86/intel-hid.c 556 */;
	struct platform_driver cocci_id/* drivers/platform/x86/intel-hid.c 534 */;
	const struct key_entry cocci_id/* drivers/platform/x86/intel-hid.c 51 */[];
	unsigned long long cocci_id/* drivers/platform/x86/intel-hid.c 414 */;
	acpi_handle cocci_id/* drivers/platform/x86/intel-hid.c 413 */;
	bool cocci_id/* drivers/platform/x86/intel-hid.c 411 */;
	struct platform_device *cocci_id/* drivers/platform/x86/intel-hid.c 411 */;
	int cocci_id/* drivers/platform/x86/intel-hid.c 321 */;
	const struct dev_pm_ops cocci_id/* drivers/platform/x86/intel-hid.c 292 */;
	acpi_status cocci_id/* drivers/platform/x86/intel-hid.c 236 */;
	struct intel_hid_priv *cocci_id/* drivers/platform/x86/intel-hid.c 233 */;
	struct device *cocci_id/* drivers/platform/x86/intel-hid.c 231 */;
	void cocci_id/* drivers/platform/x86/intel-hid.c 231 */;
	const struct acpi_device_id cocci_id/* drivers/platform/x86/intel-hid.c 21 */[];
	char *cocci_id/* drivers/platform/x86/intel-hid.c 168 */;
	union acpi_object *cocci_id/* drivers/platform/x86/intel-hid.c 166 */;
	unsigned long long *cocci_id/* drivers/platform/x86/intel-hid.c 164 */;
	enum intel_hid_dsm_fn_codes cocci_id/* drivers/platform/x86/intel-hid.c 163 */;
	guid_t cocci_id/* drivers/platform/x86/intel-hid.c 119 */;
	const char *cocci_id/* drivers/platform/x86/intel-hid.c 105 */[INTEL_HID_DSM_FN_MAX];
}
