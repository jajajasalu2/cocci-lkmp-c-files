cocci_test_suite() {
	unsigned int cocci_id/* mm/highmem.c 67 */;
	void __init cocci_id/* mm/highmem.c 474 */;
	struct page_address_map *cocci_id/* mm/highmem.c 421 */;
	struct page_address_slot *cocci_id/* mm/highmem.c 412 */;
	const struct page *cocci_id/* mm/highmem.c 408 */;
	struct page_address_slot {
		struct list_head lh;
		spinlock_t lock;
	}____cacheline_aligned_in_smp cocci_id/* mm/highmem.c 392 */[1 << PA_HASH_ORDER];
	struct page_address_map cocci_id/* mm/highmem.c 387 */[LAST_PKMAP];
	struct page_address_map {
		struct page *page;
		void *virtual;
		struct list_head list;
	} cocci_id/* mm/highmem.c 381 */;
	unsigned long cocci_id/* mm/highmem.c 277 */;
	void *cocci_id/* mm/highmem.c 275 */;
	struct page *cocci_id/* mm/highmem.c 171 */;
	int cocci_id/* mm/highmem.c 165 */;
	void cocci_id/* mm/highmem.c 163 */;
	pte_t *cocci_id/* mm/highmem.c 129 */;
	int cocci_id/* mm/highmem.c 126 */[LAST_PKMAP];
	struct zone *cocci_id/* mm/highmem.c 115 */;
	atomic_long_t cocci_id/* mm/highmem.c 108 */;
	wait_queue_head_t *cocci_id/* mm/highmem.c 100 */;
	__typeof__(int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
