cocci_test_suite() {
	gfp_t cocci_id/* drivers/md/dm-bio-prison-v2.c 66 */;
	struct workqueue_struct *cocci_id/* drivers/md/dm-bio-prison-v2.c 36 */;
	int __init cocci_id/* drivers/md/dm-bio-prison-v2.c 351 */;
	struct bio_list *cocci_id/* drivers/md/dm-bio-prison-v2.c 319 */;
	struct kmem_cache *cocci_id/* drivers/md/dm-bio-prison-v2.c 28 */;
	struct work_struct *cocci_id/* drivers/md/dm-bio-prison-v2.c 274 */;
	void cocci_id/* drivers/md/dm-bio-prison-v2.c 272 */;
	unsigned long cocci_id/* drivers/md/dm-bio-prison-v2.c 215 */;
	struct dm_bio_prison_v2 {
		struct workqueue_struct *wq;
		spinlock_t lock;
		struct rb_root cells;
		mempool_t cell_pool;
	} cocci_id/* drivers/md/dm-bio-prison-v2.c 20 */;
	struct bio *cocci_id/* drivers/md/dm-bio-prison-v2.c 152 */;
	unsigned cocci_id/* drivers/md/dm-bio-prison-v2.c 151 */;
	struct dm_bio_prison_cell_v2 cocci_id/* drivers/md/dm-bio-prison-v2.c 124 */;
	struct rb_node **cocci_id/* drivers/md/dm-bio-prison-v2.c 120 */;
	int cocci_id/* drivers/md/dm-bio-prison-v2.c 119 */;
	struct dm_bio_prison_cell_v2 **cocci_id/* drivers/md/dm-bio-prison-v2.c 117 */;
	struct dm_bio_prison_cell_v2 *cocci_id/* drivers/md/dm-bio-prison-v2.c 116 */;
	struct dm_cell_key_v2 *cocci_id/* drivers/md/dm-bio-prison-v2.c 115 */;
	bool cocci_id/* drivers/md/dm-bio-prison-v2.c 114 */;
	struct dm_bio_prison_v2 *cocci_id/* drivers/md/dm-bio-prison-v2.c 114 */;
}
