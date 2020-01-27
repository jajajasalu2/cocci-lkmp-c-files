cocci_test_suite() {
	struct list_head cocci_id/* net/tipc/socket.c 975 */;
	struct tipc_member *cocci_id/* net/tipc/socket.c 971 */;
	struct tipc_sock {
		struct sock sk;
		u32 conn_type;
		u32 conn_instance;
		int published;
		u32 max_pkt;
		u32 maxnagle;
		u32 portid;
		struct tipc_msg phdr;
		struct list_head cong_links;
		struct list_head publications;
		u32 pub_count;
		atomic_t dupl_rcvcnt;
		u16 conn_timeout;
		bool probe_unacked;
		u16 cong_link_cnt;
		u16 snt_unacked;
		u16 snd_win;
		u16 peer_caps;
		u16 rcv_unacked;
		u16 rcv_win;
		struct sockaddr_tipc peer;
		struct rhash_head node;
		struct tipc_mc_method mc_method;
		struct rcu_head rcu;
		struct tipc_group *group;
		u32 oneway;
		u16 snd_backlog;
		bool expect_ack;
		bool nodelay;
		bool group_is_open;
	} cocci_id/* net/tipc/socket.c 95 */;
	u16 cocci_id/* net/tipc/socket.c 871 */;
	struct tipc_nlist cocci_id/* net/tipc/socket.c 813 */;
	poll_table *cocci_id/* net/tipc/socket.c 752 */;
	__poll_t cocci_id/* net/tipc/socket.c 751 */;
	struct file *cocci_id/* net/tipc/socket.c 751 */;
	struct sockaddr_tipc cocci_id/* net/tipc/socket.c 662 */;
	struct sockaddr_pair {
		struct sockaddr_tipc sock;
		struct sockaddr_tipc member;
	} cocci_id/* net/tipc/socket.c 66 */;
	struct sockaddr *cocci_id/* net/tipc/socket.c 645 */;
	enum{TIPC_LISTEN=TCP_LISTEN, TIPC_ESTABLISHED=TCP_ESTABLISHED, TIPC_OPEN=TCP_CLOSE, TIPC_DISCONNECTING=TCP_CLOSE_WAIT, TIPC_CONNECTING=TCP_SYN_SENT,} cocci_id/* net/tipc/socket.c 58 */;
	void cocci_id/* net/tipc/socket.c 530 */;
	struct rcu_head *cocci_id/* net/tipc/socket.c 522 */;
	const struct proto_ops *cocci_id/* net/tipc/socket.c 445 */;
	long *cocci_id/* net/tipc/socket.c 385 */;
	char *cocci_id/* net/tipc/socket.c 3832 */;
	struct nlattr *cocci_id/* net/tipc/socket.c 3683 */[TIPC_NLA_SOCK_MAX + 1];
	struct nlattr **cocci_id/* net/tipc/socket.c 3682 */;
	struct publication cocci_id/* net/tipc/socket.c 3656 */;
	u32 *cocci_id/* net/tipc/socket.c 3634 */;
	struct publication *cocci_id/* net/tipc/socket.c 3595 */;
	u64 (*cocci_id/* net/tipc/socket.c 3520 */)(struct sock *sk);
	long cocci_id/* net/tipc/socket.c 3501 */;
	struct tipc_net *cocci_id/* net/tipc/socket.c 3494 */;
	struct rhashtable_iter *cocci_id/* net/tipc/socket.c 3493 */;
	void *cocci_id/* net/tipc/socket.c 3493 */;
	struct netlink_callback *cocci_id/* net/tipc/socket.c 3490 */;
	struct net *cocci_id/* net/tipc/socket.c 3490 */;
	int cocci_id/* net/tipc/socket.c 3490 */;
	int (*cocci_id/* net/tipc/socket.c 3446 */)(struct sk_buff *skb,
						    struct netlink_callback *cb,
						    struct tipc_sock *tsk);
	struct nlattr *cocci_id/* net/tipc/socket.c 3417 */;
	struct tipc_sock *cocci_id/* net/tipc/socket.c 3415 */;
	struct sk_buff *cocci_id/* net/tipc/socket.c 3414 */;
	struct sock *cocci_id/* net/tipc/socket.c 3397 */;
	u32 cocci_id/* net/tipc/socket.c 3359 */;
	struct tipc_sock cocci_id/* net/tipc/socket.c 3318 */;
	const struct net_proto_family cocci_id/* net/tipc/socket.c 3309 */;
	void __user *cocci_id/* net/tipc/socket.c 3195 */;
	struct tipc_sioc_ln_req cocci_id/* net/tipc/socket.c 3194 */;
	struct tipc_sioc_nodeid_req cocci_id/* net/tipc/socket.c 3193 */;
	unsigned long cocci_id/* net/tipc/socket.c 3190 */;
	struct tipc_name_seq cocci_id/* net/tipc/socket.c 3128 */;
	int __user *cocci_id/* net/tipc/socket.c 3124 */;
	char __user *cocci_id/* net/tipc/socket.c 3124 */;
	u32 __user *cocci_id/* net/tipc/socket.c 3051 */;
	struct tipc_group_req cocci_id/* net/tipc/socket.c 3034 */;
	struct tipc_group_req *cocci_id/* net/tipc/socket.c 2962 */;
	struct rhashtable_iter cocci_id/* net/tipc/socket.c 2860 */;
	const struct tipc_name_seq *cocci_id/* net/tipc/socket.c 2792 */;
	uint cocci_id/* net/tipc/socket.c 2791 */;
	struct timer_list *cocci_id/* net/tipc/socket.c 2754 */;
	struct msghdr cocci_id/* net/tipc/socket.c 2662 */;
	atomic_t *cocci_id/* net/tipc/socket.c 2326 */;
	unsigned int cocci_id/* net/tipc/socket.c 2201 */;
	struct socket_wq *cocci_id/* net/tipc/socket.c 2039 */;
	const struct sock *cocci_id/* net/tipc/socket.c 202 */;
	struct tipc_skb_cb *cocci_id/* net/tipc/socket.c 1926 */;
	u32 cocci_id/* net/tipc/socket.c 1669 */[3];
	struct sockaddr_pair *cocci_id/* net/tipc/socket.c 1628 */;
	const struct rhashtable_params cocci_id/* net/tipc/socket.c 152 */;
	struct proto cocci_id/* net/tipc/socket.c 151 */;
	struct sk_buff_head *cocci_id/* net/tipc/socket.c 1504 */;
	const struct proto_ops cocci_id/* net/tipc/socket.c 150 */;
	void cocci_id/* net/tipc/socket.c 146 */(struct tipc_sock *tsk);
	int cocci_id/* net/tipc/socket.c 145 */(struct socket *sock,
						struct msghdr *m, size_t dsz);
	int cocci_id/* net/tipc/socket.c 142 */(struct tipc_sock *tsk);
	struct tipc_sock *cocci_id/* net/tipc/socket.c 141 */(struct net *net,
							      u32 portid);
	struct sk_buff_head cocci_id/* net/tipc/socket.c 1366 */;
	struct tipc_name_seq *cocci_id/* net/tipc/socket.c 1365 */;
	struct tipc_msg *cocci_id/* net/tipc/socket.c 1364 */;
	struct tipc_group *cocci_id/* net/tipc/socket.c 1363 */;
	bool cocci_id/* net/tipc/socket.c 1362 */;
	struct list_head *cocci_id/* net/tipc/socket.c 1361 */;
	int cocci_id/* net/tipc/socket.c 136 */(struct tipc_sock *tsk,
						uint scope,
						const struct tipc_name_seq *seq);
	struct sockaddr_tipc *cocci_id/* net/tipc/socket.c 1359 */;
	struct socket *cocci_id/* net/tipc/socket.c 1354 */;
	struct msghdr *cocci_id/* net/tipc/socket.c 1354 */;
	size_t cocci_id/* net/tipc/socket.c 1354 */;
	void cocci_id/* net/tipc/socket.c 135 */(struct timer_list *t);
	int cocci_id/* net/tipc/socket.c 133 */(struct socket *sock,
						struct socket *new_sock,
						int flags, bool kern);
	int cocci_id/* net/tipc/socket.c 132 */(struct socket *sock);
	void cocci_id/* net/tipc/socket.c 129 */(struct sock *sk);
	int cocci_id/* net/tipc/socket.c 128 */(struct sock *sk,
						struct sk_buff *skb);
	struct tipc_mc_method *cocci_id/* net/tipc/socket.c 1055 */;
	struct tipc_nlist *cocci_id/* net/tipc/socket.c 1054 */;
}
