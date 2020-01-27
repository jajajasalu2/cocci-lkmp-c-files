cocci_test_suite() {
	struct gab_platform_data *cocci_id/* drivers/power/supply/generic-adc-battery.c 94 */;
	bool cocci_id/* drivers/power/supply/generic-adc-battery.c 92 */;
	struct gab *cocci_id/* drivers/power/supply/generic-adc-battery.c 92 */;
	const enum power_supply_property cocci_id/* drivers/power/supply/generic-adc-battery.c 86 */[];
	struct power_supply *cocci_id/* drivers/power/supply/generic-adc-battery.c 62 */;
	void cocci_id/* drivers/power/supply/generic-adc-battery.c 62 */;
	struct gab {
		struct power_supply *psy;
		struct power_supply_desc psy_desc;
		struct iio_channel *channel[GAB_MAX_CHAN_TYPE];
		struct gab_platform_data *pdata;
		struct delayed_work bat_work;
		int level;
		int status;
		bool cable_plugged;
	} cocci_id/* drivers/power/supply/generic-adc-battery.c 46 */;
	struct platform_driver cocci_id/* drivers/power/supply/generic-adc-battery.c 414 */;
	const char *const cocci_id/* drivers/power/supply/generic-adc-battery.c 40 */[];
	struct device *cocci_id/* drivers/power/supply/generic-adc-battery.c 398 */;
	int __maybe_unused cocci_id/* drivers/power/supply/generic-adc-battery.c 398 */;
	enum gab_chan_type{GAB_VOLTAGE=0, GAB_CURRENT, GAB_POWER, GAB_MAX_CHAN_TYPE,} cocci_id/* drivers/power/supply/generic-adc-battery.c 29 */;
	struct power_supply_config cocci_id/* drivers/power/supply/generic-adc-battery.c 242 */;
	struct power_supply_desc *cocci_id/* drivers/power/supply/generic-adc-battery.c 241 */;
	struct platform_device *cocci_id/* drivers/power/supply/generic-adc-battery.c 238 */;
	irqreturn_t cocci_id/* drivers/power/supply/generic-adc-battery.c 226 */;
	void *cocci_id/* drivers/power/supply/generic-adc-battery.c 226 */;
	int cocci_id/* drivers/power/supply/generic-adc-battery.c 226 */;
	struct gab cocci_id/* drivers/power/supply/generic-adc-battery.c 209 */;
	struct delayed_work *cocci_id/* drivers/power/supply/generic-adc-battery.c 204 */;
	struct work_struct *cocci_id/* drivers/power/supply/generic-adc-battery.c 201 */;
	struct power_supply_info *cocci_id/* drivers/power/supply/generic-adc-battery.c 149 */;
	enum power_supply_property cocci_id/* drivers/power/supply/generic-adc-battery.c 145 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/generic-adc-battery.c 145 */;
	int *cocci_id/* drivers/power/supply/generic-adc-battery.c 131 */;
	enum gab_chan_type cocci_id/* drivers/power/supply/generic-adc-battery.c 114 */;
}
