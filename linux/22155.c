cocci_test_suite() {
	struct hlist_node *cocci_id/* mm/ksm.c 917 */;
	unsigned char cocci_id/* mm/ksm.c 799 */;
	enum get_ksm_page_flags cocci_id/* mm/ksm.c 695 */;
	enum get_ksm_page_flags{GET_KSM_PAGE_NOLOCK, GET_KSM_PAGE_LOCK, GET_KSM_PAGE_TRYLOCK,} cocci_id/* mm/ksm.c 669 */;
	struct vm_area_struct *cocci_id/* mm/ksm.c 537 */;
	unsigned long cocci_id/* mm/ksm.c 536 */;
	vm_fault_t cocci_id/* mm/ksm.c 473 */;
	struct rmap_item *cocci_id/* mm/ksm.c 377 */;
	void __init cocci_id/* mm/ksm.c 330 */;
	struct task_struct *cocci_id/* mm/ksm.c 3175 */;
	int __init cocci_id/* mm/ksm.c 3173 */;
	const struct attribute_group cocci_id/* mm/ksm.c 3167 */;
	struct attribute *cocci_id/* mm/ksm.c 3147 */[];
	struct kobj_attribute *cocci_id/* mm/ksm.c 3141 */;
	char *cocci_id/* mm/ksm.c 3141 */;
	struct kobject *cocci_id/* mm/ksm.c 3140 */;
	ssize_t cocci_id/* mm/ksm.c 3140 */;
	long cocci_id/* mm/ksm.c 3086 */;
	struct __struct cocci_id/* mm/ksm.c 303 */;
	const char *cocci_id/* mm/ksm.c 3029 */;
	size_t cocci_id/* mm/ksm.c 3029 */;
	void cocci_id/* mm/ksm.c 295 */(void);
	struct memory_notify *cocci_id/* mm/ksm.c 2790 */;
	struct notifier_block *cocci_id/* mm/ksm.c 2787 */;
	struct stable_node cocci_id/* mm/ksm.c 2768 */;
	struct rb_node *cocci_id/* mm/ksm.c 2762 */;
	struct anon_vma_chain *cocci_id/* mm/ksm.c 2611 */;
	struct rmap_walk_control *cocci_id/* mm/ksm.c 2591 */;
	struct anon_vma *cocci_id/* mm/ksm.c 2563 */;
	void cocci_id/* mm/ksm.c 2522 */;
	struct mm_slot *cocci_id/* mm/ksm.c 2485 */;
	struct mm_struct *cocci_id/* mm/ksm.c 2483 */;
	struct kmem_cache *cocci_id/* mm/ksm.c 243 */;
	unsigned long *cocci_id/* mm/ksm.c 2429 */;
	struct ksm_scan cocci_id/* mm/ksm.c 237 */;
	struct mm_slot cocci_id/* mm/ksm.c 234 */;
	struct list_head *cocci_id/* mm/ksm.c 229 */;
	struct rb_root cocci_id/* mm/ksm.c 222 */[1];
	struct page **cocci_id/* mm/ksm.c 2216 */;
	struct rmap_item **cocci_id/* mm/ksm.c 2189 */;
	unsigned int cocci_id/* mm/ksm.c 2042 */;
	struct rmap_item {
		struct rmap_item *rmap_list;
		union {
			struct anon_vma *anon_vma;
#ifdef CONFIG_NUMA
			int nid;
#endif
		};
		struct mm_struct *mm;
		unsigned long address;
		unsigned int oldchecksum;
		union {
			struct rb_node node;
			struct {
				struct stable_node *head;
				struct hlist_node hlist;
			};
		};
	} cocci_id/* mm/ksm.c 195 */;
	struct rmap_item cocci_id/* mm/ksm.c 1942 */;
	struct rb_node **cocci_id/* mm/ksm.c 1808 */;
	struct stable_node {
		union {
			struct rb_node node;
			struct {
				struct list_head *head;
				struct {
					struct hlist_node hlist_dup;
					struct list_head list;
				};
			};
		};
		struct hlist_head hlist;
		union {
			unsigned long kpfn;
			unsigned long chain_prune_time;
		};
#define STABLE_NODE_CHAIN -1024
		int rmap_hlist_len;
#ifdef CONFIG_NUMA
		int nid;
#endif
	} cocci_id/* mm/ksm.c 155 */;
	struct rb_root *cocci_id/* mm/ksm.c 1502 */;
	struct page *cocci_id/* mm/ksm.c 1500 */;
	struct stable_node **cocci_id/* mm/ksm.c 1500 */;
	typeof(*stable_node) cocci_id/* mm/ksm.c 1483 */;
	struct ksm_scan {
		struct mm_slot *mm_slot;
		unsigned long address;
		struct rmap_item **rmap_list;
		unsigned long seqnr;
	} cocci_id/* mm/ksm.c 136 */;
	bool cocci_id/* mm/ksm.c 1335 */;
	struct stable_node *cocci_id/* mm/ksm.c 1335 */;
	int cocci_id/* mm/ksm.c 1335 */;
	struct mm_slot {
		struct hlist_node link;
		struct list_head mm_list;
		struct rmap_item *rmap_list;
		struct mm_struct *mm;
	} cocci_id/* mm/ksm.c 120 */;
	struct mmu_notifier_range cocci_id/* mm/ksm.c 1129 */;
	spinlock_t *cocci_id/* mm/ksm.c 1126 */;
	pte_t *cocci_id/* mm/ksm.c 1124 */;
	pmd_t *cocci_id/* mm/ksm.c 1123 */;
	pte_t cocci_id/* mm/ksm.c 1120 */;
	struct page_vma_mapped_walk cocci_id/* mm/ksm.c 1036 */;
	void *cocci_id/* mm/ksm.c 1026 */;
	u32 cocci_id/* mm/ksm.c 1023 */;
}
