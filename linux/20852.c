cocci_test_suite() {
	enum{AUDIT_PRE_PAGE_FAULT, AUDIT_POST_PAGE_FAULT, AUDIT_PRE_PTE_WRITE, AUDIT_POST_PTE_WRITE, AUDIT_PRE_SYNC, AUDIT_POST_SYNC,} cocci_id/* arch/x86/kvm/mmu/mmu.c 89 */;
	union split_spte cocci_id/* arch/x86/kvm/mmu/mmu.c 756 */;
	union split_spte *cocci_id/* arch/x86/kvm/mmu/mmu.c 756 */;
	union split_spte {
		struct {
			u32 spte_low;
			u32 spte_high;
		};
		u64 spte;
	} cocci_id/* arch/x86/kvm/mmu/mmu.c 661 */;
	u64 cocci_id/* arch/x86/kvm/mmu/mmu.c 656 */;
	uintptr_t cocci_id/* arch/x86/kvm/mmu/mmu.c 6460 */;
	long cocci_id/* arch/x86/kvm/mmu/mmu.c 6453 */;
	unsigned int cocci_id/* arch/x86/kvm/mmu/mmu.c 6420 */;
	struct kernel_param_ops cocci_id/* arch/x86/kvm/mmu/mmu.c 64 */;
	struct kvm_mmu_page cocci_id/* arch/x86/kvm/mmu/mmu.c 6332 */;
	struct pte_list_desc cocci_id/* arch/x86/kvm/mmu/mmu.c 6326 */;
	const struct kernel_param *cocci_id/* arch/x86/kvm/mmu/mmu.c 6269 */;
	const char *cocci_id/* arch/x86/kvm/mmu/mmu.c 6269 */;
	struct shrinker cocci_id/* arch/x86/kvm/mmu/mmu.c 6218 */;
	struct shrinker *cocci_id/* arch/x86/kvm/mmu/mmu.c 6213 */;
	struct shrink_control *cocci_id/* arch/x86/kvm/mmu/mmu.c 6213 */;
	int cocci_id/* arch/x86/kvm/mmu/mmu.c 61 */(const char *val,
						    const struct kernel_param *kp);
	const struct kvm_memory_slot *cocci_id/* arch/x86/kvm/mmu/mmu.c 6036 */;
	struct kvm_page_track_notifier_node *cocci_id/* arch/x86/kvm/mmu/mmu.c 5917 */;
	struct page *cocci_id/* arch/x86/kvm/mmu/mmu.c 5750 */;
	struct kvm_mmu *cocci_id/* arch/x86/kvm/mmu/mmu.c 5748 */;
	slot_level_handler cocci_id/* arch/x86/kvm/mmu/mmu.c 5720 */;
	bool (*cocci_id/* arch/x86/kvm/mmu/mmu.c 5671 */)(struct kvm *kvm,
							  struct kvm_rmap_head *rmap_head);
	uint __read_mostly cocci_id/* arch/x86/kvm/mmu/mmu.c 56 */;
	void *cocci_id/* arch/x86/kvm/mmu/mmu.c 5520 */;
	const u8 *cocci_id/* arch/x86/kvm/mmu/mmu.c 5416 */;
	u8 cocci_id/* arch/x86/kvm/mmu/mmu.c 538 */;
	unsigned cocci_id/* arch/x86/kvm/mmu/mmu.c 5363 */;
	gpa_t *cocci_id/* arch/x86/kvm/mmu/mmu.c 5313 */;
	int __read_mostly cocci_id/* arch/x86/kvm/mmu/mmu.c 53 */;
	const void *cocci_id/* arch/x86/kvm/mmu/mmu.c 5289 */;
	union kvm_mmu_role cocci_id/* arch/x86/kvm/mmu/mmu.c 5173 */;
	union kvm_mmu_extended_role cocci_id/* arch/x86/kvm/mmu/mmu.c 4950 */;
	const u8 cocci_id/* arch/x86/kvm/mmu/mmu.c 4742 */;
	struct x86_exception *cocci_id/* arch/x86/kvm/mmu/mmu.c 4442 */;
	union kvm_mmu_page_role cocci_id/* arch/x86/kvm/mmu/mmu.c 4421 */;
	struct kvm_mmu_root_info cocci_id/* arch/x86/kvm/mmu/mmu.c 4350 */;
	uint cocci_id/* arch/x86/kvm/mmu/mmu.c 4349 */;
	char *cocci_id/* arch/x86/kvm/mmu/mmu.c 4221 */;
	struct kvm_arch_async_pf cocci_id/* arch/x86/kvm/mmu/mmu.c 4176 */;
	u64 cocci_id/* arch/x86/kvm/mmu/mmu.c 4040 */[PT64_ROOT_MAX_LEVEL];
	struct rsvd_bits_validate *cocci_id/* arch/x86/kvm/mmu/mmu.c 4002 */;
	hpa_t cocci_id/* arch/x86/kvm/mmu/mmu.c 3939 */;
	ulong cocci_id/* arch/x86/kvm/mmu/mmu.c 3712 */;
	hpa_t *cocci_id/* arch/x86/kvm/mmu/mmu.c 3694 */;
	int cocci_id/* arch/x86/kvm/mmu/mmu.c 3638 */(struct kvm_vcpu *vcpu);
	bool cocci_id/* arch/x86/kvm/mmu/mmu.c 3636 */(struct kvm_vcpu *vcpu,
						       bool prefault,
						       gfn_t gfn, gva_t gva,
						       kvm_pfn_t *pfn,
						       bool write,
						       bool *writable);
	u32 cocci_id/* arch/x86/kvm/mmu/mmu.c 3532 */;
	gva_t cocci_id/* arch/x86/kvm/mmu/mmu.c 3531 */;
	void __user *cocci_id/* arch/x86/kvm/mmu/mmu.c 3366 */;
	struct task_struct *cocci_id/* arch/x86/kvm/mmu/mmu.c 3364 */;
	struct kvm_tlb_range cocci_id/* arch/x86/kvm/mmu/mmu.c 334 */;
	gfn_t cocci_id/* arch/x86/kvm/mmu/mmu.c 3327 */;
	struct kvm_shadow_walk_iterator cocci_id/* arch/x86/kvm/mmu/mmu.c 3324 */;
	bool cocci_id/* arch/x86/kvm/mmu/mmu.c 3322 */;
	kvm_pfn_t cocci_id/* arch/x86/kvm/mmu/mmu.c 3321 */;
	gpa_t cocci_id/* arch/x86/kvm/mmu/mmu.c 3320 */;
	struct kvm_vcpu *cocci_id/* arch/x86/kvm/mmu/mmu.c 3320 */;
	int cocci_id/* arch/x86/kvm/mmu/mmu.c 3320 */;
	kvm_pfn_t *cocci_id/* arch/x86/kvm/mmu/mmu.c 3298 */;
	u64 *cocci_id/* arch/x86/kvm/mmu/mmu.c 3255 */;
	struct page *cocci_id/* arch/x86/kvm/mmu/mmu.c 3230 */[PTE_PREFETCH_NUM];
	struct kvm_tlb_range *cocci_id/* arch/x86/kvm/mmu/mmu.c 320 */;
	union kvm_mmu_page_role cocci_id/* arch/x86/kvm/mmu/mmu.c 307 */(struct kvm_vcpu *vcpu);
	bool cocci_id/* arch/x86/kvm/mmu/mmu.c 306 */(u64 spte);
	void cocci_id/* arch/x86/kvm/mmu/mmu.c 305 */(u64 *sptep, u64 spte);
	u8 __read_mostly cocci_id/* arch/x86/kvm/mmu/mmu.c 303 */;
	int *cocci_id/* arch/x86/kvm/mmu/mmu.c 2813 */;
	struct list_head *cocci_id/* arch/x86/kvm/mmu/mmu.c 2812 */;
	const u64 cocci_id/* arch/x86/kvm/mmu/mmu.c 274 */;
	struct kvm_shadow_walk_iterator *cocci_id/* arch/x86/kvm/mmu/mmu.c 2681 */;
	u64 __read_mostly cocci_id/* arch/x86/kvm/mmu/mmu.c 266 */;
	struct kvm_mmu_page *cocci_id/* arch/x86/kvm/mmu/mmu.c 2533 */;
	void cocci_id/* arch/x86/kvm/mmu/mmu.c 2533 */;
	struct kvm_mmu_pages cocci_id/* arch/x86/kvm/mmu/mmu.c 2504 */;
	struct mmu_page_path cocci_id/* arch/x86/kvm/mmu/mmu.c 2503 */;
	struct mmu_page_path *cocci_id/* arch/x86/kvm/mmu/mmu.c 2481 */;
	struct percpu_counter cocci_id/* arch/x86/kvm/mmu/mmu.c 248 */;
	struct mmu_page_path {
		struct kvm_mmu_page *parent[PT64_ROOT_MAX_LEVEL];
		unsigned int idx[PT64_ROOT_MAX_LEVEL];
	} cocci_id/* arch/x86/kvm/mmu/mmu.c 2426 */;
	void cocci_id/* arch/x86/kvm/mmu/mmu.c 2331 */(struct kvm *kvm,
						       struct list_head *invalid_list);
	bool cocci_id/* arch/x86/kvm/mmu/mmu.c 2329 */(struct kvm *kvm,
						       struct kvm_mmu_page *sp,
						       struct list_head *invalid_list);
	struct kvm_mmu_pages *cocci_id/* arch/x86/kvm/mmu/mmu.c 2270 */;
	struct kvm_mmu_pages {
		struct mmu_page_and_offset {
			struct kvm_mmu_page *sp;
			unsigned int idx;
		} page[KVM_PAGE_ARRAY_NR];
		unsigned int nr;
	} cocci_id/* arch/x86/kvm/mmu/mmu.c 2238 */;
	void cocci_id/* arch/x86/kvm/mmu/mmu.c 2194 */(u64 *spte);
	const union kvm_mmu_page_role cocci_id/* arch/x86/kvm/mmu/mmu.c 218 */;
	struct kvm_shadow_walk_iterator {
		u64 addr;
		hpa_t shadow_addr;
		u64 *sptep;
		int level;
		unsigned index;
	} cocci_id/* arch/x86/kvm/mmu/mmu.c 210 */;
	struct pte_list_desc {
		u64 *sptes[PTE_LIST_EXT];
		struct pte_list_desc *more;
	} cocci_id/* arch/x86/kvm/mmu/mmu.c 205 */;
	pte_t cocci_id/* arch/x86/kvm/mmu/mmu.c 2048 */;
	int (*cocci_id/* arch/x86/kvm/mmu/mmu.c 2034 */)(struct kvm *kvm,
							 struct kvm_rmap_head *rmap_head,
							 struct kvm_memory_slot *slot,
							 gfn_t gfn, int level,
							 unsigned long data);
	struct slot_rmap_walk_iterator cocci_id/* arch/x86/kvm/mmu/mmu.c 1998 */;
	enum{RET_PF_RETRY=0, RET_PF_EMULATE=1, RET_PF_INVALID=2,} cocci_id/* arch/x86/kvm/mmu/mmu.c 199 */;
	struct slot_rmap_walk_iterator *cocci_id/* arch/x86/kvm/mmu/mmu.c 1935 */;
	struct slot_rmap_walk_iterator {
		struct kvm_memory_slot *slot;
		gfn_t start_gfn;
		gfn_t end_gfn;
		int start_level;
		int end_level;
		gfn_t gfn;
		struct kvm_rmap_head *rmap;
		int level;
		struct kvm_rmap_head *end_rmap;
	} cocci_id/* arch/x86/kvm/mmu/mmu.c 1917 */;
	pte_t *cocci_id/* arch/x86/kvm/mmu/mmu.c 1879 */;
	struct rmap_iterator cocci_id/* arch/x86/kvm/mmu/mmu.c 1695 */;
	struct kvm *cocci_id/* arch/x86/kvm/mmu/mmu.c 1598 */;
	struct rmap_iterator *cocci_id/* arch/x86/kvm/mmu/mmu.c 1533 */;
	struct rmap_iterator {
		struct pte_list_desc *desc;
		int pos;
	} cocci_id/* arch/x86/kvm/mmu/mmu.c 1519 */;
	unsigned long cocci_id/* arch/x86/kvm/mmu/mmu.c 1467 */;
	struct kvm_memory_slot *cocci_id/* arch/x86/kvm/mmu/mmu.c 1465 */;
	struct kvm_rmap_head *cocci_id/* arch/x86/kvm/mmu/mmu.c 1464 */;
	struct pte_list_desc *cocci_id/* arch/x86/kvm/mmu/mmu.c 1424 */;
	bool *cocci_id/* arch/x86/kvm/mmu/mmu.c 1327 */;
	struct kvm_lpage_info *cocci_id/* arch/x86/kvm/mmu/mmu.c 1266 */;
	struct kvm_memslots *cocci_id/* arch/x86/kvm/mmu/mmu.c 1211 */;
	struct kmem_cache *cocci_id/* arch/x86/kvm/mmu/mmu.c 1077 */;
	struct kvm_mmu_memory_cache *cocci_id/* arch/x86/kvm/mmu/mmu.c 1076 */;
	unsigned long *cocci_id/* arch/x86/kvm/mmu/mmu.c 1013 */;
}
