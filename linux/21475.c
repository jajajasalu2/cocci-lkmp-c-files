cocci_test_suite() {
	u32 cocci_id/* arch/arm64/kernel/acpi_parking_protocol.c 63 */;
	struct parking_protocol_mailbox __iomem *cocci_id/* arch/arm64/kernel/acpi_parking_protocol.c 62 */;
	struct cpu_mailbox_entry *cocci_id/* arch/arm64/kernel/acpi_parking_protocol.c 61 */;
	unsigned int cocci_id/* arch/arm64/kernel/acpi_parking_protocol.c 59 */;
	int cocci_id/* arch/arm64/kernel/acpi_parking_protocol.c 59 */;
	bool cocci_id/* arch/arm64/kernel/acpi_parking_protocol.c 39 */;
	struct acpi_madt_generic_interrupt *cocci_id/* arch/arm64/kernel/acpi_parking_protocol.c 30 */;
	void __init cocci_id/* arch/arm64/kernel/acpi_parking_protocol.c 29 */;
	struct cpu_mailbox_entry cocci_id/* arch/arm64/kernel/acpi_parking_protocol.c 27 */[NR_CPUS];
	struct cpu_mailbox_entry {
		struct parking_protocol_mailbox __iomem *mailbox;
		phys_addr_t mailbox_addr;
		u8 version;
		u8 gic_cpu_id;
	} cocci_id/* arch/arm64/kernel/acpi_parking_protocol.c 20 */;
	struct parking_protocol_mailbox {
		__le32 cpu_id;
		__le32 reserved;
		__le64 entry_point;
	} cocci_id/* arch/arm64/kernel/acpi_parking_protocol.c 14 */;
	const struct cpu_operations cocci_id/* arch/arm64/kernel/acpi_parking_protocol.c 125 */;
	u64 cocci_id/* arch/arm64/kernel/acpi_parking_protocol.c 115 */;
	void cocci_id/* arch/arm64/kernel/acpi_parking_protocol.c 110 */;
}
