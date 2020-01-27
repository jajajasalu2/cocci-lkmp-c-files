cocci_test_suite() {
	gfp_t cocci_id/* drivers/md/dm-bio-prison-v1.c 63 */;
	void __exit cocci_id/* drivers/md/dm-bio-prison-v1.c 442 */;
	const int cocci_id/* drivers/md/dm-bio-prison-v1.c 423 */;
	int __init cocci_id/* drivers/md/dm-bio-prison-v1.c 421 */;
	void (*cocci_id/* drivers/md/dm-bio-prison-v1.c 416 */[])(void);
	int (*cocci_id/* drivers/md/dm-bio-prison-v1.c 411 */[])(void)__initdata;
	unsigned cocci_id/* drivers/md/dm-bio-prison-v1.c 376 */;
	struct dm_deferred_entry *cocci_id/* drivers/md/dm-bio-prison-v1.c 358 */;
	struct list_head *cocci_id/* drivers/md/dm-bio-prison-v1.c 346 */;
	struct dm_deferred_set *cocci_id/* drivers/md/dm-bio-prison-v1.c 346 */;
	struct dm_deferred_set {
		spinlock_t lock;
		unsigned current_entry;
		unsigned sweeper;
		struct dm_deferred_entry entries[DEFERRED_SET_SIZE];
	} cocci_id/* drivers/md/dm-bio-prison-v1.c 292 */;
	struct dm_deferred_entry {
		struct dm_deferred_set *ds;
		unsigned count;
		struct list_head work_items;
	} cocci_id/* drivers/md/dm-bio-prison-v1.c 286 */;
	struct kmem_cache *cocci_id/* drivers/md/dm-bio-prison-v1.c 26 */;
	void *cocci_id/* drivers/md/dm-bio-prison-v1.c 247 */;
	void (*cocci_id/* drivers/md/dm-bio-prison-v1.c 246 */)(void *,
								struct dm_bio_prison_cell *);
	struct bio_list cocci_id/* drivers/md/dm-bio-prison-v1.c 232 */;
	blk_status_t cocci_id/* drivers/md/dm-bio-prison-v1.c 230 */;
	unsigned long cocci_id/* drivers/md/dm-bio-prison-v1.c 221 */;
	struct dm_bio_prison {
		spinlock_t lock;
		struct rb_root cells;
		mempool_t cell_pool;
	} cocci_id/* drivers/md/dm-bio-prison-v1.c 20 */;
	struct bio_list *cocci_id/* drivers/md/dm-bio-prison-v1.c 185 */;
	void cocci_id/* drivers/md/dm-bio-prison-v1.c 183 */;
	struct dm_bio_prison_cell cocci_id/* drivers/md/dm-bio-prison-v1.c 120 */;
	struct rb_node **cocci_id/* drivers/md/dm-bio-prison-v1.c 116 */;
	struct dm_bio_prison_cell **cocci_id/* drivers/md/dm-bio-prison-v1.c 113 */;
	struct dm_bio_prison_cell *cocci_id/* drivers/md/dm-bio-prison-v1.c 112 */;
	struct bio *cocci_id/* drivers/md/dm-bio-prison-v1.c 111 */;
	struct dm_cell_key *cocci_id/* drivers/md/dm-bio-prison-v1.c 110 */;
	struct dm_bio_prison *cocci_id/* drivers/md/dm-bio-prison-v1.c 109 */;
	int cocci_id/* drivers/md/dm-bio-prison-v1.c 109 */;
}
