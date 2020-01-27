cocci_test_suite() {
	void *cocci_id/* drivers/iommu/dma-iommu.c 947 */;
	size_t cocci_id/* drivers/iommu/dma-iommu.c 947 */;
	void cocci_id/* drivers/iommu/dma-iommu.c 809 */;
	unsigned int cocci_id/* drivers/iommu/dma-iommu.c 761 */;
	unsigned long cocci_id/* drivers/iommu/dma-iommu.c 760 */;
	dma_addr_t cocci_id/* drivers/iommu/dma-iommu.c 757 */;
	struct scatterlist *cocci_id/* drivers/iommu/dma-iommu.c 756 */;
	struct device *cocci_id/* drivers/iommu/dma-iommu.c 756 */;
	int cocci_id/* drivers/iommu/dma-iommu.c 756 */;
	struct vm_area_struct *cocci_id/* drivers/iommu/dma-iommu.c 668 */;
	enum iommu_dma_cookie_type cocci_id/* drivers/iommu/dma-iommu.c 60 */;
	struct sg_table cocci_id/* drivers/iommu/dma-iommu.c 593 */;
	struct page *cocci_id/* drivers/iommu/dma-iommu.c 528 */;
	gfp_t cocci_id/* drivers/iommu/dma-iommu.c 511 */;
	struct page **cocci_id/* drivers/iommu/dma-iommu.c 510 */;
	struct iova_domain *cocci_id/* drivers/iommu/dma-iommu.c 483 */;
	struct iommu_dma_cookie *cocci_id/* drivers/iommu/dma-iommu.c 482 */;
	struct iommu_domain *cocci_id/* drivers/iommu/dma-iommu.c 481 */;
	u64 cocci_id/* drivers/iommu/dma-iommu.c 479 */;
	phys_addr_t cocci_id/* drivers/iommu/dma-iommu.c 478 */;
	struct iommu_iotlb_gather cocci_id/* drivers/iommu/dma-iommu.c 463 */;
	struct iommu_dma_cookie {
		enum iommu_dma_cookie_type type;
		union {
			struct iova_domain iovad;
			dma_addr_t msi_iova;
		};
		struct list_head msi_page_list;
		struct iommu_domain *fq_domain;
	} cocci_id/* drivers/iommu/dma-iommu.c 39 */;
	bool cocci_id/* drivers/iommu/dma-iommu.c 380 */;
	enum dma_data_direction cocci_id/* drivers/iommu/dma-iommu.c 380 */;
	const struct iommu_ops *cocci_id/* drivers/iommu/dma-iommu.c 359 */;
	enum iommu_dma_cookie_type{IOMMU_DMA_IOVA_COOKIE, IOMMU_DMA_MSI_COOKIE,} cocci_id/* drivers/iommu/dma-iommu.c 34 */;
	struct iommu_dma_cookie cocci_id/* drivers/iommu/dma-iommu.c 281 */;
	struct iommu_dma_msi_page {
		struct list_head list;
		dma_addr_t iova;
		phys_addr_t phys;
	} cocci_id/* drivers/iommu/dma-iommu.c 28 */;
	struct iommu_resv_region *cocci_id/* drivers/iommu/dma-iommu.c 243 */;
	struct resource_entry *cocci_id/* drivers/iommu/dma-iommu.c 199 */;
	struct pci_host_bridge *cocci_id/* drivers/iommu/dma-iommu.c 198 */;
	struct pci_dev *cocci_id/* drivers/iommu/dma-iommu.c 195 */;
	struct iommu_dma_msi_page *cocci_id/* drivers/iommu/dma-iommu.c 174 */;
	struct list_head *cocci_id/* drivers/iommu/dma-iommu.c 161 */;
	const struct iommu_dma_msi_page *cocci_id/* drivers/iommu/dma-iommu.c 1238 */;
	const struct iommu_domain *cocci_id/* drivers/iommu/dma-iommu.c 1237 */;
	struct msi_msg *cocci_id/* drivers/iommu/dma-iommu.c 1234 */;
	struct msi_desc *cocci_id/* drivers/iommu/dma-iommu.c 1233 */;
	const struct dma_map_ops cocci_id/* drivers/iommu/dma-iommu.c 1119 */;
	struct sg_table *cocci_id/* drivers/iommu/dma-iommu.c 1085 */;
	dma_addr_t *cocci_id/* drivers/iommu/dma-iommu.c 1023 */;
	pgprot_t cocci_id/* drivers/iommu/dma-iommu.c 1001 */;
}
