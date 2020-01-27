cocci_test_suite() {
	int *cocci_id/* drivers/hwmon/asus_atk0110.c 834 */;
	u64 cocci_id/* drivers/hwmon/asus_atk0110.c 832 */;
	const char *cocci_id/* drivers/hwmon/asus_atk0110.c 829 */;
	struct atk_sensor_data *cocci_id/* drivers/hwmon/asus_atk0110.c 828 */;
	struct device *cocci_id/* drivers/hwmon/asus_atk0110.c 822 */;
	struct dentry *cocci_id/* drivers/hwmon/asus_atk0110.c 791 */;
	enum atk_pack_member{HWMON_PACK_FLAGS, HWMON_PACK_NAME, HWMON_PACK_LIMIT1, HWMON_PACK_LIMIT2, HWMON_PACK_ENABLE,} cocci_id/* drivers/hwmon/asus_atk0110.c 79 */;
	const struct file_operations cocci_id/* drivers/hwmon/asus_atk0110.c 782 */;
	loff_t *cocci_id/* drivers/hwmon/asus_atk0110.c 768 */;
	char __user *cocci_id/* drivers/hwmon/asus_atk0110.c 767 */;
	ssize_t cocci_id/* drivers/hwmon/asus_atk0110.c 767 */;
	u8 cocci_id/* drivers/hwmon/asus_atk0110.c 724 */;
	struct inode *cocci_id/* drivers/hwmon/asus_atk0110.c 719 */;
	struct file *cocci_id/* drivers/hwmon/asus_atk0110.c 719 */;
	union acpi_object *cocci_id/* drivers/hwmon/asus_atk0110.c 687 */;
	char *cocci_id/* drivers/hwmon/asus_atk0110.c 687 */;
	size_t cocci_id/* drivers/hwmon/asus_atk0110.c 687 */;
	struct atk_acpi_ret_buffer *cocci_id/* drivers/hwmon/asus_atk0110.c 661 */;
	u64 *cocci_id/* drivers/hwmon/asus_atk0110.c 657 */;
	void *cocci_id/* drivers/hwmon/asus_atk0110.c 657 */;
	struct atk_acpi_input_buf *cocci_id/* drivers/hwmon/asus_atk0110.c 565 */;
	u8 *cocci_id/* drivers/hwmon/asus_atk0110.c 538 */;
	union acpi_object cocci_id/* drivers/hwmon/asus_atk0110.c 493 */;
	struct acpi_object_list cocci_id/* drivers/hwmon/asus_atk0110.c 492 */;
	u16 cocci_id/* drivers/hwmon/asus_atk0110.c 487 */;
	const int cocci_id/* drivers/hwmon/asus_atk0110.c 332 */;
	bool cocci_id/* drivers/hwmon/asus_atk0110.c 281 */;
	enum atk_pack_member cocci_id/* drivers/hwmon/asus_atk0110.c 279 */;
	const struct dmi_system_id __initconst cocci_id/* drivers/hwmon/asus_atk0110.c 27 */[];
	sysfs_show_func cocci_id/* drivers/hwmon/asus_atk0110.c 267 */;
	struct device_attribute *cocci_id/* drivers/hwmon/asus_atk0110.c 266 */;
	struct atk_sensor_data cocci_id/* drivers/hwmon/asus_atk0110.c 205 */;
	struct acpi_driver cocci_id/* drivers/hwmon/asus_atk0110.c 194 */;
	int cocci_id/* drivers/hwmon/asus_atk0110.c 192 */(struct atk_sensor_data *sensor,
							   u64 *value);
	void cocci_id/* drivers/hwmon/asus_atk0110.c 191 */(struct atk_data *data,
							    union acpi_object *obj);
	int cocci_id/* drivers/hwmon/asus_atk0110.c 189 */(struct acpi_device *device);
	struct atk_acpi_input_buf {
		u32 id;
		u32 param1;
		u32 param2;
	} cocci_id/* drivers/hwmon/asus_atk0110.c 183 */;
	struct atk_acpi_ret_buffer {
		u32 flags;
		u32 value;
		u8 data[];
	} cocci_id/* drivers/hwmon/asus_atk0110.c 176 */;
	struct atk_sensor_data {
		struct list_head list;
		struct atk_data *data;
		struct device_attribute label_attr;
		struct device_attribute input_attr;
		struct device_attribute limit1_attr;
		struct device_attribute limit2_attr;
		char label_attr_name[ATTR_NAME_SIZE];
		char input_attr_name[ATTR_NAME_SIZE];
		char limit1_attr_name[ATTR_NAME_SIZE];
		char limit2_attr_name[ATTR_NAME_SIZE];
		u64 id;
		u64 type;
		u64 limit1;
		u64 limit2;
		u64 cached_value;
		unsigned long last_updated;
		bool is_valid;
		const char *acpi_name;
	} cocci_id/* drivers/hwmon/asus_atk0110.c 149 */;
	const struct acpi_device_id cocci_id/* drivers/hwmon/asus_atk0110.c 141 */[];
	void __exit cocci_id/* drivers/hwmon/asus_atk0110.c 1386 */;
	void cocci_id/* drivers/hwmon/asus_atk0110.c 1386 */;
	ssize_t (*cocci_id/* drivers/hwmon/asus_atk0110.c 138 */)(struct device *dev,
								  struct device_attribute *attr,
								  char *buf);
	int cocci_id/* drivers/hwmon/asus_atk0110.c 1368 */;
	int __init cocci_id/* drivers/hwmon/asus_atk0110.c 1366 */;
	struct atk_data *cocci_id/* drivers/hwmon/asus_atk0110.c 1279 */;
	struct acpi_buffer cocci_id/* drivers/hwmon/asus_atk0110.c 1277 */;
	acpi_status cocci_id/* drivers/hwmon/asus_atk0110.c 1275 */;
	struct acpi_device *cocci_id/* drivers/hwmon/asus_atk0110.c 1273 */;
	acpi_handle cocci_id/* drivers/hwmon/asus_atk0110.c 1201 */;
	struct attribute *cocci_id/* drivers/hwmon/asus_atk0110.c 1169 */;
	struct attribute **cocci_id/* drivers/hwmon/asus_atk0110.c 1164 */;
	struct atk_acpi_input_buf cocci_id/* drivers/hwmon/asus_atk0110.c 1090 */;
	struct atk_data {
		struct device *hwmon_dev;
		acpi_handle atk_handle;
		struct acpi_device *acpi_dev;
		bool old_interface;
		acpi_handle rtmp_handle;
		acpi_handle rvlt_handle;
		acpi_handle rfan_handle;
		acpi_handle enumerate_handle;
		acpi_handle read_handle;
		acpi_handle write_handle;
		bool disable_ec;
		int voltage_count;
		int temperature_count;
		int fan_count;
		struct list_head sensor_list;
		struct attribute_group attr_group;
		const struct attribute_group *attr_groups[2];
		struct {
			struct dentry *root;
			u32 id;
		} debugfs;
	} cocci_id/* drivers/hwmon/asus_atk0110.c 106 */;
}
