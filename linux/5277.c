cocci_test_suite() {
	struct ata_eh_context *cocci_id/* drivers/ata/libata-acpi.c 981 */;
	pm_message_t cocci_id/* drivers/ata/libata-acpi.c 956 */;
	bool cocci_id/* drivers/ata/libata-acpi.c 874 */;
	u8 *cocci_id/* drivers/ata/libata-acpi.c 788 */;
	union acpi_object cocci_id/* drivers/ata/libata-acpi.c 776 */[1];
	struct acpi_object_list cocci_id/* drivers/ata/libata-acpi.c 775 */;
	struct ata_acpi_gtf *cocci_id/* drivers/ata/libata-acpi.c 728 */;
	int *cocci_id/* drivers/ata/libata-acpi.c 726 */;
	struct ata_link *cocci_id/* drivers/ata/libata-acpi.c 72 */;
	char cocci_id/* drivers/ata/libata-acpi.c 654 */[60];
	const char *cocci_id/* drivers/ata/libata-acpi.c 652 */;
	struct ata_taskfile cocci_id/* drivers/ata/libata-acpi.c 650 */;
	const struct ata_taskfile *cocci_id/* drivers/ata/libata-acpi.c 567 */;
	struct ata_taskfile *cocci_id/* drivers/ata/libata-acpi.c 551 */;
	const struct ata_acpi_gtf *cocci_id/* drivers/ata/libata-acpi.c 550 */;
	unsigned long cocci_id/* drivers/ata/libata-acpi.c 536 */;
	const struct ata_acpi_gtm *cocci_id/* drivers/ata/libata-acpi.c 531 */;
	struct ata_acpi_hotplug_context cocci_id/* drivers/ata/libata-acpi.c 50 */;
	u8 cocci_id/* drivers/ata/libata-acpi.c 497 */;
	void *cocci_id/* drivers/ata/libata-acpi.c 466 */;
	unsigned long long cocci_id/* drivers/ata/libata-acpi.c 443 */;
	struct ata_acpi_hotplug_context {
		struct acpi_hotplug_context hp;
		union {
			struct ata_port *ap;
			struct ata_device *dev;
		} data;
	} cocci_id/* drivers/ata/libata-acpi.c 42 */;
	struct ata_acpi_gtf **cocci_id/* drivers/ata/libata-acpi.c 403 */;
	union acpi_object cocci_id/* drivers/ata/libata-acpi.c 352 */[3];
	struct ata_acpi_gtf {
		u8 tf[REGS_PER_GTF];
	}__packed cocci_id/* drivers/ata/libata-acpi.c 32 */;
	struct ata_acpi_gtm cocci_id/* drivers/ata/libata-acpi.c 319 */;
	acpi_handle cocci_id/* drivers/ata/libata-acpi.c 293 */;
	acpi_status cocci_id/* drivers/ata/libata-acpi.c 291 */;
	union acpi_object *cocci_id/* drivers/ata/libata-acpi.c 290 */;
	struct acpi_buffer cocci_id/* drivers/ata/libata-acpi.c 289 */;
	struct ata_acpi_gtm *cocci_id/* drivers/ata/libata-acpi.c 287 */;
	struct ata_host *cocci_id/* drivers/ata/libata-acpi.c 258 */;
	unsigned int cocci_id/* drivers/ata/libata-acpi.c 24 */;
	u64 cocci_id/* drivers/ata/libata-acpi.c 213 */;
	struct ata_acpi_hotplug_context *cocci_id/* drivers/ata/libata-acpi.c 212 */;
	struct ata_port *cocci_id/* drivers/ata/libata-acpi.c 208 */;
	struct ata_device *cocci_id/* drivers/ata/libata-acpi.c 206 */;
	void cocci_id/* drivers/ata/libata-acpi.c 167 */;
	char *cocci_id/* drivers/ata/libata-acpi.c 153 */[];
	char cocci_id/* drivers/ata/libata-acpi.c 152 */[20];
	struct kobject *cocci_id/* drivers/ata/libata-acpi.c 151 */;
	u32 cocci_id/* drivers/ata/libata-acpi.c 142 */;
	struct acpi_device *cocci_id/* drivers/ata/libata-acpi.c 142 */;
	int cocci_id/* drivers/ata/libata-acpi.c 142 */;
	struct ata_eh_info *cocci_id/* drivers/ata/libata-acpi.c 103 */;
}
