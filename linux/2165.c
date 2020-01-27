cocci_test_suite() {
	enum power_supply_property cocci_id/* drivers/power/supply/tps65217_charger.c 41 */[];
	struct tps65217_charger {
		struct tps65217 *tps;
		struct device *dev;
		struct power_supply *psy;
		int online;
		int prev_online;
		struct task_struct *poll_task;
	} cocci_id/* drivers/power/supply/tps65217_charger.c 30 */;
	struct platform_driver cocci_id/* drivers/power/supply/tps65217_charger.c 273 */;
	const struct of_device_id cocci_id/* drivers/power/supply/tps65217_charger.c 267 */[];
	int cocci_id/* drivers/power/supply/tps65217_charger.c 190 */[NUM_CHARGER_IRQS];
	struct task_struct *cocci_id/* drivers/power/supply/tps65217_charger.c 189 */;
	struct power_supply_config cocci_id/* drivers/power/supply/tps65217_charger.c 188 */;
	struct tps65217 *cocci_id/* drivers/power/supply/tps65217_charger.c 186 */;
	struct platform_device *cocci_id/* drivers/power/supply/tps65217_charger.c 184 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/tps65217_charger.c 176 */;
	irqreturn_t cocci_id/* drivers/power/supply/tps65217_charger.c 117 */;
	void *cocci_id/* drivers/power/supply/tps65217_charger.c 117 */;
	struct tps65217_charger *cocci_id/* drivers/power/supply/tps65217_charger.c 108 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/tps65217_charger.c 106 */;
	enum power_supply_property cocci_id/* drivers/power/supply/tps65217_charger.c 105 */;
	struct power_supply *cocci_id/* drivers/power/supply/tps65217_charger.c 104 */;
	int cocci_id/* drivers/power/supply/tps65217_charger.c 104 */;
}
