cocci_test_suite() {
	struct twl4030_madc_battery *cocci_id/* drivers/power/supply/twl4030_madc_battery.c 55 */;
	struct iio_channel *cocci_id/* drivers/power/supply/twl4030_madc_battery.c 45 */;
	int cocci_id/* drivers/power/supply/twl4030_madc_battery.c 45 */;
	enum power_supply_property cocci_id/* drivers/power/supply/twl4030_madc_battery.c 32 */[];
	struct platform_driver cocci_id/* drivers/power/supply/twl4030_madc_battery.c 266 */;
	struct twl4030_madc_battery {
		struct power_supply *psy;
		struct twl4030_madc_bat_platform_data *pdata;
		struct iio_channel *channel_temp;
		struct iio_channel *channel_ichg;
		struct iio_channel *channel_vbat;
	} cocci_id/* drivers/power/supply/twl4030_madc_battery.c 24 */;
	struct twl4030_madc_bat_calibration cocci_id/* drivers/power/supply/twl4030_madc_battery.c 224 */;
	struct power_supply_config cocci_id/* drivers/power/supply/twl4030_madc_battery.c 196 */;
	struct twl4030_madc_bat_platform_data *cocci_id/* drivers/power/supply/twl4030_madc_battery.c 195 */;
	struct platform_device *cocci_id/* drivers/power/supply/twl4030_madc_battery.c 192 */;
	struct twl4030_madc_bat_calibration *cocci_id/* drivers/power/supply/twl4030_madc_battery.c 188 */;
	const void *cocci_id/* drivers/power/supply/twl4030_madc_battery.c 186 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/twl4030_madc_battery.c 176 */;
	struct power_supply *cocci_id/* drivers/power/supply/twl4030_madc_battery.c 171 */;
	void cocci_id/* drivers/power/supply/twl4030_madc_battery.c 171 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/twl4030_madc_battery.c 109 */;
	enum power_supply_property cocci_id/* drivers/power/supply/twl4030_madc_battery.c 108 */;
}
