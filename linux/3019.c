cocci_test_suite() {
	struct iort_pci_alias_info cocci_id/* drivers/acpi/arm64/iort.c 952 */;
	struct iort_pci_alias_info *cocci_id/* drivers/acpi/arm64/iort.c 918 */;
	struct iort_pci_alias_info {
		struct device *dev;
		struct acpi_iort_node *node;
	} cocci_id/* drivers/acpi/arm64/iort.c 911 */;
	const struct iommu_ops *cocci_id/* drivers/acpi/arm64/iort.c 864 */;
	struct fwnode_handle *cocci_id/* drivers/acpi/arm64/iort.c 863 */;
	u32 cocci_id/* drivers/acpi/arm64/iort.c 862 */;
	struct iommu_resv_region *cocci_id/* drivers/acpi/arm64/iort.c 835 */;
	phys_addr_t cocci_id/* drivers/acpi/arm64/iort.c 831 */;
	struct list_head *cocci_id/* drivers/acpi/arm64/iort.c 796 */;
	struct iommu_fwspec *cocci_id/* drivers/acpi/arm64/iort.c 769 */;
	u32 *cocci_id/* drivers/acpi/arm64/iort.c 742 */;
	void *cocci_id/* drivers/acpi/arm64/iort.c 740 */;
	u16 cocci_id/* drivers/acpi/arm64/iort.c 739 */;
	struct pci_dev *cocci_id/* drivers/acpi/arm64/iort.c 739 */;
	int __maybe_unused cocci_id/* drivers/acpi/arm64/iort.c 739 */;
	struct irq_domain *cocci_id/* drivers/acpi/arm64/iort.c 732 */;
	struct device *cocci_id/* drivers/acpi/arm64/iort.c 730 */;
	void cocci_id/* drivers/acpi/arm64/iort.c 730 */;
	struct acpi_iort_its_group *cocci_id/* drivers/acpi/arm64/iort.c 601 */;
	int *cocci_id/* drivers/acpi/arm64/iort.c 599 */;
	unsigned int cocci_id/* drivers/acpi/arm64/iort.c 599 */;
	phys_addr_t *cocci_id/* drivers/acpi/arm64/iort.c 571 */;
	struct iort_fwnode cocci_id/* drivers/acpi/arm64/iort.c 56 */;
	struct pci_bus *cocci_id/* drivers/acpi/arm64/iort.c 488 */;
	struct iort_fwnode {
		struct list_head list;
		struct acpi_iort_node *iort_node;
		struct fwnode_handle *fwnode;
	} cocci_id/* drivers/acpi/arm64/iort.c 33 */;
	u8 cocci_id/* drivers/acpi/arm64/iort.c 301 */;
	struct acpi_iort_root_complex *cocci_id/* drivers/acpi/arm64/iort.c 283 */;
	struct acpi_iort_named_component *cocci_id/* drivers/acpi/arm64/iort.c 267 */;
	struct acpi_device *cocci_id/* drivers/acpi/arm64/iort.c 266 */;
	struct acpi_buffer cocci_id/* drivers/acpi/arm64/iort.c 265 */;
	struct iort_its_msi_chip {
		struct list_head list;
		struct fwnode_handle *fw_node;
		phys_addr_t base_addr;
		u32 translation_id;
	} cocci_id/* drivers/acpi/arm64/iort.c 26 */;
	iort_find_node_callback cocci_id/* drivers/acpi/arm64/iort.c 225 */;
	enum acpi_iort_node_type cocci_id/* drivers/acpi/arm64/iort.c 224 */;
	struct iort_its_msi_chip *cocci_id/* drivers/acpi/arm64/iort.c 188 */;
	const char *cocci_id/* drivers/acpi/arm64/iort.c 1626 */;
	acpi_status cocci_id/* drivers/acpi/arm64/iort.c 1621 */;
	void __init cocci_id/* drivers/acpi/arm64/iort.c 1619 */;
	struct acpi_table_iort *cocci_id/* drivers/acpi/arm64/iort.c 1573 */;
	struct acpi_iort_node cocci_id/* drivers/acpi/arm64/iort.c 1551 */;
	struct acpi_iort_id_mapping cocci_id/* drivers/acpi/arm64/iort.c 1544 */;
	struct acpi_iort_id_mapping *cocci_id/* drivers/acpi/arm64/iort.c 1541 */;
	struct acpi_table_header *cocci_id/* drivers/acpi/arm64/iort.c 146 */;
	const struct iort_dev_config *cocci_id/* drivers/acpi/arm64/iort.c 1452 */;
	acpi_status (*cocci_id/* drivers/acpi/arm64/iort.c 142 */)(struct acpi_iort_node *node,
								   void *context);
	const struct iort_dev_config cocci_id/* drivers/acpi/arm64/iort.c 1416 */;
	struct iort_dev_config {
		const char *name;
		int (*dev_init)(struct acpi_iort_node *node);
		void (*dev_dma_configure)(struct device *dev,
					  struct acpi_iort_node *node);
		int (*dev_count_resources)(struct acpi_iort_node *node);
		void (*dev_init_resources)(struct resource *res,
					   struct acpi_iort_node *node);
		int (*dev_set_proximity)(struct device *dev,
					 struct acpi_iort_node *node);
		int (*dev_add_platdata)(struct platform_device *pdev);
	} cocci_id/* drivers/acpi/arm64/iort.c 1395 */;
	struct platform_device *cocci_id/* drivers/acpi/arm64/iort.c 1381 */;
	struct acpi_platform_list cocci_id/* drivers/acpi/arm64/iort.c 1374 */[]__initdata;
	struct acpi_iort_pmcg *cocci_id/* drivers/acpi/arm64/iort.c 1342 */;
	enum dev_dma_attr cocci_id/* drivers/acpi/arm64/iort.c 1325 */;
	u64 cocci_id/* drivers/acpi/arm64/iort.c 1302 */;
	u64 *cocci_id/* drivers/acpi/arm64/iort.c 1292 */;
	struct acpi_iort_smmu *cocci_id/* drivers/acpi/arm64/iort.c 1271 */;
	struct acpi_iort_node *cocci_id/* drivers/acpi/arm64/iort.c 1269 */;
	int __init cocci_id/* drivers/acpi/arm64/iort.c 1269 */;
	unsigned long cocci_id/* drivers/acpi/arm64/iort.c 1167 */;
	bool cocci_id/* drivers/acpi/arm64/iort.c 1149 */;
	struct acpi_iort_smmu_v3 *cocci_id/* drivers/acpi/arm64/iort.c 1127 */;
	struct resource *cocci_id/* drivers/acpi/arm64/iort.c 1108 */;
	int cocci_id/* drivers/acpi/arm64/iort.c 1106 */;
	struct iort_fwnode *cocci_id/* drivers/acpi/arm64/iort.c 104 */;
}
