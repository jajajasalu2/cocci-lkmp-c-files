cocci_test_suite() {
	unsigned char *cocci_id/* fs/dlm/lowcomms.c 892 */;
	struct sctp_prim cocci_id/* fs/dlm/lowcomms.c 858 */;
	struct cbuf *cocci_id/* fs/dlm/lowcomms.c 73 */;
	struct cbuf {
		unsigned int base;
		unsigned int len;
		unsigned int mask;
	} cocci_id/* fs/dlm/lowcomms.c 67 */;
	unsigned cocci_id/* fs/dlm/lowcomms.c 628 */;
	struct kvec cocci_id/* fs/dlm/lowcomms.c 627 */[2];
	struct msghdr cocci_id/* fs/dlm/lowcomms.c 626 */;
	char *cocci_id/* fs/dlm/lowcomms.c 584 */;
	struct sockaddr_in6 cocci_id/* fs/dlm/lowcomms.c 582 */;
	struct sockaddr_in cocci_id/* fs/dlm/lowcomms.c 577 */;
	uint16_t cocci_id/* fs/dlm/lowcomms.c 570 */;
	struct sock *cocci_id/* fs/dlm/lowcomms.c 553 */;
	struct socket *cocci_id/* fs/dlm/lowcomms.c 551 */;
	struct sockaddr *cocci_id/* fs/dlm/lowcomms.c 492 */;
	void (*cocci_id/* fs/dlm/lowcomms.c 483 */)(struct sock *);
	struct sockaddr_storage cocci_id/* fs/dlm/lowcomms.c 377 */;
	struct dlm_node_addr cocci_id/* fs/dlm/lowcomms.c 373 */;
	struct dlm_node_addr *cocci_id/* fs/dlm/lowcomms.c 346 */;
	int *cocci_id/* fs/dlm/lowcomms.c 344 */;
	struct sockaddr_in6 *cocci_id/* fs/dlm/lowcomms.c 282 */;
	struct sockaddr_in *cocci_id/* fs/dlm/lowcomms.c 273 */;
	struct sockaddr_storage *cocci_id/* fs/dlm/lowcomms.c 269 */;
	struct hlist_node *cocci_id/* fs/dlm/lowcomms.c 238 */;
	void (*cocci_id/* fs/dlm/lowcomms.c 235 */)(struct connection *c);
	gfp_t cocci_id/* fs/dlm/lowcomms.c 199 */;
	struct connection *cocci_id/* fs/dlm/lowcomms.c 181 */;
	int cocci_id/* fs/dlm/lowcomms.c 181 */;
	struct connection cocci_id/* fs/dlm/lowcomms.c 1754 */;
	void cocci_id/* fs/dlm/lowcomms.c 169 */(struct work_struct *work);
	struct kmem_cache *cocci_id/* fs/dlm/lowcomms.c 167 */;
	bool cocci_id/* fs/dlm/lowcomms.c 1657 */;
	void cocci_id/* fs/dlm/lowcomms.c 1657 */;
	struct hlist_head cocci_id/* fs/dlm/lowcomms.c 165 */[CONN_HASH_SIZE];
	struct workqueue_struct *cocci_id/* fs/dlm/lowcomms.c 162 */;
	struct work_struct *cocci_id/* fs/dlm/lowcomms.c 1599 */;
	struct sockaddr_storage *cocci_id/* fs/dlm/lowcomms.c 157 */[DLM_MAX_ADDR_COUNT];
	struct writequeue_entry *cocci_id/* fs/dlm/lowcomms.c 1560 */;
	struct list_head *cocci_id/* fs/dlm/lowcomms.c 1502 */;
	const int cocci_id/* fs/dlm/lowcomms.c 1489 */;
	struct listen_sock_callbacks {
		void (*sk_error_report)(struct sock *);
		void (*sk_data_ready)(struct sock *);
		void (*sk_state_change)(struct sock *);
		void (*sk_write_space)(struct sock *);
	} cocci_id/* fs/dlm/lowcomms.c 147 */;
	void *cocci_id/* fs/dlm/lowcomms.c 1464 */;
	struct writequeue_entry cocci_id/* fs/dlm/lowcomms.c 1434 */;
	char **cocci_id/* fs/dlm/lowcomms.c 1423 */;
	struct dlm_node_addr {
		struct list_head list;
		int nodeid;
		int addr_count;
		int curr_addr_index;
		struct sockaddr_storage *addr[DLM_MAX_ADDR_COUNT];
	} cocci_id/* fs/dlm/lowcomms.c 139 */;
	struct writequeue_entry {
		struct list_head list;
		struct page *page;
		int offset;
		int len;
		int end;
		int users;
		struct connection *con;
	} cocci_id/* fs/dlm/lowcomms.c 129 */;
	struct timeval cocci_id/* fs/dlm/lowcomms.c 1038 */;
	struct connection {
		struct socket *sock;
		uint32_t nodeid;
		struct mutex sock_mutex;
		unsigned long flags;
#define CF_READ_PENDING 1
#define CF_WRITE_PENDING 2
#define CF_INIT_PENDING 4
#define CF_IS_OTHERCON 5
#define CF_CLOSE 6
#define CF_APP_LIMITED 7
#define CF_CLOSING 8
		struct list_head writequeue;
		spinlock_t writequeue_lock;
		int (*rx_action)(struct connection *);
		void (*connect_action)(struct connection *);
		struct page *rx_page;
		struct cbuf cb;
		int retries;
#define MAX_CONNECT_RETRIES 3
		struct hlist_node list;
		struct connection *othercon;
		struct work_struct rwork;
		struct work_struct swork;
	} cocci_id/* fs/dlm/lowcomms.c 101 */;
}
