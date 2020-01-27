cocci_test_suite() {
	struct mtk_iommu_domain {
		spinlock_t pgtlock;
		struct iommu_domain domain;
		u32 *pgt_va;
		dma_addr_t pgt_pa;
		struct mtk_iommu_data *data;
	} cocci_id/* drivers/iommu/mtk_iommu_v1.c 91 */;
	int __init cocci_id/* drivers/iommu/mtk_iommu_v1.c 703 */;
	void cocci_id/* drivers/iommu/mtk_iommu_v1.c 703 */;
	struct platform_driver cocci_id/* drivers/iommu/mtk_iommu_v1.c 693 */;
	const struct dev_pm_ops cocci_id/* drivers/iommu/mtk_iommu_v1.c 689 */;
	void __iomem *cocci_id/* drivers/iommu/mtk_iommu_v1.c 677 */;
	struct mtk_iommu_suspend_reg *cocci_id/* drivers/iommu/mtk_iommu_v1.c 676 */;
	int __maybe_unused cocci_id/* drivers/iommu/mtk_iommu_v1.c 673 */;
	struct component_match *cocci_id/* drivers/iommu/mtk_iommu_v1.c 557 */;
	struct resource *cocci_id/* drivers/iommu/mtk_iommu_v1.c 556 */;
	const struct component_master_ops cocci_id/* drivers/iommu/mtk_iommu_v1.c 547 */;
	const struct of_device_id cocci_id/* drivers/iommu/mtk_iommu_v1.c 542 */[];
	void *cocci_id/* drivers/iommu/mtk_iommu_v1.c 519 */;
	u32 cocci_id/* drivers/iommu/mtk_iommu_v1.c 490 */;
	const struct mtk_iommu_data *cocci_id/* drivers/iommu/mtk_iommu_v1.c 488 */;
	struct iommu_group *cocci_id/* drivers/iommu/mtk_iommu_v1.c 426 */;
	struct mtk_iommu_data *cocci_id/* drivers/iommu/mtk_iommu_v1.c 425 */;
	struct of_phandle_iterator cocci_id/* drivers/iommu/mtk_iommu_v1.c 424 */;
	struct of_phandle_args cocci_id/* drivers/iommu/mtk_iommu_v1.c 423 */;
	struct dma_iommu_mapping *cocci_id/* drivers/iommu/mtk_iommu_v1.c 422 */;
	struct iommu_fwspec *cocci_id/* drivers/iommu/mtk_iommu_v1.c 421 */;
	struct device *cocci_id/* drivers/iommu/mtk_iommu_v1.c 419 */;
	struct platform_device *cocci_id/* drivers/iommu/mtk_iommu_v1.c 370 */;
	struct of_phandle_args *cocci_id/* drivers/iommu/mtk_iommu_v1.c 366 */;
	const struct iommu_ops cocci_id/* drivers/iommu/mtk_iommu_v1.c 359 */;
	unsigned long cocci_id/* drivers/iommu/mtk_iommu_v1.c 348 */;
	dma_addr_t cocci_id/* drivers/iommu/mtk_iommu_v1.c 345 */;
	phys_addr_t cocci_id/* drivers/iommu/mtk_iommu_v1.c 344 */;
	struct iommu_iotlb_gather *cocci_id/* drivers/iommu/mtk_iommu_v1.c 328 */;
	u32 *cocci_id/* drivers/iommu/mtk_iommu_v1.c 304 */;
	gfp_t cocci_id/* drivers/iommu/mtk_iommu_v1.c 298 */;
	size_t cocci_id/* drivers/iommu/mtk_iommu_v1.c 298 */;
	struct mtk_iommu_domain *cocci_id/* drivers/iommu/mtk_iommu_v1.c 266 */;
	struct iommu_domain *cocci_id/* drivers/iommu/mtk_iommu_v1.c 263 */;
	unsigned cocci_id/* drivers/iommu/mtk_iommu_v1.c 239 */;
	unsigned int cocci_id/* drivers/iommu/mtk_iommu_v1.c 202 */;
	struct mtk_smi_larb_iommu *cocci_id/* drivers/iommu/mtk_iommu_v1.c 201 */;
	bool cocci_id/* drivers/iommu/mtk_iommu_v1.c 199 */;
	irqreturn_t cocci_id/* drivers/iommu/mtk_iommu_v1.c 160 */;
	int cocci_id/* drivers/iommu/mtk_iommu_v1.c 109 */;
	const int cocci_id/* drivers/iommu/mtk_iommu_v1.c 104 */[];
	struct mtk_iommu_domain cocci_id/* drivers/iommu/mtk_iommu_v1.c 101 */;
}
