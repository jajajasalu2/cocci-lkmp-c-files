cocci_test_suite() {
	struct Qdisc *cocci_id/* net/sched/sch_teql.c 90 */;
	struct sk_buff **cocci_id/* net/sched/sch_teql.c 76 */;
	struct teql_sched_data *cocci_id/* net/sched/sch_teql.c 69 */;
	struct teql_sched_data {
		struct Qdisc *next;
		struct teql_master *m;
		struct sk_buff_head q;
	} cocci_id/* net/sched/sch_teql.c 63 */;
	struct teql_master {
		struct Qdisc_ops qops;
		struct net_device *dev;
		struct Qdisc *slaves;
		struct list_head master_list;
		unsigned long tx_bytes;
		unsigned long tx_packets;
		unsigned long tx_errors;
		unsigned long tx_dropped;
	} cocci_id/* net/sched/sch_teql.c 52 */;
	void __exit cocci_id/* net/sched/sch_teql.c 506 */;
	struct teql_master cocci_id/* net/sched/sch_teql.c 478 */;
	int __init cocci_id/* net/sched/sch_teql.c 469 */;
	struct teql_sched_data cocci_id/* net/sched/sch_teql.c 443 */;
	struct Qdisc_ops *cocci_id/* net/sched/sch_teql.c 440 */;
	const struct net_device_ops cocci_id/* net/sched/sch_teql.c 429 */;
	struct rtnl_link_stats64 *cocci_id/* net/sched/sch_teql.c 402 */;
	unsigned int cocci_id/* net/sched/sch_teql.c 358 */;
	netdev_tx_t cocci_id/* net/sched/sch_teql.c 275 */;
	char cocci_id/* net/sched/sch_teql.c 239 */[MAX_ADDR_LEN];
	struct neighbour *cocci_id/* net/sched/sch_teql.c 220 */;
	struct dst_entry *cocci_id/* net/sched/sch_teql.c 218 */;
	struct netdev_queue *cocci_id/* net/sched/sch_teql.c 217 */;
	struct net_device *cocci_id/* net/sched/sch_teql.c 217 */;
	struct sk_buff *cocci_id/* net/sched/sch_teql.c 216 */;
	int cocci_id/* net/sched/sch_teql.c 215 */;
	struct netlink_ext_ack *cocci_id/* net/sched/sch_teql.c 167 */;
	struct nlattr *cocci_id/* net/sched/sch_teql.c 166 */;
	spinlock_t *cocci_id/* net/sched/sch_teql.c 147 */;
	struct teql_master *cocci_id/* net/sched/sch_teql.c 135 */;
	void cocci_id/* net/sched/sch_teql.c 130 */;
}
