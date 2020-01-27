cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 440 */;
	struct device *cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 375 */;
	acpi_handle cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 374 */;
	struct platform_device *cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 371 */;
	void *cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 310 */;
	u64 *cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 309 */;
	acpi_physical_address cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 308 */;
	u32 cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 307 */;
	acpi_status cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 307 */;
	struct tps68470_pmic_opregion {
		struct mutex lock;
		struct regmap *regmap;
	} cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 29 */;
	struct tps68470_pmic_opregion *cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 282 */;
	unsigned int cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 280 */;
	int (*cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 277 */)(struct regmap *,
								   int, int,
								   u64);
	int (*cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 275 */)(struct regmap *,
								   int, int,
								   u64 *);
	struct regmap *cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 265 */;
	const unsigned int cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 199 */;
	int *cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 199 */;
	const struct tps68470_pmic_table *cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 198 */;
	u64 cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 197 */;
	int cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 197 */;
	struct tps68470_pmic_table {
		u32 address;
		u32 reg;
		u32 bitmask;
	} cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 18 */;
	const struct tps68470_pmic_table cocci_id/* drivers/acpi/pmic/tps68470_pmic.c 122 */[];
}
