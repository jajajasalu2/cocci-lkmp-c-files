cocci_test_suite() {
	struct micro_battery *cocci_id/* drivers/power/supply/ipaq_micro_battery.c 93 */;
	struct power_supply *cocci_id/* drivers/power/supply/ipaq_micro_battery.c 91 */;
	int cocci_id/* drivers/power/supply/ipaq_micro_battery.c 91 */;
	unsigned short cocci_id/* drivers/power/supply/ipaq_micro_battery.c 77 */;
	struct ipaq_micro_msg cocci_id/* drivers/power/supply/ipaq_micro_battery.c 53 */;
	struct micro_battery cocci_id/* drivers/power/supply/ipaq_micro_battery.c 52 */;
	struct work_struct *cocci_id/* drivers/power/supply/ipaq_micro_battery.c 49 */;
	void cocci_id/* drivers/power/supply/ipaq_micro_battery.c 49 */;
	struct micro_battery {
		struct ipaq_micro *micro;
		struct workqueue_struct *wq;
		struct delayed_work update;
		u8 ac;
		u8 chemistry;
		unsigned int voltage;
		u16 temperature;
		u8 flag;
	} cocci_id/* drivers/power/supply/ipaq_micro_battery.c 38 */;
	struct platform_driver cocci_id/* drivers/power/supply/ipaq_micro_battery.c 301 */;
	const struct dev_pm_ops cocci_id/* drivers/power/supply/ipaq_micro_battery.c 297 */;
	struct device *cocci_id/* drivers/power/supply/ipaq_micro_battery.c 289 */;
	int __maybe_unused cocci_id/* drivers/power/supply/ipaq_micro_battery.c 289 */;
	struct platform_device *cocci_id/* drivers/power/supply/ipaq_micro_battery.c 225 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/ipaq_micro_battery.c 215 */;
	enum power_supply_property cocci_id/* drivers/power/supply/ipaq_micro_battery.c 211 */[];
	union power_supply_propval *cocci_id/* drivers/power/supply/ipaq_micro_battery.c 178 */;
	enum power_supply_property cocci_id/* drivers/power/supply/ipaq_micro_battery.c 177 */;
}
