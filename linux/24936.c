cocci_test_suite() {
	struct tipc_monitor {
		struct hlist_head peers[NODE_HTABLE_SIZE];
		int peer_cnt;
		struct tipc_peer *self;
		rwlock_t lock;
		struct tipc_mon_domain cache;
		u16 list_gen;
		u16 dom_gen;
		struct net *net;
		struct timer_list timer;
		unsigned long timer_intv;
	} cocci_id/* net/tipc/monitor.c 87 */;
	void *cocci_id/* net/tipc/monitor.c 791 */;
	struct nlattr *cocci_id/* net/tipc/monitor.c 790 */;
	char cocci_id/* net/tipc/monitor.c 789 */[TIPC_MAX_BEARER_NAME];
	struct tipc_monitor *cocci_id/* net/tipc/monitor.c 788 */;
	u32 cocci_id/* net/tipc/monitor.c 786 */;
	struct tipc_nl_msg *cocci_id/* net/tipc/monitor.c 785 */;
	struct net *cocci_id/* net/tipc/monitor.c 785 */;
	int cocci_id/* net/tipc/monitor.c 785 */;
	u32 *cocci_id/* net/tipc/monitor.c 757 */;
	struct tipc_peer {
		u32 addr;
		struct tipc_mon_domain *domain;
		struct hlist_node hash;
		struct list_head list;
		u8 applied;
		u8 down_cnt;
		bool is_up;
		bool is_head;
		bool is_local;
	} cocci_id/* net/tipc/monitor.c 75 */;
	struct tipc_mon_domain *cocci_id/* net/tipc/monitor.c 705 */;
	struct tipc_peer *cocci_id/* net/tipc/monitor.c 702 */;
	struct tipc_net *cocci_id/* net/tipc/monitor.c 608 */;
	struct timer_list *cocci_id/* net/tipc/monitor.c 590 */;
	struct tipc_mon_state *cocci_id/* net/tipc/monitor.c 559 */;
	struct tipc_mon_domain {
		u16 len;
		u16 gen;
		u16 ack_gen;
		u16 member_cnt;
		u64 up_map;
		u32 members[MAX_MON_DOMAIN];
	} cocci_id/* net/tipc/monitor.c 54 */;
	int *cocci_id/* net/tipc/monitor.c 525 */;
	struct tipc_peer **cocci_id/* net/tipc/monitor.c 357 */;
	bool cocci_id/* net/tipc/monitor.c 248 */;
	unsigned int cocci_id/* net/tipc/monitor.c 156 */;
	struct tipc_peer cocci_id/* net/tipc/monitor.c 143 */;
	u64 cocci_id/* net/tipc/monitor.c 131 */;
	u64 *cocci_id/* net/tipc/monitor.c 125 */;
	void cocci_id/* net/tipc/monitor.c 125 */;
	u16 cocci_id/* net/tipc/monitor.c 109 */;
	const int cocci_id/* net/tipc/monitor.c 105 */;
	struct tipc_mon_domain cocci_id/* net/tipc/monitor.c 105 */;
}
