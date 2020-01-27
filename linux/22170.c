cocci_test_suite() {
	unsigned long *cocci_id/* mm/mmu_notifier.c 95 */;
	const struct mmu_interval_notifier_ops *cocci_id/* mm/mmu_notifier.c 853 */;
	struct mmu_notifier_mm *cocci_id/* mm/mmu_notifier.c 852 */;
	unsigned long cocci_id/* mm/mmu_notifier.c 852 */;
	struct mmu_interval_notifier *cocci_id/* mm/mmu_notifier.c 851 */;
	struct mm_struct *cocci_id/* mm/mmu_notifier.c 851 */;
	int cocci_id/* mm/mmu_notifier.c 850 */;
	struct mmu_notifier cocci_id/* mm/mmu_notifier.c 802 */;
	struct rcu_head *cocci_id/* mm/mmu_notifier.c 800 */;
	const struct mmu_notifier_ops *cocci_id/* mm/mmu_notifier.c 676 */;
	struct mmu_notifier_mm cocci_id/* mm/mmu_notifier.c 589 */;
	bool cocci_id/* mm/mmu_notifier.c 535 */;
	struct mmu_notifier_range *cocci_id/* mm/mmu_notifier.c 534 */;
	struct mmu_notifier *cocci_id/* mm/mmu_notifier.c 411 */;
	pte_t cocci_id/* mm/mmu_notifier.c 409 */;
	void cocci_id/* mm/mmu_notifier.c 408 */;
	struct mmu_notifier_mm {
		struct hlist_head list;
		bool has_itree;
		spinlock_t lock;
		unsigned long invalidate_seq;
		unsigned long active_invalidate_ranges;
		struct rb_root_cached itree;
		wait_queue_head_t wq;
		struct hlist_head deferred_list;
	} cocci_id/* mm/mmu_notifier.c 37 */;
	struct lockdep_map cocci_id/* mm/mmu_notifier.c 26 */;
	struct mmu_notifier_range cocci_id/* mm/mmu_notifier.c 259 */;
	struct hlist_node *cocci_id/* mm/mmu_notifier.c 131 */;
	struct mmu_interval_notifier cocci_id/* mm/mmu_notifier.c 125 */;
	struct interval_tree_node *cocci_id/* mm/mmu_notifier.c 119 */;
	const struct mmu_notifier_range *cocci_id/* mm/mmu_notifier.c 1044 */;
}
