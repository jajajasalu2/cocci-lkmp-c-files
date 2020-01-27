cocci_test_suite() {
	bool cocci_id/* net/tipc/bcast.c 90 */;
	struct tipc_bc_base *cocci_id/* net/tipc/bcast.c 76 */;
	struct net *cocci_id/* net/tipc/bcast.c 76 */;
	struct tipc_net *cocci_id/* net/tipc/bcast.c 679 */;
	struct nlattr *cocci_id/* net/tipc/bcast.c 644 */[TIPC_NLA_PROP_MAX + 1];
	struct nlattr *cocci_id/* net/tipc/bcast.c 638 */[];
	struct tipc_bc_base {
		struct tipc_link *link;
		struct sk_buff_head inputq;
		int dests[MAX_BEARERS];
		int primary_bearer;
		bool bcast_support;
		bool force_bcast;
		bool rcast_support;
		bool force_rcast;
		int rc_ratio;
		int bc_threshold;
	} cocci_id/* net/tipc/bcast.c 63 */;
	u32 cocci_id/* net/tipc/bcast.c 587 */;
	int cocci_id/* net/tipc/bcast.c 587 */;
	struct tipc_link *cocci_id/* net/tipc/bcast.c 573 */;
	const char cocci_id/* net/tipc/bcast.c 48 */[];
	struct sk_buff_head cocci_id/* net/tipc/bcast.c 468 */;
	u16 cocci_id/* net/tipc/bcast.c 467 */;
	struct sk_buff_head *cocci_id/* net/tipc/bcast.c 466 */;
	struct tipc_msg *cocci_id/* net/tipc/bcast.c 464 */;
	void cocci_id/* net/tipc/bcast.c 463 */;
	struct sk_buff *cocci_id/* net/tipc/bcast.c 429 */;
	struct tipc_nlist *cocci_id/* net/tipc/bcast.c 312 */;
	struct tipc_dest *cocci_id/* net/tipc/bcast.c 284 */;
	u16 *cocci_id/* net/tipc/bcast.c 253 */;
	unsigned long cocci_id/* net/tipc/bcast.c 209 */;
	struct tipc_mc_method *cocci_id/* net/tipc/bcast.c 206 */;
}
