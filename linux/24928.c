cocci_test_suite() {
	unsigned int cocci_id/* net/tipc/link.c 961 */;
	int cocci_id/* net/tipc/link.c 868 */[5];
	struct sk_buff_head cocci_id/* net/tipc/link.c 867 */;
	struct sk_buff_head *cocci_id/* net/tipc/link.c 864 */;
	void cocci_id/* net/tipc/link.c 862 */;
	struct tipc_msg *cocci_id/* net/tipc/link.c 727 */;
	struct tipc_link **cocci_id/* net/tipc/link.c 530 */;
	struct tipc_stats {
		u32 sent_pkts;
		u32 recv_pkts;
		u32 sent_states;
		u32 recv_states;
		u32 sent_probes;
		u32 recv_probes;
		u32 sent_nacks;
		u32 recv_nacks;
		u32 sent_acks;
		u32 sent_bundled;
		u32 sent_bundles;
		u32 recv_bundled;
		u32 recv_bundles;
		u32 retransmitted;
		u32 sent_fragmented;
		u32 sent_fragments;
		u32 recv_fragmented;
		u32 recv_fragments;
		u32 link_congs;
		u32 deferred_recv;
		u32 duplicates;
		u32 max_queue_sz;
		u32 accu_queue_sz;
		u32 queue_sz_counts;
		u32 msg_length_counts;
		u32 msg_lengths_total;
		u32 msg_length_profile[7];
	} cocci_id/* net/tipc/link.c 51 */;
	char cocci_id/* net/tipc/link.c 462 */[NODE_ID_STR_LEN];
	u8 *cocci_id/* net/tipc/link.c 455 */;
	char cocci_id/* net/tipc/link.c 453 */;
	char *cocci_id/* net/tipc/link.c 452 */;
	u16 cocci_id/* net/tipc/link.c 379 */;
	unsigned long cocci_id/* net/tipc/link.c 321 */;
	bool cocci_id/* net/tipc/link.c 296 */;
	size_t cocci_id/* net/tipc/link.c 2692 */;
	struct tipc_net *cocci_id/* net/tipc/link.c 2571 */;
	struct nla_map cocci_id/* net/tipc/link.c 2525 */[];
	struct nla_map {
		__u32 key;
		__u32 val;
	} cocci_id/* net/tipc/link.c 2520 */;
	struct nlattr *cocci_id/* net/tipc/link.c 2518 */;
	struct tipc_stats *cocci_id/* net/tipc/link.c 2515 */;
	struct sk_buff *cocci_id/* net/tipc/link.c 2514 */;
	int cocci_id/* net/tipc/link.c 2514 */;
	int cocci_id/* net/tipc/link.c 249 */(struct tipc_link *l, u16 acked,
					      u16 gap,
					      struct tipc_gap_ack_blks *ga,
					      struct sk_buff_head *xmitq);
	u16 cocci_id/* net/tipc/link.c 248 */(struct tipc_link *l, void *data);
	bool cocci_id/* net/tipc/link.c 247 */(struct tipc_link *l, u16 to);
	void *cocci_id/* net/tipc/link.c 2451 */;
	void cocci_id/* net/tipc/link.c 245 */(struct tipc_link *l,
					       struct sk_buff_head *xmitq);
	u32 cocci_id/* net/tipc/link.c 2448 */;
	struct tipc_link *cocci_id/* net/tipc/link.c 2446 */;
	struct tipc_nl_msg *cocci_id/* net/tipc/link.c 2445 */;
	struct net *cocci_id/* net/tipc/link.c 2445 */;
	int cocci_id/* net/tipc/link.c 243 */(struct tipc_link *l,
					      struct sk_buff_head *xmitq);
	void cocci_id/* net/tipc/link.c 242 */(struct tipc_link *l,
					       const char *str);
	struct nla_map {
		u32 key;
		u32 val;
	} cocci_id/* net/tipc/link.c 2384 */;
	void cocci_id/* net/tipc/link.c 238 */(struct tipc_link *l, int mtyp,
					       bool probe, bool probe_reply,
					       u16 rcvgap, int tolerance,
					       int priority,
					       struct sk_buff_head *xmitq);
	int cocci_id/* net/tipc/link.c 236 */(struct tipc_link *l,
					      struct sk_buff *skb,
					      struct sk_buff_head *xmitq);
	struct nlattr *cocci_id/* net/tipc/link.c 2343 */[];
	enum{LINK_ESTABLISHED=0xe, LINK_ESTABLISHING=0xe << 4, LINK_RESET=0x1 << 8, LINK_RESETTING=0x2 << 12, LINK_PEER_RESET=0xd << 16, LINK_FAILINGOVER=0xf << 20, LINK_SYNCHING=0xc << 24,} cocci_id/* net/tipc/link.c 219 */;
	enum{BC_NACK_SND_CONDITIONAL, BC_NACK_SND_UNCONDITIONAL, BC_NACK_SND_SUPPRESS,} cocci_id/* net/tipc/link.c 203 */;
	const char *cocci_id/* net/tipc/link.c 198 */;
	struct tipc_mon_state *cocci_id/* net/tipc/link.c 1622 */;
	u8 cocci_id/* net/tipc/link.c 1367 */;
	struct tipc_gap_ack_blks *cocci_id/* net/tipc/link.c 1365 */;
	struct tipc_link {
		u32 addr;
		char name[TIPC_MAX_LINK_NAME];
		struct net *net;
		u16 peer_session;
		u16 session;
		u16 snd_nxt_state;
		u16 rcv_nxt_state;
		u32 peer_bearer_id;
		u32 bearer_id;
		u32 tolerance;
		u32 abort_limit;
		u32 state;
		u16 peer_caps;
		bool in_session;
		bool active;
		u32 silent_intv_cnt;
		char if_name[TIPC_MAX_IF_NAME];
		u32 priority;
		char net_plane;
		struct tipc_mon_state mon_state;
		u16 rst_cnt;
		u16 drop_point;
		struct sk_buff *failover_reasm_skb;
		struct sk_buff_head failover_deferdq;
		u16 mtu;
		u16 advertised_mtu;
		struct sk_buff_head transmq;
		struct sk_buff_head backlogq;
		struct {
			u16 len;
			u16 limit;
			struct sk_buff *target_bskb;
		} backlog[5];
		u16 snd_nxt;
		u16 window;
		u16 rcv_nxt;
		u32 rcv_unacked;
		struct sk_buff_head deferdq;
		struct sk_buff_head *inputq;
		struct sk_buff_head *namedq;
		struct sk_buff_head wakeupq;
		struct sk_buff *reasm_buf;
		struct sk_buff *reasm_tnlmsg;
		u16 ackers;
		u16 acked;
		struct tipc_link *bc_rcvlink;
		struct tipc_link *bc_sndlink;
		u8 nack_state;
		bool bc_peer_is_up;
		struct tipc_stats stats;
	} cocci_id/* net/tipc/link.c 124 */;
	struct sk_buff **cocci_id/* net/tipc/link.c 1233 */;
	int *cocci_id/* net/tipc/link.c 1088 */;
}
