cocci_test_suite() {
	const char *cocci_id/* drivers/hwmon/pc87427.c 96 */[2];
	const u8 cocci_id/* drivers/hwmon/pc87427.c 95 */[2];
	struct resource *cocci_id/* drivers/hwmon/pc87427.c 938 */;
	const struct attribute_group cocci_id/* drivers/hwmon/pc87427.c 912 */[6];
	struct attribute *cocci_id/* drivers/hwmon/pc87427.c 842 */[6][10];
	struct pc87427_sio_data {
		unsigned short address[2];
		u8 has_fanin;
		u8 has_fanout;
	} cocci_id/* drivers/hwmon/pc87427.c 72 */;
	const struct attribute_group cocci_id/* drivers/hwmon/pc87427.c 684 */[4];
	struct attribute *cocci_id/* drivers/hwmon/pc87427.c 664 */[4][3];
	const struct attribute_group cocci_id/* drivers/hwmon/pc87427.c 541 */[8];
	struct attribute *cocci_id/* drivers/hwmon/pc87427.c 489 */[8][5];
	struct pc87427_data {
		struct device *hwmon_dev;
		struct mutex lock;
		int address[2];
		const char *name;
		unsigned long last_updated;
		u8 fan_enabled;
		u16 fan[8];
		u16 fan_min[8];
		u8 fan_status[8];
		u8 pwm_enabled;
		u8 pwm_auto_ok;
		u8 pwm_enable[4];
		u8 pwm[4];
		u8 temp_enabled;
		s16 temp[6];
		s8 temp_min[6];
		s8 temp_max[6];
		s8 temp_crit[6];
		u8 temp_status[6];
		u8 temp_type[6];
	} cocci_id/* drivers/hwmon/pc87427.c 46 */;
	const char *cocci_id/* drivers/hwmon/pc87427.c 427 */;
	size_t cocci_id/* drivers/hwmon/pc87427.c 427 */;
	int cocci_id/* drivers/hwmon/pc87427.c 409 */;
	struct pc87427_data *cocci_id/* drivers/hwmon/pc87427.c 408 */;
	struct device_attribute *cocci_id/* drivers/hwmon/pc87427.c 406 */;
	char *cocci_id/* drivers/hwmon/pc87427.c 406 */;
	struct device *cocci_id/* drivers/hwmon/pc87427.c 405 */;
	ssize_t cocci_id/* drivers/hwmon/pc87427.c 405 */;
	s8 cocci_id/* drivers/hwmon/pc87427.c 340 */;
	s16 cocci_id/* drivers/hwmon/pc87427.c 335 */;
	long cocci_id/* drivers/hwmon/pc87427.c 335 */;
	unsigned short cocci_id/* drivers/hwmon/pc87427.c 33 */;
	unsigned int cocci_id/* drivers/hwmon/pc87427.c 318 */;
	u16 cocci_id/* drivers/hwmon/pc87427.c 200 */;
	unsigned long cocci_id/* drivers/hwmon/pc87427.c 200 */;
	void __exit cocci_id/* drivers/hwmon/pc87427.c 1320 */;
	void cocci_id/* drivers/hwmon/pc87427.c 1320 */;
	u8 cocci_id/* drivers/hwmon/pc87427.c 1197 */;
	struct pc87427_sio_data *cocci_id/* drivers/hwmon/pc87427.c 1194 */;
	struct pc87427_sio_data cocci_id/* drivers/hwmon/pc87427.c 1174 */;
	struct resource cocci_id/* drivers/hwmon/pc87427.c 1139 */[2];
	const struct pc87427_sio_data *cocci_id/* drivers/hwmon/pc87427.c 1137 */;
	int __init cocci_id/* drivers/hwmon/pc87427.c 1137 */;
	struct platform_driver cocci_id/* drivers/hwmon/pc87427.c 1129 */;
	struct pc87427_data cocci_id/* drivers/hwmon/pc87427.c 1057 */;
	struct platform_device *cocci_id/* drivers/hwmon/pc87427.c 1051 */;
}