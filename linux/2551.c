cocci_test_suite() {
	bool cocci_id/* drivers/md/dm-cache-background-tracker.c 79 */;
	unsigned cocci_id/* drivers/md/dm-cache-background-tracker.c 32 */;
	struct policy_work *cocci_id/* drivers/md/dm-cache-background-tracker.c 231 */;
	void cocci_id/* drivers/md/dm-cache-background-tracker.c 230 */;
	struct policy_work **cocci_id/* drivers/md/dm-cache-background-tracker.c 215 */;
	struct background_tracker {
		unsigned max_work;
		atomic_t pending_promotes;
		atomic_t pending_writebacks;
		atomic_t pending_demotes;
		struct list_head issued;
		struct list_head queued;
		struct rb_root pending;
		struct kmem_cache *work_cache;
	} cocci_id/* drivers/md/dm-cache-background-tracker.c 19 */;
	struct bt_work {
		struct list_head list;
		struct rb_node node;
		struct policy_work work;
	} cocci_id/* drivers/md/dm-cache-background-tracker.c 13 */;
	struct bt_work cocci_id/* drivers/md/dm-cache-background-tracker.c 116 */;
	struct rb_node **cocci_id/* drivers/md/dm-cache-background-tracker.c 113 */;
	int cocci_id/* drivers/md/dm-cache-background-tracker.c 111 */;
	dm_oblock_t cocci_id/* drivers/md/dm-cache-background-tracker.c 109 */;
	struct bt_work *cocci_id/* drivers/md/dm-cache-background-tracker.c 108 */;
	struct background_tracker *cocci_id/* drivers/md/dm-cache-background-tracker.c 108 */;
}
