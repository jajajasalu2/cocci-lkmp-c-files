cocci_test_suite() {
	struct acpi_sbs {
		struct power_supply *charger;
		struct acpi_device *device;
		struct acpi_smb_hc *hc;
		struct mutex lock;
		struct acpi_battery battery[MAX_SBS_BAT];
		u8 batteries_supported:4;
		u8 manager_present:1;
		u8 charger_present:1;
		u8 charger_exists:1;
	} cocci_id/* drivers/acpi/sbs.c 88 */;
	void __exit cocci_id/* drivers/acpi/sbs.c 732 */;
	int __init cocci_id/* drivers/acpi/sbs.c 718 */;
	struct acpi_driver cocci_id/* drivers/acpi/sbs.c 707 */;
	struct acpi_sbs cocci_id/* drivers/acpi/sbs.c 630 */;
	struct acpi_device *cocci_id/* drivers/acpi/sbs.c 624 */;
	u8 cocci_id/* drivers/acpi/sbs.c 601 */;
	void *cocci_id/* drivers/acpi/sbs.c 596 */;
	struct acpi_battery {
		struct power_supply *bat;
		struct power_supply_desc bat_desc;
		struct acpi_sbs *sbs;
		unsigned long update_time;
		char name[8];
		char manufacturer_name[ACPI_SBS_BLOCK_MAX];
		char device_name[ACPI_SBS_BLOCK_MAX];
		char device_chemistry[ACPI_SBS_BLOCK_MAX];
		u16 alarm_capacity;
		u16 full_charge_capacity;
		u16 design_capacity;
		u16 design_voltage;
		u16 serial_number;
		u16 cycle_count;
		u16 temp_now;
		u16 voltage_now;
		s16 rate_now;
		s16 rate_avg;
		u16 capacity_now;
		u16 state_of_charge;
		u16 state;
		u16 mode;
		u16 spec;
		u8 id;
		u8 present:1;
		u8 have_sysfs_alarm:1;
	} cocci_id/* drivers/acpi/sbs.c 57 */;
	void cocci_id/* drivers/acpi/sbs.c 556 */;
	struct power_supply_config cocci_id/* drivers/acpi/sbs.c 515 */;
	struct acpi_battery *cocci_id/* drivers/acpi/sbs.c 514 */;
	const struct acpi_device_id cocci_id/* drivers/acpi/sbs.c 51 */[];
	const struct device_attribute cocci_id/* drivers/acpi/sbs.c 468 */;
	unsigned long cocci_id/* drivers/acpi/sbs.c 458 */;
	const char *cocci_id/* drivers/acpi/sbs.c 456 */;
	size_t cocci_id/* drivers/acpi/sbs.c 456 */;
	char *cocci_id/* drivers/acpi/sbs.c 446 */;
	struct device_attribute *cocci_id/* drivers/acpi/sbs.c 445 */;
	struct device *cocci_id/* drivers/acpi/sbs.c 444 */;
	ssize_t cocci_id/* drivers/acpi/sbs.c 444 */;
	unsigned int cocci_id/* drivers/acpi/sbs.c 44 */;
	u8 *cocci_id/* drivers/acpi/sbs.c 424 */;
	u16 cocci_id/* drivers/acpi/sbs.c 421 */;
	struct acpi_sbs *cocci_id/* drivers/acpi/sbs.c 418 */;
	int cocci_id/* drivers/acpi/sbs.c 418 */;
	struct acpi_battery cocci_id/* drivers/acpi/sbs.c 307 */;
	struct acpi_battery_reader cocci_id/* drivers/acpi/sbs.c 306 */[];
	struct acpi_battery_reader {
		u8 command;
		u8 mode;
		size_t offset;
	} cocci_id/* drivers/acpi/sbs.c 300 */;
	const struct power_supply_desc cocci_id/* drivers/acpi/sbs.c 288 */;
	enum power_supply_property cocci_id/* drivers/acpi/sbs.c 247 */[];
	union power_supply_propval *cocci_id/* drivers/acpi/sbs.c 164 */;
	enum power_supply_property cocci_id/* drivers/acpi/sbs.c 163 */;
	struct power_supply *cocci_id/* drivers/acpi/sbs.c 162 */;
	int cocci_id/* drivers/acpi/sbs.c 103 */(struct acpi_battery *battery);
	int cocci_id/* drivers/acpi/sbs.c 102 */(struct acpi_device *device);
}
