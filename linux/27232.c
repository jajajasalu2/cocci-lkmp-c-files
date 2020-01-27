cocci_test_suite() {
	struct user_struct *cocci_id/* fs/eventpoll.c 995 */;
	struct eventpoll **cocci_id/* fs/eventpoll.c 992 */;
	long long cocci_id/* fs/eventpoll.c 939 */;
	struct seq_file *cocci_id/* fs/eventpoll.c 926 */;
	__poll_t cocci_id/* fs/eventpoll.c 909 */;
	poll_table *cocci_id/* fs/eventpoll.c 909 */;
	int *cocci_id/* fs/eventpoll.c 887 */;
	const struct epitem *cocci_id/* fs/eventpoll.c 863 */;
	void cocci_id/* fs/eventpoll.c 855 */(struct file *file,
					      wait_queue_head_t *whead,
					      poll_table *pt);
	__poll_t cocci_id/* fs/eventpoll.c 853 */(struct eventpoll *ep,
						  struct list_head *head,
						  void *priv);
	struct inode *cocci_id/* fs/eventpoll.c 843 */;
	struct rcu_head *cocci_id/* fs/eventpoll.c 743 */;
	__poll_t (*cocci_id/* fs/eventpoll.c 664 */)(struct eventpoll *,
						     struct list_head *,
						     void *);
	wait_queue_head_t *cocci_id/* fs/eventpoll.c 556 */;
	struct nested_call_node cocci_id/* fs/eventpoll.c 487 */;
	struct nested_call_node *cocci_id/* fs/eventpoll.c 486 */;
	struct list_head *cocci_id/* fs/eventpoll.c 485 */;
	int (*cocci_id/* fs/eventpoll.c 480 */)(void *, void *, int);
	struct nested_calls *cocci_id/* fs/eventpoll.c 479 */;
	struct sock *cocci_id/* fs/eventpoll.c 420 */;
	struct socket *cocci_id/* fs/eventpoll.c 419 */;
	unsigned int cocci_id/* fs/eventpoll.c 400 */;
	void *cocci_id/* fs/eventpoll.c 385 */;
	unsigned long cocci_id/* fs/eventpoll.c 385 */;
	struct eppoll_entry cocci_id/* fs/eventpoll.c 348 */;
	wait_queue_entry_t *cocci_id/* fs/eventpoll.c 346 */;
	struct epoll_filefd *cocci_id/* fs/eventpoll.c 327 */;
	const struct file_operations cocci_id/* fs/eventpoll.c 311 */;
	struct ctl_table cocci_id/* fs/eventpoll.c 297 */[];
	struct kmem_cache *cocci_id/* fs/eventpoll.c 276 */;
	struct nested_calls cocci_id/* fs/eventpoll.c 273 */;
	struct ep_send_events_data {
		int maxevents;
		struct epoll_event __user *events;
		int res;
	} cocci_id/* fs/eventpoll.c 255 */;
	struct ep_pqueue {
		poll_table pt;
		struct epitem *epi;
	} cocci_id/* fs/eventpoll.c 249 */;
	struct sysinfo cocci_id/* fs/eventpoll.c 2336 */;
	int __init cocci_id/* fs/eventpoll.c 2334 */;
	struct eppoll_entry {
		struct list_head llink;
		struct epitem *base;
		wait_queue_entry_t wait;
		wait_queue_head_t *whead;
	} cocci_id/* fs/eventpoll.c 231 */;
	size_t cocci_id/* fs/eventpoll.c 2292 */;
	const sigset_t *cocci_id/* fs/eventpoll.c 2291 */;
	struct epoll_event *cocci_id/* fs/eventpoll.c 2290 */;
	struct epoll_event cocci_id/* fs/eventpoll.c 2250 */;
	struct fd cocci_id/* fs/eventpoll.c 2242 */;
	struct epoll_event __user *cocci_id/* fs/eventpoll.c 2238 */;
	int cocci_id/* fs/eventpoll.c 2021 */;
	struct file cocci_id/* fs/eventpoll.c 2011 */;
	struct file *cocci_id/* fs/eventpoll.c 2007 */;
	void cocci_id/* fs/eventpoll.c 2005 */;
	struct timespec64 cocci_id/* fs/eventpoll.c 1816 */;
	ktime_t cocci_id/* fs/eventpoll.c 1811 */;
	wait_queue_entry_t cocci_id/* fs/eventpoll.c 1810 */;
	struct eventpoll {
		struct mutex mtx;
		wait_queue_head_t wq;
		wait_queue_head_t poll_wait;
		struct list_head rdllist;
		rwlock_t lock;
		struct rb_root_cached rbr;
		struct epitem *ovflist;
		struct wakeup_source *ws;
		struct user_struct *user;
		struct file *file;
		int visited;
		struct list_head visited_list_link;
#ifdef CONFIG_NET_RX_BUSY_POLL
		unsigned int napi_id;
#endif
	} cocci_id/* fs/eventpoll.c 181 */;
	u64 cocci_id/* fs/eventpoll.c 1808 */;
	struct ep_send_events_data cocci_id/* fs/eventpoll.c 1767 */;
	struct ep_send_events_data *cocci_id/* fs/eventpoll.c 1683 */;
	poll_table cocci_id/* fs/eventpoll.c 1612 */;
	struct ep_pqueue cocci_id/* fs/eventpoll.c 1482 */;
	long cocci_id/* fs/eventpoll.c 1480 */;
	const struct epoll_event *cocci_id/* fs/eventpoll.c 1475 */;
	struct wakeup_source *cocci_id/* fs/eventpoll.c 1438 */;
	const char *cocci_id/* fs/eventpoll.c 1437 */;
	struct epitem {
		union {
			struct rb_node rbn;
			struct rcu_head rcu;
		};
		struct list_head rdllink;
		struct epitem *next;
		struct epoll_filefd ffd;
		int nwait;
		struct list_head pwqlist;
		struct eventpoll *ep;
		struct list_head fllink;
		struct wakeup_source __rcu *ws;
		struct epoll_event event;
	} cocci_id/* fs/eventpoll.c 137 */;
	int cocci_id/* fs/eventpoll.c 1353 */[PATH_ARR_SIZE];
	const int cocci_id/* fs/eventpoll.c 1352 */[PATH_ARR_SIZE];
	struct rb_node **cocci_id/* fs/eventpoll.c 1320 */;
	struct eppoll_entry *cocci_id/* fs/eventpoll.c 1299 */;
	struct nested_calls {
		struct list_head tasks_call_list;
		spinlock_t lock;
	} cocci_id/* fs/eventpoll.c 126 */;
	unsigned cocci_id/* fs/eventpoll.c 1186 */;
	struct nested_call_node {
		struct list_head llink;
		void *cookie;
		void *ctx;
	} cocci_id/* fs/eventpoll.c 116 */;
	struct eventpoll *cocci_id/* fs/eventpoll.c 1156 */;
	bool cocci_id/* fs/eventpoll.c 1154 */;
	struct epitem *cocci_id/* fs/eventpoll.c 1154 */;
	struct epoll_filefd {
		struct file *file;
		int fd;
	}__packed cocci_id/* fs/eventpoll.c 107 */;
	struct epitem cocci_id/* fs/eventpoll.c 1036 */;
	struct epoll_filefd cocci_id/* fs/eventpoll.c 1032 */;
	struct rb_node *cocci_id/* fs/eventpoll.c 1030 */;
	__typeof__(int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
