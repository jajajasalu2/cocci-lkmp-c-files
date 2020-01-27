cocci_test_suite() {
	struct ds2760_device_info {
		struct device *dev;
		unsigned long update_time;
		char raw[DS2760_DATA_SIZE];
		int voltage_raw;
		int voltage_uV;
		int current_raw;
		int current_uA;
		int accum_current_raw;
		int accum_current_uAh;
		int temp_raw;
		int temp_C;
		int rated_capacity;
		int rem_capacity;
		int full_active_uAh;
		int empty_uAh;
		int life_sec;
		int charge_status;
		int full_counter;
		struct power_supply *bat;
		struct power_supply_desc bat_desc;
		struct workqueue_struct *monitor_wqueue;
		struct delayed_work monitor_work;
		struct delayed_work set_charged_work;
		struct notifier_block pm_notifier;
	} cocci_id/* drivers/power/supply/ds2760_battery.c 89 */;
	struct w1_family cocci_id/* drivers/power/supply/ds2760_battery.c 804 */;
	struct w1_family_ops cocci_id/* drivers/power/supply/ds2760_battery.c 798 */;
	const struct of_device_id cocci_id/* drivers/power/supply/ds2760_battery.c 792 */[];
	u32 cocci_id/* drivers/power/supply/ds2760_battery.c 710 */;
	char cocci_id/* drivers/power/supply/ds2760_battery.c 683 */[32];
	struct device *cocci_id/* drivers/power/supply/ds2760_battery.c 681 */;
	struct power_supply_config cocci_id/* drivers/power/supply/ds2760_battery.c 679 */;
	struct w1_slave *cocci_id/* drivers/power/supply/ds2760_battery.c 677 */;
	void *cocci_id/* drivers/power/supply/ds2760_battery.c 649 */;
	unsigned long cocci_id/* drivers/power/supply/ds2760_battery.c 648 */;
	struct notifier_block *cocci_id/* drivers/power/supply/ds2760_battery.c 647 */;
	enum power_supply_property cocci_id/* drivers/power/supply/ds2760_battery.c 634 */[];
	const union power_supply_propval *cocci_id/* drivers/power/supply/ds2760_battery.c 597 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/ds2760_battery.c 546 */;
	enum power_supply_property cocci_id/* drivers/power/supply/ds2760_battery.c 545 */;
	struct ds2760_device_info cocci_id/* drivers/power/supply/ds2760_battery.c 504 */;
	char cocci_id/* drivers/power/supply/ds2760_battery.c 502 */;
	struct work_struct *cocci_id/* drivers/power/supply/ds2760_battery.c 500 */;
	struct ds2760_device_info *cocci_id/* drivers/power/supply/ds2760_battery.c 492 */;
	struct power_supply *cocci_id/* drivers/power/supply/ds2760_battery.c 490 */;
	void cocci_id/* drivers/power/supply/ds2760_battery.c 490 */;
	const int cocci_id/* drivers/power/supply/ds2760_battery.c 482 */;
	unsigned char cocci_id/* drivers/power/supply/ds2760_battery.c 446 */;
	bool cocci_id/* drivers/power/supply/ds2760_battery.c 38 */;
	unsigned char cocci_id/* drivers/power/supply/ds2760_battery.c 376 */[2];
	unsigned int cocci_id/* drivers/power/supply/ds2760_battery.c 34 */;
	signed char cocci_id/* drivers/power/supply/ds2760_battery.c 299 */;
	int cocci_id/* drivers/power/supply/ds2760_battery.c 248 */[];
	int cocci_id/* drivers/power/supply/ds2760_battery.c 248 */;
	const struct attribute_group *cocci_id/* drivers/power/supply/ds2760_battery.c 216 */[];
	const struct attribute_group cocci_id/* drivers/power/supply/ds2760_battery.c 212 */;
	struct bin_attribute *cocci_id/* drivers/power/supply/ds2760_battery.c 207 */[];
	struct device cocci_id/* drivers/power/supply/ds2760_battery.c 201 */;
	loff_t cocci_id/* drivers/power/supply/ds2760_battery.c 199 */;
	struct bin_attribute *cocci_id/* drivers/power/supply/ds2760_battery.c 198 */;
	struct kobject *cocci_id/* drivers/power/supply/ds2760_battery.c 197 */;
	struct file *cocci_id/* drivers/power/supply/ds2760_battery.c 197 */;
	ssize_t cocci_id/* drivers/power/supply/ds2760_battery.c 197 */;
	struct w1_slave cocci_id/* drivers/power/supply/ds2760_battery.c 171 */;
	char *cocci_id/* drivers/power/supply/ds2760_battery.c 119 */;
	size_t cocci_id/* drivers/power/supply/ds2760_battery.c 119 */;
}
