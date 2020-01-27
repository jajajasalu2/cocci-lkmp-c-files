cocci_test_suite() {
	struct pmu_battery_dev *cocci_id/* drivers/power/supply/pmu_battery.c 86 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/pmu_battery.c 84 */;
	enum power_supply_property cocci_id/* drivers/power/supply/pmu_battery.c 83 */;
	struct pmu_battery_info *cocci_id/* drivers/power/supply/pmu_battery.c 68 */;
	char *cocci_id/* drivers/power/supply/pmu_battery.c 68 */;
	char *cocci_id/* drivers/power/supply/pmu_battery.c 64 */[];
	struct power_supply *cocci_id/* drivers/power/supply/pmu_battery.c 58 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/pmu_battery.c 50 */;
	enum power_supply_property cocci_id/* drivers/power/supply/pmu_battery.c 46 */[];
	int cocci_id/* drivers/power/supply/pmu_battery.c 206 */;
	void __exit cocci_id/* drivers/power/supply/pmu_battery.c 204 */;
	void cocci_id/* drivers/power/supply/pmu_battery.c 204 */;
	struct power_supply_config cocci_id/* drivers/power/supply/pmu_battery.c 162 */;
	struct pmu_battery_dev {
		struct power_supply *bat;
		struct power_supply_desc bat_desc;
		struct pmu_battery_info *pbi;
		char name[16];
		int propval;
	} *cocci_id/* drivers/power/supply/pmu_battery.c 16 */[PMU_MAX_BATTERIES];
	int __init cocci_id/* drivers/power/supply/pmu_battery.c 143 */;
	struct platform_device *cocci_id/* drivers/power/supply/pmu_battery.c 141 */;
}
