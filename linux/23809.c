cocci_test_suite() {
	const struct tcp_sack_block_wire *cocci_id/* net/sched/sch_cake.c 960 */;
	const u8 *cocci_id/* net/sched/sch_cake.c 922 */;
	const void *cocci_id/* net/sched/sch_cake.c 917 */;
	struct cobalt_params {
		u64 interval;
		u64 target;
		u64 mtu_time;
		u32 p_inc;
		u32 p_dec;
	} cocci_id/* net/sched/sch_cake.c 90 */;
	struct tcphdr cocci_id/* net/sched/sch_cake.c 873 */;
	void *cocci_id/* net/sched/sch_cake.c 866 */;
	struct tcphdr *cocci_id/* net/sched/sch_cake.c 865 */;
	struct iphdr cocci_id/* net/sched/sch_cake.c 846 */;
	struct iphdr *cocci_id/* net/sched/sch_cake.c 840 */;
	struct flow_keys cocci_id/* net/sched/sch_cake.c 630 */;
	struct nf_conntrack_tuple cocci_id/* net/sched/sch_cake.c 592 */;
	struct flow_keys *cocci_id/* net/sched/sch_cake.c 588 */;
	struct cobalt_params *cocci_id/* net/sched/sch_cake.c 474 */;
	struct cobalt_vars cocci_id/* net/sched/sch_cake.c 408 */;
	struct cobalt_vars *cocci_id/* net/sched/sch_cake.c 388 */;
	u32 cocci_id/* net/sched/sch_cake.c 365 */[REC_INV_SQRT_CACHE];
	const u8 cocci_id/* net/sched/sch_cake.c 348 */[];
	void __exit cocci_id/* net/sched/sch_cake.c 3077 */;
	int __init cocci_id/* net/sched/sch_cake.c 3072 */;
	struct cake_sched_data cocci_id/* net/sched/sch_cake.c 3059 */;
	struct Qdisc_ops cocci_id/* net/sched/sch_cake.c 3056 */;
	const struct Qdisc_class_ops cocci_id/* net/sched/sch_cake.c 3045 */;
	struct qdisc_walker *cocci_id/* net/sched/sch_cake.c 3019 */;
	u16 cocci_id/* net/sched/sch_cake.c 300 */[CAKE_QUEUES + 1];
	const struct cake_tin_data *cocci_id/* net/sched/sch_cake.c 2955 */;
	struct gnet_stats_queue cocci_id/* net/sched/sch_cake.c 2950 */;
	const struct cake_flow *cocci_id/* net/sched/sch_cake.c 2949 */;
	struct gnet_dump *cocci_id/* net/sched/sch_cake.c 2946 */;
	struct tcmsg *cocci_id/* net/sched/sch_cake.c 2939 */;
	struct tcf_block *cocci_id/* net/sched/sch_cake.c 2928 */;
	struct Qdisc *cocci_id/* net/sched/sch_cake.c 2918 */;
	unsigned long cocci_id/* net/sched/sch_cake.c 2918 */;
	struct cobalt_skb_cb cocci_id/* net/sched/sch_cake.c 285 */;
	struct cobalt_skb_cb *cocci_id/* net/sched/sch_cake.c 283 */;
	struct cobalt_skb_cb {
		ktime_t enqueue_time;
		u32 adjusted_len;
	} cocci_id/* net/sched/sch_cake.c 273 */;
	struct cake_tin_data cocci_id/* net/sched/sch_cake.c 2696 */;
	enum{CAKE_FLAG_OVERHEAD=BIT(0), CAKE_FLAG_AUTORATE_INGRESS=BIT(1), CAKE_FLAG_INGRESS=BIT(2), CAKE_FLAG_WASH=BIT(3), CAKE_FLAG_SPLIT_GSO=BIT(4),} cocci_id/* net/sched/sch_cake.c 259 */;
	struct nlattr *cocci_id/* net/sched/sch_cake.c 2529 */[TCA_CAKE_MAX + 1];
	struct netlink_ext_ack *cocci_id/* net/sched/sch_cake.c 2526 */;
	struct nlattr *cocci_id/* net/sched/sch_cake.c 2525 */;
	const u64 cocci_id/* net/sched/sch_cake.c 2197 */;
	const struct nla_policy cocci_id/* net/sched/sch_cake.c 2171 */[TCA_CAKE_MAX + 1];
	struct cake_sched_data {
		struct tcf_proto __rcu *filter_list;
		struct tcf_block *block;
		struct cake_tin_data *tins;
		struct cake_heap_entry overflow_heap[CAKE_QUEUES * CAKE_MAX_TINS];
		u16 overflow_timeout;
		u16 tin_cnt;
		u8 tin_mode;
		u8 flow_mode;
		u8 ack_filter;
		u8 atm_mode;
		u32 fwmark_mask;
		u16 fwmark_shft;
		u16 rate_shft;
		ktime_t time_next_packet;
		ktime_t failsafe_next_packet;
		u64 rate_ns;
		u64 rate_bps;
		u16 rate_flags;
		s16 rate_overhead;
		u16 rate_mpu;
		u64 interval;
		u64 target;
		u32 buffer_used;
		u32 buffer_max_used;
		u32 buffer_limit;
		u32 buffer_config_limit;
		u16 cur_tin;
		u16 cur_flow;
		struct qdisc_watchdog watchdog;
		const u8 *tin_index;
		const u8 *tin_order;
		ktime_t last_packet_time;
		ktime_t avg_window_begin;
		u64 avg_packet_interval;
		u64 avg_window_bytes;
		u64 avg_peak_bandwidth;
		ktime_t last_reconfig_time;
		u32 avg_netoff;
		u16 max_netlen;
		u16 max_adjlen;
		u16 min_netlen;
		u16 min_adjlen;
	} cocci_id/* net/sched/sch_cake.c 200 */;
	struct cake_flow cocci_id/* net/sched/sch_cake.c 1989 */;
	struct list_head *cocci_id/* net/sched/sch_cake.c 1890 */;
	struct cake_host *cocci_id/* net/sched/sch_cake.c 1887 */;
	void cocci_id/* net/sched/sch_cake.c 1872 */;
	netdev_features_t cocci_id/* net/sched/sch_cake.c 1679 */;
	s32 cocci_id/* net/sched/sch_cake.c 1630 */;
	void cocci_id/* net/sched/sch_cake.c 1628 */(struct Qdisc *sch);
	u16 cocci_id/* net/sched/sch_cake.c 1596 */;
	struct tcf_result cocci_id/* net/sched/sch_cake.c 1595 */;
	struct tcf_proto *cocci_id/* net/sched/sch_cake.c 1594 */;
	int *cocci_id/* net/sched/sch_cake.c 1591 */;
	struct cake_tin_data **cocci_id/* net/sched/sch_cake.c 1590 */;
	u8 cocci_id/* net/sched/sch_cake.c 1518 */;
	struct cake_tin_data {
		struct cake_flow flows[CAKE_QUEUES];
		u32 backlogs[CAKE_QUEUES];
		u32 tags[CAKE_QUEUES];
		u16 overflow_idx[CAKE_QUEUES];
		struct cake_host hosts[CAKE_QUEUES];
		u16 flow_quantum;
		struct cobalt_params cparams;
		u32 drop_overlimit;
		u16 bulk_flow_count;
		u16 sparse_flow_count;
		u16 decaying_flow_count;
		u16 unresponsive_flow_count;
		u32 max_skblen;
		struct list_head new_flows;
		struct list_head old_flows;
		struct list_head decaying_flows;
		ktime_t time_next_packet;
		u64 tin_rate_ns;
		u64 tin_rate_bps;
		u16 tin_rate_shft;
		u16 tin_quantum_prio;
		u16 tin_quantum_band;
		s32 tin_deficit;
		u32 tin_backlog;
		u32 tin_dropped;
		u32 tin_ecn_mark;
		u32 packets;
		u64 bytes;
		u32 ack_drops;
		u64 avge_delay;
		u64 peak_delay;
		u64 base_delay;
		u32 way_directs;
		u32 way_hits;
		u32 way_misses;
		u32 way_collisions;
	} cocci_id/* net/sched/sch_cake.c 149 */;
	struct cake_heap_entry cocci_id/* net/sched/sch_cake.c 1466 */;
	struct sk_buff **cocci_id/* net/sched/sch_cake.c 1461 */;
	unsigned int cocci_id/* net/sched/sch_cake.c 1461 */;
	struct cake_heap_entry {
		u16 t:3,b:10;
	} cocci_id/* net/sched/sch_cake.c 145 */;
	u64 cocci_id/* net/sched/sch_cake.c 1439 */;
	ktime_t cocci_id/* net/sched/sch_cake.c 1431 */;
	struct cake_tin_data *cocci_id/* net/sched/sch_cake.c 1429 */;
	struct cake_host {
		u32 srchost_tag;
		u32 dsthost_tag;
		u16 srchost_bulk_flow_count;
		u16 dsthost_bulk_flow_count;
	} cocci_id/* net/sched/sch_cake.c 138 */;
	const u32 cocci_id/* net/sched/sch_cake.c 1377 */;
	const struct cake_sched_data *cocci_id/* net/sched/sch_cake.c 1368 */;
	struct udphdr cocci_id/* net/sched/sch_cake.c 1336 */;
	const struct skb_shared_info *cocci_id/* net/sched/sch_cake.c 1311 */;
	struct cake_flow {
		struct sk_buff *head;
		struct sk_buff *tail;
		struct list_head flowchain;
		s32 deficit;
		u32 dropped;
		struct cobalt_vars cvars;
		u16 srchost;
		u16 dsthost;
		u8 set;
	} cocci_id/* net/sched/sch_cake.c 125 */;
	struct ipv6hdr *cocci_id/* net/sched/sch_cake.c 1175 */;
	enum{CAKE_SET_NONE=0, CAKE_SET_SPARSE, CAKE_SET_SPARSE_WAIT, CAKE_SET_BULK, CAKE_SET_DECAYING,} cocci_id/* net/sched/sch_cake.c 117 */;
	__be32 cocci_id/* net/sched/sch_cake.c 1125 */;
	u32 cocci_id/* net/sched/sch_cake.c 1124 */;
	int cocci_id/* net/sched/sch_cake.c 1123 */;
	const struct sk_buff *cocci_id/* net/sched/sch_cake.c 1122 */;
	struct ipv6hdr cocci_id/* net/sched/sch_cake.c 1121 */;
	const struct iphdr *cocci_id/* net/sched/sch_cake.c 1120 */;
	const struct tcphdr *cocci_id/* net/sched/sch_cake.c 1119 */;
	unsigned char cocci_id/* net/sched/sch_cake.c 1118 */[64];
	const struct ipv6hdr *cocci_id/* net/sched/sch_cake.c 1117 */;
	bool cocci_id/* net/sched/sch_cake.c 1114 */;
	struct cake_flow *cocci_id/* net/sched/sch_cake.c 1112 */;
	struct sk_buff *cocci_id/* net/sched/sch_cake.c 1111 */;
	struct cake_sched_data *cocci_id/* net/sched/sch_cake.c 1111 */;
	struct cobalt_vars {
		u32 count;
		u32 rec_inv_sqrt;
		ktime_t drop_next;
		ktime_t blue_timer;
		u32 p_drop;
		bool dropping;
		bool ecn_marked;
	} cocci_id/* net/sched/sch_cake.c 107 */;
	u32 *cocci_id/* net/sched/sch_cake.c 1028 */;
}
