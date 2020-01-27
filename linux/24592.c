cocci_test_suite() {
	u64 cocci_id/* net/core/gen_estimator.c 80 */;
	struct gnet_stats_basic_packed cocci_id/* net/core/gen_estimator.c 79 */;
	struct timer_list *cocci_id/* net/core/gen_estimator.c 76 */;
	struct gnet_stats_basic_packed *cocci_id/* net/core/gen_estimator.c 63 */;
	struct net_rate_estimator *cocci_id/* net/core/gen_estimator.c 62 */;
	void cocci_id/* net/core/gen_estimator.c 62 */;
	struct net_rate_estimator {
		struct gnet_stats_basic_packed *bstats;
		spinlock_t *stats_lock;
		seqcount_t *running;
		struct gnet_stats_basic_cpu __percpu *cpu_bstats;
		u8 ewma_log;
		u8 intvl_log;
		seqcount_t seq;
		u64 last_packets;
		u64 last_bytes;
		u64 avpps;
		u64 avbps;
		unsigned long next_jiffies;
		struct timer_list timer;
		struct rcu_head rcu;
	} cocci_id/* net/core/gen_estimator.c 42 */;
	unsigned cocci_id/* net/core/gen_estimator.c 249 */;
	struct gnet_stats_rate_est64 *cocci_id/* net/core/gen_estimator.c 246 */;
	bool cocci_id/* net/core/gen_estimator.c 239 */;
	struct net_rate_estimator __rcu **cocci_id/* net/core/gen_estimator.c 239 */;
	struct net_rate_estimator **cocci_id/* net/core/gen_estimator.c 200 */;
	struct gnet_estimator *cocci_id/* net/core/gen_estimator.c 131 */;
	struct nlattr *cocci_id/* net/core/gen_estimator.c 129 */;
	seqcount_t *cocci_id/* net/core/gen_estimator.c 128 */;
	spinlock_t *cocci_id/* net/core/gen_estimator.c 127 */;
	struct gnet_stats_basic_cpu __percpu *cocci_id/* net/core/gen_estimator.c 125 */;
	int cocci_id/* net/core/gen_estimator.c 124 */;
}
