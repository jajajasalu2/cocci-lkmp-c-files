cocci_test_suite() {
	acpi_status cocci_id/* drivers/acpi/thermal.c 989 */;
	char cocci_id/* drivers/acpi/thermal.c 988 */[5];
	unsigned long long cocci_id/* drivers/acpi/thermal.c 981 */;
	acpi_handle cocci_id/* drivers/acpi/thermal.c 980 */;
	void cocci_id/* drivers/acpi/thermal.c 978 */;
	struct acpi_driver cocci_id/* drivers/acpi/thermal.c 97 */;
	u32 cocci_id/* drivers/acpi/thermal.c 935 */;
	int cocci_id/* drivers/acpi/thermal.c 90 */(struct device *dev);
	struct thermal_zone_device_ops cocci_id/* drivers/acpi/thermal.c 853 */;
	struct thermal_cooling_device *cocci_id/* drivers/acpi/thermal.c 841 */;
	struct thermal_zone_device *cocci_id/* drivers/acpi/thermal.c 840 */;
	const struct acpi_device_id cocci_id/* drivers/acpi/thermal.c 82 */[];
	void cocci_id/* drivers/acpi/thermal.c 80 */(struct acpi_device *device,
						     u32 event);
	int cocci_id/* drivers/acpi/thermal.c 78 */(struct acpi_device *device);
	struct workqueue_struct *cocci_id/* drivers/acpi/thermal.c 76 */;
	bool cocci_id/* drivers/acpi/thermal.c 751 */;
	u8 cocci_id/* drivers/acpi/thermal.c 730 */;
	enum thermal_trip_type cocci_id/* drivers/acpi/thermal.c 687 */;
	enum thermal_trend *cocci_id/* drivers/acpi/thermal.c 684 */;
	int *cocci_id/* drivers/acpi/thermal.c 670 */;
	enum thermal_trip_type *cocci_id/* drivers/acpi/thermal.c 572 */;
	enum thermal_device_mode cocci_id/* drivers/acpi/thermal.c 542 */;
	enum thermal_device_mode *cocci_id/* drivers/acpi/thermal.c 528 */;
	void *cocci_id/* drivers/acpi/thermal.c 497 */;
	unsigned long cocci_id/* drivers/acpi/thermal.c 300 */;
	struct acpi_handle_list cocci_id/* drivers/acpi/thermal.c 267 */;
	struct acpi_thermal {
		struct acpi_device *device;
		acpi_bus_id name;
		unsigned long temperature;
		unsigned long last_temperature;
		unsigned long polling_frequency;
		volatile u8 zombie;
		struct acpi_thermal_flags flags;
		struct acpi_thermal_state state;
		struct acpi_thermal_trips trips;
		struct acpi_handle_list devices;
		struct thermal_zone_device *thermal_zone;
		int tz_enabled;
		int kelvin_offset;
		struct work_struct thermal_check_work;
	} cocci_id/* drivers/acpi/thermal.c 162 */;
	struct acpi_thermal_flags {
		u8 cooling_mode:1;
		u8 devices:1;
		u8 reserved:6;
	} cocci_id/* drivers/acpi/thermal.c 156 */;
	struct acpi_thermal_trips {
		struct acpi_thermal_critical critical;
		struct acpi_thermal_hot hot;
		struct acpi_thermal_passive passive;
		struct acpi_thermal_active active[ACPI_THERMAL_MAX_ACTIVE];
	} cocci_id/* drivers/acpi/thermal.c 149 */;
	struct acpi_thermal_active {
		struct acpi_thermal_state_flags flags;
		unsigned long temperature;
		struct acpi_handle_list devices;
	} cocci_id/* drivers/acpi/thermal.c 143 */;
	struct acpi_thermal_passive {
		struct acpi_thermal_state_flags flags;
		unsigned long temperature;
		unsigned long tc1;
		unsigned long tc2;
		unsigned long tsp;
		struct acpi_handle_list devices;
	} cocci_id/* drivers/acpi/thermal.c 134 */;
	struct acpi_thermal_hot {
		struct acpi_thermal_state_flags flags;
		unsigned long temperature;
	} cocci_id/* drivers/acpi/thermal.c 129 */;
	void __exit cocci_id/* drivers/acpi/thermal.c 1258 */;
	struct acpi_thermal_critical {
		struct acpi_thermal_state_flags flags;
		unsigned long temperature;
	} cocci_id/* drivers/acpi/thermal.c 124 */;
	int __init cocci_id/* drivers/acpi/thermal.c 1233 */;
	const struct dmi_system_id cocci_id/* drivers/acpi/thermal.c 1193 */[]__initconst;
	struct acpi_thermal_state_flags {
		u8 valid:1;
		u8 enabled:1;
		u8 reserved:6;
	} cocci_id/* drivers/acpi/thermal.c 118 */;
	const struct dmi_system_id *cocci_id/* drivers/acpi/thermal.c 1158 */;
	struct device *cocci_id/* drivers/acpi/thermal.c 1122 */;
	struct acpi_thermal_state {
		u8 critical:1;
		u8 hot:1;
		u8 passive:1;
		u8 active:1;
		u8 reserved:4;
		int active_index;
	} cocci_id/* drivers/acpi/thermal.c 109 */;
	struct acpi_thermal cocci_id/* drivers/acpi/thermal.c 1067 */;
	struct acpi_thermal *cocci_id/* drivers/acpi/thermal.c 1061 */;
	struct acpi_device *cocci_id/* drivers/acpi/thermal.c 1058 */;
	int cocci_id/* drivers/acpi/thermal.c 1058 */;
	struct work_struct *cocci_id/* drivers/acpi/thermal.c 1051 */;
}
