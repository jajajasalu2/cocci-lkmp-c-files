cocci_test_suite() {
	struct smsc47b397_data {
		unsigned short addr;
		struct mutex lock;
		struct mutex update_lock;
		unsigned long last_updated;
		int valid;
		u16 fan[4];
		u8 temp[4];
	} cocci_id/* drivers/hwmon/smsc47b397.c 93 */;
	u8 cocci_id/* drivers/hwmon/smsc47b397.c 86 */[];
	void __exit cocci_id/* drivers/hwmon/smsc47b397.c 359 */;
	void cocci_id/* drivers/hwmon/smsc47b397.c 359 */;
	struct platform_device *cocci_id/* drivers/hwmon/smsc47b397.c 35 */;
	unsigned short cocci_id/* drivers/hwmon/smsc47b397.c 31 */;
	u8 cocci_id/* drivers/hwmon/smsc47b397.c 292 */;
	struct resource cocci_id/* drivers/hwmon/smsc47b397.c 251 */;
	int __init cocci_id/* drivers/hwmon/smsc47b397.c 249 */;
	struct smsc47b397_data cocci_id/* drivers/hwmon/smsc47b397.c 235 */;
	unsigned long cocci_id/* drivers/hwmon/smsc47b397.c 230 */;
	struct resource *cocci_id/* drivers/hwmon/smsc47b397.c 224 */;
	struct platform_driver cocci_id/* drivers/hwmon/smsc47b397.c 212 */;
	int cocci_id/* drivers/hwmon/smsc47b397.c 210 */(struct platform_device *pdev);
	struct attribute *cocci_id/* drivers/hwmon/smsc47b397.c 195 */[];
	struct smsc47b397_data *cocci_id/* drivers/hwmon/smsc47b397.c 187 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/smsc47b397.c 186 */;
	char *cocci_id/* drivers/hwmon/smsc47b397.c 184 */;
	struct device_attribute *cocci_id/* drivers/hwmon/smsc47b397.c 183 */;
	struct device *cocci_id/* drivers/hwmon/smsc47b397.c 183 */;
	ssize_t cocci_id/* drivers/hwmon/smsc47b397.c 183 */;
	u16 cocci_id/* drivers/hwmon/smsc47b397.c 176 */;
	int cocci_id/* drivers/hwmon/smsc47b397.c 176 */;
	s8 cocci_id/* drivers/hwmon/smsc47b397.c 156 */;
}
