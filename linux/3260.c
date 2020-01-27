cocci_test_suite() {
	struct abituguru3_data cocci_id/* drivers/hwmon/abituguru3.c 968 */;
	u16 cocci_id/* drivers/hwmon/abituguru3.c 966 */;
	u8 cocci_id/* drivers/hwmon/abituguru3.c 965 */[2];
	char *cocci_id/* drivers/hwmon/abituguru3.c 964 */;
	struct abituguru3_data *cocci_id/* drivers/hwmon/abituguru3.c 962 */;
	int cocci_id/* drivers/hwmon/abituguru3.c 961 */[3];
	const int cocci_id/* drivers/hwmon/abituguru3.c 960 */[3];
	struct sensor_device_attribute_2 cocci_id/* drivers/hwmon/abituguru3.c 954 */[];
	const struct sensor_device_attribute_2 cocci_id/* drivers/hwmon/abituguru3.c 911 */[3][10];
	struct sensor_device_attribute_2 *cocci_id/* drivers/hwmon/abituguru3.c 862 */;
	struct device_attribute *cocci_id/* drivers/hwmon/abituguru3.c 859 */;
	ssize_t cocci_id/* drivers/hwmon/abituguru3.c 858 */;
	const struct abituguru3_sensor_info *cocci_id/* drivers/hwmon/abituguru3.c 831 */;
	struct abituguru3_data *cocci_id/* drivers/hwmon/abituguru3.c 823 */(struct device *dev);
	u8 *cocci_id/* drivers/hwmon/abituguru3.c 738 */;
	bool cocci_id/* drivers/hwmon/abituguru3.c 620 */;
	const struct abituguru3_motherboard_info cocci_id/* drivers/hwmon/abituguru3.c 186 */[];
	struct abituguru3_data {
		struct device *hwmon_dev;
		struct mutex update_lock;
		unsigned short addr;
		char valid;
		unsigned long last_updated;
		struct sensor_device_attribute_2 sysfs_attr[ABIT_UGURU3_MAX_NO_SENSORS * 10];
		char sysfs_names[ABIT_UGURU3_SYSFS_NAMES_LENGTH];
		const struct abituguru3_sensor_info *sensors;
		u8 alarms[48 / 8];
		u8 value[48];
		u8 settings[48][3];
	} cocci_id/* drivers/hwmon/abituguru3.c 144 */;
	struct abituguru3_motherboard_info {
		u16 id;
		const char *dmi_name[ABIT_UGURU3_MAX_DMI_NAMES + 1];
		struct abituguru3_sensor_info sensors[ABIT_UGURU3_MAX_NO_SENSORS + 1];
	} cocci_id/* drivers/hwmon/abituguru3.c 132 */;
	void __exit cocci_id/* drivers/hwmon/abituguru3.c 1297 */;
	struct resource cocci_id/* drivers/hwmon/abituguru3.c 1238 */;
	struct platform_device *cocci_id/* drivers/hwmon/abituguru3.c 1234 */;
	unsigned int cocci_id/* drivers/hwmon/abituguru3.c 1223 */;
	u8 cocci_id/* drivers/hwmon/abituguru3.c 1215 */;
	int __init cocci_id/* drivers/hwmon/abituguru3.c 1208 */;
	void cocci_id/* drivers/hwmon/abituguru3.c 1208 */;
	struct abituguru3_sensor_info {
		const char *name;
		int port;
		int type;
		int multiplier;
		int divisor;
		int offset;
	} cocci_id/* drivers/hwmon/abituguru3.c 120 */;
	size_t cocci_id/* drivers/hwmon/abituguru3.c 1169 */;
	const char *const *cocci_id/* drivers/hwmon/abituguru3.c 1168 */;
	int cocci_id/* drivers/hwmon/abituguru3.c 1167 */;
	const char *cocci_id/* drivers/hwmon/abituguru3.c 1166 */;
	struct platform_driver cocci_id/* drivers/hwmon/abituguru3.c 1155 */;
	struct device *cocci_id/* drivers/hwmon/abituguru3.c 1142 */;
}
