cocci_test_suite() {
	void *cocci_id/* drivers/acpi/pmic/intel_pmic.c 52 */;
	acpi_physical_address cocci_id/* drivers/acpi/pmic/intel_pmic.c 51 */;
	u64 *cocci_id/* drivers/acpi/pmic/intel_pmic.c 51 */;
	u32 cocci_id/* drivers/acpi/pmic/intel_pmic.c 50 */;
	int *cocci_id/* drivers/acpi/pmic/intel_pmic.c 35 */;
	struct pmic_table *cocci_id/* drivers/acpi/pmic/intel_pmic.c 34 */;
	u16 cocci_id/* drivers/acpi/pmic/intel_pmic.c 339 */;
	struct intel_pmic_opregion *cocci_id/* drivers/acpi/pmic/intel_pmic.c 256 */;
	acpi_status cocci_id/* drivers/acpi/pmic/intel_pmic.c 255 */;
	struct intel_pmic_opregion_data *cocci_id/* drivers/acpi/pmic/intel_pmic.c 253 */;
	struct regmap *cocci_id/* drivers/acpi/pmic/intel_pmic.c 252 */;
	acpi_handle cocci_id/* drivers/acpi/pmic/intel_pmic.c 251 */;
	struct device *cocci_id/* drivers/acpi/pmic/intel_pmic.c 251 */;
	int cocci_id/* drivers/acpi/pmic/intel_pmic.c 251 */;
	struct intel_pmic_opregion {
		struct mutex lock;
		struct acpi_lpat_conversion_table *lpat_table;
		struct regmap *regmap;
		struct intel_pmic_opregion_data *data;
		struct intel_pmic_regs_handler_ctx ctx;
	} cocci_id/* drivers/acpi/pmic/intel_pmic.c 24 */;
	struct intel_pmic_regs_handler_ctx {
		unsigned int val;
		u16 addr;
	} cocci_id/* drivers/acpi/pmic/intel_pmic.c 19 */;
	bool cocci_id/* drivers/acpi/pmic/intel_pmic.c 158 */;
}
