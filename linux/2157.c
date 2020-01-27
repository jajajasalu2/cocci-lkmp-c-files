cocci_test_suite() {
	enum power_supply_type cocci_id/* drivers/power/supply/max8903_charger.c 76 */;
	bool cocci_id/* drivers/power/supply/max8903_charger.c 75 */;
	struct max8903_pdata *cocci_id/* drivers/power/supply/max8903_charger.c 74 */;
	struct max8903_data *cocci_id/* drivers/power/supply/max8903_charger.c 73 */;
	irqreturn_t cocci_id/* drivers/power/supply/max8903_charger.c 71 */;
	void *cocci_id/* drivers/power/supply/max8903_charger.c 71 */;
	int cocci_id/* drivers/power/supply/max8903_charger.c 71 */;
	struct platform_driver cocci_id/* drivers/power/supply/max8903_charger.c 432 */;
	const struct of_device_id cocci_id/* drivers/power/supply/max8903_charger.c 426 */[];
	union power_supply_propval *cocci_id/* drivers/power/supply/max8903_charger.c 38 */;
	enum power_supply_property cocci_id/* drivers/power/supply/max8903_charger.c 37 */;
	struct power_supply *cocci_id/* drivers/power/supply/max8903_charger.c 36 */;
	struct max8903_data cocci_id/* drivers/power/supply/max8903_charger.c 341 */;
	struct power_supply_config cocci_id/* drivers/power/supply/max8903_charger.c 338 */;
	struct platform_device *cocci_id/* drivers/power/supply/max8903_charger.c 333 */;
	enum power_supply_property cocci_id/* drivers/power/supply/max8903_charger.c 30 */[];
	struct max8903_data {
		struct max8903_pdata *pdata;
		struct device *dev;
		struct power_supply *psy;
		struct power_supply_desc psy_desc;
		bool fault;
		bool usb_in;
		bool ta_in;
	} cocci_id/* drivers/power/supply/max8903_charger.c 20 */;
	struct device_node *cocci_id/* drivers/power/supply/max8903_charger.c 174 */;
	struct device *cocci_id/* drivers/power/supply/max8903_charger.c 172 */;
}
