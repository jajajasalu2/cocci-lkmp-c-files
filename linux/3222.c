cocci_test_suite() {
	void *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 998 */;
	struct attribute *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 994 */;
	char *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 935 */;
	long cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 854 */;
	s32 cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 814 */;
	s64 cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 813 */;
	struct pmbus_data {
		struct device *dev;
		struct device *hwmon_dev;
		u32 flags;
		int exponent[PMBUS_PAGES];
		const struct pmbus_driver_info *info;
		int max_attributes;
		int num_attributes;
		struct attribute_group group;
		const struct attribute_group **groups;
		struct dentry *debugfs;
		struct pmbus_sensor *sensors;
		struct mutex update_lock;
		bool valid;
		unsigned long last_updated;
		u16 status[PB_NUM_STATUS_REG];
		bool has_status_word;
		int (*read_status)(struct i2c_client *client, int page);
		u8 currpage;
	} cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 79 */;
	struct pmbus_label cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 77 */;
	s16 cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 744 */;
	struct pmbus_label {
		char name[PMBUS_NAME_SIZE];
		struct device_attribute attribute;
		char label[PMBUS_NAME_SIZE];
	} cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 71 */;
	struct pmbus_boolean cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 69 */;
	struct pmbus_boolean {
		char name[PMBUS_NAME_SIZE];
		struct sensor_device_attribute attribute;
		struct pmbus_sensor *s1;
		struct pmbus_sensor *s2;
	} cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 62 */;
	struct pmbus_sensor cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 60 */;
	struct _pmbus_status *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 573 */;
	struct _pmbus_status {
		u32 func;
		u16 base;
		u16 reg;
	} cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 545 */[];
	int (*cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 494 */)(struct i2c_client *client,
								  int page,
								  int reg);
	struct pmbus_sensor {
		struct pmbus_sensor *next;
		char name[PMBUS_NAME_SIZE];
		struct device_attribute attribute;
		u8 page;
		u16 reg;
		enum pmbus_sensor_classes class;
		bool update;
		bool convert;
		int data;
	} cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 47 */;
	enum pmbus_fan_mode cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 416 */;
	const struct pmbus_driver_info *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 391 */;
	struct pmbus_data *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 390 */;
	struct i2c_client *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 388 */;
	int cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 388 */;
	unsigned int cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 368 */;
	void __exit cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 2541 */;
	int __init cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 2532 */;
	u16 cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 246 */;
	size_t cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 2434 */;
	const struct pmbus_platform_data *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 2432 */;
	struct pmbus_driver_info *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 2429 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 2428 */;
	char cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 2290 */[PMBUS_NAME_SIZE];
	struct pmbus_debugfs_entry *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 2256 */;
	u64 *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 2253 */;
	struct dentry *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 2250 */;
	struct regulator_config cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 2224 */;
	const struct regulator_ops cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 2208 */;
	u8 cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 2191 */;
	struct device *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 2189 */;
	bool cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 2187 */;
	struct regulator_dev *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 2187 */;
	struct pmbus_samples_reg *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1986 */;
	struct pmbus_samples_attr *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1984 */;
	ssize_t cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1963 */;
	struct pmbus_samples_reg cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1947 */;
	struct pmbus_samples_attr cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1928 */[];
	struct pmbus_samples_reg {
		int page;
		struct pmbus_samples_attr *attr;
		struct device_attribute dev_attr;
	} cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1922 */;
	struct pmbus_samples_attr {
		int reg;
		char *name;
	} cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1917 */;
	const u32 cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1790 */[];
	const struct pmbus_sensor_attr cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1523 */[];
	const struct pmbus_limit_attr cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1460 */[];
	const int cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 134 */[];
	const struct pmbus_limit_attr *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1183 */;
	const struct pmbus_sensor_attr *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1181 */;
	struct pmbus_sensor_attr {
		u16 reg;
		u16 gbit;
		u8 nlimit;
		enum pmbus_sensor_classes class;
		const char *label;
		bool paged;
		bool update;
		bool compare;
		u32 func;
		u32 sfunc;
		int sbase;
		const struct pmbus_limit_attr *limit;
	} cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1155 */;
	struct pmbus_limit_attr {
		u16 reg;
		u16 sbit;
		bool update;
		bool low;
		const char *attr;
		const char *alarm;
	} cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1141 */;
	struct pmbus_debugfs_entry {
		struct i2c_client *client;
		u8 page;
		u8 reg;
	} cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 114 */;
	struct device_attribute *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1114 */;
	struct pmbus_label *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1113 */;
	enum pmbus_sensor_classes cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1072 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1051 */;
	struct pmbus_boolean *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1050 */;
	struct pmbus_sensor *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1046 */;
	const char *cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1045 */;
	ssize_t (*cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1035 */)(struct device *dev,
								       struct device_attribute *attr,
								       const char *buf,
								       size_t count);
	ssize_t (*cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1032 */)(struct device *dev,
								       struct device_attribute *attr,
								       char *buf);
	umode_t cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1031 */;
	void cocci_id/* drivers/hwmon/pmbus/pmbus_core.c 1029 */;
}
