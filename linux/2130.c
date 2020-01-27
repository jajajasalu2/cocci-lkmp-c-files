cocci_test_suite() {
	union power_supply_propval *cocci_id/* drivers/power/supply/max17040_battery.c 49 */;
	enum power_supply_property cocci_id/* drivers/power/supply/max17040_battery.c 48 */;
	struct power_supply *cocci_id/* drivers/power/supply/max17040_battery.c 47 */;
	int cocci_id/* drivers/power/supply/max17040_battery.c 47 */;
	struct max17040_chip {
		struct i2c_client *client;
		struct delayed_work work;
		struct power_supply *battery;
		struct max17040_platform_data *pdata;
		int online;
		int vcell;
		int soc;
		int status;
	} cocci_id/* drivers/power/supply/max17040_battery.c 31 */;
	struct i2c_driver cocci_id/* drivers/power/supply/max17040_battery.c 283 */;
	const struct of_device_id cocci_id/* drivers/power/supply/max17040_battery.c 276 */[];
	const struct i2c_device_id cocci_id/* drivers/power/supply/max17040_battery.c 269 */[];
	struct device *cocci_id/* drivers/power/supply/max17040_battery.c 250 */;
	struct power_supply_config cocci_id/* drivers/power/supply/max17040_battery.c 197 */;
	struct i2c_adapter *cocci_id/* drivers/power/supply/max17040_battery.c 196 */;
	const struct i2c_device_id *cocci_id/* drivers/power/supply/max17040_battery.c 194 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/max17040_battery.c 185 */;
	enum power_supply_property cocci_id/* drivers/power/supply/max17040_battery.c 178 */[];
	struct max17040_chip cocci_id/* drivers/power/supply/max17040_battery.c 167 */;
	struct work_struct *cocci_id/* drivers/power/supply/max17040_battery.c 163 */;
	struct max17040_chip *cocci_id/* drivers/power/supply/max17040_battery.c 132 */;
	struct i2c_client *cocci_id/* drivers/power/supply/max17040_battery.c 130 */;
	void cocci_id/* drivers/power/supply/max17040_battery.c 130 */;
	u16 cocci_id/* drivers/power/supply/max17040_battery.c 114 */;
}
