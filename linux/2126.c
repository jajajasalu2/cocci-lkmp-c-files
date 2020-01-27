cocci_test_suite() {
	union power_supply_propval *cocci_id/* drivers/power/supply/s3c_adc_battery.c 74 */;
	enum power_supply_property cocci_id/* drivers/power/supply/s3c_adc_battery.c 73 */;
	struct power_supply *cocci_id/* drivers/power/supply/s3c_adc_battery.c 72 */;
	enum power_supply_property cocci_id/* drivers/power/supply/s3c_adc_battery.c 66 */[];
	struct s3c_adc_client *cocci_id/* drivers/power/supply/s3c_adc_battery.c 50 */;
	struct platform_driver cocci_id/* drivers/power/supply/s3c_adc_battery.c 447 */;
	void cocci_id/* drivers/power/supply/s3c_adc_battery.c 44 */;
	struct delayed_work cocci_id/* drivers/power/supply/s3c_adc_battery.c 42 */;
	pm_message_t cocci_id/* drivers/power/supply/s3c_adc_battery.c 407 */;
	const struct power_supply_config cocci_id/* drivers/power/supply/s3c_adc_battery.c 321 */;
	struct s3c_adc_bat {
		struct power_supply *psy;
		struct s3c_adc_client *client;
		struct s3c_adc_bat_pdata *pdata;
		int volt_value;
		int cur_value;
		unsigned int timestamp;
		int level;
		int status;
		int cable_plugged:1;
	} cocci_id/* drivers/power/supply/s3c_adc_battery.c 30 */;
	struct power_supply_config cocci_id/* drivers/power/supply/s3c_adc_battery.c 296 */;
	struct s3c_adc_bat_pdata *cocci_id/* drivers/power/supply/s3c_adc_battery.c 295 */;
	struct platform_device *cocci_id/* drivers/power/supply/s3c_adc_battery.c 292 */;
	irqreturn_t cocci_id/* drivers/power/supply/s3c_adc_battery.c 285 */;
	void *cocci_id/* drivers/power/supply/s3c_adc_battery.c 285 */;
	struct work_struct *cocci_id/* drivers/power/supply/s3c_adc_battery.c 247 */;
	unsigned int cocci_id/* drivers/power/supply/s3c_adc_battery.c 149 */;
	const struct s3c_adc_bat_thresh *cocci_id/* drivers/power/supply/s3c_adc_battery.c 148 */;
	struct s3c_adc_bat *cocci_id/* drivers/power/supply/s3c_adc_battery.c 133 */;
	int cocci_id/* drivers/power/supply/s3c_adc_battery.c 128 */;
	struct s3c_adc_bat cocci_id/* drivers/power/supply/s3c_adc_battery.c 117 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/s3c_adc_battery.c 108 */;
}
