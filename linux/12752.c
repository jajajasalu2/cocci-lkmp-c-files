cocci_test_suite() {
	unsigned long cocci_id/* drivers/iommu/s390-iommu.c 92 */;
	struct s390_domain_device *cocci_id/* drivers/iommu/s390-iommu.c 91 */;
	void cocci_id/* drivers/iommu/s390-iommu.c 78 */;
	struct s390_domain *cocci_id/* drivers/iommu/s390-iommu.c 56 */;
	struct iommu_domain *cocci_id/* drivers/iommu/s390-iommu.c 54 */;
	unsigned cocci_id/* drivers/iommu/s390-iommu.c 54 */;
	bool cocci_id/* drivers/iommu/s390-iommu.c 42 */;
	enum iommu_cap cocci_id/* drivers/iommu/s390-iommu.c 42 */;
	struct s390_domain cocci_id/* drivers/iommu/s390-iommu.c 39 */;
	int __init cocci_id/* drivers/iommu/s390-iommu.c 382 */;
	struct s390_domain_device {
		struct list_head list;
		struct zpci_dev *zdev;
	} cocci_id/* drivers/iommu/s390-iommu.c 32 */;
	struct iommu_iotlb_gather *cocci_id/* drivers/iommu/s390-iommu.c 318 */;
	unsigned int cocci_id/* drivers/iommu/s390-iommu.c 290 */;
	unsigned long *cocci_id/* drivers/iommu/s390-iommu.c 289 */;
	dma_addr_t cocci_id/* drivers/iommu/s390-iommu.c 286 */;
	phys_addr_t cocci_id/* drivers/iommu/s390-iommu.c 285 */;
	gfp_t cocci_id/* drivers/iommu/s390-iommu.c 268 */;
	size_t cocci_id/* drivers/iommu/s390-iommu.c 268 */;
	struct s390_domain {
		struct iommu_domain domain;
		struct list_head devices;
		unsigned long *dma_table;
		spinlock_t dma_table_lock;
		spinlock_t list_lock;
	} cocci_id/* drivers/iommu/s390-iommu.c 24 */;
	const struct iommu_ops cocci_id/* drivers/iommu/s390-iommu.c 22 */;
	u8 *cocci_id/* drivers/iommu/s390-iommu.c 214 */;
	struct zpci_dev *cocci_id/* drivers/iommu/s390-iommu.c 172 */;
	struct iommu_group *cocci_id/* drivers/iommu/s390-iommu.c 171 */;
	struct device *cocci_id/* drivers/iommu/s390-iommu.c 169 */;
	int cocci_id/* drivers/iommu/s390-iommu.c 169 */;
	u64 cocci_id/* drivers/iommu/s390-iommu.c 107 */;
}
