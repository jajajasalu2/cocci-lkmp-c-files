cocci_test_suite() {
	unsigned int cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 62 */;
	struct mm_iommu_table_group_mem_t *cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 60 */;
	struct mm_iommu_table_group_mem_t **cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 58 */;
	struct mm_struct *cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 56 */;
	unsigned long cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 56 */;
	long cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 56 */;
	unsigned long *cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 416 */;
	bool cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 415 */;
	void *cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 395 */;
	u64 *cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 345 */;
	const long cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 344 */;
	struct mm_iommu_table_group_mem_t {
		struct list_head next;
		struct rcu_head rcu;
		unsigned long used;
		atomic64_t mapped;
		unsigned int pageshift;
		u64 ua;
		u64 entries;
		union {
			struct page **hpages;
			phys_addr_t *hpas;
		};
#define MM_IOMMU_TABLE_INVALID_HPA ((uint64_t) - 1)
			u64 dev_hpa;
	} cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 27 */;
	struct mm_iommu_table_group_mem_t cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 234 */;
	struct rcu_head *cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 231 */;
	void cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 223 */;
	struct page *cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 126 */;
	struct vm_area_struct *cocci_id/* arch/powerpc/mm/book3s64/iommu_api.c 101 */;
}
