	struct page_address_slot {
		struct list_head lh;
		spinlock_t lock;
	} ____cacheline_aligned_in_smp cocci_id[1 << PA_HASH_ORDER];
