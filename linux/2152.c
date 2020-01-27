cocci_test_suite() {
	struct gpio_desc *cocci_id/* drivers/power/supply/gpio-charger.c 96 */;
	struct device *cocci_id/* drivers/power/supply/gpio-charger.c 95 */;
	void *cocci_id/* drivers/power/supply/gpio-charger.c 95 */;
	int cocci_id/* drivers/power/supply/gpio-charger.c 95 */;
	const char *cocci_id/* drivers/power/supply/gpio-charger.c 70 */;
	enum power_supply_type cocci_id/* drivers/power/supply/gpio-charger.c 68 */;
	struct gpio_charger *cocci_id/* drivers/power/supply/gpio-charger.c 49 */;
	enum power_supply_property cocci_id/* drivers/power/supply/gpio-charger.c 47 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/gpio-charger.c 47 */;
	struct power_supply *cocci_id/* drivers/power/supply/gpio-charger.c 46 */;
	irqreturn_t cocci_id/* drivers/power/supply/gpio-charger.c 32 */;
	struct platform_driver cocci_id/* drivers/power/supply/gpio-charger.c 260 */;
	const struct of_device_id cocci_id/* drivers/power/supply/gpio-charger.c 254 */[];
	struct gpio_charger {
		unsigned int irq;
		unsigned int charge_status_irq;
		bool wakeup_enabled;
		struct power_supply *charger;
		struct power_supply_desc charger_desc;
		struct gpio_desc *gpiod;
		struct gpio_desc *charge_status;
	} cocci_id/* drivers/power/supply/gpio-charger.c 21 */;
	unsigned long cocci_id/* drivers/power/supply/gpio-charger.c 129 */;
	struct power_supply_desc *cocci_id/* drivers/power/supply/gpio-charger.c 126 */;
	struct power_supply_config cocci_id/* drivers/power/supply/gpio-charger.c 124 */;
	const struct gpio_charger_platform_data *cocci_id/* drivers/power/supply/gpio-charger.c 123 */;
	struct platform_device *cocci_id/* drivers/power/supply/gpio-charger.c 120 */;
	enum power_supply_property cocci_id/* drivers/power/supply/gpio-charger.c 115 */[];
}
