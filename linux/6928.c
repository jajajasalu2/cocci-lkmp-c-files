cocci_test_suite() {
	struct attribute *cocci_id/* drivers/w1/slaves/w1_therm.c 98 */[];
	ssize_t cocci_id/* drivers/w1/slaves/w1_therm.c 87 */(struct device *device,
							      struct device_attribute *attr,
							      char *buf);
	ssize_t cocci_id/* drivers/w1/slaves/w1_therm.c 84 */(struct device *device,
							      struct device_attribute *attr,
							      const char *buf,
							      size_t size);
	void __exit cocci_id/* drivers/w1/slaves/w1_therm.c 728 */;
	void cocci_id/* drivers/w1/slaves/w1_therm.c 728 */;
	int __init cocci_id/* drivers/w1/slaves/w1_therm.c 715 */;
	struct w1_reg_num *cocci_id/* drivers/w1/slaves/w1_therm.c 651 */;
	u64 cocci_id/* drivers/w1/slaves/w1_therm.c 650 */;
	struct device_attribute *cocci_id/* drivers/w1/slaves/w1_therm.c 643 */;
	char *cocci_id/* drivers/w1/slaves/w1_therm.c 643 */;
	struct w1_therm_family_data cocci_id/* drivers/w1/slaves/w1_therm.c 61 */;
	struct therm_info cocci_id/* drivers/w1/slaves/w1_therm.c 605 */;
	struct w1_therm_family_data *cocci_id/* drivers/w1/slaves/w1_therm.c 57 */;
	unsigned long cocci_id/* drivers/w1/slaves/w1_therm.c 503 */;
	unsigned int cocci_id/* drivers/w1/slaves/w1_therm.c 502 */;
	struct therm_info {
		u8 rom[9];
		u8 crc;
		u8 verdict;
	} cocci_id/* drivers/w1/slaves/w1_therm.c 49 */;
	u8 *cocci_id/* drivers/w1/slaves/w1_therm.c 479 */;
	int cocci_id/* drivers/w1/slaves/w1_therm.c 478 */;
	u8 cocci_id/* drivers/w1/slaves/w1_therm.c 477 */;
	struct w1_master *cocci_id/* drivers/w1/slaves/w1_therm.c 476 */;
	struct w1_slave *cocci_id/* drivers/w1/slaves/w1_therm.c 474 */;
	struct therm_info *cocci_id/* drivers/w1/slaves/w1_therm.c 474 */;
	struct device *cocci_id/* drivers/w1/slaves/w1_therm.c 473 */;
	ssize_t cocci_id/* drivers/w1/slaves/w1_therm.c 473 */;
	size_t cocci_id/* drivers/w1/slaves/w1_therm.c 450 */;
	const char *cocci_id/* drivers/w1/slaves/w1_therm.c 449 */;
	struct w1_therm_family_data {
		uint8_t rom[9];
		atomic_t refcnt;
	} cocci_id/* drivers/w1/slaves/w1_therm.c 44 */;
	s32 cocci_id/* drivers/w1/slaves/w1_therm.c 425 */;
	s16 cocci_id/* drivers/w1/slaves/w1_therm.c 412 */;
	__le16 *cocci_id/* drivers/w1/slaves/w1_therm.c 412 */;
	u8 cocci_id/* drivers/w1/slaves/w1_therm.c 410 */[9];
	uint8_t cocci_id/* drivers/w1/slaves/w1_therm.c 335 */;
	struct w1_therm_family_converter cocci_id/* drivers/w1/slaves/w1_therm.c 216 */[];
	int cocci_id/* drivers/w1/slaves/w1_therm.c 213 */(u8 rom[9]);
	int cocci_id/* drivers/w1/slaves/w1_therm.c 209 */(struct device *device,
							   int val);
	int cocci_id/* drivers/w1/slaves/w1_therm.c 206 */(struct device *device);
	struct w1_therm_family_converter {
		u8 broken;
		u16 reserved;
		struct w1_family *f;
		int (*convert)(u8 rom[9]);
		int (*precision)(struct device *device, int val);
		int (*eeprom)(struct device *device);
	} cocci_id/* drivers/w1/slaves/w1_therm.c 196 */;
	struct w1_family cocci_id/* drivers/w1/slaves/w1_therm.c 181 */;
	struct w1_family_ops cocci_id/* drivers/w1/slaves/w1_therm.c 164 */;
	const struct hwmon_chip_info cocci_id/* drivers/w1/slaves/w1_therm.c 148 */;
	const struct hwmon_ops cocci_id/* drivers/w1/slaves/w1_therm.c 143 */;
	const struct hwmon_channel_info *cocci_id/* drivers/w1/slaves/w1_therm.c 138 */[];
	const struct hwmon_channel_info cocci_id/* drivers/w1/slaves/w1_therm.c 133 */;
	const u32 cocci_id/* drivers/w1/slaves/w1_therm.c 128 */[];
	long *cocci_id/* drivers/w1/slaves/w1_therm.c 118 */;
	u32 cocci_id/* drivers/w1/slaves/w1_therm.c 112 */;
	umode_t cocci_id/* drivers/w1/slaves/w1_therm.c 111 */;
	enum hwmon_sensor_types cocci_id/* drivers/w1/slaves/w1_therm.c 111 */;
	const void *cocci_id/* drivers/w1/slaves/w1_therm.c 111 */;
	int cocci_id/* drivers/w1/slaves/w1_therm.c 108 */(struct device *dev,
							   u32 attr,
							   int channel,
							   long *val);
}
