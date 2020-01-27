cocci_test_suite() {
	struct tipc_conn {
		struct kref kref;
		int conid;
		struct socket *sock;
		unsigned long flags;
		struct tipc_topsrv *server;
		struct list_head sub_list;
		spinlock_t sub_lock;
		struct work_struct rwork;
		struct list_head outqueue;
		spinlock_t outqueue_lock;
		struct work_struct swork;
	} cocci_id/* net/tipc/topsrv.c 93 */;
	struct net *cocci_id/* net/tipc/topsrv.c 704 */;
	void __net_exit cocci_id/* net/tipc/topsrv.c 704 */;
	int __net_init cocci_id/* net/tipc/topsrv.c 699 */;
	struct tipc_topsrv {
		struct idr conn_idr;
		spinlock_t idr_lock;
		int idr_in_use;
		struct net *net;
		struct work_struct awork;
		struct workqueue_struct *rcv_wq;
		struct workqueue_struct *send_wq;
		struct socket *listener;
		char name[TIPC_SERVER_NAME_LEN];
	} cocci_id/* net/tipc/topsrv.c 67 */;
	const char cocci_id/* net/tipc/topsrv.c 643 */[];
	struct sk_buff *cocci_id/* net/tipc/topsrv.c 602 */;
	struct sk_buff_head cocci_id/* net/tipc/topsrv.c 601 */;
	u32 cocci_id/* net/tipc/topsrv.c 599 */;
	u32 *cocci_id/* net/tipc/topsrv.c 599 */;
	int *cocci_id/* net/tipc/topsrv.c 557 */;
	struct sockaddr *cocci_id/* net/tipc/topsrv.c 525 */;
	char *cocci_id/* net/tipc/topsrv.c 514 */;
	struct sockaddr_tipc cocci_id/* net/tipc/topsrv.c 498 */;
	struct socket *cocci_id/* net/tipc/topsrv.c 450 */;
	struct tipc_topsrv cocci_id/* net/tipc/topsrv.c 449 */;
	struct work_struct *cocci_id/* net/tipc/topsrv.c 412 */;
	struct kvec cocci_id/* net/tipc/topsrv.c 391 */;
	struct tipc_subscr cocci_id/* net/tipc/topsrv.c 390 */;
	struct msghdr cocci_id/* net/tipc/topsrv.c 389 */;
	struct outqueue_entry cocci_id/* net/tipc/topsrv.c 261 */;
	struct tipc_event *cocci_id/* net/tipc/topsrv.c 252 */;
	struct tipc_subscription *cocci_id/* net/tipc/topsrv.c 233 */;
	struct list_head *cocci_id/* net/tipc/topsrv.c 232 */;
	struct tipc_net *cocci_id/* net/tipc/topsrv.c 231 */;
	struct tipc_subscr *cocci_id/* net/tipc/topsrv.c 229 */;
	int cocci_id/* net/tipc/topsrv.c 183 */;
	struct tipc_topsrv *cocci_id/* net/tipc/topsrv.c 180 */;
	struct sock *cocci_id/* net/tipc/topsrv.c 158 */;
	struct tipc_conn *cocci_id/* net/tipc/topsrv.c 151 */;
	void cocci_id/* net/tipc/topsrv.c 151 */;
	struct outqueue_entry *cocci_id/* net/tipc/topsrv.c 128 */;
	struct tipc_conn cocci_id/* net/tipc/topsrv.c 126 */;
	struct kref *cocci_id/* net/tipc/topsrv.c 124 */;
	bool cocci_id/* net/tipc/topsrv.c 119 */;
	void cocci_id/* net/tipc/topsrv.c 117 */(struct tipc_conn *con,
						 struct tipc_subscr *s);
	void cocci_id/* net/tipc/topsrv.c 116 */(struct net *net,
						 struct tipc_event *evt);
	void cocci_id/* net/tipc/topsrv.c 114 */(struct work_struct *work);
	struct outqueue_entry {
		bool inactive;
		struct tipc_event evt;
		struct list_head list;
	} cocci_id/* net/tipc/topsrv.c 108 */;
}
