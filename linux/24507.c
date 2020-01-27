cocci_test_suite() {
	struct rds_tcp_connection cocci_id/* net/rds/tcp.c 717 */;
	struct ctl_table cocci_id/* net/rds/tcp.c 71 */[];
	int *cocci_id/* net/rds/tcp.c 688 */;
	loff_t *cocci_id/* net/rds/tcp.c 680 */;
	size_t *cocci_id/* net/rds/tcp.c 679 */;
	void __user *cocci_id/* net/rds/tcp.c 679 */;
	int cocci_id/* net/rds/tcp.c 64 */(struct ctl_table *ctl, int write,
					   void __user *buffer, size_t *lenp,
					   loff_t *fpos);
	struct pernet_operations cocci_id/* net/rds/tcp.c 638 */;
	void __net_exit cocci_id/* net/rds/tcp.c 625 */;
	struct kmem_cache *cocci_id/* net/rds/tcp.c 62 */;
	atomic_t cocci_id/* net/rds/tcp.c 60 */;
	struct ctl_table *cocci_id/* net/rds/tcp.c 540 */;
	unsigned int cocci_id/* net/rds/tcp.c 54 */;
	struct rds_tcp_net *cocci_id/* net/rds/tcp.c 532 */;
	struct net *cocci_id/* net/rds/tcp.c 531 */;
	struct rds_tcp_net cocci_id/* net/rds/tcp.c 522 */;
	struct work_struct *cocci_id/* net/rds/tcp.c 519 */;
	struct rds_tcp_net {
		struct socket *rds_tcp_listen_sock;
		struct work_struct rds_tcp_accept_w;
		struct ctl_table_header *rds_tcp_sysctl;
		struct ctl_table *ctl_table;
		int sndbuf_size;
		int rcvbuf_size;
	} cocci_id/* net/rds/tcp.c 488 */;
	struct rds_transport cocci_id/* net/rds/tcp.c 462 */;
	u8 cocci_id/* net/rds/tcp.c 456 */;
	void cocci_id/* net/rds/tcp.c 454 */(void);
	struct rds_tcp_connection *cocci_id/* net/rds/tcp.c 418 */;
	bool cocci_id/* net/rds/tcp.c 416 */;
	struct rds_connection *cocci_id/* net/rds/tcp.c 416 */;
	struct list_head *cocci_id/* net/rds/tcp.c 416 */;
	struct rds_header cocci_id/* net/rds/tcp.c 391 */;
	gfp_t cocci_id/* net/rds/tcp.c 376 */;
	int cocci_id/* net/rds/tcp.c 376 */;
	void *cocci_id/* net/rds/tcp.c 361 */;
	struct net_device *cocci_id/* net/rds/tcp.c 329 */;
	__u32 cocci_id/* net/rds/tcp.c 327 */;
	const struct in6_addr *cocci_id/* net/rds/tcp.c 326 */;
	struct inet_sock *cocci_id/* net/rds/tcp.c 302 */;
	struct sock *cocci_id/* net/rds/tcp.c 301 */;
	unsigned long cocci_id/* net/rds/tcp.c 293 */;
	struct rds6_info_tcp_socket cocci_id/* net/rds/tcp.c 291 */;
	struct rds_info_lengths *cocci_id/* net/rds/tcp.c 289 */;
	struct rds_info_iterator *cocci_id/* net/rds/tcp.c 288 */;
	struct socket *cocci_id/* net/rds/tcp.c 287 */;
	void cocci_id/* net/rds/tcp.c 287 */;
	struct rds_info_tcp_socket cocci_id/* net/rds/tcp.c 245 */;
	struct rds_conn_path *cocci_id/* net/rds/tcp.c 149 */;
	u32 cocci_id/* net/rds/tcp.c 108 */;
}
