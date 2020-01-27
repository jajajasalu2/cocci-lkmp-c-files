cocci_test_suite() {
	unsigned char cocci_id/* drivers/pci/vpd.c 90 */;
	unsigned char cocci_id/* drivers/pci/vpd.c 86 */[1 + 2];
	int cocci_id/* drivers/pci/vpd.c 68 */;
	const char *cocci_id/* drivers/pci/vpd.c 503 */;
	const u8 *cocci_id/* drivers/pci/vpd.c 502 */;
	unsigned int cocci_id/* drivers/pci/vpd.c 502 */;
	u8 cocci_id/* drivers/pci/vpd.c 467 */;
	struct bin_attribute *cocci_id/* drivers/pci/vpd.c 435 */;
	char *cocci_id/* drivers/pci/vpd.c 401 */;
	struct kobject *cocci_id/* drivers/pci/vpd.c 400 */;
	struct file *cocci_id/* drivers/pci/vpd.c 400 */;
	loff_t cocci_id/* drivers/pci/vpd.c 40 */;
	struct pci_dev *cocci_id/* drivers/pci/vpd.c 40 */;
	void *cocci_id/* drivers/pci/vpd.c 40 */;
	ssize_t cocci_id/* drivers/pci/vpd.c 40 */;
	size_t cocci_id/* drivers/pci/vpd.c 40 */;
	void cocci_id/* drivers/pci/vpd.c 395 */;
	struct pci_vpd *cocci_id/* drivers/pci/vpd.c 371 */;
	const struct pci_vpd_ops cocci_id/* drivers/pci/vpd.c 363 */;
	const void *cocci_id/* drivers/pci/vpd.c 335 */;
	struct pci_vpd {
		const struct pci_vpd_ops *ops;
		struct bin_attribute *attr;
		struct mutex lock;
		unsigned int len;
		u16 flag;
		u8 cap;
		unsigned int busy:1;
		unsigned int valid:1;
	} cocci_id/* drivers/pci/vpd.c 22 */;
	u32 cocci_id/* drivers/pci/vpd.c 210 */;
	u8 *cocci_id/* drivers/pci/vpd.c 181 */;
	struct pci_vpd_ops {
		ssize_t (*read)(struct pci_dev *dev, loff_t pos, size_t count,
				void *buf);
		ssize_t (*write)(struct pci_dev *dev, loff_t pos,
				 size_t count, const void *buf);
		int (*set_size)(struct pci_dev *dev, size_t len);
	} cocci_id/* drivers/pci/vpd.c 16 */;
	u16 cocci_id/* drivers/pci/vpd.c 143 */;
	unsigned long cocci_id/* drivers/pci/vpd.c 141 */;
}
