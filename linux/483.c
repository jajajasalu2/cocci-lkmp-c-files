cocci_test_suite() {
	const struct blk_mq_debugfs_attr cocci_id/* block/kyber-iosched.c 998 */[];
	struct kyber_hctx_data *cocci_id/* block/kyber-iosched.c 977 */;
	struct blk_mq_hw_ctx *cocci_id/* block/kyber-iosched.c 976 */;
	struct request_queue *cocci_id/* block/kyber-iosched.c 958 */;
	struct seq_file *cocci_id/* block/kyber-iosched.c 956 */;
	const struct seq_operations cocci_id/* block/kyber-iosched.c 934 */;
	loff_t *cocci_id/* block/kyber-iosched.c 917 */;
	struct elv_fs_entry cocci_id/* block/kyber-iosched.c 888 */[];
	const unsigned int cocci_id/* block/kyber-iosched.c 80 */[];
	struct request cocci_id/* block/kyber-iosched.c 768 */;
	struct sbq_wait_state *cocci_id/* block/kyber-iosched.c 709 */;
	struct sbitmap_queue *cocci_id/* block/kyber-iosched.c 707 */;
	const u64 cocci_id/* block/kyber-iosched.c 70 */[];
	struct sbq_wait cocci_id/* block/kyber-iosched.c 695 */;
	struct sbq_wait *cocci_id/* block/kyber-iosched.c 695 */;
	wait_queue_entry_t *cocci_id/* block/kyber-iosched.c 691 */;
	unsigned cocci_id/* block/kyber-iosched.c 691 */;
	struct flush_kcq_data cocci_id/* block/kyber-iosched.c 681 */;
	struct kyber_ctx_queue *cocci_id/* block/kyber-iosched.c 666 */;
	struct flush_kcq_data *cocci_id/* block/kyber-iosched.c 665 */;
	bool cocci_id/* block/kyber-iosched.c 663 */;
	struct sbitmap *cocci_id/* block/kyber-iosched.c 663 */;
	void *cocci_id/* block/kyber-iosched.c 663 */;
	struct flush_kcq_data {
		struct kyber_hctx_data *khd;
		unsigned int sched_domain;
		struct list_head *list;
	} cocci_id/* block/kyber-iosched.c 657 */;
	struct request *cocci_id/* block/kyber-iosched.c 635 */;
	u64 cocci_id/* block/kyber-iosched.c 619 */;
	unsigned int cocci_id/* block/kyber-iosched.c 618 */;
	struct kyber_cpu_latency *cocci_id/* block/kyber-iosched.c 617 */;
	void cocci_id/* block/kyber-iosched.c 617 */;
	struct list_head *cocci_id/* block/kyber-iosched.c 572 */;
	struct blk_mq_ctx *cocci_id/* block/kyber-iosched.c 569 */;
	struct bio *cocci_id/* block/kyber-iosched.c 565 */;
	struct blk_mq_alloc_data *cocci_id/* block/kyber-iosched.c 552 */;
	long cocci_id/* block/kyber-iosched.c 530 */;
	struct kyber_ctx_queue cocci_id/* block/kyber-iosched.c 472 */;
	enum{KYBER_ASYNC_PERCENT=75,} cocci_id/* block/kyber-iosched.c 44 */;
	struct elevator_queue *cocci_id/* block/kyber-iosched.c 439 */;
	struct elevator_type *cocci_id/* block/kyber-iosched.c 416 */;
	struct kyber_cpu_latency cocci_id/* block/kyber-iosched.c 378 */;
	const char *cocci_id/* block/kyber-iosched.c 37 */[];
	enum{KYBER_READ, KYBER_WRITE, KYBER_DISCARD, KYBER_OTHER, KYBER_NUM_DOMAINS,} cocci_id/* block/kyber-iosched.c 29 */;
	struct timer_list *cocci_id/* block/kyber-iosched.c 276 */;
	unsigned int *cocci_id/* block/kyber-iosched.c 229 */;
	struct kyber_queue_data *cocci_id/* block/kyber-iosched.c 225 */;
	int cocci_id/* block/kyber-iosched.c 225 */;
	atomic_t *cocci_id/* block/kyber-iosched.c 214 */;
	int cocci_id/* block/kyber-iosched.c 192 */(wait_queue_entry_t *wait,
						    unsigned mode, int flags,
						    void *key);
	struct kyber_hctx_data {
		spinlock_t lock;
		struct list_head rqs[KYBER_NUM_DOMAINS];
		unsigned int cur_domain;
		unsigned int batching;
		struct kyber_ctx_queue *kcqs;
		struct sbitmap kcq_map[KYBER_NUM_DOMAINS];
		struct sbq_wait domain_wait[KYBER_NUM_DOMAINS];
		struct sbq_wait_state *domain_ws[KYBER_NUM_DOMAINS];
		atomic_t wait_index[KYBER_NUM_DOMAINS];
	} cocci_id/* block/kyber-iosched.c 180 */;
	struct kyber_queue_data {
		struct request_queue *q;
		struct sbitmap_queue domain_tokens[KYBER_NUM_DOMAINS];
		unsigned int async_depth;
		struct kyber_cpu_latency __percpu *cpu_latency;
		struct timer_list timer;
		unsigned int latency_buckets[KYBER_OTHER][2][KYBER_LATENCY_BUCKETS];
		unsigned long latency_timeout[KYBER_OTHER];
		int domain_p99[KYBER_OTHER];
		u64 latency_targets[KYBER_OTHER];
	} cocci_id/* block/kyber-iosched.c 150 */;
	struct kyber_ctx_queue {
		spinlock_t lock;
		struct list_head rq_list[KYBER_NUM_DOMAINS];
	}____cacheline_aligned_in_smp cocci_id/* block/kyber-iosched.c 141 */;
	struct kyber_cpu_latency {
		atomic_t buckets[KYBER_OTHER][2][KYBER_LATENCY_BUCKETS];
	} cocci_id/* block/kyber-iosched.c 133 */;
	enum{KYBER_TOTAL_LATENCY, KYBER_IO_LATENCY,} cocci_id/* block/kyber-iosched.c 119 */;
	void __exit cocci_id/* block/kyber-iosched.c 1040 */;
	int __init cocci_id/* block/kyber-iosched.c 1035 */;
	struct elevator_type cocci_id/* block/kyber-iosched.c 1010 */;
	enum{KYBER_LATENCY_SHIFT=2, KYBER_GOOD_BUCKETS=1 << KYBER_LATENCY_SHIFT, KYBER_LATENCY_BUCKETS=2 << KYBER_LATENCY_SHIFT,} cocci_id/* block/kyber-iosched.c 100 */;
}
