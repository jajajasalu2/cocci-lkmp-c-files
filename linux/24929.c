cocci_test_suite() {
	struct tipc_msg *cocci_id/* net/tipc/discover.c 85 */;
	struct sk_buff *cocci_id/* net/tipc/discover.c 80 */;
	struct tipc_discoverer {
		u32 bearer_id;
		struct tipc_media_addr dest;
		struct net *net;
		u32 domain;
		int num_nodes;
		spinlock_t lock;
		struct sk_buff *skb;
		struct timer_list timer;
		unsigned long timer_intv;
	} cocci_id/* net/tipc/discover.c 62 */;
	struct sk_buff **cocci_id/* net/tipc/discover.c 347 */;
	struct timer_list *cocci_id/* net/tipc/discover.c 289 */;
	struct tipc_discoverer *cocci_id/* net/tipc/discover.c 259 */;
	struct tipc_media_addr cocci_id/* net/tipc/discover.c 205 */;
	u8 cocci_id/* net/tipc/discover.c 202 */[NODE_ID_LEN];
	u16 cocci_id/* net/tipc/discover.c 198 */;
	struct tipc_net *cocci_id/* net/tipc/discover.c 149 */;
	struct net *cocci_id/* net/tipc/discover.c 148 */;
	int cocci_id/* net/tipc/discover.c 146 */;
	u8 *cocci_id/* net/tipc/discover.c 145 */;
	bool cocci_id/* net/tipc/discover.c 140 */;
	char cocci_id/* net/tipc/discover.c 128 */[64];
	struct tipc_media_addr *cocci_id/* net/tipc/discover.c 126 */;
	u32 cocci_id/* net/tipc/discover.c 125 */;
	struct tipc_bearer *cocci_id/* net/tipc/discover.c 125 */;
	void cocci_id/* net/tipc/discover.c 125 */;
}
