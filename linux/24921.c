cocci_test_suite() {
	struct tipc_link *cocci_id/* net/tipc/node.c 939 */;
	struct tipc_link_entry *cocci_id/* net/tipc/node.c 935 */;
	struct tipc_media_addr **cocci_id/* net/tipc/node.c 933 */;
	struct sk_buff_head *cocci_id/* net/tipc/node.c 932 */;
	int *cocci_id/* net/tipc/node.c 931 */;
	void cocci_id/* net/tipc/node.c 931 */;
	struct timer_list *cocci_id/* net/tipc/node.c 755 */;
	struct tipc_bclink_entry {
		struct tipc_link *link;
		struct sk_buff_head inputq1;
		struct sk_buff_head arrvq;
		struct sk_buff_head inputq2;
		struct sk_buff_head namedq;
	} cocci_id/* net/tipc/node.c 72 */;
	struct tipc_link_entry {
		struct tipc_link *link;
		spinlock_t lock;
		u32 mtu;
		struct sk_buff_head inputq;
		struct tipc_media_addr maddr;
	} cocci_id/* net/tipc/node.c 64 */;
	unsigned long cocci_id/* net/tipc/node.c 572 */;
	enum{TIPC_NOTIFY_NODE_DOWN=(1 << 3), TIPC_NOTIFY_NODE_UP=(1 << 4), TIPC_NOTIFY_LINK_UP=(1 << 6), TIPC_NOTIFY_LINK_DOWN=(1 << 7),} cocci_id/* net/tipc/node.c 57 */;
	size_t cocci_id/* net/tipc/node.c 2915 */;
	struct kref *cocci_id/* net/tipc/node.c 291 */;
	struct tipc_net *cocci_id/* net/tipc/node.c 2879 */;
	struct sk_buff *cocci_id/* net/tipc/node.c 2876 */;
	struct genl_info *cocci_id/* net/tipc/node.c 2876 */;
	struct rcu_head *cocci_id/* net/tipc/node.c 281 */;
	u8 *cocci_id/* net/tipc/node.c 2807 */;
	struct tipc_crypto *cocci_id/* net/tipc/node.c 2806 */;
	struct tipc_aead_key *cocci_id/* net/tipc/node.c 2805 */;
	struct nlattr *cocci_id/* net/tipc/node.c 2801 */[TIPC_NLA_NODE_MAX + 1];
	u8 **cocci_id/* net/tipc/node.c 2785 */;
	struct tipc_aead_key **cocci_id/* net/tipc/node.c 2771 */;
	struct tipc_node cocci_id/* net/tipc/node.c 277 */;
	struct nlattr *cocci_id/* net/tipc/node.c 2728 */[TIPC_NLA_MON_MAX + 1];
	struct nlattr **cocci_id/* net/tipc/node.c 2727 */;
	u32 cocci_id/* net/tipc/node.c 2639 */;
	void *cocci_id/* net/tipc/node.c 2638 */;
	struct nlattr *cocci_id/* net/tipc/node.c 2637 */;
	struct tipc_nl_msg *cocci_id/* net/tipc/node.c 2635 */;
	struct net *cocci_id/* net/tipc/node.c 2635 */;
	int cocci_id/* net/tipc/node.c 2635 */;
	u32 *cocci_id/* net/tipc/node.c 2515 */;
	unsigned int cocci_id/* net/tipc/node.c 2466 */;
	char *cocci_id/* net/tipc/node.c 2402 */;
	struct nlattr *cocci_id/* net/tipc/node.c 2400 */[TIPC_NLA_LINK_MAX + 1];
	struct nlattr *cocci_id/* net/tipc/node.c 2361 */[TIPC_NLA_PROP_MAX + 1];
	unsigned int *cocci_id/* net/tipc/node.c 2288 */;
	const char *cocci_id/* net/tipc/node.c 2287 */;
	struct tipc_nl_msg cocci_id/* net/tipc/node.c 2223 */;
	struct netlink_callback *cocci_id/* net/tipc/node.c 2215 */;
	struct nlattr *cocci_id/* net/tipc/node.c 2159 */[TIPC_NLA_NET_MAX + 1];
	struct tipc_bearer *cocci_id/* net/tipc/node.c 2125 */;
	struct tipc_ehdr *cocci_id/* net/tipc/node.c 2024 */;
	struct tipc_bclink_entry *cocci_id/* net/tipc/node.c 1807 */;
	struct tipc_sock_conn {
		u32 port;
		u32 peer_port;
		u32 peer_node;
		struct list_head list;
	} cocci_id/* net/tipc/node.c 179 */;
	bool cocci_id/* net/tipc/node.c 176 */(struct tipc_node *n);
	struct tipc_node *cocci_id/* net/tipc/node.c 175 */(struct net *net,
							    u8 *id);
	struct tipc_node *cocci_id/* net/tipc/node.c 174 */(struct net *net,
							    u32 addr);
	void cocci_id/* net/tipc/node.c 173 */(struct tipc_node *n, int evt);
	void cocci_id/* net/tipc/node.c 172 */(struct timer_list *t);
	void cocci_id/* net/tipc/node.c 171 */(struct tipc_node *node);
	void cocci_id/* net/tipc/node.c 170 */(struct tipc_node *n,
					       struct sk_buff_head *inputq);
	void cocci_id/* net/tipc/node.c 168 */(struct tipc_node *n,
					       int bearer_id, bool delete);
	void cocci_id/* net/tipc/node.c 165 */(struct tipc_node *n,
					       int *bearer_id,
					       struct sk_buff_head *xmitq,
					       struct tipc_media_addr **maddr);
	struct sk_buff_head cocci_id/* net/tipc/node.c 1581 */;
	struct tipc_msg *cocci_id/* net/tipc/node.c 1580 */;
	struct tipc_node *cocci_id/* net/tipc/node.c 1545 */;
	enum{SELF_ESTABL_CONTACT_EVT=0xece, SELF_LOST_CONTACT_EVT=0x1ce, PEER_ESTABL_CONTACT_EVT=0x9ece, PEER_LOST_CONTACT_EVT=0x91ce, NODE_FAILOVER_BEGIN_EVT=0xfbe, NODE_FAILOVER_END_EVT=0xfee, NODE_SYNCH_BEGIN_EVT=0xcbe, NODE_SYNCH_END_EVT=0xcee,} cocci_id/* net/tipc/node.c 154 */;
	uint cocci_id/* net/tipc/node.c 1477 */;
	struct list_head *cocci_id/* net/tipc/node.c 1475 */;
	struct tipc_sock_conn *cocci_id/* net/tipc/node.c 1473 */;
	enum{SELF_DOWN_PEER_DOWN=0xdd, SELF_UP_PEER_UP=0xaa, SELF_DOWN_PEER_LEAVING=0xd1, SELF_UP_PEER_COMING=0xac, SELF_COMING_PEER_UP=0xca, SELF_LEAVING_PEER_DOWN=0x1d, NODE_FAILINGOVER=0xf0, NODE_SYNCHING=0xcc,} cocci_id/* net/tipc/node.c 143 */;
	bool *cocci_id/* net/tipc/node.c 1115 */;
	struct tipc_media_addr *cocci_id/* net/tipc/node.c 1114 */;
	u16 cocci_id/* net/tipc/node.c 1113 */;
	struct tipc_node {
		u32 addr;
		struct kref kref;
		rwlock_t lock;
		struct net *net;
		struct hlist_node hash;
		int active_links[2];
		struct tipc_link_entry links[MAX_BEARERS];
		struct tipc_bclink_entry bc_entry;
		int action_flags;
		struct list_head list;
		int state;
		bool preliminary;
		bool failover_sent;
		u16 sync_point;
		int link_cnt;
		u16 working_links;
		u16 capabilities;
		u32 signature;
		u32 link_id;
		u8 peer_id[16];
		char peer_id_string[NODE_ID_STR_LEN];
		struct list_head publ_list;
		struct list_head conn_sks;
		unsigned long keepalive_intv;
		struct timer_list timer;
		struct rcu_head rcu;
		unsigned long delete_at;
		struct net *peer_net;
		u32 peer_hash_mix;
#ifdef CONFIG_TIPC_CRYPTO
		struct tipc_crypto *crypto_rx;
#endif
	} cocci_id/* net/tipc/node.c 106 */;
	bool cocci_id/* net/tipc/node.c 1040 */;
}
