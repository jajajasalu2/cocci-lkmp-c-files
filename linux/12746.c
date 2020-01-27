cocci_test_suite() {
	struct pasid_table_opaque {
		struct pasid_table **pasid_table;
		int segment;
		int bus;
		int devfn;
	} cocci_id/* drivers/iommu/intel-pasid.c 85 */;
	struct pasid_table *cocci_id/* drivers/iommu/intel-pasid.c 71 */;
	struct device_domain_info *cocci_id/* drivers/iommu/intel-pasid.c 70 */;
	void cocci_id/* drivers/iommu/intel-pasid.c 69 */;
	struct dmar_domain *cocci_id/* drivers/iommu/intel-pasid.c 604 */;
	struct dma_pte *cocci_id/* drivers/iommu/intel-pasid.c 535 */;
	pgd_t *cocci_id/* drivers/iommu/intel-pasid.c 473 */;
	u16 cocci_id/* drivers/iommu/intel-pasid.c 431 */;
	struct device *cocci_id/* drivers/iommu/intel-pasid.c 428 */;
	int cocci_id/* drivers/iommu/intel-pasid.c 428 */;
	struct intel_iommu *cocci_id/* drivers/iommu/intel-pasid.c 427 */;
	struct qi_desc cocci_id/* drivers/iommu/intel-pasid.c 415 */;
	bool cocci_id/* drivers/iommu/intel-pasid.c 373 */;
	gfp_t cocci_id/* drivers/iommu/intel-pasid.c 31 */;
	u64 *cocci_id/* drivers/iommu/intel-pasid.c 285 */;
	u32 cocci_id/* drivers/iommu/intel-pasid.c 28 */;
	struct pasid_entry *cocci_id/* drivers/iommu/intel-pasid.c 276 */;
	u64 cocci_id/* drivers/iommu/intel-pasid.c 252 */;
	unsigned long cocci_id/* drivers/iommu/intel-pasid.c 198 */;
	struct pasid_dir_entry *cocci_id/* drivers/iommu/intel-pasid.c 176 */;
	struct page *cocci_id/* drivers/iommu/intel-pasid.c 127 */;
	struct pasid_table_opaque cocci_id/* drivers/iommu/intel-pasid.c 126 */;
	struct pasid_table_opaque *cocci_id/* drivers/iommu/intel-pasid.c 109 */;
	struct pci_dev *cocci_id/* drivers/iommu/intel-pasid.c 107 */;
	void *cocci_id/* drivers/iommu/intel-pasid.c 107 */;
}
