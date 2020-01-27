cocci_test_suite() {
	enum fit_type{NOTHING_FIT=0, FL_FIT_TYPE=1, LE_FIT_TYPE=2, RE_FIT_TYPE=3, NE_FIT_TYPE=4,} cocci_id/* mm/vmalloc.c 887 */;
	pte_t cocci_id/* mm/vmalloc.c 69 */;
	struct vfree_deferred cocci_id/* mm/vmalloc.c 54 */;
	struct work_struct *cocci_id/* mm/vmalloc.c 52 */;
	void cocci_id/* mm/vmalloc.c 50 */(const void *, int);
	struct list_head *cocci_id/* mm/vmalloc.c 482 */;
	struct vfree_deferred {
		struct llist_head list;
		struct work_struct wq;
	} cocci_id/* mm/vmalloc.c 44 */;
	struct rb_root *cocci_id/* mm/vmalloc.c 439 */;
	struct rb_node **cocci_id/* mm/vmalloc.c 437 */;
	struct vmap_area cocci_id/* mm/vmalloc.c 421 */;
	struct rb_node *cocci_id/* mm/vmalloc.c 416 */;
	atomic_long_t cocci_id/* mm/vmalloc.c 407 */;
	unsigned long cocci_id/* mm/vmalloc.c 405 */(void);
	int __init cocci_id/* mm/vmalloc.c 3669 */;
	const struct seq_operations cocci_id/* mm/vmalloc.c 3662 */;
	struct rb_root cocci_id/* mm/vmalloc.c 365 */;
	loff_t *cocci_id/* mm/vmalloc.c 3543 */;
	struct seq_file *cocci_id/* mm/vmalloc.c 3543 */;
	struct vm_struct **cocci_id/* mm/vmalloc.c 3522 */;
	struct kmem_cache *cocci_id/* mm/vmalloc.c 347 */;
	struct vm_struct cocci_id/* mm/vmalloc.c 3330 */;
	struct vmap_area **cocci_id/* mm/vmalloc.c 3288 */;
	const unsigned long cocci_id/* mm/vmalloc.c 3286 */;
	const size_t *cocci_id/* mm/vmalloc.c 3283 */;
	const unsigned long *cocci_id/* mm/vmalloc.c 3282 */;
	pte_t **cocci_id/* mm/vmalloc.c 3159 */;
	size_t cocci_id/* mm/vmalloc.c 3159 */;
	pte_t ***cocci_id/* mm/vmalloc.c 3136 */;
	pte_t *cocci_id/* mm/vmalloc.c 3134 */;
	void __weak cocci_id/* mm/vmalloc.c 3129 */;
	struct vm_area_struct *cocci_id/* mm/vmalloc.c 3113 */;
	long cocci_id/* mm/vmalloc.c 2915 */;
	char *cocci_id/* mm/vmalloc.c 2815 */;
	pmd_t *cocci_id/* mm/vmalloc.c 276 */;
	pud_t *cocci_id/* mm/vmalloc.c 275 */;
	p4d_t *cocci_id/* mm/vmalloc.c 274 */;
	pgd_t *cocci_id/* mm/vmalloc.c 273 */;
	pgprot_t cocci_id/* mm/vmalloc.c 2605 */;
	struct page *cocci_id/* mm/vmalloc.c 2459 */;
	const gfp_t cocci_id/* mm/vmalloc.c 2452 */;
	unsigned int cocci_id/* mm/vmalloc.c 2451 */;
	struct page **cocci_id/* mm/vmalloc.c 2450 */;
	void *cocci_id/* mm/vmalloc.c 2444 */(unsigned long size,
					      unsigned long align,
					      gfp_t gfp_mask, pgprot_t prot,
					      int node, const void *caller);
	void cocci_id/* mm/vmalloc.c 2350 */;
	struct vfree_deferred *cocci_id/* mm/vmalloc.c 2326 */;
	int (*cocci_id/* mm/vmalloc.c 2219 */)(struct page *page);
	const struct vm_struct *cocci_id/* mm/vmalloc.c 2218 */;
	const void *cocci_id/* mm/vmalloc.c 2132 */;
	struct vm_struct *cocci_id/* mm/vmalloc.c 2122 */;
	void *cocci_id/* mm/vmalloc.c 2115 */;
	gfp_t cocci_id/* mm/vmalloc.c 2087 */;
	int *cocci_id/* mm/vmalloc.c 198 */;
	void __init cocci_id/* mm/vmalloc.c 1857 */;
	struct vmap_block *cocci_id/* mm/vmalloc.c 1714 */;
	struct vmap_block_queue *cocci_id/* mm/vmalloc.c 1713 */;
	struct vmap_block cocci_id/* mm/vmalloc.c 1501 */;
	struct vmap_block {
		spinlock_t lock;
		struct vmap_area *va;
		unsigned long free,dirty;
		unsigned long dirty_min,dirty_max;
		struct list_head free_list;
		struct rcu_head rcu_head;
		struct list_head purge;
	} cocci_id/* mm/vmalloc.c 1438 */;
	struct vmap_block_queue {
		spinlock_t lock;
		struct list_head free;
	} cocci_id/* mm/vmalloc.c 1433 */;
	struct llist_node *cocci_id/* mm/vmalloc.c 1276 */;
	bool cocci_id/* mm/vmalloc.c 1273 */;
	void cocci_id/* mm/vmalloc.c 1259 */(void);
	struct notifier_block *cocci_id/* mm/vmalloc.c 1204 */;
	int cocci_id/* mm/vmalloc.c 1032 */;
	enum fit_type cocci_id/* mm/vmalloc.c 1031 */;
	struct vmap_area *cocci_id/* mm/vmalloc.c 1030 */;
	unsigned long cocci_id/* mm/vmalloc.c 1025 */;
	__typeof__(struct vmap_block_queue) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct vfree_deferred) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct vmap_area *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
