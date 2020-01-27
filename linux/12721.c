cocci_test_suite() {
	u64 cocci_id/* drivers/iommu/io-pgtable-arm.c 788 */;
	struct io_pgtable_ops cocci_id/* drivers/iommu/io-pgtable-arm.c 776 */;
	unsigned int cocci_id/* drivers/iommu/io-pgtable-arm.c 700 */;
	struct io_pgtable *cocci_id/* drivers/iommu/io-pgtable-arm.c 598 */;
	struct iommu_iotlb_gather *cocci_id/* drivers/iommu/io-pgtable-arm.c 593 */;
	arm_lpae_iopte cocci_id/* drivers/iommu/io-pgtable-arm.c 519 */;
	arm_lpae_iopte *cocci_id/* drivers/iommu/io-pgtable-arm.c 500 */;
	struct arm_lpae_io_pgtable *cocci_id/* drivers/iommu/io-pgtable-arm.c 499 */;
	phys_addr_t cocci_id/* drivers/iommu/io-pgtable-arm.c 291 */;
	struct arm_lpae_io_pgtable cocci_id/* drivers/iommu/io-pgtable-arm.c 29 */;
	size_t cocci_id/* drivers/iommu/io-pgtable-arm.c 285 */(struct arm_lpae_io_pgtable *data,
								struct iommu_iotlb_gather *gather,
								unsigned long iova,
								size_t size,
								int lvl,
								arm_lpae_iopte *ptep);
	unsigned long cocci_id/* drivers/iommu/io-pgtable-arm.c 266 */;
	void cocci_id/* drivers/iommu/io-pgtable-arm.c 260 */;
	dma_addr_t cocci_id/* drivers/iommu/io-pgtable-arm.c 227 */;
	struct page *cocci_id/* drivers/iommu/io-pgtable-arm.c 226 */;
	int cocci_id/* drivers/iommu/io-pgtable-arm.c 225 */;
	struct device *cocci_id/* drivers/iommu/io-pgtable-arm.c 224 */;
	struct io_pgtable_cfg *cocci_id/* drivers/iommu/io-pgtable-arm.c 222 */;
	gfp_t cocci_id/* drivers/iommu/io-pgtable-arm.c 221 */;
	void *cocci_id/* drivers/iommu/io-pgtable-arm.c 221 */;
	size_t cocci_id/* drivers/iommu/io-pgtable-arm.c 221 */;
	enum io_pgtable_fmt cocci_id/* drivers/iommu/io-pgtable-arm.c 185 */;
	bool cocci_id/* drivers/iommu/io-pgtable-arm.c 184 */;
	struct arm_lpae_io_pgtable {
		struct io_pgtable iop;
		int pgd_bits;
		int start_level;
		int bits_per_level;
		void *pgd;
	} cocci_id/* drivers/iommu/io-pgtable-arm.c 172 */;
	struct io_pgtable_cfg cocci_id/* drivers/iommu/io-pgtable-arm.c 1258 */;
	const unsigned int cocci_id/* drivers/iommu/io-pgtable-arm.c 1253 */[]__initconst;
	const unsigned long cocci_id/* drivers/iommu/io-pgtable-arm.c 1247 */[]__initconst;
	int __init cocci_id/* drivers/iommu/io-pgtable-arm.c 1245 */;
	const enum io_pgtable_fmt cocci_id/* drivers/iommu/io-pgtable-arm.c 1148 */[]__initconst;
	struct io_pgtable_ops *cocci_id/* drivers/iommu/io-pgtable-arm.c 1127 */;
	void __init cocci_id/* drivers/iommu/io-pgtable-arm.c 1127 */;
	const struct iommu_flush_ops cocci_id/* drivers/iommu/io-pgtable-arm.c 1120 */;
	struct io_pgtable_init_fns cocci_id/* drivers/iommu/io-pgtable-arm.c 1082 */;
}
