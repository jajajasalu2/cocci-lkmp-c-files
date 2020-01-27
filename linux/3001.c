cocci_test_suite() {
	const struct acpi_battery *cocci_id/* drivers/acpi/battery.c 996 */;
	struct proc_dir_entry *cocci_id/* drivers/acpi/battery.c 994 */;
	enum{ACPI_BATTERY_ALARM_PRESENT, ACPI_BATTERY_XINFO_PRESENT, ACPI_BATTERY_QUIRK_PERCENTAGE_CAPACITY, ACPI_BATTERY_QUIRK_THINKPAD_MAH, ACPI_BATTERY_QUIRK_DEGRADED_FULL_CHARGE,} cocci_id/* drivers/acpi/battery.c 87 */;
	const u16 *cocci_id/* drivers/acpi/battery.c 851 */;
	const u8 *cocci_id/* drivers/acpi/battery.c 850 */;
	const struct dmi_header *cocci_id/* drivers/acpi/battery.c 844 */;
	const char *const cocci_id/* drivers/acpi/battery.c 83 */[];
	struct power_supply_config cocci_id/* drivers/acpi/battery.c 796 */;
	const struct acpi_device_id cocci_id/* drivers/acpi/battery.c 75 */[];
	void *cocci_id/* drivers/acpi/battery.c 72 */(struct proc_dir_entry *acpi_battery_dir);
	struct proc_dir_entry *cocci_id/* drivers/acpi/battery.c 71 */(void);
	struct acpi_battery *cocci_id/* drivers/acpi/battery.c 675 */;
	struct acpi_battery_hook *cocci_id/* drivers/acpi/battery.c 673 */;
	int cocci_id/* drivers/acpi/battery.c 673 */;
	void cocci_id/* drivers/acpi/battery.c 673 */;
	const struct device_attribute cocci_id/* drivers/acpi/battery.c 654 */;
	unsigned long cocci_id/* drivers/acpi/battery.c 645 */;
	const char *cocci_id/* drivers/acpi/battery.c 643 */;
	size_t cocci_id/* drivers/acpi/battery.c 643 */;
	char *cocci_id/* drivers/acpi/battery.c 635 */;
	struct device_attribute *cocci_id/* drivers/acpi/battery.c 634 */;
	struct device *cocci_id/* drivers/acpi/battery.c 633 */;
	ssize_t cocci_id/* drivers/acpi/battery.c 633 */;
	s16 cocci_id/* drivers/acpi/battery.c 580 */;
	acpi_status cocci_id/* drivers/acpi/battery.c 517 */;
	struct acpi_buffer cocci_id/* drivers/acpi/battery.c 516 */;
	const int cocci_id/* drivers/acpi/battery.c 507 */;
	const struct acpi_buffer *cocci_id/* drivers/acpi/battery.c 466 */;
	int *cocci_id/* drivers/acpi/battery.c 446 */;
	u8 *cocci_id/* drivers/acpi/battery.c 435 */;
	const struct acpi_offsets *cocci_id/* drivers/acpi/battery.c 424 */;
	union acpi_object *cocci_id/* drivers/acpi/battery.c 423 */;
	const struct acpi_offsets cocci_id/* drivers/acpi/battery.c 399 */[];
	struct acpi_offsets {
		size_t offset;
		u8 mode;
	} cocci_id/* drivers/acpi/battery.c 371 */;
	enum power_supply_property cocci_id/* drivers/acpi/battery.c 318 */[];
	union power_supply_propval *cocci_id/* drivers/acpi/battery.c 215 */;
	enum power_supply_property cocci_id/* drivers/acpi/battery.c 214 */;
	struct power_supply *cocci_id/* drivers/acpi/battery.c 213 */;
	bool cocci_id/* drivers/acpi/battery.c 193 */;
	int cocci_id/* drivers/acpi/battery.c 168 */(struct acpi_battery *battery);
	void __exit cocci_id/* drivers/acpi/battery.c 1520 */;
	int __init cocci_id/* drivers/acpi/battery.c 1511 */;
	unsigned int cocci_id/* drivers/acpi/battery.c 1483 */;
	async_cookie_t cocci_id/* drivers/acpi/battery.c 1481 */;
	void __init cocci_id/* drivers/acpi/battery.c 1481 */;
	struct acpi_driver cocci_id/* drivers/acpi/battery.c 1468 */;
	struct acpi_battery cocci_id/* drivers/acpi/battery.c 1383 */;
	struct acpi_device *cocci_id/* drivers/acpi/battery.c 1372 */;
	const struct dmi_system_id cocci_id/* drivers/acpi/battery.c 1303 */[]__initconst;
	const struct dmi_system_id *cocci_id/* drivers/acpi/battery.c 1290 */;
	int __init cocci_id/* drivers/acpi/battery.c 1289 */;
	struct notifier_block *cocci_id/* drivers/acpi/battery.c 1242 */;
	u32 cocci_id/* drivers/acpi/battery.c 1214 */;
	const struct file_operations cocci_id/* drivers/acpi/battery.c 1168 */;
	struct inode *cocci_id/* drivers/acpi/battery.c 1163 */;
	struct file *cocci_id/* drivers/acpi/battery.c 1163 */;
	char cocci_id/* drivers/acpi/battery.c 1137 */[12];
	loff_t *cocci_id/* drivers/acpi/battery.c 1134 */;
	const char __user *cocci_id/* drivers/acpi/battery.c 1133 */;
	struct seq_file *cocci_id/* drivers/acpi/battery.c 1107 */;
	void *cocci_id/* drivers/acpi/battery.c 1107 */;
	struct acpi_battery {
		struct mutex lock;
		struct mutex sysfs_lock;
		struct power_supply *bat;
		struct power_supply_desc bat_desc;
		struct acpi_device *device;
		struct notifier_block pm_nb;
		struct list_head list;
		unsigned long update_time;
		int revision;
		int rate_now;
		int capacity_now;
		int voltage_now;
		int design_capacity;
		int full_charge_capacity;
		int technology;
		int design_voltage;
		int design_capacity_warning;
		int design_capacity_low;
		int cycle_count;
		int measurement_accuracy;
		int max_sampling_time;
		int min_sampling_time;
		int max_averaging_interval;
		int min_averaging_interval;
		int capacity_granularity_1;
		int capacity_granularity_2;
		int alarm;
		char model_number[32];
		char serial_number[32];
		char type[32];
		char oem_info[32];
		int state;
		int power_unit;
		unsigned long flags;
	} cocci_id/* drivers/acpi/battery.c 109 */;
}
