cocci_test_suite() {
	void __exit cocci_id/* drivers/hwmon/acpi_power_meter.c 990 */;
	void cocci_id/* drivers/hwmon/acpi_power_meter.c 990 */;
	int __init cocci_id/* drivers/hwmon/acpi_power_meter.c 974 */;
	struct sensor_template {
		char *label;
		ssize_t (*show)(struct device *dev,
				struct device_attribute *devattr, char *buf);
		ssize_t (*set)(struct device *dev,
			       struct device_attribute *devattr,
			       const char *buf, size_t count);
		int index;
	} cocci_id/* drivers/hwmon/acpi_power_meter.c 97 */;
	const struct dmi_system_id cocci_id/* drivers/hwmon/acpi_power_meter.c 964 */[]__initconst;
	const struct dmi_system_id *cocci_id/* drivers/hwmon/acpi_power_meter.c 958 */;
	struct acpi_driver cocci_id/* drivers/hwmon/acpi_power_meter.c 945 */;
	struct device *cocci_id/* drivers/hwmon/acpi_power_meter.c 924 */;
	struct acpi_power_meter_resource cocci_id/* drivers/hwmon/acpi_power_meter.c 865 */;
	struct acpi_power_meter_resource *cocci_id/* drivers/hwmon/acpi_power_meter.c 860 */;
	struct acpi_device *cocci_id/* drivers/hwmon/acpi_power_meter.c 857 */;
	int cocci_id/* drivers/hwmon/acpi_power_meter.c 857 */;
	u32 cocci_id/* drivers/hwmon/acpi_power_meter.c 810 */;
	struct acpi_power_meter_capabilities cocci_id/* drivers/hwmon/acpi_power_meter.c 758 */;
	struct acpi_power_meter_resource {
		struct acpi_device *acpi_dev;
		acpi_bus_id name;
		struct mutex lock;
		struct device *hwmon_dev;
		struct acpi_power_meter_capabilities caps;
		acpi_string model_number;
		acpi_string serial_number;
		acpi_string oem_info;
		u64 power;
		u64 cap;
		u64 avg_interval;
		int sensors_valid;
		unsigned long sensors_last_updated;
		struct sensor_device_attribute sensors[NUM_SENSORS];
		int num_sensors;
		s64 trip[2];
		int num_domain_devices;
		struct acpi_device **domain_devices;
		struct kobject *holders_dir;
	} cocci_id/* drivers/hwmon/acpi_power_meter.c 75 */;
	acpi_status cocci_id/* drivers/hwmon/acpi_power_meter.c 738 */;
	union acpi_object *cocci_id/* drivers/hwmon/acpi_power_meter.c 736 */;
	struct acpi_buffer cocci_id/* drivers/hwmon/acpi_power_meter.c 733 */;
	acpi_string *cocci_id/* drivers/hwmon/acpi_power_meter.c 721 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/acpi_power_meter.c 622 */;
	struct sensor_template *cocci_id/* drivers/hwmon/acpi_power_meter.c 619 */;
	struct acpi_power_meter_capabilities {
		u64 flags;
		u64 units;
		u64 type;
		u64 accuracy;
		u64 sampling_time;
		u64 min_avg_interval;
		u64 max_avg_interval;
		u64 hysteresis;
		u64 configurable_cap;
		u64 min_cap;
		u64 max_cap;
	} cocci_id/* drivers/hwmon/acpi_power_meter.c 61 */;
	const struct acpi_device_id cocci_id/* drivers/hwmon/acpi_power_meter.c 55 */[];
	bool cocci_id/* drivers/hwmon/acpi_power_meter.c 48 */;
	struct sensor_template cocci_id/* drivers/hwmon/acpi_power_meter.c 469 */[];
	unsigned int cocci_id/* drivers/hwmon/acpi_power_meter.c 441 */;
	char *cocci_id/* drivers/hwmon/acpi_power_meter.c 437 */;
	u64 cocci_id/* drivers/hwmon/acpi_power_meter.c 386 */;
	acpi_string cocci_id/* drivers/hwmon/acpi_power_meter.c 357 */;
	unsigned long long cocci_id/* drivers/hwmon/acpi_power_meter.c 259 */;
	struct acpi_object_list cocci_id/* drivers/hwmon/acpi_power_meter.c 258 */;
	union acpi_object cocci_id/* drivers/hwmon/acpi_power_meter.c 254 */[];
	unsigned long cocci_id/* drivers/hwmon/acpi_power_meter.c 148 */;
	union acpi_object cocci_id/* drivers/hwmon/acpi_power_meter.c 145 */;
	const char *cocci_id/* drivers/hwmon/acpi_power_meter.c 141 */;
	size_t cocci_id/* drivers/hwmon/acpi_power_meter.c 141 */;
	struct device_attribute *cocci_id/* drivers/hwmon/acpi_power_meter.c 140 */;
	ssize_t cocci_id/* drivers/hwmon/acpi_power_meter.c 139 */;
}
