cocci_test_suite() {
	struct find_bat_param cocci_id/* drivers/power/supply/apm_power.c 75 */;
	struct find_bat_param *cocci_id/* drivers/power/supply/apm_power.c 47 */;
	struct device *cocci_id/* drivers/power/supply/apm_power.c 45 */;
	void *cocci_id/* drivers/power/supply/apm_power.c 45 */;
	int cocci_id/* drivers/power/supply/apm_power.c 45 */;
	void __exit cocci_id/* drivers/power/supply/apm_power.c 366 */;
	int __init cocci_id/* drivers/power/supply/apm_power.c 358 */;
	struct find_bat_param {
		struct power_supply *main;
		struct power_supply *bat;
		struct power_supply *max_charge_bat;
		struct power_supply *max_energy_bat;
		union power_supply_propval full;
		int max_charge;
		int max_energy;
	} cocci_id/* drivers/power/supply/apm_power.c 35 */;
	enum apm_source{SOURCE_ENERGY, SOURCE_CHARGE, SOURCE_VOLTAGE,} cocci_id/* drivers/power/supply/apm_power.c 29 */;
	union power_supply_propval cocci_id/* drivers/power/supply/apm_power.c 285 */;
	struct apm_power_info *cocci_id/* drivers/power/supply/apm_power.c 283 */;
	void cocci_id/* drivers/power/supply/apm_power.c 283 */;
	struct power_supply *cocci_id/* drivers/power/supply/apm_power.c 27 */;
	enum power_supply_property cocci_id/* drivers/power/supply/apm_power.c 215 */;
	enum apm_source cocci_id/* drivers/power/supply/apm_power.c 213 */;
}
