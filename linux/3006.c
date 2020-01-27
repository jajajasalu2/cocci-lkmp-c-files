cocci_test_suite() {
	struct always_present_id {
		struct acpi_device_id hid[2];
		struct x86_cpu_id cpu_ids[2];
		struct dmi_system_id dmi_ids[2];
		const char *uid;
	} cocci_id/* drivers/acpi/x86/utils.c 33 */;
	unsigned int cocci_id/* drivers/acpi/x86/utils.c 115 */;
	bool cocci_id/* drivers/acpi/x86/utils.c 112 */;
	struct acpi_device *cocci_id/* drivers/acpi/x86/utils.c 112 */;
}
