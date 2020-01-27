cocci_test_suite() {
	struct blk_iolatency cocci_id/* block/blk-iolatency.c 94 */;
	struct blkcg *cocci_id/* block/blk-iolatency.c 939 */;
	gfp_t cocci_id/* block/blk-iolatency.c 937 */;
	struct blkg_policy_data *cocci_id/* block/blk-iolatency.c 937 */;
	struct rq_qos *cocci_id/* block/blk-iolatency.c 92 */;
	struct blk_iolatency *cocci_id/* block/blk-iolatency.c 92 */;
	unsigned long long cocci_id/* block/blk-iolatency.c 917 */;
	char *cocci_id/* block/blk-iolatency.c 913 */;
	size_t cocci_id/* block/blk-iolatency.c 913 */;
	const char *cocci_id/* block/blk-iolatency.c 871 */;
	struct seq_file *cocci_id/* block/blk-iolatency.c 867 */;
	struct blk_iolatency {
		struct rq_qos rqos;
		struct timer_list timer;
		atomic_t enabled;
	} cocci_id/* block/blk-iolatency.c 86 */;
	struct blkcg_policy cocci_id/* block/blk-iolatency.c 83 */;
	char cocci_id/* block/blk-iolatency.c 810 */[21];
	char cocci_id/* block/blk-iolatency.c 809 */[16];
	struct blkg_conf_ctx cocci_id/* block/blk-iolatency.c 792 */;
	loff_t cocci_id/* block/blk-iolatency.c 788 */;
	struct kernfs_open_file *cocci_id/* block/blk-iolatency.c 787 */;
	ssize_t cocci_id/* block/blk-iolatency.c 787 */;
	struct request_queue *cocci_id/* block/blk-iolatency.c 717 */;
	int cocci_id/* block/blk-iolatency.c 717 */;
	unsigned long cocci_id/* block/blk-iolatency.c 668 */;
	struct child_latency_info *cocci_id/* block/blk-iolatency.c 667 */;
	struct cgroup_subsys_state *cocci_id/* block/blk-iolatency.c 660 */;
	struct timer_list *cocci_id/* block/blk-iolatency.c 656 */;
	struct rq_qos_ops cocci_id/* block/blk-iolatency.c 650 */;
	u64 cocci_id/* block/blk-iolatency.c 593 */;
	struct blkcg_gq *cocci_id/* block/blk-iolatency.c 590 */;
	struct bio *cocci_id/* block/blk-iolatency.c 588 */;
	struct latency_stat cocci_id/* block/blk-iolatency.c 525 */;
	struct bio_issue *cocci_id/* block/blk-iolatency.c 486 */;
	unsigned int cocci_id/* block/blk-iolatency.c 395 */;
	unsigned cocci_id/* block/blk-iolatency.c 286 */;
	struct rq_wait *cocci_id/* block/blk-iolatency.c 285 */;
	bool cocci_id/* block/blk-iolatency.c 282 */;
	struct iolatency_grp *cocci_id/* block/blk-iolatency.c 281 */;
	void cocci_id/* block/blk-iolatency.c 280 */;
	void *cocci_id/* block/blk-iolatency.c 274 */;
	struct latency_stat *cocci_id/* block/blk-iolatency.c 246 */;
	struct iolatency_grp cocci_id/* block/blk-iolatency.c 179 */;
	const u64 cocci_id/* block/blk-iolatency.c 169 */[BLKIOLATENCY_NR_EXP_FACTORS];
	struct iolatency_grp {
		struct blkg_policy_data pd;
		struct latency_stat __percpu *stats;
		struct latency_stat cur_stat;
		struct blk_iolatency *blkiolat;
		struct rq_depth rq_depth;
		struct rq_wait rq_wait;
		atomic64_t window_start;
		atomic_t scale_cookie;
		u64 min_lat_nsec;
		u64 cur_win_nsec;
		u64 lat_avg;
		u64 nr_samples;
		bool ssd;
		struct child_latency_info child_lat;
	} cocci_id/* block/blk-iolatency.c 133 */;
	struct latency_stat {
		union {
			struct percentile_stats ps;
			struct blk_rq_stat rqs;
		};
	} cocci_id/* block/blk-iolatency.c 126 */;
	struct percentile_stats {
		u64 total;
		u64 missed;
	} cocci_id/* block/blk-iolatency.c 121 */;
	void __exit cocci_id/* block/blk-iolatency.c 1046 */;
	int __init cocci_id/* block/blk-iolatency.c 1041 */;
	struct cftype cocci_id/* block/blk-iolatency.c 1022 */[];
	struct child_latency_info {
		spinlock_t lock;
		u64 last_scale_event;
		u64 scale_lat;
		u64 nr_samples;
		struct iolatency_grp *scale_grp;
		atomic_t scale_cookie;
	} cocci_id/* block/blk-iolatency.c 102 */;
}
