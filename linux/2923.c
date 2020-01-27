cocci_test_suite() {
	u64 cocci_id/* drivers/acpi/acpica/tbfadt.c 539 */;
	struct acpi_generic_address cocci_id/* drivers/acpi/acpica/tbfadt.c 498 */;
	struct acpi_fadt_info cocci_id/* drivers/acpi/acpica/tbfadt.c 48 */[];
	struct acpi_table_fadt cocci_id/* drivers/acpi/acpica/tbfadt.c 471 */;
	u8 cocci_id/* drivers/acpi/acpica/tbfadt.c 444 */;
	u32 cocci_id/* drivers/acpi/acpica/tbfadt.c 443 */;
	struct acpi_generic_address *cocci_id/* drivers/acpi/acpica/tbfadt.c 442 */;
	const char *cocci_id/* drivers/acpi/acpica/tbfadt.c 441 */;
	void cocci_id/* drivers/acpi/acpica/tbfadt.c 439 */;
	struct acpi_table_header *cocci_id/* drivers/acpi/acpica/tbfadt.c 354 */;
	struct acpi_fadt_info {
		const char *name;
		u16 address64;
		u16 address32;
		u16 length;
		u8 default_length;
		u8 flags;
	} cocci_id/* drivers/acpi/acpica/tbfadt.c 33 */;
	acpi_physical_address cocci_id/* drivers/acpi/acpica/tbfadt.c 313 */;
	acpi_status cocci_id/* drivers/acpi/acpica/tbfadt.c 281 */;
	struct acpi_table_desc *cocci_id/* drivers/acpi/acpica/tbfadt.c 280 */;
	u64 cocci_id/* drivers/acpi/acpica/tbfadt.c 28 */(char *register_name,
							  u32 address32,
							  u64 address64);
	void cocci_id/* drivers/acpi/acpica/tbfadt.c 24 */(void);
	char *cocci_id/* drivers/acpi/acpica/tbfadt.c 229 */;
	void cocci_id/* drivers/acpi/acpica/tbfadt.c 18 */(struct acpi_generic_address *generic_address,
							   u8 space_id,
							   u8 byte_width,
							   u64 address,
							   const char *register_name,
							   u8 flags);
	struct acpi_fadt_pm_info cocci_id/* drivers/acpi/acpica/tbfadt.c 137 */;
	struct acpi_fadt_pm_info cocci_id/* drivers/acpi/acpica/tbfadt.c 118 */[];
	struct acpi_fadt_pm_info {
		struct acpi_generic_address *target;
		u16 source;
		u8 register_num;
	} cocci_id/* drivers/acpi/acpica/tbfadt.c 111 */;
	struct acpi_fadt_info cocci_id/* drivers/acpi/acpica/tbfadt.c 107 */;
}
