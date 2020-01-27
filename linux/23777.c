cocci_test_suite() {
	char *cocci_id/* net/unix/af_unix.c 999 */;
	struct sockaddr *cocci_id/* net/unix/af_unix.c 993 */;
	const char *cocci_id/* net/unix/af_unix.c 964 */;
	struct path *cocci_id/* net/unix/af_unix.c 964 */;
	struct dentry *cocci_id/* net/unix/af_unix.c 948 */;
	struct inode *cocci_id/* net/unix/af_unix.c 918 */;
	int *cocci_id/* net/unix/af_unix.c 911 */;
	short cocci_id/* net/unix/af_unix.c 867 */;
	struct unix_address *cocci_id/* net/unix/af_unix.c 854 */;
	u32 cocci_id/* net/unix/af_unix.c 853 */;
	struct proto cocci_id/* net/unix/af_unix.c 756 */;
	const struct proto_ops cocci_id/* net/unix/af_unix.c 706 */;
	int cocci_id/* net/unix/af_unix.c 660 */(struct socket *,
						 struct sockaddr *, int, int);
	int cocci_id/* net/unix/af_unix.c 659 */(struct socket *,
						 struct msghdr *, size_t, int);
	int cocci_id/* net/unix/af_unix.c 658 */(struct socket *,
						 struct msghdr *, size_t);
	ssize_t cocci_id/* net/unix/af_unix.c 655 */(struct socket *,
						     loff_t *ppos,
						     struct pipe_inode_info *,
						     size_t size,
						     unsigned int flags);
	ssize_t cocci_id/* net/unix/af_unix.c 653 */(struct socket *,
						     struct page *,
						     int offset, size_t size,
						     int flags);
	int cocci_id/* net/unix/af_unix.c 650 */(struct socket *, int);
	int cocci_id/* net/unix/af_unix.c 648 */(struct socket *sock,
						 unsigned int cmd,
						 unsigned long arg);
	int cocci_id/* net/unix/af_unix.c 646 */(struct socket *,
						 unsigned int, unsigned long);
	__poll_t cocci_id/* net/unix/af_unix.c 644 */(struct file *,
						      struct socket *,
						      poll_table *);
	int cocci_id/* net/unix/af_unix.c 641 */(struct socket *,
						 struct socket *, int, bool);
	int cocci_id/* net/unix/af_unix.c 640 */(struct socket *,
						 struct socket *);
	int cocci_id/* net/unix/af_unix.c 638 */(struct socket *,
						 struct sockaddr *,
						 int addr_len, int flags);
	int cocci_id/* net/unix/af_unix.c 637 */(struct socket *,
						 struct sockaddr *, int);
	int cocci_id/* net/unix/af_unix.c 636 */(struct socket *);
	struct pid *cocci_id/* net/unix/af_unix.c 610 */;
	struct socket_wq *cocci_id/* net/unix/af_unix.c 452 */;
	struct unix_sock cocci_id/* net/unix/af_unix.c 358 */;
	wait_queue_head_t *cocci_id/* net/unix/af_unix.c 356 */;
	void *cocci_id/* net/unix/af_unix.c 353 */;
	wait_queue_entry_t *cocci_id/* net/unix/af_unix.c 352 */;
	unsigned cocci_id/* net/unix/af_unix.c 352 */;
	void __exit cocci_id/* net/unix/af_unix.c 2882 */;
	struct unix_skb_parms cocci_id/* net/unix/af_unix.c 2868 */;
	struct sk_buff cocci_id/* net/unix/af_unix.c 2868 */;
	int __init cocci_id/* net/unix/af_unix.c 2864 */;
	struct pernet_operations cocci_id/* net/unix/af_unix.c 2859 */;
	void __net_exit cocci_id/* net/unix/af_unix.c 2853 */;
	struct seq_net_private cocci_id/* net/unix/af_unix.c 2843 */;
	int __net_init cocci_id/* net/unix/af_unix.c 2833 */;
	const struct net_proto_family cocci_id/* net/unix/af_unix.c 2826 */;
	const struct seq_operations cocci_id/* net/unix/af_unix.c 2818 */;
	struct unix_sock *cocci_id/* net/unix/af_unix.c 280 */;
	unsigned int cocci_id/* net/unix/af_unix.c 275 */;
	int cocci_id/* net/unix/af_unix.c 275 */;
	struct sockaddr_un *cocci_id/* net/unix/af_unix.c 274 */;
	struct sock *cocci_id/* net/unix/af_unix.c 273 */;
	struct net *cocci_id/* net/unix/af_unix.c 273 */;
	loff_t *cocci_id/* net/unix/af_unix.c 2703 */;
	struct seq_file *cocci_id/* net/unix/af_unix.c 2703 */;
	poll_table *cocci_id/* net/unix/af_unix.c 2638 */;
	__poll_t cocci_id/* net/unix/af_unix.c 2637 */;
	struct file *cocci_id/* net/unix/af_unix.c 2637 */;
	unsigned long cocci_id/* net/unix/af_unix.c 2596 */;
	int __user *cocci_id/* net/unix/af_unix.c 2576 */;
	struct hlist_head *cocci_id/* net/unix/af_unix.c 253 */;
	void cocci_id/* net/unix/af_unix.c 253 */;
	struct pipe_inode_info *cocci_id/* net/unix/af_unix.c 2434 */;
	struct unix_stream_read_state cocci_id/* net/unix/af_unix.c 2413 */;
	struct unix_stream_read_state *cocci_id/* net/unix/af_unix.c 2401 */;
	unsigned int *cocci_id/* net/unix/af_unix.c 223 */;
	struct unix_stream_read_state {
		int (*recv_actor)(struct sk_buff *, int, int,
				  struct unix_stream_read_state *);
		struct socket *socket;
		struct msghdr *msg;
		struct pipe_inode_info *pipe;
		size_t size;
		int flags;
		unsigned int splice_flags;
	} cocci_id/* net/unix/af_unix.c 2191 */;
	const struct sk_buff *cocci_id/* net/unix/af_unix.c 2186 */;
	long cocci_id/* net/unix/af_unix.c 2047 */;
	struct scm_cookie cocci_id/* net/unix/af_unix.c 2043 */;
	size_t cocci_id/* net/unix/af_unix.c 2041 */;
	struct msghdr *cocci_id/* net/unix/af_unix.c 2030 */;
	struct page *cocci_id/* net/unix/af_unix.c 1884 */;
	ssize_t cocci_id/* net/unix/af_unix.c 1884 */;
	__wsum cocci_id/* net/unix/af_unix.c 172 */;
	const struct unix_skb_parms *cocci_id/* net/unix/af_unix.c 1567 */;
	struct msghdr cocci_id/* net/unix/af_unix.c 1551 */;
	struct socket *cocci_id/* net/unix/af_unix.c 1547 */;
	struct scm_cookie *cocci_id/* net/unix/af_unix.c 1546 */;
	const struct sock *cocci_id/* net/unix/af_unix.c 1536 */;
	const struct socket *cocci_id/* net/unix/af_unix.c 1535 */;
	struct sk_buff *cocci_id/* net/unix/af_unix.c 1535 */;
	bool cocci_id/* net/unix/af_unix.c 1430 */;
	atomic_long_t cocci_id/* net/unix/af_unix.c 123 */;
	struct hlist_head cocci_id/* net/unix/af_unix.c 119 */[2 * UNIX_HASH_SIZE];
	struct sockaddr cocci_id/* net/unix/af_unix.c 1120 */;
	umode_t cocci_id/* net/unix/af_unix.c 1022 */;
	struct sockaddr_un cocci_id/* net/unix/af_unix.c 1007 */;
	struct path cocci_id/* net/unix/af_unix.c 1004 */;
}
