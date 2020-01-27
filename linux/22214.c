cocci_test_suite() {
	struct zbud_pool {
		spinlock_t lock;
		struct list_head unbuddied[NCHUNKS];
		struct list_head buddied;
		struct list_head lru;
		u64 pages_nr;
		const struct zbud_ops *ops;
#ifdef CONFIG_ZPOOL
		struct zpool *zpool;
		const struct zpool_ops *zpool_ops;
#endif
	} cocci_id/* mm/zbud.c 94 */;
	void __exit cocci_id/* mm/zbud.c 623 */;
	void cocci_id/* mm/zbud.c 623 */;
	struct zbud_header cocci_id/* mm/zbud.c 613 */;
	int __init cocci_id/* mm/zbud.c 610 */;
	u64 cocci_id/* mm/zbud.c 605 */;
	void *cocci_id/* mm/zbud.c 584 */;
	unsigned int cocci_id/* mm/zbud.c 502 */;
	unsigned long *cocci_id/* mm/zbud.c 355 */;
	gfp_t cocci_id/* mm/zbud.c 354 */;
	struct zbud_pool *cocci_id/* mm/zbud.c 354 */;
	struct zbud_pool cocci_id/* mm/zbud.c 311 */;
	const struct zbud_ops *cocci_id/* mm/zbud.c 306 */;
	int cocci_id/* mm/zbud.c 286 */;
	enum buddy cocci_id/* mm/zbud.c 260 */;
	struct zbud_header *cocci_id/* mm/zbud.c 260 */;
	unsigned long cocci_id/* mm/zbud.c 260 */;
	struct page *cocci_id/* mm/zbud.c 239 */;
	size_t cocci_id/* mm/zbud.c 230 */;
	enum buddy{FIRST, LAST,} cocci_id/* mm/zbud.c 224 */;
	struct zpool_driver cocci_id/* mm/zbud.c 204 */;
	enum zpool_mapmode cocci_id/* mm/zbud.c 190 */;
	unsigned int *cocci_id/* mm/zbud.c 171 */;
	struct zpool *cocci_id/* mm/zbud.c 143 */;
	const struct zpool_ops *cocci_id/* mm/zbud.c 142 */;
	const char *cocci_id/* mm/zbud.c 141 */;
	const struct zbud_ops cocci_id/* mm/zbud.c 137 */;
	struct zbud_header {
		struct list_head buddy;
		struct list_head lru;
		unsigned int first_chunks;
		unsigned int last_chunks;
		bool under_reclaim;
	} cocci_id/* mm/zbud.c 115 */;
}
