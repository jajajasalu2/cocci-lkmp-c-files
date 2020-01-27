cocci_test_suite() {
	struct power_supply_battery_ocv_table *cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 896 */;
	struct power_supply_battery_info cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 895 */;
	struct sc27xx_fgu_data {
		struct regmap *regmap;
		struct device *dev;
		struct power_supply *battery;
		u32 base;
		struct mutex lock;
		struct gpio_desc *gpiod;
		struct iio_channel *channel;
		struct iio_channel *charge_chan;
		bool bat_present;
		int internal_resist;
		int total_cap;
		int init_cap;
		int alarm_cap;
		int init_clbcnt;
		int max_volt;
		int min_volt;
		int table_len;
		int cur_1000ma_adc;
		int vol_1000mv_adc;
		struct power_supply_battery_ocv_table *cap_table;
	} cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 88 */;
	u32 cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 878 */;
	size_t cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 866 */;
	struct nvmem_cell *cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 863 */;
	irqreturn_t cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 816 */;
	void *cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 816 */;
	bool cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 689 */;
	void cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 678 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 667 */;
	enum power_supply_property cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 651 */[];
	struct power_supply *cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 637 */;
	const union power_supply_propval *cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 609 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 511 */;
	enum power_supply_property cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 510 */;
	union power_supply_propval cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 488 */;
	int *cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 272 */;
	struct sc27xx_fgu_data *cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 123 */;
	int cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 123 */;
	struct platform_driver cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 1219 */;
	const struct of_device_id cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 1214 */[];
	const struct dev_pm_ops cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 1210 */;
	const char *const cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 116 */[];
	void cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 114 */(struct sc27xx_fgu_data *data,
									int cap);
	void cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 112 */(struct sc27xx_fgu_data *data,
									int cap,
									bool int_mode);
	int cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 111 */(struct sc27xx_fgu_data *data,
								       int capacity);
	struct power_supply_config cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 1034 */;
	struct device_node *cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 1033 */;
	struct device *cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 1032 */;
	struct platform_device *cocci_id/* drivers/power/supply/sc27xx_fuel_gauge.c 1030 */;
}
