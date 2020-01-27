cocci_test_suite() {
	u16 cocci_id/* drivers/hwmon/vt8231.c 984 */;
	const struct pci_device_id *cocci_id/* drivers/hwmon/vt8231.c 982 */;
	struct resource cocci_id/* drivers/hwmon/vt8231.c 942 */;
	unsigned short cocci_id/* drivers/hwmon/vt8231.c 940 */;
	const u8 cocci_id/* drivers/hwmon/vt8231.c 85 */[];
	struct vt8231_data cocci_id/* drivers/hwmon/vt8231.c 793 */;
	struct resource *cocci_id/* drivers/hwmon/vt8231.c 780 */;
	struct pci_driver cocci_id/* drivers/hwmon/vt8231.c 772 */;
	int cocci_id/* drivers/hwmon/vt8231.c 769 */(struct pci_dev *dev,
						     const struct pci_device_id *id);
	const struct pci_device_id cocci_id/* drivers/hwmon/vt8231.c 762 */[];
	struct platform_driver cocci_id/* drivers/hwmon/vt8231.c 754 */;
	const struct attribute_group cocci_id/* drivers/hwmon/vt8231.c 750 */;
	struct attribute *cocci_id/* drivers/hwmon/vt8231.c 736 */[];
	const struct attribute_group cocci_id/* drivers/hwmon/vt8231.c 678 */[6];
	struct attribute *cocci_id/* drivers/hwmon/vt8231.c 638 */[6][5];
	struct vt8231_data *cocci_id/* drivers/hwmon/vt8231.c 612 */;
	char *cocci_id/* drivers/hwmon/vt8231.c 609 */;
	struct device_attribute *cocci_id/* drivers/hwmon/vt8231.c 608 */;
	struct device *cocci_id/* drivers/hwmon/vt8231.c 608 */;
	ssize_t cocci_id/* drivers/hwmon/vt8231.c 608 */;
	unsigned long cocci_id/* drivers/hwmon/vt8231.c 549 */;
	size_t cocci_id/* drivers/hwmon/vt8231.c 545 */;
	const char *cocci_id/* drivers/hwmon/vt8231.c 544 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/vt8231.c 516 */;
	struct platform_device *cocci_id/* drivers/hwmon/vt8231.c 35 */;
	void cocci_id/* drivers/hwmon/vt8231.c 168 */(struct vt8231_data *data);
	struct vt8231_data *cocci_id/* drivers/hwmon/vt8231.c 167 */(struct device *dev);
	int cocci_id/* drivers/hwmon/vt8231.c 165 */(struct platform_device *pdev);
	struct pci_dev *cocci_id/* drivers/hwmon/vt8231.c 164 */;
	struct vt8231_data {
		unsigned short addr;
		const char *name;
		struct mutex update_lock;
		struct device *hwmon_dev;
		char valid;
		unsigned long last_updated;
		u8 in[6];
		u8 in_max[6];
		u8 in_min[6];
		u16 temp[6];
		u8 temp_max[6];
		u8 temp_min[6];
		u8 fan[2];
		u8 fan_min[2];
		u8 fan_div[2];
		u16 alarms;
		u8 uch_config;
	} cocci_id/* drivers/hwmon/vt8231.c 142 */;
	u8 cocci_id/* drivers/hwmon/vt8231.c 133 */;
	long cocci_id/* drivers/hwmon/vt8231.c 133 */;
	int cocci_id/* drivers/hwmon/vt8231.c 133 */;
	void __exit cocci_id/* drivers/hwmon/vt8231.c 1048 */;
	void cocci_id/* drivers/hwmon/vt8231.c 1048 */;
	int __init cocci_id/* drivers/hwmon/vt8231.c 1043 */;
}