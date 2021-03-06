cocci_test_suite() {
	resource_size_t cocci_id/* drivers/pci/setup-bus.c 991 */[18];
	resource_size_t *cocci_id/* drivers/pci/setup-bus.c 942 */;
	unsigned long long cocci_id/* drivers/pci/setup-bus.c 938 */;
	resource_size_t __weak cocci_id/* drivers/pci/setup-bus.c 828 */;
	void __weak cocci_id/* drivers/pci/setup-bus.c 682 */;
	u32 cocci_id/* drivers/pci/setup-bus.c 579 */;
	u8 cocci_id/* drivers/pci/setup-bus.c 577 */;
	struct resource *cocci_id/* drivers/pci/setup-bus.c 462 */;
	resource_size_t cocci_id/* drivers/pci/setup-bus.c 373 */;
	unsigned long cocci_id/* drivers/pci/setup-bus.c 372 */;
	struct pci_dev_resource *cocci_id/* drivers/pci/setup-bus.c 370 */;
	struct list_head *cocci_id/* drivers/pci/setup-bus.c 343 */;
	void cocci_id/* drivers/pci/setup-bus.c 343 */;
	struct pci_dev_resource {
		struct list_head list;
		struct resource *res;
		struct pci_dev *dev;
		resource_size_t start;
		resource_size_t end;
		resource_size_t add_size;
		resource_size_t min_align;
		unsigned long flags;
	} cocci_id/* drivers/pci/setup-bus.c 30 */;
	const struct resource *cocci_id/* drivers/pci/setup-bus.c 1990 */;
	struct pci_dev cocci_id/* drivers/pci/setup-bus.c 1904 */;
	unsigned int cocci_id/* drivers/pci/setup-bus.c 1867 */;
	void __init cocci_id/* drivers/pci/setup-bus.c 1822 */;
	u16 cocci_id/* drivers/pci/setup-bus.c 178 */;
	struct pci_dev *cocci_id/* drivers/pci/setup-bus.c 176 */;
	enum enable_type cocci_id/* drivers/pci/setup-bus.c 1743 */;
	enum release_type cocci_id/* drivers/pci/setup-bus.c 1739 */;
	struct pci_host_bridge *cocci_id/* drivers/pci/setup-bus.c 1705 */;
	struct pci_bus_region cocci_id/* drivers/pci/setup-bus.c 1685 */;
	bool *cocci_id/* drivers/pci/setup-bus.c 1681 */;
	void *cocci_id/* drivers/pci/setup-bus.c 1678 */;
	char *cocci_id/* drivers/pci/setup-bus.c 1665 */;
	enum enable_type{undefined=-1, user_disabled, auto_disabled, user_enabled, auto_enabled,} cocci_id/* drivers/pci/setup-bus.c 1656 */;
	bool cocci_id/* drivers/pci/setup-bus.c 1576 */;
	enum release_type{leaf_only, whole_subtree,} cocci_id/* drivers/pci/setup-bus.c 1562 */;
	unsigned cocci_id/* drivers/pci/setup-bus.c 1508 */;
	struct pci_bus *cocci_id/* drivers/pci/setup-bus.c 1472 */;
	const struct pci_dev *cocci_id/* drivers/pci/setup-bus.c 1468 */;
	const struct pci_bus *cocci_id/* drivers/pci/setup-bus.c 1359 */;
	int cocci_id/* drivers/pci/setup-bus.c 1200 */;
}
