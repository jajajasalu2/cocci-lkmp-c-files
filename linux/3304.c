cocci_test_suite() {
	void __exit cocci_id/* drivers/hwmon/via686a.c 931 */;
	void cocci_id/* drivers/hwmon/via686a.c 931 */;
	int __init cocci_id/* drivers/hwmon/via686a.c 926 */;
	struct pci_driver cocci_id/* drivers/hwmon/via686a.c 920 */;
	const struct pci_device_id *cocci_id/* drivers/hwmon/via686a.c 859 */;
	struct resource cocci_id/* drivers/hwmon/via686a.c 819 */;
	const struct pci_device_id cocci_id/* drivers/hwmon/via686a.c 811 */[];
	const u8 cocci_id/* drivers/hwmon/via686a.c 71 */[];
	struct via686a_data cocci_id/* drivers/hwmon/via686a.c 681 */;
	struct resource *cocci_id/* drivers/hwmon/via686a.c 669 */;
	struct platform_driver cocci_id/* drivers/hwmon/via686a.c 657 */;
	const struct attribute_group cocci_id/* drivers/hwmon/via686a.c 653 */;
	struct attribute *cocci_id/* drivers/hwmon/via686a.c 604 */[];
	struct via686a_data *cocci_id/* drivers/hwmon/via686a.c 582 */;
	char *cocci_id/* drivers/hwmon/via686a.c 579 */;
	struct device_attribute *cocci_id/* drivers/hwmon/via686a.c 578 */;
	struct device *cocci_id/* drivers/hwmon/via686a.c 578 */;
	ssize_t cocci_id/* drivers/hwmon/via686a.c 578 */;
	unsigned long cocci_id/* drivers/hwmon/via686a.c 545 */;
	const char *cocci_id/* drivers/hwmon/via686a.c 540 */;
	size_t cocci_id/* drivers/hwmon/via686a.c 540 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/via686a.c 517 */;
	struct platform_device *cocci_id/* drivers/hwmon/via686a.c 46 */;
	unsigned short cocci_id/* drivers/hwmon/via686a.c 41 */;
	void cocci_id/* drivers/hwmon/via686a.c 339 */(struct via686a_data *data);
	struct via686a_data *cocci_id/* drivers/hwmon/via686a.c 338 */(struct device *dev);
	int cocci_id/* drivers/hwmon/via686a.c 324 */(struct platform_device *pdev);
	struct pci_dev *cocci_id/* drivers/hwmon/via686a.c 322 */;
	struct via686a_data {
		unsigned short addr;
		const char *name;
		struct device *hwmon_dev;
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		u8 in[5];
		u8 in_max[5];
		u8 in_min[5];
		u8 fan[2];
		u8 fan_min[2];
		u16 temp[3];
		u8 temp_over[3];
		u8 temp_hyst[3];
		u8 fan_div[2];
		u16 alarms;
	} cocci_id/* drivers/hwmon/via686a.c 302 */;
	u16 cocci_id/* drivers/hwmon/via686a.c 281 */;
	const s16 cocci_id/* drivers/hwmon/via686a.c 202 */[];
	u8 cocci_id/* drivers/hwmon/via686a.c 157 */;
	long cocci_id/* drivers/hwmon/via686a.c 157 */;
	int cocci_id/* drivers/hwmon/via686a.c 157 */;
}
