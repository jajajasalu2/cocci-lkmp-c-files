cocci_test_suite() {
	struct acpi_table_header **cocci_id/* drivers/char/tpm/eventlog/acpi.c 66 */;
	struct tpm_bios_log *cocci_id/* drivers/char/tpm/eventlog/acpi.c 51 */;
	u64 cocci_id/* drivers/char/tpm/eventlog/acpi.c 50 */;
	void __iomem *cocci_id/* drivers/char/tpm/eventlog/acpi.c 49 */;
	acpi_status cocci_id/* drivers/char/tpm/eventlog/acpi.c 48 */;
	struct acpi_tcpa *cocci_id/* drivers/char/tpm/eventlog/acpi.c 47 */;
	struct tpm_chip *cocci_id/* drivers/char/tpm/eventlog/acpi.c 45 */;
	int cocci_id/* drivers/char/tpm/eventlog/acpi.c 45 */;
	struct acpi_tcpa {
		struct acpi_table_header hdr;
		u16 platform_class;
		union {
			struct client_hdr {
				u32 log_max_len __packed;
				u64 log_start_addr __packed;
			} client;
			struct server_hdr {
				u16 reserved;
				u64 log_max_len __packed;
				u64 log_start_addr __packed;
			} server;
		};
	} cocci_id/* drivers/char/tpm/eventlog/acpi.c 28 */;
}
