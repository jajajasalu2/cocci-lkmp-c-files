cocci_test_suite() {
	u64 cocci_id/* drivers/power/supply/ingenic-battery.c 65 */;
	const int *cocci_id/* drivers/power/supply/ingenic-battery.c 63 */;
	struct power_supply_battery_info *cocci_id/* drivers/power/supply/ingenic-battery.c 29 */;
	struct ingenic_battery *cocci_id/* drivers/power/supply/ingenic-battery.c 28 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/ingenic-battery.c 26 */;
	enum power_supply_property cocci_id/* drivers/power/supply/ingenic-battery.c 25 */;
	struct power_supply *cocci_id/* drivers/power/supply/ingenic-battery.c 24 */;
	int cocci_id/* drivers/power/supply/ingenic-battery.c 24 */;
	struct platform_driver cocci_id/* drivers/power/supply/ingenic-battery.c 173 */;
	const struct of_device_id cocci_id/* drivers/power/supply/ingenic-battery.c 166 */[];
	struct ingenic_battery {
		struct device *dev;
		struct iio_channel *channel;
		struct power_supply_desc desc;
		struct power_supply *battery;
		struct power_supply_battery_info info;
	} cocci_id/* drivers/power/supply/ingenic-battery.c 16 */;
	struct power_supply_desc *cocci_id/* drivers/power/supply/ingenic-battery.c 121 */;
	struct power_supply_config cocci_id/* drivers/power/supply/ingenic-battery.c 120 */;
	struct device *cocci_id/* drivers/power/supply/ingenic-battery.c 118 */;
	struct platform_device *cocci_id/* drivers/power/supply/ingenic-battery.c 116 */;
	enum power_supply_property cocci_id/* drivers/power/supply/ingenic-battery.c 109 */[];
}
