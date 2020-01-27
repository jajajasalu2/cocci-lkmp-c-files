cocci_test_suite() {
	struct pci_endpoint_test {
		struct pci_dev *pdev;
		void __iomem *base;
		void __iomem *bar[PCI_STD_NUM_BARS];
		struct completion irq_raised;
		int last_irq;
		int num_irqs;
		struct mutex mutex;
		struct miscdevice miscdev;
		enum pci_barno test_reg_bar;
		size_t alignment;
	} cocci_id/* drivers/misc/pci_endpoint_test.c 94 */;
	enum pci_barno{BAR_0, BAR_1, BAR_2, BAR_3, BAR_4, BAR_5,} cocci_id/* drivers/misc/pci_endpoint_test.c 85 */;
	int cocci_id/* drivers/misc/pci_endpoint_test.c 81 */;
	struct pci_driver cocci_id/* drivers/misc/pci_endpoint_test.c 804 */;
	const struct pci_device_id cocci_id/* drivers/misc/pci_endpoint_test.c 792 */[];
	const struct pci_endpoint_test_data cocci_id/* drivers/misc/pci_endpoint_test.c 786 */;
	bool cocci_id/* drivers/misc/pci_endpoint_test.c 77 */;
	struct pci_endpoint_test cocci_id/* drivers/misc/pci_endpoint_test.c 74 */;
	struct miscdevice *cocci_id/* drivers/misc/pci_endpoint_test.c 643 */;
	struct pci_endpoint_test_data *cocci_id/* drivers/misc/pci_endpoint_test.c 641 */;
	void __iomem *cocci_id/* drivers/misc/pci_endpoint_test.c 638 */;
	char cocci_id/* drivers/misc/pci_endpoint_test.c 636 */[20];
	const struct pci_device_id *cocci_id/* drivers/misc/pci_endpoint_test.c 632 */;
	const struct file_operations cocci_id/* drivers/misc/pci_endpoint_test.c 626 */;
	unsigned long cocci_id/* drivers/misc/pci_endpoint_test.c 580 */;
	struct file *cocci_id/* drivers/misc/pci_endpoint_test.c 579 */;
	unsigned int cocci_id/* drivers/misc/pci_endpoint_test.c 579 */;
	long cocci_id/* drivers/misc/pci_endpoint_test.c 579 */;
	dma_addr_t cocci_id/* drivers/misc/pci_endpoint_test.c 323 */;
	void *cocci_id/* drivers/misc/pci_endpoint_test.c 321 */;
	size_t cocci_id/* drivers/misc/pci_endpoint_test.c 318 */;
	u16 cocci_id/* drivers/misc/pci_endpoint_test.c 295 */;
	u32 cocci_id/* drivers/misc/pci_endpoint_test.c 253 */;
	enum pci_barno cocci_id/* drivers/misc/pci_endpoint_test.c 250 */;
	struct device *cocci_id/* drivers/misc/pci_endpoint_test.c 167 */;
	struct pci_dev *cocci_id/* drivers/misc/pci_endpoint_test.c 166 */;
	struct pci_endpoint_test *cocci_id/* drivers/misc/pci_endpoint_test.c 162 */;
	irqreturn_t cocci_id/* drivers/misc/pci_endpoint_test.c 138 */;
	void cocci_id/* drivers/misc/pci_endpoint_test.c 132 */;
	struct pci_endpoint_test_data {
		enum pci_barno test_reg_bar;
		size_t alignment;
		int irq_type;
	} cocci_id/* drivers/misc/pci_endpoint_test.c 108 */;
}
