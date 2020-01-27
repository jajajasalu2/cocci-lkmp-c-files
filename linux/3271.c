cocci_test_suite() {
	const struct attribute_group cocci_id/* drivers/hwmon/pc87360.c 840 */;
	struct attribute *cocci_id/* drivers/hwmon/pc87360.c 834 */[];
	const u8 cocci_id/* drivers/hwmon/pc87360.c 69 */[LDNI_MAX];
	struct pc87360_data *cocci_id/* drivers/hwmon/pc87360.c 617 */;
	struct device_attribute *cocci_id/* drivers/hwmon/pc87360.c 615 */;
	char *cocci_id/* drivers/hwmon/pc87360.c 615 */;
	struct device *cocci_id/* drivers/hwmon/pc87360.c 614 */;
	ssize_t cocci_id/* drivers/hwmon/pc87360.c 614 */;
	unsigned long cocci_id/* drivers/hwmon/pc87360.c 599 */;
	unsigned cocci_id/* drivers/hwmon/pc87360.c 541 */;
	unsigned short cocci_id/* drivers/hwmon/pc87360.c 52 */;
	u8 cocci_id/* drivers/hwmon/pc87360.c 41 */[4];
	unsigned short cocci_id/* drivers/hwmon/pc87360.c 40 */[3];
	const struct attribute_group cocci_id/* drivers/hwmon/pc87360.c 386 */[];
	struct attribute *cocci_id/* drivers/hwmon/pc87360.c 380 */[][5];
	struct sensor_device_attribute cocci_id/* drivers/hwmon/pc87360.c 324 */[];
	long cocci_id/* drivers/hwmon/pc87360.c 282 */;
	const char *cocci_id/* drivers/hwmon/pc87360.c 278 */;
	size_t cocci_id/* drivers/hwmon/pc87360.c 278 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/pc87360.c 263 */;
	struct platform_driver cocci_id/* drivers/hwmon/pc87360.c 232 */;
	struct pc87360_data *cocci_id/* drivers/hwmon/pc87360.c 226 */(struct device *dev);
	void cocci_id/* drivers/hwmon/pc87360.c 224 */(struct platform_device *pdev,
						       int use_thermistors);
	void cocci_id/* drivers/hwmon/pc87360.c 222 */(struct pc87360_data *data,
						       u8 ldi, u8 bank,
						       u8 reg, u8 value);
	int cocci_id/* drivers/hwmon/pc87360.c 220 */(struct pc87360_data *data,
						      u8 ldi, u8 bank, u8 reg);
	int cocci_id/* drivers/hwmon/pc87360.c 217 */(struct platform_device *pdev);
	void __exit cocci_id/* drivers/hwmon/pc87360.c 1774 */;
	struct pc87360_data {
		const char *name;
		struct device *hwmon_dev;
		struct mutex lock;
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		int address[3];
		u8 fannr,innr,tempnr;
		u8 fan[3];
		u8 fan_min[3];
		u8 fan_status[3];
		u8 pwm[3];
		u16 fan_conf;
		u16 in_vref;
		u8 in[14];
		u8 in_min[14];
		u8 in_max[14];
		u8 in_crit[3];
		u8 in_status[14];
		u16 in_alarms;
		u8 vid_conf;
		u8 vrm;
		u8 vid;
		s8 temp[3];
		s8 temp_min[3];
		s8 temp_max[3];
		s8 temp_crit[3];
		u8 temp_status[3];
		u8 temp_alarms;
	} cocci_id/* drivers/hwmon/pc87360.c 176 */;
	struct resource cocci_id/* drivers/hwmon/pc87360.c 1696 */;
	struct resource cocci_id/* drivers/hwmon/pc87360.c 1686 */[3];
	int __init cocci_id/* drivers/hwmon/pc87360.c 1684 */;
	void cocci_id/* drivers/hwmon/pc87360.c 1535 */;
	const u8 cocci_id/* drivers/hwmon/pc87360.c 1401 */[3];
	const u8 cocci_id/* drivers/hwmon/pc87360.c 1400 */[14];
	struct platform_device *cocci_id/* drivers/hwmon/pc87360.c 1395 */;
	u8 cocci_id/* drivers/hwmon/pc87360.c 124 */;
	int cocci_id/* drivers/hwmon/pc87360.c 124 */;
	struct pc87360_data cocci_id/* drivers/hwmon/pc87360.c 1202 */;
	u16 cocci_id/* drivers/hwmon/pc87360.c 1093 */;
	unsigned short *cocci_id/* drivers/hwmon/pc87360.c 1091 */;
	u8 *cocci_id/* drivers/hwmon/pc87360.c 1090 */;
	struct attribute *cocci_id/* drivers/hwmon/pc87360.c 1065 */[][10];
}
