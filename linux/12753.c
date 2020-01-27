cocci_test_suite() {
	u32 cocci_id/* drivers/iommu/intel_irq_remapping.c 97 */;
	struct acpi_dmar_device_scope *cocci_id/* drivers/iommu/intel_irq_remapping.c 929 */;
	struct acpi_dmar_hardware_unit *cocci_id/* drivers/iommu/intel_irq_remapping.c 928 */;
	struct acpi_dmar_header *cocci_id/* drivers/iommu/intel_irq_remapping.c 924 */;
	void cocci_id/* drivers/iommu/intel_irq_remapping.c 90 */;
	struct acpi_dmar_pci_path cocci_id/* drivers/iommu/intel_irq_remapping.c 845 */;
	struct acpi_dmar_device_scope cocci_id/* drivers/iommu/intel_irq_remapping.c 844 */;
	u8 cocci_id/* drivers/iommu/intel_irq_remapping.c 839 */;
	struct acpi_dmar_pci_path *cocci_id/* drivers/iommu/intel_irq_remapping.c 838 */;
	int __init cocci_id/* drivers/iommu/intel_irq_remapping.c 83 */(void);
	void cocci_id/* drivers/iommu/intel_irq_remapping.c 82 */(struct intel_iommu *iommu);
	const struct irq_domain_ops cocci_id/* drivers/iommu/intel_irq_remapping.c 80 */;
	void __init cocci_id/* drivers/iommu/intel_irq_remapping.c 690 */;
	struct acpi_table_dmar *cocci_id/* drivers/iommu/intel_irq_remapping.c 683 */;
	int __init cocci_id/* drivers/iommu/intel_irq_remapping.c 681 */;
	struct hpet_scope cocci_id/* drivers/iommu/intel_irq_remapping.c 66 */[MAX_HPET_TBS];
	struct ioapic_scope cocci_id/* drivers/iommu/intel_irq_remapping.c 65 */[MAX_IO_APICS];
	int __read_mostly cocci_id/* drivers/iommu/intel_irq_remapping.c 64 */;
	struct ir_table cocci_id/* drivers/iommu/intel_irq_remapping.c 539 */;
	struct page *cocci_id/* drivers/iommu/intel_irq_remapping.c 534 */;
	unsigned long *cocci_id/* drivers/iommu/intel_irq_remapping.c 533 */;
	struct fwnode_handle *cocci_id/* drivers/iommu/intel_irq_remapping.c 532 */;
	struct intel_ir_data {
		struct irq_2_iommu irq_2_iommu;
		struct irte irte_entry;
		union {
			struct msi_msg msi_entry;
		};
	} cocci_id/* drivers/iommu/intel_irq_remapping.c 53 */;
	struct irq_2_iommu {
		struct intel_iommu *iommu;
		u16 irte_index;
		u16 sub_handle;
		u8 irte_mask;
		enum irq_mode mode;
	} cocci_id/* drivers/iommu/intel_irq_remapping.c 45 */;
	u64 cocci_id/* drivers/iommu/intel_irq_remapping.c 438 */;
	size_t cocci_id/* drivers/iommu/intel_irq_remapping.c 437 */;
	phys_addr_t cocci_id/* drivers/iommu/intel_irq_remapping.c 435 */;
	struct set_msi_sid_data cocci_id/* drivers/iommu/intel_irq_remapping.c 391 */;
	struct hpet_scope {
		struct intel_iommu *iommu;
		u8 id;
		unsigned int bus;
		unsigned int devfn;
	} cocci_id/* drivers/iommu/intel_irq_remapping.c 38 */;
	struct set_msi_sid_data *cocci_id/* drivers/iommu/intel_irq_remapping.c 377 */;
	struct set_msi_sid_data {
		struct pci_dev *pdev;
		u16 alias;
		int count;
		int busmatch_count;
	} cocci_id/* drivers/iommu/intel_irq_remapping.c 368 */;
	struct ioapic_scope {
		struct intel_iommu *iommu;
		unsigned int id;
		unsigned int bus;
		unsigned int devfn;
	} cocci_id/* drivers/iommu/intel_irq_remapping.c 31 */;
	enum irq_mode{IRQ_REMAPPING, IRQ_POSTING,} cocci_id/* drivers/iommu/intel_irq_remapping.c 26 */;
	struct irte *cocci_id/* drivers/iommu/intel_irq_remapping.c 239 */;
	struct pci_dev *cocci_id/* drivers/iommu/intel_irq_remapping.c 226 */;
	bool cocci_id/* drivers/iommu/intel_irq_remapping.c 1486 */;
	struct qi_desc cocci_id/* drivers/iommu/intel_irq_remapping.c 146 */;
	struct intel_ir_data *cocci_id/* drivers/iommu/intel_irq_remapping.c 1325 */;
	struct irq_data *cocci_id/* drivers/iommu/intel_irq_remapping.c 1324 */;
	struct irq_domain *cocci_id/* drivers/iommu/intel_irq_remapping.c 1321 */;
	struct IR_IO_APIC_route_entry *cocci_id/* drivers/iommu/intel_irq_remapping.c 1264 */;
	struct irq_chip cocci_id/* drivers/iommu/intel_irq_remapping.c 1251 */;
	struct irte cocci_id/* drivers/iommu/intel_irq_remapping.c 1224 */;
	struct vcpu_data *cocci_id/* drivers/iommu/intel_irq_remapping.c 1218 */;
	void *cocci_id/* drivers/iommu/intel_irq_remapping.c 1215 */;
	struct msi_msg *cocci_id/* drivers/iommu/intel_irq_remapping.c 1208 */;
	const struct cpumask *cocci_id/* drivers/iommu/intel_irq_remapping.c 1185 */;
	struct irq_cfg *cocci_id/* drivers/iommu/intel_irq_remapping.c 1156 */;
	struct irq_remap_ops cocci_id/* drivers/iommu/intel_irq_remapping.c 1142 */;
	struct irq_alloc_info *cocci_id/* drivers/iommu/intel_irq_remapping.c 1095 */;
	unsigned long cocci_id/* drivers/iommu/intel_irq_remapping.c 109 */;
	unsigned int cocci_id/* drivers/iommu/intel_irq_remapping.c 108 */;
	struct ir_table *cocci_id/* drivers/iommu/intel_irq_remapping.c 107 */;
	u16 cocci_id/* drivers/iommu/intel_irq_remapping.c 105 */;
	struct irq_2_iommu *cocci_id/* drivers/iommu/intel_irq_remapping.c 105 */;
	struct intel_iommu *cocci_id/* drivers/iommu/intel_irq_remapping.c 104 */;
	int cocci_id/* drivers/iommu/intel_irq_remapping.c 104 */;
	struct dmar_drhd_unit *cocci_id/* drivers/iommu/intel_irq_remapping.c 1018 */;
}
