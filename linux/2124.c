cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/power/supply/da9052-battery.c 653 */;
	struct power_supply_config cocci_id/* drivers/power/supply/da9052-battery.c 589 */;
	struct da9052_pdata *cocci_id/* drivers/power/supply/da9052-battery.c 587 */;
	s32 cocci_id/* drivers/power/supply/da9052-battery.c 585 */;
	struct platform_device *cocci_id/* drivers/power/supply/da9052-battery.c 585 */;
	int cocci_id/* drivers/power/supply/da9052-battery.c 576 */[];
	char *cocci_id/* drivers/power/supply/da9052-battery.c 567 */[];
	struct power_supply_desc cocci_id/* drivers/power/supply/da9052-battery.c 559 */;
	enum power_supply_property cocci_id/* drivers/power/supply/da9052-battery.c 546 */[];
	const u32 cocci_id/* drivers/power/supply/da9052-battery.c 52 */[3][68][2];
	const u16 cocci_id/* drivers/power/supply/da9052-battery.c 50 */[3];
	union power_supply_propval *cocci_id/* drivers/power/supply/da9052-battery.c 494 */;
	enum power_supply_property cocci_id/* drivers/power/supply/da9052-battery.c 493 */;
	struct power_supply *cocci_id/* drivers/power/supply/da9052-battery.c 492 */;
	struct da9052_battery cocci_id/* drivers/power/supply/da9052-battery.c 464 */;
	struct da9052_battery *cocci_id/* drivers/power/supply/da9052-battery.c 464 */;
	int *cocci_id/* drivers/power/supply/da9052-battery.c 462 */;
	u8 cocci_id/* drivers/power/supply/da9052-battery.c 460 */;
	void *cocci_id/* drivers/power/supply/da9052-battery.c 458 */;
	unsigned long cocci_id/* drivers/power/supply/da9052-battery.c 458 */;
	struct notifier_block *cocci_id/* drivers/power/supply/da9052-battery.c 457 */;
	int cocci_id/* drivers/power/supply/da9052-battery.c 457 */;
	irqreturn_t cocci_id/* drivers/power/supply/da9052-battery.c 436 */;
	const u16 cocci_id/* drivers/power/supply/da9052-battery.c 43 */[2][DA9052_CHG_LIM_COLS];
	enum charger_type_enum{DA9052_NOCHARGER=1, DA9052_CHARGER,} cocci_id/* drivers/power/supply/da9052-battery.c 38 */;
	unsigned char cocci_id/* drivers/power/supply/da9052-battery.c 326 */;
	bool cocci_id/* drivers/power/supply/da9052-battery.c 226 */;
	u8 cocci_id/* drivers/power/supply/da9052-battery.c 220 */[2];
	struct da9052_battery {
		struct da9052 *da9052;
		struct power_supply *psy;
		struct notifier_block nb;
		int charger_type;
		int status;
		int health;
	} cocci_id/* drivers/power/supply/da9052-battery.c 166 */;
}
