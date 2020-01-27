cocci_test_suite() {
	struct sc2731_charger_info {
		struct device *dev;
		struct regmap *regmap;
		struct usb_phy *usb_phy;
		struct notifier_block usb_notify;
		struct power_supply *psy_usb;
		struct work_struct work;
		struct mutex lock;
		bool charging;
		u32 base;
		u32 limit;
	} cocci_id/* drivers/power/supply/sc2731_charger.c 54 */;
	struct platform_driver cocci_id/* drivers/power/supply/sc2731_charger.c 528 */;
	const struct of_device_id cocci_id/* drivers/power/supply/sc2731_charger.c 523 */[];
	struct power_supply_config cocci_id/* drivers/power/supply/sc2731_charger.c 459 */;
	struct device_node *cocci_id/* drivers/power/supply/sc2731_charger.c 457 */;
	struct platform_device *cocci_id/* drivers/power/supply/sc2731_charger.c 455 */;
	unsigned int cocci_id/* drivers/power/supply/sc2731_charger.c 439 */;
	struct sc2731_charger_info *cocci_id/* drivers/power/supply/sc2731_charger.c 437 */;
	void cocci_id/* drivers/power/supply/sc2731_charger.c 437 */;
	struct power_supply_battery_info cocci_id/* drivers/power/supply/sc2731_charger.c 371 */;
	struct sc2731_charger_info cocci_id/* drivers/power/supply/sc2731_charger.c 360 */;
	void *cocci_id/* drivers/power/supply/sc2731_charger.c 357 */;
	unsigned long cocci_id/* drivers/power/supply/sc2731_charger.c 357 */;
	struct notifier_block *cocci_id/* drivers/power/supply/sc2731_charger.c 356 */;
	struct work_struct *cocci_id/* drivers/power/supply/sc2731_charger.c 323 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/sc2731_charger.c 313 */;
	enum power_supply_property cocci_id/* drivers/power/supply/sc2731_charger.c 307 */[];
	enum power_supply_property cocci_id/* drivers/power/supply/sc2731_charger.c 290 */;
	struct power_supply *cocci_id/* drivers/power/supply/sc2731_charger.c 289 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/sc2731_charger.c 240 */;
	const union power_supply_propval *cocci_id/* drivers/power/supply/sc2731_charger.c 204 */;
	u32 cocci_id/* drivers/power/supply/sc2731_charger.c 153 */;
	u32 *cocci_id/* drivers/power/supply/sc2731_charger.c 150 */;
	int cocci_id/* drivers/power/supply/sc2731_charger.c 149 */;
}
