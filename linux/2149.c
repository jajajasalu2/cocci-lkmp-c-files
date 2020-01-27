cocci_test_suite() {
	int *cocci_id/* drivers/power/supply/axp20x_battery.c 81 */;
	struct axp20x_batt_ps *cocci_id/* drivers/power/supply/axp20x_battery.c 80 */;
	int cocci_id/* drivers/power/supply/axp20x_battery.c 80 */;
	struct axp20x_batt_ps {
		struct regmap *regmap;
		struct power_supply *batt;
		struct device *dev;
		struct iio_channel *batt_chrg_i;
		struct iio_channel *batt_dischrg_i;
		struct iio_channel *batt_v;
		unsigned int max_ccc;
		const struct axp_data *data;
	} cocci_id/* drivers/power/supply/axp20x_battery.c 68 */;
	struct platform_driver cocci_id/* drivers/power/supply/axp20x_battery.c 636 */;
	struct axp_data {
		int ccc_scale;
		int ccc_offset;
		bool has_fg_valid;
		int (*get_max_voltage)(struct axp20x_batt_ps *batt, int *val);
		int (*set_max_voltage)(struct axp20x_batt_ps *batt, int val);
	} cocci_id/* drivers/power/supply/axp20x_battery.c 60 */;
	struct axp_data *cocci_id/* drivers/power/supply/axp20x_battery.c 593 */;
	struct axp20x_batt_ps cocci_id/* drivers/power/supply/axp20x_battery.c 58 */;
	struct device *cocci_id/* drivers/power/supply/axp20x_battery.c 552 */;
	struct power_supply_battery_info cocci_id/* drivers/power/supply/axp20x_battery.c 551 */;
	struct power_supply_config cocci_id/* drivers/power/supply/axp20x_battery.c 550 */;
	struct platform_device *cocci_id/* drivers/power/supply/axp20x_battery.c 547 */;
	void *cocci_id/* drivers/power/supply/axp20x_battery.c 536 */;
	const struct of_device_id cocci_id/* drivers/power/supply/axp20x_battery.c 533 */[];
	const struct axp_data cocci_id/* drivers/power/supply/axp20x_battery.c 510 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/axp20x_battery.c 500 */;
	enum power_supply_property cocci_id/* drivers/power/supply/axp20x_battery.c 477 */[];
	const union power_supply_propval *cocci_id/* drivers/power/supply/axp20x_battery.c 454 */;
	bool cocci_id/* drivers/power/supply/axp20x_battery.c 411 */;
	struct iio_channel *cocci_id/* drivers/power/supply/axp20x_battery.c 188 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/axp20x_battery.c 185 */;
	enum power_supply_property cocci_id/* drivers/power/supply/axp20x_battery.c 184 */;
	struct power_supply *cocci_id/* drivers/power/supply/axp20x_battery.c 183 */;
}
