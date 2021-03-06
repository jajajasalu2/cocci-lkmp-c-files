cocci_test_suite() {
	uintptr_t cocci_id/* drivers/iommu/exynos-iommu.c 932 */;
	bool cocci_id/* drivers/iommu/exynos-iommu.c 929 */;
	dma_addr_t cocci_id/* drivers/iommu/exynos-iommu.c 927 */;
	short *cocci_id/* drivers/iommu/exynos-iommu.c 919 */;
	sysmmu_pte_t *cocci_id/* drivers/iommu/exynos-iommu.c 918 */;
	struct exynos_iommu_domain *cocci_id/* drivers/iommu/exynos-iommu.c 918 */;
	struct iommu_domain *cocci_id/* drivers/iommu/exynos-iommu.c 875 */;
	unsigned cocci_id/* drivers/iommu/exynos-iommu.c 733 */;
	struct platform_driver cocci_id/* drivers/iommu/exynos-iommu.c 714 */;
	const struct of_device_id cocci_id/* drivers/iommu/exynos-iommu.c 709 */[];
	int __maybe_unused cocci_id/* drivers/iommu/exynos-iommu.c 685 */;
	const sysmmu_pte_t cocci_id/* drivers/iommu/exynos-iommu.c 68 */[];
	const sysmmu_pte_t *cocci_id/* drivers/iommu/exynos-iommu.c 67 */;
	short cocci_id/* drivers/iommu/exynos-iommu.c 63 */;
	struct resource *cocci_id/* drivers/iommu/exynos-iommu.c 574 */;
	const struct iommu_ops cocci_id/* drivers/iommu/exynos-iommu.c 567 */;
	unsigned int cocci_id/* drivers/iommu/exynos-iommu.c 477 */;
	unsigned long cocci_id/* drivers/iommu/exynos-iommu.c 462 */;
	struct sysmmu_drvdata *cocci_id/* drivers/iommu/exynos-iommu.c 460 */;
	void cocci_id/* drivers/iommu/exynos-iommu.c 460 */;
	unsigned short cocci_id/* drivers/iommu/exynos-iommu.c 411 */;
	const struct sysmmu_fault_info *cocci_id/* drivers/iommu/exynos-iommu.c 408 */;
	irqreturn_t cocci_id/* drivers/iommu/exynos-iommu.c 404 */;
	void *cocci_id/* drivers/iommu/exynos-iommu.c 404 */;
	u32 cocci_id/* drivers/iommu/exynos-iommu.c 369 */;
	phys_addr_t cocci_id/* drivers/iommu/exynos-iommu.c 340 */;
	sysmmu_iova_t cocci_id/* drivers/iommu/exynos-iommu.c 316 */;
	struct exynos_iommu_domain cocci_id/* drivers/iommu/exynos-iommu.c 283 */;
	struct sysmmu_drvdata {
		struct device *sysmmu;
		struct device *master;
		struct device_link *link;
		void __iomem *sfrbase;
		struct clk *clk;
		struct clk *aclk;
		struct clk *pclk;
		struct clk *clk_master;
		spinlock_t lock;
		bool active;
		struct exynos_iommu_domain *domain;
		struct list_head domain_node;
		struct list_head owner_node;
		phys_addr_t pgtable;
		unsigned int version;
		struct iommu_device iommu;
	} cocci_id/* drivers/iommu/exynos-iommu.c 261 */;
	struct exynos_iommu_domain {
		struct list_head clients;
		sysmmu_pte_t *pgtable;
		short *lv2entcnt;
		spinlock_t lock;
		spinlock_t pgtablelock;
		struct iommu_domain domain;
	} cocci_id/* drivers/iommu/exynos-iommu.c 246 */;
	struct exynos_iommu_owner {
		struct list_head controllers;
		struct iommu_domain *domain;
		struct mutex rpm_lock;
	} cocci_id/* drivers/iommu/exynos-iommu.c 234 */;
	const struct sysmmu_fault_info cocci_id/* drivers/iommu/exynos-iommu.c 204 */[];
	struct sysmmu_fault_info {
		unsigned int bit;
		unsigned short addr_reg;
		const char *name;
		unsigned int type;
	} cocci_id/* drivers/iommu/exynos-iommu.c 197 */;
	struct kmem_cache *cocci_id/* drivers/iommu/exynos-iommu.c 179 */;
	struct device *cocci_id/* drivers/iommu/exynos-iommu.c 178 */;
	struct device_node *cocci_id/* drivers/iommu/exynos-iommu.c 1342 */;
	int __init cocci_id/* drivers/iommu/exynos-iommu.c 1340 */;
	struct platform_device *cocci_id/* drivers/iommu/exynos-iommu.c 1295 */;
	struct of_phandle_args *cocci_id/* drivers/iommu/exynos-iommu.c 1292 */;
	struct iommu_group *cocci_id/* drivers/iommu/exynos-iommu.c 1242 */;
	struct exynos_iommu_owner *cocci_id/* drivers/iommu/exynos-iommu.c 1240 */;
	int cocci_id/* drivers/iommu/exynos-iommu.c 1238 */;
	sysmmu_pte_t cocci_id/* drivers/iommu/exynos-iommu.c 118 */;
	struct iommu_iotlb_gather *cocci_id/* drivers/iommu/exynos-iommu.c 1132 */;
	gfp_t cocci_id/* drivers/iommu/exynos-iommu.c 1076 */;
	size_t cocci_id/* drivers/iommu/exynos-iommu.c 1075 */;
}
