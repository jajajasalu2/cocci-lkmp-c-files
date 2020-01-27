cocci_test_suite() {
	struct power_supply_desc *cocci_id/* drivers/power/supply/lt3651-charger.c 98 */;
	struct power_supply_config cocci_id/* drivers/power/supply/lt3651-charger.c 96 */;
	struct platform_device *cocci_id/* drivers/power/supply/lt3651-charger.c 94 */;
	enum power_supply_property cocci_id/* drivers/power/supply/lt3651-charger.c 88 */[];
	struct lt3651_charger *cocci_id/* drivers/power/supply/lt3651-charger.c 44 */;
	enum power_supply_property cocci_id/* drivers/power/supply/lt3651-charger.c 42 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/lt3651-charger.c 42 */;
	struct power_supply *cocci_id/* drivers/power/supply/lt3651-charger.c 41 */;
	int cocci_id/* drivers/power/supply/lt3651-charger.c 41 */;
	irqreturn_t cocci_id/* drivers/power/supply/lt3651-charger.c 26 */;
	void *cocci_id/* drivers/power/supply/lt3651-charger.c 26 */;
	struct platform_driver cocci_id/* drivers/power/supply/lt3651-charger.c 194 */;
	const struct of_device_id cocci_id/* drivers/power/supply/lt3651-charger.c 187 */[];
	struct lt3651_charger {
		struct power_supply *charger;
		struct power_supply_desc charger_desc;
		struct gpio_desc *acpr_gpio;
		struct gpio_desc *fault_gpio;
		struct gpio_desc *chrg_gpio;
	} cocci_id/* drivers/power/supply/lt3651-charger.c 18 */;
}
