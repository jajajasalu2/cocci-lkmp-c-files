cocci_test_suite() {
	struct i5k_amb_data {
		struct device *hwmon_dev;
		unsigned long amb_base;
		unsigned long amb_len;
		u16 amb_present[MAX_MEM_CHANNELS];
		void __iomem *amb_mmio;
		struct i5k_device_attribute *attrs;
		unsigned int num_attrs;
	} cocci_id/* drivers/hwmon/i5k_amb.c 93 */;
	struct i5k_device_attribute {
		struct sensor_device_attribute s_attr;
		char name[AMB_SYSFS_NAME_LEN];
	} cocci_id/* drivers/hwmon/i5k_amb.c 88 */;
	unsigned long cocci_id/* drivers/hwmon/i5k_amb.c 82 */;
	unsigned int cocci_id/* drivers/hwmon/i5k_amb.c 82 */;
	void __exit cocci_id/* drivers/hwmon/i5k_amb.c 593 */;
	int __init cocci_id/* drivers/hwmon/i5k_amb.c 578 */;
	struct platform_driver cocci_id/* drivers/hwmon/i5k_amb.c 570 */;
	struct resource *cocci_id/* drivers/hwmon/i5k_amb.c 497 */;
	const struct pci_device_id cocci_id/* drivers/hwmon/i5k_amb.c 486 */[];
	struct {
		unsigned long err;
		unsigned long fbd0;
	} cocci_id/* drivers/hwmon/i5k_amb.c 476 */[];
	struct pci_dev *cocci_id/* drivers/hwmon/i5k_amb.c 452 */;
	u16 *cocci_id/* drivers/hwmon/i5k_amb.c 450 */;
	u32 cocci_id/* drivers/hwmon/i5k_amb.c 420 */;
	int cocci_id/* drivers/hwmon/i5k_amb.c 397 */;
	struct i5k_device_attribute *cocci_id/* drivers/hwmon/i5k_amb.c 274 */;
	u16 cocci_id/* drivers/hwmon/i5k_amb.c 253 */;
	size_t cocci_id/* drivers/hwmon/i5k_amb.c 183 */;
	const char *cocci_id/* drivers/hwmon/i5k_amb.c 182 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/i5k_amb.c 130 */;
	void cocci_id/* drivers/hwmon/i5k_amb.c 120 */;
	u8 cocci_id/* drivers/hwmon/i5k_amb.c 115 */;
	struct i5k_amb_data *cocci_id/* drivers/hwmon/i5k_amb.c 115 */;
	struct platform_device *cocci_id/* drivers/hwmon/i5k_amb.c 113 */;
	char *cocci_id/* drivers/hwmon/i5k_amb.c 105 */;
	struct device_attribute *cocci_id/* drivers/hwmon/i5k_amb.c 104 */;
	struct device *cocci_id/* drivers/hwmon/i5k_amb.c 104 */;
	ssize_t cocci_id/* drivers/hwmon/i5k_amb.c 104 */;
}
