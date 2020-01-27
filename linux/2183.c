cocci_test_suite() {
	const union power_supply_propval *cocci_id/* drivers/power/supply/lego_ev3_battery.c 93 */;
	struct lego_ev3_battery *cocci_id/* drivers/power/supply/lego_ev3_battery.c 41 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/lego_ev3_battery.c 39 */;
	enum power_supply_property cocci_id/* drivers/power/supply/lego_ev3_battery.c 38 */;
	struct power_supply *cocci_id/* drivers/power/supply/lego_ev3_battery.c 37 */;
	int cocci_id/* drivers/power/supply/lego_ev3_battery.c 37 */;
	struct lego_ev3_battery {
		struct iio_channel *iio_v;
		struct iio_channel *iio_i;
		struct gpio_desc *rechargeable_gpio;
		struct power_supply *psy;
		int technology;
		int v_max;
		int v_min;
	} cocci_id/* drivers/power/supply/lego_ev3_battery.c 27 */;
	struct platform_driver cocci_id/* drivers/power/supply/lego_ev3_battery.c 227 */;
	const struct of_device_id cocci_id/* drivers/power/supply/lego_ev3_battery.c 221 */[];
	struct power_supply_config cocci_id/* drivers/power/supply/lego_ev3_battery.c 158 */;
	struct device *cocci_id/* drivers/power/supply/lego_ev3_battery.c 156 */;
	struct platform_device *cocci_id/* drivers/power/supply/lego_ev3_battery.c 154 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/lego_ev3_battery.c 144 */;
	enum power_supply_property cocci_id/* drivers/power/supply/lego_ev3_battery.c 135 */[];
}
