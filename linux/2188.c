cocci_test_suite() {
	enum power_supply_property cocci_id/* drivers/power/supply/tps65090-charger.c 40 */[];
	struct platform_driver cocci_id/* drivers/power/supply/tps65090-charger.c 348 */;
	const struct of_device_id cocci_id/* drivers/power/supply/tps65090-charger.c 342 */[];
	struct tps65090_charger {
		struct device *dev;
		int ac_online;
		int prev_ac_online;
		int irq;
		struct task_struct *poll_task;
		bool passive_mode;
		struct power_supply *ac;
		struct tps65090_platform_data *pdata;
	} cocci_id/* drivers/power/supply/tps65090-charger.c 29 */;
	struct power_supply_config cocci_id/* drivers/power/supply/tps65090-charger.c 233 */;
	struct tps65090_platform_data *cocci_id/* drivers/power/supply/tps65090-charger.c 232 */;
	struct platform_device *cocci_id/* drivers/power/supply/tps65090-charger.c 229 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/tps65090-charger.c 221 */;
	unsigned int cocci_id/* drivers/power/supply/tps65090-charger.c 192 */;
	struct device_node *cocci_id/* drivers/power/supply/tps65090-charger.c 191 */;
	uint8_t cocci_id/* drivers/power/supply/tps65090-charger.c 142 */;
	irqreturn_t cocci_id/* drivers/power/supply/tps65090-charger.c 138 */;
	void *cocci_id/* drivers/power/supply/tps65090-charger.c 138 */;
	struct tps65090_charger *cocci_id/* drivers/power/supply/tps65090-charger.c 128 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/tps65090-charger.c 126 */;
	enum power_supply_property cocci_id/* drivers/power/supply/tps65090-charger.c 125 */;
	struct power_supply *cocci_id/* drivers/power/supply/tps65090-charger.c 124 */;
	int cocci_id/* drivers/power/supply/tps65090-charger.c 124 */;
}
