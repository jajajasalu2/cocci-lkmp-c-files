cocci_test_suite() {
	u32 *cocci_id/* drivers/hwmon/k10temp.c 98 */;
	int cocci_id/* drivers/hwmon/k10temp.c 98 */;
	struct pci_dev *cocci_id/* drivers/hwmon/k10temp.c 97 */;
	unsigned int cocci_id/* drivers/hwmon/k10temp.c 97 */;
	void cocci_id/* drivers/hwmon/k10temp.c 97 */;
	const struct tctl_offset cocci_id/* drivers/hwmon/k10temp.c 78 */[];
	struct tctl_offset {
		u8 model;
		const char *id;
		int offset;
	} cocci_id/* drivers/hwmon/k10temp.c 72 */;
	struct k10temp_data {
		struct pci_dev *pdev;
		void (*read_htcreg)(struct pci_dev *pdev, u32 *regval);
		void (*read_tempreg)(struct pci_dev *pdev, u32 *regval);
		int temp_offset;
		u32 temp_adjust_mask;
		bool show_tdie;
	} cocci_id/* drivers/hwmon/k10temp.c 63 */;
	struct pci_driver cocci_id/* drivers/hwmon/k10temp.c 358 */;
	const struct pci_device_id cocci_id/* drivers/hwmon/k10temp.c 338 */[];
	const struct tctl_offset *cocci_id/* drivers/hwmon/k10temp.c 324 */;
	const struct pci_device_id *cocci_id/* drivers/hwmon/k10temp.c 285 */;
	const struct attribute_group cocci_id/* drivers/hwmon/k10temp.c 244 */;
	struct attribute *cocci_id/* drivers/hwmon/k10temp.c 233 */[];
	bool cocci_id/* drivers/hwmon/k10temp.c 22 */;
	struct device cocci_id/* drivers/hwmon/k10temp.c 203 */;
	struct device *cocci_id/* drivers/hwmon/k10temp.c 203 */;
	struct attribute *cocci_id/* drivers/hwmon/k10temp.c 201 */;
	umode_t cocci_id/* drivers/hwmon/k10temp.c 200 */;
	struct kobject *cocci_id/* drivers/hwmon/k10temp.c 200 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/k10temp.c 178 */;
	struct device_attribute *cocci_id/* drivers/hwmon/k10temp.c 139 */;
	char *cocci_id/* drivers/hwmon/k10temp.c 139 */;
	ssize_t cocci_id/* drivers/hwmon/k10temp.c 138 */;
	u32 cocci_id/* drivers/hwmon/k10temp.c 129 */;
	struct k10temp_data *cocci_id/* drivers/hwmon/k10temp.c 126 */;
}
