cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/power/supply/bd70528-charger.c 93 */;
	void *cocci_id/* drivers/power/supply/bd70528-charger.c 93 */;
	const char *cocci_id/* drivers/power/supply/bd70528-charger.c 90 */;
	struct platform_driver cocci_id/* drivers/power/supply/bd70528-charger.c 732 */;
	struct power_supply_config cocci_id/* drivers/power/supply/bd70528-charger.c 705 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/bd70528-charger.c 692 */;
	const union power_supply_propval *cocci_id/* drivers/power/supply/bd70528-charger.c 677 */;
	bool cocci_id/* drivers/power/supply/bd70528-charger.c 573 */;
	struct bd70528_psy *cocci_id/* drivers/power/supply/bd70528-charger.c 521 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/bd70528-charger.c 519 */;
	enum power_supply_property cocci_id/* drivers/power/supply/bd70528-charger.c 518 */;
	struct power_supply *cocci_id/* drivers/power/supply/bd70528-charger.c 517 */;
	int cocci_id/* drivers/power/supply/bd70528-charger.c 517 */;
	enum power_supply_property cocci_id/* drivers/power/supply/bd70528-charger.c 505 */[];
	bool *cocci_id/* drivers/power/supply/bd70528-charger.c 425 */;
	unsigned int *cocci_id/* drivers/power/supply/bd70528-charger.c 425 */;
	const struct linear_range *cocci_id/* drivers/power/supply/bd70528-charger.c 423 */;
	const struct linear_range cocci_id/* drivers/power/supply/bd70528-charger.c 345 */[];
	struct linear_range {
		int min;
		int step;
		int vals;
		int low_sel;
	} cocci_id/* drivers/power/supply/bd70528-charger.c 338 */;
	unsigned int cocci_id/* drivers/power/supply/bd70528-charger.c 283 */;
	int *cocci_id/* drivers/power/supply/bd70528-charger.c 280 */;
	const struct irq_name_pair cocci_id/* drivers/power/supply/bd70528-charger.c 150 */[];
	struct platform_device *cocci_id/* drivers/power/supply/bd70528-charger.c 145 */;
	struct irq_name_pair {
		const char *n;
		irqreturn_t (*h)(int irq, void *arg);
	} cocci_id/* drivers/power/supply/bd70528-charger.c 140 */;
	struct bd70528_psy {
		struct regmap *regmap;
		struct device *dev;
		struct power_supply *psy;
	} cocci_id/* drivers/power/supply/bd70528-charger.c 116 */;
}
