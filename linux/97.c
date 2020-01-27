cocci_test_suite() {
	unsigned long long cocci_id/* kernel/power/snapshot.c 982 */;
	struct nosave_region cocci_id/* kernel/power/snapshot.c 959 */;
	struct nosave_region *cocci_id/* kernel/power/snapshot.c 951 */;
	int cocci_id/* kernel/power/snapshot.c 949 */;
	void __init cocci_id/* kernel/power/snapshot.c 948 */;
	struct nosave_region {
		struct list_head list;
		unsigned long start_pfn;
		unsigned long end_pfn;
	} cocci_id/* kernel/power/snapshot.c 906 */;
	void cocci_id/* kernel/power/snapshot.c 81 */(struct page *);
	int cocci_id/* kernel/power/snapshot.c 80 */(struct page *);
	void **cocci_id/* kernel/power/snapshot.c 708 */;
	unsigned int *cocci_id/* kernel/power/snapshot.c 708 */;
	struct list_head cocci_id/* kernel/power/snapshot.c 647 */;
	struct chain_allocator cocci_id/* kernel/power/snapshot.c 646 */;
	struct mem_extent cocci_id/* kernel/power/snapshot.c 608 */;
	struct mem_extent *cocci_id/* kernel/power/snapshot.c 595 */;
	struct mem_extent {
		struct list_head hook;
		unsigned long start;
		unsigned long end;
	} cocci_id/* kernel/power/snapshot.c 560 */;
	void cocci_id/* kernel/power/snapshot.c 558 */(struct memory_bitmap *bm,
						       int clear_nosave_free);
	struct mem_zone_bm_rtree cocci_id/* kernel/power/snapshot.c 509 */;
	void cocci_id/* kernel/power/snapshot.c 488 */(struct mem_zone_bm_rtree *zone,
						       int clear_nosave_free);
	struct rtree_node **cocci_id/* kernel/power/snapshot.c 478 */;
	bool cocci_id/* kernel/power/snapshot.c 44 */;
	unsigned int cocci_id/* kernel/power/snapshot.c 432 */;
	struct rtree_node *cocci_id/* kernel/power/snapshot.c 431 */;
	struct chain_allocator *cocci_id/* kernel/power/snapshot.c 429 */;
	struct mem_zone_bm_rtree *cocci_id/* kernel/power/snapshot.c 428 */;
	struct rtree_node cocci_id/* kernel/power/snapshot.c 408 */;
	struct list_head *cocci_id/* kernel/power/snapshot.c 404 */;
	struct memory_bitmap {
		struct list_head zones;
		struct linked_page *p_list;
		struct bm_position cur;
	} cocci_id/* kernel/power/snapshot.c 377 */;
	struct bm_position {
		struct mem_zone_bm_rtree *zone;
		struct rtree_node *node;
		unsigned long node_pfn;
		int node_bit;
	} cocci_id/* kernel/power/snapshot.c 370 */;
	struct mem_zone_bm_rtree {
		struct list_head list;
		struct list_head nodes;
		struct list_head leaves;
		unsigned long start_pfn;
		unsigned long end_pfn;
		struct rtree_node *rtree;
		int levels;
		unsigned int blocks;
	} cocci_id/* kernel/power/snapshot.c 357 */;
	struct rtree_node {
		struct list_head list;
		unsigned long *data;
	} cocci_id/* kernel/power/snapshot.c 348 */;
	struct linked_page *cocci_id/* kernel/power/snapshot.c 280 */;
	struct snapshot_handle *cocci_id/* kernel/power/snapshot.c 2683 */;
	void cocci_id/* kernel/power/snapshot.c 266 */;
	struct chain_allocator {
		struct linked_page *chain;
		unsigned int used_space;
		gfp_t gfp_mask;
		int safe_needed;
	} cocci_id/* kernel/power/snapshot.c 258 */;
	struct pbe cocci_id/* kernel/power/snapshot.c 2562 */;
	struct pbe *cocci_id/* kernel/power/snapshot.c 2540 */;
	struct highmem_pbe cocci_id/* kernel/power/snapshot.c 2370 */;
	struct highmem_pbe *cocci_id/* kernel/power/snapshot.c 2355 */;
	struct highmem_pbe {
		struct page *copy_page;
		struct page *orig_page;
		struct highmem_pbe *next;
	} cocci_id/* kernel/power/snapshot.c 2243 */;
	char *cocci_id/* kernel/power/snapshot.c 2181 */;
	struct swsusp_info *cocci_id/* kernel/power/snapshot.c 2179 */;
	unsigned long *cocci_id/* kernel/power/snapshot.c 2066 */;
	struct swsusp_info cocci_id/* kernel/power/snapshot.c 2049 */;
	struct new_utsname cocci_id/* kernel/power/snapshot.c 2021 */;
	struct page *cocci_id/* kernel/power/snapshot.c 1920 */;
	struct memory_bitmap *cocci_id/* kernel/power/snapshot.c 1910 */;
	gfp_t cocci_id/* kernel/power/snapshot.c 175 */;
	void *cocci_id/* kernel/power/snapshot.c 175 */;
	ktime_t cocci_id/* kernel/power/snapshot.c 1705 */;
	u64 cocci_id/* kernel/power/snapshot.c 1567 */;
	unsigned long cocci_id/* kernel/power/snapshot.c 1567 */;
	struct memory_bitmap cocci_id/* kernel/power/snapshot.c 1457 */;
	struct zone *cocci_id/* kernel/power/snapshot.c 1413 */;
	long cocci_id/* kernel/power/snapshot.c 1342 */;
	long *cocci_id/* kernel/power/snapshot.c 1338 */;
	struct linked_page {
		struct linked_page *next;
		char data[LINKED_PAGE_DATA_SIZE];
	}__packed cocci_id/* kernel/power/snapshot.c 121 */;
}
