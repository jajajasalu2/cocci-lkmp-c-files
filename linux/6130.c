cocci_test_suite() {
	struct resource *cocci_id/* drivers/mfd/janz-cmodio.c 67 */;
	struct mfd_cell *cocci_id/* drivers/mfd/janz-cmodio.c 66 */;
	struct janz_platform_data *cocci_id/* drivers/mfd/janz-cmodio.c 65 */;
	struct cmodio_device {
		struct pci_dev *pdev;
		struct janz_cmodio_onboard_regs __iomem *ctrl;
		u8 hex;
		struct mfd_cell cells[CMODIO_MAX_MODULES];
		struct resource resources[3 * CMODIO_MAX_MODULES];
		struct janz_platform_data pdata[CMODIO_MAX_MODULES];
	} cocci_id/* drivers/mfd/janz-cmodio.c 41 */;
	unsigned int cocci_id/* drivers/mfd/janz-cmodio.c 39 */;
	char *cocci_id/* drivers/mfd/janz-cmodio.c 31 */[CMODIO_MAX_MODULES];
	struct pci_driver cocci_id/* drivers/mfd/janz-cmodio.c 272 */;
	const struct pci_device_id cocci_id/* drivers/mfd/janz-cmodio.c 261 */[];
	void cocci_id/* drivers/mfd/janz-cmodio.c 247 */;
	struct cmodio_device *cocci_id/* drivers/mfd/janz-cmodio.c 178 */;
	const struct pci_device_id *cocci_id/* drivers/mfd/janz-cmodio.c 176 */;
	struct pci_dev *cocci_id/* drivers/mfd/janz-cmodio.c 175 */;
	int cocci_id/* drivers/mfd/janz-cmodio.c 175 */;
	const struct attribute_group cocci_id/* drivers/mfd/janz-cmodio.c 167 */;
	struct attribute *cocci_id/* drivers/mfd/janz-cmodio.c 162 */[];
	struct device_attribute *cocci_id/* drivers/mfd/janz-cmodio.c 152 */;
	struct device *cocci_id/* drivers/mfd/janz-cmodio.c 152 */;
	ssize_t cocci_id/* drivers/mfd/janz-cmodio.c 152 */;
	char *cocci_id/* drivers/mfd/janz-cmodio.c 122 */;
}
