cocci_test_suite() {
	struct iova_cpu_rcache *cocci_id/* drivers/iommu/iova.c 956 */;
	struct iova_rcache *cocci_id/* drivers/iommu/iova.c 953 */;
	struct iova_magazine *cocci_id/* drivers/iommu/iova.c 893 */;
	struct iova_fq cocci_id/* drivers/iommu/iova.c 88 */;
	struct iova_fq __percpu *cocci_id/* drivers/iommu/iova.c 82 */;
	iova_flush_cb cocci_id/* drivers/iommu/iova.c 80 */;
	iova_entry_dtor cocci_id/* drivers/iommu/iova.c 80 */;
	struct iova_magazine cocci_id/* drivers/iommu/iova.c 792 */;
	gfp_t cocci_id/* drivers/iommu/iova.c 790 */;
	struct iova_cpu_rcache {
		spinlock_t lock;
		struct iova_magazine *loaded;
		struct iova_magazine *prev;
	} cocci_id/* drivers/iommu/iova.c 784 */;
	struct iova_magazine {
		unsigned long size;
		unsigned long pfns[IOVA_MAG_SIZE];
	} cocci_id/* drivers/iommu/iova.c 779 */;
	unsigned long *cocci_id/* drivers/iommu/iova.c 644 */;
	struct iova *cocci_id/* drivers/iommu/iova.c 643 */;
	void cocci_id/* drivers/iommu/iova.c 642 */;
	struct timer_list *cocci_id/* drivers/iommu/iova.c 530 */;
	struct iova_fq *cocci_id/* drivers/iommu/iova.c 522 */;
	u64 cocci_id/* drivers/iommu/iova.c 481 */;
	unsigned cocci_id/* drivers/iommu/iova.c 468 */;
	unsigned int cocci_id/* drivers/iommu/iova.c 425 */;
	void cocci_id/* drivers/iommu/iova.c 27 */(struct timer_list *t);
	void cocci_id/* drivers/iommu/iova.c 26 */(struct iova_domain *iovad);
	struct kmem_cache *cocci_id/* drivers/iommu/iova.c 230 */;
	unsigned long cocci_id/* drivers/iommu/iova.c 21 */(struct iova_domain *iovad,
							    unsigned long size,
							    unsigned long limit_pfn);
	struct iova cocci_id/* drivers/iommu/iova.c 200 */;
	struct rb_node *cocci_id/* drivers/iommu/iova.c 184 */;
	bool cocci_id/* drivers/iommu/iova.c 182 */;
	unsigned long cocci_id/* drivers/iommu/iova.c 181 */;
	struct iova_domain *cocci_id/* drivers/iommu/iova.c 180 */;
	int cocci_id/* drivers/iommu/iova.c 180 */;
	bool cocci_id/* drivers/iommu/iova.c 18 */(struct iova_domain *iovad,
						   unsigned long pfn,
						   unsigned long size);
	struct rb_node **cocci_id/* drivers/iommu/iova.c 157 */;
	struct rb_root *cocci_id/* drivers/iommu/iova.c 154 */;
}
