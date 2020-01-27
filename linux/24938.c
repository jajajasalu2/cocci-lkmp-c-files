cocci_test_suite() {
	struct nlattr *cocci_id/* net/tipc/group.c 921 */;
	struct tipc_event *cocci_id/* net/tipc/group.c 855 */;
	void *cocci_id/* net/tipc/group.c 855 */;
	struct tipc_group {
		struct rb_root members;
		struct list_head small_win;
		struct list_head pending;
		struct list_head active;
		struct tipc_nlist dests;
		struct net *net;
		int subid;
		u32 type;
		u32 instance;
		u32 scope;
		u32 portid;
		u16 member_cnt;
		u16 active_cnt;
		u16 max_active;
		u16 bc_snd_nxt;
		u16 bc_ackers;
		bool *open;
		bool loopback;
		bool events;
	} cocci_id/* net/tipc/group.c 79 */;
	struct tipc_msg *cocci_id/* net/tipc/group.c 668 */;
	struct sk_buff *cocci_id/* net/tipc/group.c 667 */;
	struct tipc_event cocci_id/* net/tipc/group.c 666 */;
	struct sk_buff_head *cocci_id/* net/tipc/group.c 664 */;
	struct tipc_member {
		struct rb_node tree_node;
		struct list_head list;
		struct list_head small_win;
		struct sk_buff_head deferredq;
		struct tipc_group *group;
		u32 node;
		u32 port;
		u32 instance;
		enum mbr_state state;
		u16 advertised;
		u16 window;
		u16 bc_rcv_nxt;
		u16 bc_syncpt;
		u16 bc_acked;
	} cocci_id/* net/tipc/group.c 62 */;
	struct list_head *cocci_id/* net/tipc/group.c 584 */;
	enum mbr_state{MBR_JOINING, MBR_PUBLISHED, MBR_JOINED, MBR_PENDING, MBR_ACTIVE, MBR_RECLAIMING, MBR_REMITTED, MBR_LEAVING,} cocci_id/* net/tipc/group.c 51 */;
	bool cocci_id/* net/tipc/group.c 444 */;
	int cocci_id/* net/tipc/group.c 444 */;
	struct sk_buff_head cocci_id/* net/tipc/group.c 413 */;
	struct tipc_member **cocci_id/* net/tipc/group.c 411 */;
	struct tipc_name_seq *cocci_id/* net/tipc/group.c 356 */;
	struct tipc_nlist *cocci_id/* net/tipc/group.c 351 */;
	u32 cocci_id/* net/tipc/group.c 324 */;
	struct tipc_group *cocci_id/* net/tipc/group.c 324 */;
	void cocci_id/* net/tipc/group.c 324 */;
	struct tipc_member cocci_id/* net/tipc/group.c 285 */;
	struct rb_node **cocci_id/* net/tipc/group.c 280 */;
	u64 cocci_id/* net/tipc/group.c 279 */;
	struct tipc_member *cocci_id/* net/tipc/group.c 277 */;
	struct rb_node *cocci_id/* net/tipc/group.c 234 */;
	struct rb_root *cocci_id/* net/tipc/group.c 213 */;
	int *cocci_id/* net/tipc/group.c 196 */;
	bool *cocci_id/* net/tipc/group.c 164 */;
	struct tipc_group_req *cocci_id/* net/tipc/group.c 163 */;
	struct net *cocci_id/* net/tipc/group.c 162 */;
	u16 cocci_id/* net/tipc/group.c 140 */;
	void cocci_id/* net/tipc/group.c 101 */(struct tipc_group *grp,
						struct tipc_member *m,
						int mtyp,
						struct sk_buff_head *xmitq);
}
