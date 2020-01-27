cocci_test_suite() {
	struct act8945a_charger {
		struct power_supply *psy;
		struct power_supply_desc desc;
		struct regmap *regmap;
		struct work_struct work;
		bool init_done;
		struct gpio_desc *lbo_gpio;
		struct gpio_desc *chglev_gpio;
	} cocci_id/* drivers/power/supply/act8945a_charger.c 75 */;
	struct platform_driver cocci_id/* drivers/power/supply/act8945a_charger.c 651 */;
	struct power_supply_config cocci_id/* drivers/power/supply/act8945a_charger.c 577 */;
	struct platform_device *cocci_id/* drivers/power/supply/act8945a_charger.c 574 */;
	unsigned int cocci_id/* drivers/power/supply/act8945a_charger.c 468 */;
	u32 cocci_id/* drivers/power/supply/act8945a_charger.c 463 */;
	struct regmap *cocci_id/* drivers/power/supply/act8945a_charger.c 461 */;
	struct device_node *cocci_id/* drivers/power/supply/act8945a_charger.c 460 */;
	struct act8945a_charger *cocci_id/* drivers/power/supply/act8945a_charger.c 458 */;
	struct device *cocci_id/* drivers/power/supply/act8945a_charger.c 457 */;
	int cocci_id/* drivers/power/supply/act8945a_charger.c 457 */;
	irqreturn_t cocci_id/* drivers/power/supply/act8945a_charger.c 443 */;
	void *cocci_id/* drivers/power/supply/act8945a_charger.c 443 */;
	struct act8945a_charger cocci_id/* drivers/power/supply/act8945a_charger.c 436 */;
	struct work_struct *cocci_id/* drivers/power/supply/act8945a_charger.c 433 */;
	void cocci_id/* drivers/power/supply/act8945a_charger.c 433 */;
	unsigned int *cocci_id/* drivers/power/supply/act8945a_charger.c 408 */;
	unsigned char cocci_id/* drivers/power/supply/act8945a_charger.c 387 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/act8945a_charger.c 344 */;
	enum power_supply_property cocci_id/* drivers/power/supply/act8945a_charger.c 343 */;
	struct power_supply *cocci_id/* drivers/power/supply/act8945a_charger.c 342 */;
	enum power_supply_property cocci_id/* drivers/power/supply/act8945a_charger.c 331 */[];
	const char *cocci_id/* drivers/power/supply/act8945a_charger.c 19 */;
	int *cocci_id/* drivers/power/supply/act8945a_charger.c 163 */;
}
