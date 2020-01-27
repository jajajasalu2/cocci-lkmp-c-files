cocci_test_suite() {
	s16 *cocci_id/* drivers/power/supply/ds2782_battery.c 84 */;
	u8 *cocci_id/* drivers/power/supply/ds2782_battery.c 69 */;
	struct ds278x_info {
		struct i2c_client *client;
		struct power_supply *battery;
		struct power_supply_desc battery_desc;
		const struct ds278x_battery_ops *ops;
		struct delayed_work bat_work;
		int id;
		int rsns;
		int capacity;
		int status;
	} cocci_id/* drivers/power/supply/ds2782_battery.c 54 */;
	struct ds278x_battery_ops {
		int (*get_battery_current)(struct ds278x_info *info,
					   int *current_uA);
		int (*get_battery_voltage)(struct ds278x_info *info,
					   int *voltage_uV);
		int (*get_battery_capacity)(struct ds278x_info *info,
					    int *capacity);
	} cocci_id/* drivers/power/supply/ds2782_battery.c 46 */;
	struct i2c_driver cocci_id/* drivers/power/supply/ds2782_battery.c 458 */;
	const struct i2c_device_id cocci_id/* drivers/power/supply/ds2782_battery.c 451 */[];
	struct power_supply_config cocci_id/* drivers/power/supply/ds2782_battery.c 377 */;
	struct ds278x_platform_data *cocci_id/* drivers/power/supply/ds2782_battery.c 376 */;
	const struct i2c_device_id *cocci_id/* drivers/power/supply/ds2782_battery.c 374 */;
	struct i2c_client *cocci_id/* drivers/power/supply/ds2782_battery.c 373 */;
	const struct ds278x_battery_ops cocci_id/* drivers/power/supply/ds2782_battery.c 360 */[];
	enum ds278x_num_id{DS2782=0, DS2786,} cocci_id/* drivers/power/supply/ds2782_battery.c 355 */;
	struct device *cocci_id/* drivers/power/supply/ds2782_battery.c 343 */;
	struct power_supply_desc *cocci_id/* drivers/power/supply/ds2782_battery.c 306 */;
	enum power_supply_property cocci_id/* drivers/power/supply/ds2782_battery.c 298 */[];
	struct ds278x_info cocci_id/* drivers/power/supply/ds2782_battery.c 292 */;
	struct work_struct *cocci_id/* drivers/power/supply/ds2782_battery.c 288 */;
	void cocci_id/* drivers/power/supply/ds2782_battery.c 277 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/ds2782_battery.c 244 */;
	enum power_supply_property cocci_id/* drivers/power/supply/ds2782_battery.c 243 */;
	struct power_supply *cocci_id/* drivers/power/supply/ds2782_battery.c 242 */;
	u8 cocci_id/* drivers/power/supply/ds2782_battery.c 164 */;
	struct ds278x_info *cocci_id/* drivers/power/supply/ds2782_battery.c 161 */;
	int *cocci_id/* drivers/power/supply/ds2782_battery.c 161 */;
	int cocci_id/* drivers/power/supply/ds2782_battery.c 161 */;
	s16 cocci_id/* drivers/power/supply/ds2782_battery.c 121 */;
}
