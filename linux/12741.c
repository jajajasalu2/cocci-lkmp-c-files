cocci_test_suite() {
	const u32 *cocci_id/* drivers/iommu/tegra-gart.c 83 */;
	void cocci_id/* drivers/iommu/tegra-gart.c 83 */;
	bool cocci_id/* drivers/iommu/tegra-gart.c 51 */;
	u32 cocci_id/* drivers/iommu/tegra-gart.c 373 */;
	struct gart_device {
		void __iomem *regs;
		u32 *savedata;
		unsigned long iovmm_base;
		unsigned long iovmm_end;
		spinlock_t pte_lock;
		spinlock_t dom_lock;
		unsigned int active_devices;
		struct iommu_domain *active_domain;
		struct iommu_device iommu;
		struct device *dev;
	} cocci_id/* drivers/iommu/tegra-gart.c 36 */;
	struct resource *cocci_id/* drivers/iommu/tegra-gart.c 334 */;
	struct tegra_mc *cocci_id/* drivers/iommu/tegra-gart.c 331 */;
	const struct iommu_ops cocci_id/* drivers/iommu/tegra-gart.c 287 */;
	struct iommu_iotlb_gather *cocci_id/* drivers/iommu/tegra-gart.c 282 */;
	struct of_phandle_args *cocci_id/* drivers/iommu/tegra-gart.c 271 */;
	struct iommu_group *cocci_id/* drivers/iommu/tegra-gart.c 248 */;
	struct device *cocci_id/* drivers/iommu/tegra-gart.c 246 */;
	enum iommu_cap cocci_id/* drivers/iommu/tegra-gart.c 241 */;
	dma_addr_t cocci_id/* drivers/iommu/tegra-gart.c 226 */;
	phys_addr_t cocci_id/* drivers/iommu/tegra-gart.c 225 */;
	gfp_t cocci_id/* drivers/iommu/tegra-gart.c 181 */;
	size_t cocci_id/* drivers/iommu/tegra-gart.c 181 */;
	struct gart_device *cocci_id/* drivers/iommu/tegra-gart.c 167 */;
	unsigned long cocci_id/* drivers/iommu/tegra-gart.c 167 */;
	int cocci_id/* drivers/iommu/tegra-gart.c 167 */;
	unsigned cocci_id/* drivers/iommu/tegra-gart.c 144 */;
	struct iommu_domain *cocci_id/* drivers/iommu/tegra-gart.c 106 */;
}
