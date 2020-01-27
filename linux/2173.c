cocci_test_suite() {
	struct axp20x_ac_power *cocci_id/* drivers/power/supply/axp20x_ac_power.c 58 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/axp20x_ac_power.c 56 */;
	enum power_supply_property cocci_id/* drivers/power/supply/axp20x_ac_power.c 55 */;
	struct power_supply *cocci_id/* drivers/power/supply/axp20x_ac_power.c 54 */;
	int cocci_id/* drivers/power/supply/axp20x_ac_power.c 54 */;
	irqreturn_t cocci_id/* drivers/power/supply/axp20x_ac_power.c 45 */;
	void *cocci_id/* drivers/power/supply/axp20x_ac_power.c 45 */;
	struct axp20x_ac_power {
		struct regmap *regmap;
		struct power_supply *supply;
		struct iio_channel *acin_v;
		struct iio_channel *acin_i;
	} cocci_id/* drivers/power/supply/axp20x_ac_power.c 38 */;
	struct platform_driver cocci_id/* drivers/power/supply/axp20x_ac_power.c 331 */;
	const struct of_device_id cocci_id/* drivers/power/supply/axp20x_ac_power.c 317 */[];
	const char *const cocci_id/* drivers/power/supply/axp20x_ac_power.c 250 */[];
	const struct axp_data *cocci_id/* drivers/power/supply/axp20x_ac_power.c 249 */;
	struct power_supply_config cocci_id/* drivers/power/supply/axp20x_ac_power.c 247 */;
	struct axp20x_dev *cocci_id/* drivers/power/supply/axp20x_ac_power.c 246 */;
	struct platform_device *cocci_id/* drivers/power/supply/axp20x_ac_power.c 244 */;
	const struct axp_data cocci_id/* drivers/power/supply/axp20x_ac_power.c 229 */;
	struct axp_data {
		const struct power_supply_desc *power_desc;
		bool acin_adc;
	} cocci_id/* drivers/power/supply/axp20x_ac_power.c 224 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/axp20x_ac_power.c 198 */;
	enum power_supply_property cocci_id/* drivers/power/supply/axp20x_ac_power.c 176 */[];
	const union power_supply_propval *cocci_id/* drivers/power/supply/axp20x_ac_power.c 141 */;
}
