cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/power/supply/max77693_charger.c 750 */;
	const struct platform_device_id cocci_id/* drivers/power/supply/max77693_charger.c 744 */[];
	struct max77693_dev *cocci_id/* drivers/power/supply/max77693_charger.c 672 */;
	struct power_supply_config cocci_id/* drivers/power/supply/max77693_charger.c 671 */;
	struct platform_device *cocci_id/* drivers/power/supply/max77693_charger.c 668 */;
	struct device_node *cocci_id/* drivers/power/supply/max77693_charger.c 631 */;
	unsigned int cocci_id/* drivers/power/supply/max77693_charger.c 278 */;
	char *cocci_id/* drivers/power/supply/max77693_charger.c 275 */;
	int cocci_id/* drivers/power/supply/max77693_charger.c 261 */;
	unsigned long cocci_id/* drivers/power/supply/max77693_charger.c 260 */;
	struct max77693_charger *cocci_id/* drivers/power/supply/max77693_charger.c 259 */;
	int (*cocci_id/* drivers/power/supply/max77693_charger.c 257 */)(struct max77693_charger *,
									 unsigned long);
	const char *cocci_id/* drivers/power/supply/max77693_charger.c 256 */;
	struct device_attribute *cocci_id/* drivers/power/supply/max77693_charger.c 256 */;
	size_t cocci_id/* drivers/power/supply/max77693_charger.c 256 */;
	struct device *cocci_id/* drivers/power/supply/max77693_charger.c 255 */;
	ssize_t cocci_id/* drivers/power/supply/max77693_charger.c 255 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/max77693_charger.c 247 */;
	struct regmap *cocci_id/* drivers/power/supply/max77693_charger.c 215 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/max77693_charger.c 212 */;
	enum power_supply_property cocci_id/* drivers/power/supply/max77693_charger.c 211 */;
	struct power_supply *cocci_id/* drivers/power/supply/max77693_charger.c 210 */;
	enum power_supply_property cocci_id/* drivers/power/supply/max77693_charger.c 200 */[];
	struct max77693_charger {
		struct device *dev;
		struct max77693_dev *max77693;
		struct power_supply *charger;
		u32 constant_volt;
		u32 min_system_volt;
		u32 thermal_regulation_temp;
		u32 batttery_overcurrent;
		u32 charge_input_threshold_volt;
	} cocci_id/* drivers/power/supply/max77693_charger.c 20 */;
	int *cocci_id/* drivers/power/supply/max77693_charger.c 125 */;
}
