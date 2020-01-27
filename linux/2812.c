cocci_test_suite() {
	void cocci_id/* drivers/acpi/acpica/nsrepair2.c 912 */;
	void cocci_id/* drivers/acpi/acpica/nsrepair2.c 87 */(union acpi_operand_object **elements,
							      u32 count,
							      u32 index,
							      u8 sort_direction);
	void cocci_id/* drivers/acpi/acpica/nsrepair2.c 84 */(union acpi_operand_object *obj_desc,
							      u32 index);
	union acpi_operand_object **cocci_id/* drivers/acpi/acpica/nsrepair2.c 767 */;
	u8 cocci_id/* drivers/acpi/acpica/nsrepair2.c 764 */;
	char *cocci_id/* drivers/acpi/acpica/nsrepair2.c 764 */;
	u32 cocci_id/* drivers/acpi/acpica/nsrepair2.c 761 */;
	union acpi_operand_object *cocci_id/* drivers/acpi/acpica/nsrepair2.c 760 */;
	struct acpi_evaluate_info *cocci_id/* drivers/acpi/acpica/nsrepair2.c 759 */;
	acpi_status cocci_id/* drivers/acpi/acpica/nsrepair2.c 758 */;
	acpi_status cocci_id/* drivers/acpi/acpica/nsrepair2.c 71 */(struct acpi_evaluate_info *info,
								     union acpi_operand_object *return_object,
								     u32 start_index,
								     u32 expected_count,
								     u32 sort_index,
								     u8 sort_direction,
								     char *sort_key_name);
	int cocci_id/* drivers/acpi/acpica/nsrepair2.c 549 */;
	char cocci_id/* drivers/acpi/acpica/nsrepair2.c 549 */;
	acpi_status cocci_id/* drivers/acpi/acpica/nsrepair2.c 39 */(struct acpi_evaluate_info *info,
								     union acpi_operand_object **return_object_ptr);
	const struct acpi_repair_info *cocci_id/* drivers/acpi/acpica/nsrepair2.c 35 */(struct acpi_namespace_node *node);
	u16 cocci_id/* drivers/acpi/acpica/nsrepair2.c 344 */;
	struct acpi_repair_info {
		char name[ACPI_NAMESEG_SIZE];
		acpi_repair_function repair_function;
	} cocci_id/* drivers/acpi/acpica/nsrepair2.c 27 */;
	u32 *cocci_id/* drivers/acpi/acpica/nsrepair2.c 254 */;
	u8 *cocci_id/* drivers/acpi/acpica/nsrepair2.c 253 */;
	acpi_status (*cocci_id/* drivers/acpi/acpica/nsrepair2.c 23 */)(struct acpi_evaluate_info *info,
									union acpi_operand_object **return_object_ptr);
	const struct acpi_repair_info *cocci_id/* drivers/acpi/acpica/nsrepair2.c 155 */;
	struct acpi_namespace_node *cocci_id/* drivers/acpi/acpica/nsrepair2.c 151 */;
	const struct acpi_repair_info cocci_id/* drivers/acpi/acpica/nsrepair2.c 114 */[];
}
