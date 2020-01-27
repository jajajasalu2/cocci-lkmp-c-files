cocci_test_suite() {
	struct platform_data {
		const struct attribute_group *attr_groups[MAX_SENSOR_TYPE + 1];
		struct sensor_group_data *sgrp_data;
		u32 sensors_count;
		u32 nr_sensor_groups;
	} cocci_id/* drivers/hwmon/ibmpowernv.c 90 */;
	struct sensor_group_data {
		struct mutex mutex;
		u32 gid;
		bool enable;
	} cocci_id/* drivers/hwmon/ibmpowernv.c 84 */;
	struct sensor_data {
		u32 id;
		u32 hwmon_index;
		u32 opal_index;
		enum sensors type;
		char label[MAX_LABEL_LEN];
		char name[MAX_ATTR_LEN];
		struct device_attribute dev_attr;
		struct sensor_group_data *sgrp_data;
	} cocci_id/* drivers/hwmon/ibmpowernv.c 73 */;
	struct platform_driver cocci_id/* drivers/hwmon/ibmpowernv.c 706 */;
	const struct of_device_id cocci_id/* drivers/hwmon/ibmpowernv.c 700 */[];
	const struct platform_device_id cocci_id/* drivers/hwmon/ibmpowernv.c 692 */[];
	struct device *cocci_id/* drivers/hwmon/ibmpowernv.c 665 */;
	struct sensor_group {
		const char *name;
		struct attribute_group group;
		u32 attr_count;
		u32 hwmon_index;
	} cocci_id/* drivers/hwmon/ibmpowernv.c 59 */[];
	struct sensor_group_data *cocci_id/* drivers/hwmon/ibmpowernv.c 569 */;
	u32 cocci_id/* drivers/hwmon/ibmpowernv.c 559 */[MAX_SENSOR_TYPE];
	u32 cocci_id/* drivers/hwmon/ibmpowernv.c 558 */;
	struct sensor_data *cocci_id/* drivers/hwmon/ibmpowernv.c 557 */;
	struct device_node *cocci_id/* drivers/hwmon/ibmpowernv.c 556 */;
	const struct attribute_group **cocci_id/* drivers/hwmon/ibmpowernv.c 555 */;
	struct platform_data *cocci_id/* drivers/hwmon/ibmpowernv.c 554 */;
	struct platform_device *cocci_id/* drivers/hwmon/ibmpowernv.c 552 */;
	int cocci_id/* drivers/hwmon/ibmpowernv.c 552 */;
	char *cocci_id/* drivers/hwmon/ibmpowernv.c 526 */;
	const char *const cocci_id/* drivers/hwmon/ibmpowernv.c 52 */[];
	const struct attribute_group *cocci_id/* drivers/hwmon/ibmpowernv.c 508 */;
	ssize_t (*cocci_id/* drivers/hwmon/ibmpowernv.c 487 */)(struct device *dev,
								struct device_attribute *attr,
								const char *buf,
								size_t count);
	ssize_t (*cocci_id/* drivers/hwmon/ibmpowernv.c 484 */)(struct device *dev,
								struct device_attribute *attr,
								char *buf);
	void cocci_id/* drivers/hwmon/ibmpowernv.c 483 */;
	struct attribute *cocci_id/* drivers/hwmon/ibmpowernv.c 470 */;
	struct of_phandle_iterator cocci_id/* drivers/hwmon/ibmpowernv.c 399 */;
	enum sensors{FAN, TEMP, POWER_SUPPLY, POWER_INPUT, CURRENT, ENERGY, MAX_SENSOR_TYPE,} cocci_id/* drivers/hwmon/ibmpowernv.c 36 */;
	char cocci_id/* drivers/hwmon/ibmpowernv.c 276 */[MAX_ATTR_LEN];
	enum sensors cocci_id/* drivers/hwmon/ibmpowernv.c 248 */;
	const char *cocci_id/* drivers/hwmon/ibmpowernv.c 248 */;
	char cocci_id/* drivers/hwmon/ibmpowernv.c 221 */[8];
	u32 *cocci_id/* drivers/hwmon/ibmpowernv.c 218 */;
	size_t cocci_id/* drivers/hwmon/ibmpowernv.c 187 */;
	bool cocci_id/* drivers/hwmon/ibmpowernv.c 140 */;
	struct sensor_data cocci_id/* drivers/hwmon/ibmpowernv.c 126 */;
	struct device_attribute *cocci_id/* drivers/hwmon/ibmpowernv.c 124 */;
	ssize_t cocci_id/* drivers/hwmon/ibmpowernv.c 123 */;
	u64 cocci_id/* drivers/hwmon/ibmpowernv.c 103 */;
}
