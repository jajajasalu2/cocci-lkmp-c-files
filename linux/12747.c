cocci_test_suite() {
	unsigned int cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 894 */;
	struct io_pgtable_cfg cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 886 */;
	struct io_pgtable_ops *cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 885 */;
	int __init cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 883 */;
	const struct iommu_flush_ops cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 870 */;
	void __init cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 863 */;
	struct io_pgtable_init_fns cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 842 */;
	struct io_pgtable_ops cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 786 */;
	struct io_pgtable *cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 644 */;
	arm_v7s_iopte cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 643 */[ARM_V7S_CONT_PAGES];
	struct iommu_iotlb_gather *cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 639 */;
	arm_v7s_iopte *cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 475 */;
	size_t cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 408 */(struct arm_v7s_io_pgtable *,
								    struct iommu_iotlb_gather *,
								    unsigned long,
								    size_t,
								    int,
								    arm_v7s_iopte *);
	struct arm_v7s_io_pgtable cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 40 */;
	void cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 280 */;
	unsigned long cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 274 */;
	arm_v7s_iopte cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 248 */;
	size_t cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 239 */;
	dma_addr_t cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 238 */;
	phys_addr_t cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 237 */;
	struct device *cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 236 */;
	struct io_pgtable_cfg *cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 235 */;
	struct arm_v7s_io_pgtable *cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 233 */;
	gfp_t cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 232 */;
	void *cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 232 */;
	int cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 232 */;
	bool cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 181 */;
	bool cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 174 */(arm_v7s_iopte pte,
								  int lvl);
	struct arm_v7s_io_pgtable {
		struct io_pgtable iop;
		arm_v7s_iopte *pgd;
		struct kmem_cache *l2_tables;
		spinlock_t split_lock;
	} cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 166 */;
	u32 cocci_id/* drivers/iommu/io-pgtable-arm-v7s.c 162 */;
}
