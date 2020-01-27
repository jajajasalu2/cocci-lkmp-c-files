cocci_test_suite() {
	struct vpci_dev_data *cocci_id/* drivers/xen/xen-pciback/vpci.c 74 */;
	struct pci_dev_entry *cocci_id/* drivers/xen/xen-pciback/vpci.c 73 */;
	publish_pci_dev_cb cocci_id/* drivers/xen/xen-pciback/vpci.c 70 */;
	struct pci_dev *cocci_id/* drivers/xen/xen-pciback/vpci.c 69 */;
	struct xen_pcibk_device *cocci_id/* drivers/xen/xen-pciback/vpci.c 68 */;
	int cocci_id/* drivers/xen/xen-pciback/vpci.c 68 */;
	unsigned int cocci_id/* drivers/xen/xen-pciback/vpci.c 31 */;
	const struct xen_pcibk_backend cocci_id/* drivers/xen/xen-pciback/vpci.c 262 */;
	struct list_head *cocci_id/* drivers/xen/xen-pciback/vpci.c 25 */;
	unsigned int *cocci_id/* drivers/xen/xen-pciback/vpci.c 232 */;
	void cocci_id/* drivers/xen/xen-pciback/vpci.c 208 */;
	publish_pci_root_cb cocci_id/* drivers/xen/xen-pciback/vpci.c 202 */;
	struct vpci_dev_data {
		struct list_head dev_list[PCI_SLOT_MAX];
		struct mutex lock;
	} cocci_id/* drivers/xen/xen-pciback/vpci.c 19 */;
	bool cocci_id/* drivers/xen/xen-pciback/vpci.c 149 */;
	struct pci_dev_entry cocci_id/* drivers/xen/xen-pciback/vpci.c 105 */;
}
