cocci_test_suite() {
	struct z2_charger *cocci_id/* drivers/power/supply/z2_battery.c 84 */;
	struct power_supply *cocci_id/* drivers/power/supply/z2_battery.c 82 */;
	void cocci_id/* drivers/power/supply/z2_battery.c 82 */;
	struct z2_battery_info *cocci_id/* drivers/power/supply/z2_battery.c 45 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/z2_battery.c 42 */;
	enum power_supply_property cocci_id/* drivers/power/supply/z2_battery.c 41 */;
	int cocci_id/* drivers/power/supply/z2_battery.c 40 */;
	struct i2c_driver cocci_id/* drivers/power/supply/z2_battery.c 313 */;
	const struct i2c_device_id cocci_id/* drivers/power/supply/z2_battery.c 307 */[];
	const struct dev_pm_ops cocci_id/* drivers/power/supply/z2_battery.c 296 */;
	unsigned long cocci_id/* drivers/power/supply/z2_battery.c 29 */;
	struct device *cocci_id/* drivers/power/supply/z2_battery.c 287 */;
	struct z2_charger {
		struct z2_battery_info *info;
		int bat_status;
		struct i2c_client *client;
		struct power_supply *batt_ps;
		struct power_supply_desc batt_ps_desc;
		struct mutex work_lock;
		struct work_struct bat_work;
	} cocci_id/* drivers/power/supply/z2_battery.c 19 */;
	struct power_supply_config cocci_id/* drivers/power/supply/z2_battery.c 188 */;
	const struct i2c_device_id *cocci_id/* drivers/power/supply/z2_battery.c 182 */;
	struct i2c_client *cocci_id/* drivers/power/supply/z2_battery.c 181 */;
	enum power_supply_property *cocci_id/* drivers/power/supply/z2_battery.c 131 */;
	irqreturn_t cocci_id/* drivers/power/supply/z2_battery.c 121 */;
	void *cocci_id/* drivers/power/supply/z2_battery.c 121 */;
	struct z2_charger cocci_id/* drivers/power/supply/z2_battery.c 117 */;
	struct work_struct *cocci_id/* drivers/power/supply/z2_battery.c 114 */;
}
