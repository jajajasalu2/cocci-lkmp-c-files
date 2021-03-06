cocci_test_suite() {
	void __exit cocci_id/* net/sched/sch_hhf.c 714 */;
	int __init cocci_id/* net/sched/sch_hhf.c 709 */;
	struct hhf_sched_data cocci_id/* net/sched/sch_hhf.c 695 */;
	struct Qdisc_ops cocci_id/* net/sched/sch_hhf.c 693 */;
	struct tc_hhf_xstats cocci_id/* net/sched/sch_hhf.c 683 */;
	struct gnet_dump *cocci_id/* net/sched/sch_hhf.c 680 */;
	struct list_head cocci_id/* net/sched/sch_hhf.c 604 */;
	u64 cocci_id/* net/sched/sch_hhf.c 515 */;
	unsigned int cocci_id/* net/sched/sch_hhf.c 513 */;
	struct nlattr *cocci_id/* net/sched/sch_hhf.c 512 */[TCA_HHF_MAX + 1];
	struct netlink_ext_ack *cocci_id/* net/sched/sch_hhf.c 509 */;
	struct nlattr *cocci_id/* net/sched/sch_hhf.c 508 */;
	struct Qdisc *cocci_id/* net/sched/sch_hhf.c 508 */;
	int cocci_id/* net/sched/sch_hhf.c 508 */;
	const struct nla_policy cocci_id/* net/sched/sch_hhf.c 498 */[TCA_HHF_MAX + 1];
	struct wdrr_bucket cocci_id/* net/sched/sch_hhf.c 432 */;
	struct sk_buff **cocci_id/* net/sched/sch_hhf.c 349 */;
	struct wdrr_bucket *cocci_id/* net/sched/sch_hhf.c 339 */;
	struct sk_buff *cocci_id/* net/sched/sch_hhf.c 339 */;
	void cocci_id/* net/sched/sch_hhf.c 339 */;
	enum wdrr_bucket_idx cocci_id/* net/sched/sch_hhf.c 247 */;
	struct hh_flow_state cocci_id/* net/sched/sch_hhf.c 233 */;
	u32 cocci_id/* net/sched/sch_hhf.c 216 */;
	struct hhf_sched_data *cocci_id/* net/sched/sch_hhf.c 213 */;
	struct list_head *cocci_id/* net/sched/sch_hhf.c 212 */;
	struct hh_flow_state *cocci_id/* net/sched/sch_hhf.c 212 */;
	const u32 cocci_id/* net/sched/sch_hhf.c 180 */;
	struct hhf_sched_data {
		struct wdrr_bucket buckets[WDRR_BUCKET_CNT];
		siphash_key_t perturbation;
		u32 quantum;
		u32 drop_overlimit;
		struct list_head *hh_flows;
		u32 hh_flows_limit;
		u32 hh_flows_overlimit;
		u32 hh_flows_total_cnt;
		u32 hh_flows_current_cnt;
		u32 *hhf_arrays[HHF_ARRAYS_CNT];
		u32 hhf_arrays_reset_timestamp;
		unsigned long *hhf_valid_bits[HHF_ARRAYS_CNT];
		struct list_head new_buckets;
		struct list_head old_buckets;
		u32 hhf_reset_timeout;
		u32 hhf_admit_bytes;
		u32 hhf_evict_timeout;
		u32 hhf_non_hh_weight;
	} cocci_id/* net/sched/sch_hhf.c 127 */;
	struct wdrr_bucket {
		struct sk_buff *head;
		struct sk_buff *tail;
		struct list_head bucketchain;
		int deficit;
	} cocci_id/* net/sched/sch_hhf.c 120 */;
	struct hh_flow_state {
		u32 hash_id;
		u32 hit_timestamp;
		struct list_head flowchain;
	} cocci_id/* net/sched/sch_hhf.c 113 */;
	enum wdrr_bucket_idx{WDRR_BUCKET_FOR_HH=0, WDRR_BUCKET_FOR_NON_HH=1,} cocci_id/* net/sched/sch_hhf.c 104 */;
}
