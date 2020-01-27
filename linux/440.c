cocci_test_suite() {
	struct timer_list *cocci_id/* block/blk-stat.c 80 */;
	int cocci_id/* block/blk-stat.c 56 */;
	struct blk_stat_callback *cocci_id/* block/blk-stat.c 54 */;
	struct request_queue *cocci_id/* block/blk-stat.c 53 */;
	struct request *cocci_id/* block/blk-stat.c 51 */;
	u64 cocci_id/* block/blk-stat.c 43 */;
	struct blk_rq_stat *cocci_id/* block/blk-stat.c 43 */;
	struct blk_queue_stats *cocci_id/* block/blk-stat.c 193 */;
	void cocci_id/* block/blk-stat.c 193 */;
	struct blk_stat_callback cocci_id/* block/blk-stat.c 172 */;
	struct rcu_head *cocci_id/* block/blk-stat.c 168 */;
	struct blk_queue_stats {
		struct list_head callbacks;
		spinlock_t lock;
		bool enable_accounting;
	} cocci_id/* block/blk-stat.c 15 */;
	unsigned int cocci_id/* block/blk-stat.c 139 */;
	struct blk_rq_stat cocci_id/* block/blk-stat.c 113 */;
	void *cocci_id/* block/blk-stat.c 105 */;
	int (*cocci_id/* block/blk-stat.c 104 */)(const struct request *);
	void (*cocci_id/* block/blk-stat.c 103 */)(struct blk_stat_callback *);
}
