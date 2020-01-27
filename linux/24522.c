cocci_test_suite() {
	struct sctp6_sock cocci_id/* net/sctp/socket.c 9661 */;
	struct proto cocci_id/* net/sctp/socket.c 9600 */;
	struct percpu_counter cocci_id/* net/sctp/socket.c 96 */;
	struct sk_buff_head *cocci_id/* net/sctp/socket.c 9533 */;
	atomic_long_t cocci_id/* net/sctp/socket.c 95 */;
	enum sctp_socket_type cocci_id/* net/sctp/socket.c 9459 */;
	struct ipv6_pinfo cocci_id/* net/sctp/socket.c 9449 */;
	struct sctp_sock cocci_id/* net/sctp/socket.c 9445 */;
	struct inet_sock cocci_id/* net/sctp/socket.c 9444 */;
	const struct sock *cocci_id/* net/sctp/socket.c 9442 */;
	struct inet_sock *cocci_id/* net/sctp/socket.c 9388 */;
	long *cocci_id/* net/sctp/socket.c 9251 */;
	struct sctp_shared_key *cocci_id/* net/sctp/socket.c 9094 */;
	struct socket_wq *cocci_id/* net/sctp/socket.c 9018 */;
	int cocci_id/* net/sctp/socket.c 90 */(struct sock *oldsk,
					       struct sock *newsk,
					       struct sctp_association *assoc,
					       enum sctp_socket_type type);
	int cocci_id/* net/sctp/socket.c 89 */(struct sock *sk);
	struct sctp_authinfo cocci_id/* net/sctp/socket.c 8856 */;
	struct sctp_prinfo cocci_id/* net/sctp/socket.c 8836 */;
	int cocci_id/* net/sctp/socket.c 88 */(struct sock *,
					       union sctp_addr *, int);
	struct sctp_sockaddr_entry *cocci_id/* net/sctp/socket.c 878 */;
	struct cmsghdr *cocci_id/* net/sctp/socket.c 8747 */;
	struct msghdr *cocci_id/* net/sctp/socket.c 8746 */;
	const struct msghdr *cocci_id/* net/sctp/socket.c 8744 */;
	struct sctp_cmsgs *cocci_id/* net/sctp/socket.c 8744 */;
	__be16 cocci_id/* net/sctp/socket.c 8694 */;
	union sctp_addr cocci_id/* net/sctp/socket.c 8692 */;
	struct sctp_bind_bucket *cocci_id/* net/sctp/socket.c 8666 */;
	struct sctp_bind_hashbucket *cocci_id/* net/sctp/socket.c 8663 */;
	void cocci_id/* net/sctp/socket.c 8661 */;
	unsigned short cocci_id/* net/sctp/socket.c 8634 */;
	int cocci_id/* net/sctp/socket.c 86 */(struct sctp_association *asoc,
					       struct sctp_chunk *chunk);
	__poll_t cocci_id/* net/sctp/socket.c 8574 */;
	poll_table *cocci_id/* net/sctp/socket.c 8574 */;
	char cocci_id/* net/sctp/socket.c 8458 */[32];
	struct crypto_shash *cocci_id/* net/sctp/socket.c 8457 */;
	kuid_t cocci_id/* net/sctp/socket.c 8271 */;
	struct sctp_bind_bucket *cocci_id/* net/sctp/socket.c 8262 */(struct sctp_bind_hashbucket *head,
								      struct net *,
								      unsigned short snum);
	int cocci_id/* net/sctp/socket.c 82 */(struct sock *,
					       struct sockaddr *, int);
	struct sockaddr_in6 *cocci_id/* net/sctp/socket.c 814 */;
	struct sockaddr_in *cocci_id/* net/sctp/socket.c 809 */;
	int __user *cocci_id/* net/sctp/socket.c 8011 */;
	char __user *cocci_id/* net/sctp/socket.c 8011 */;
	struct sctp_af *cocci_id/* net/sctp/socket.c 80 */(struct sctp_sock *opt,
							   union sctp_addr *addr,
							   int len);
	void cocci_id/* net/sctp/socket.c 79 */(struct sock *sk);
	struct sctp_assoc_value cocci_id/* net/sctp/socket.c 7858 */;
	struct sctp_event cocci_id/* net/sctp/socket.c 7823 */;
	void cocci_id/* net/sctp/socket.c 78 */(struct sock *sk, long timeo);
	struct sctp_stream_value cocci_id/* net/sctp/socket.c 7722 */;
	int cocci_id/* net/sctp/socket.c 77 */(struct sock *sk, long timeo);
	int cocci_id/* net/sctp/socket.c 76 */(struct sctp_association *,
					       long *timeo_p);
	struct sctp_stream_out_ext *cocci_id/* net/sctp/socket.c 7541 */;
	int cocci_id/* net/sctp/socket.c 75 */(struct sock *sk, int *err,
					       long *timeo_p);
	struct sctp_prstatus cocci_id/* net/sctp/socket.c 7482 */;
	struct sctp_default_prinfo cocci_id/* net/sctp/socket.c 7436 */;
	struct sockaddr_storage cocci_id/* net/sctp/socket.c 7337 */;
	int cocci_id/* net/sctp/socket.c 73 */(struct sctp_association *asoc,
					       long *timeo_p, size_t msg_len);
	struct sctp_assoc_stats cocci_id/* net/sctp/socket.c 7299 */;
	struct sctp_paddrthlds cocci_id/* net/sctp/socket.c 7245 */;
	struct sctp_paddrthlds_v2 cocci_id/* net/sctp/socket.c 7240 */;
	void cocci_id/* net/sctp/socket.c 72 */(struct sk_buff *skb);
	struct sctp_assoc_ids cocci_id/* net/sctp/socket.c 7198 */;
	u32 cocci_id/* net/sctp/socket.c 7193 */;
	struct sctp_assoc_ids *cocci_id/* net/sctp/socket.c 7192 */;
	bool cocci_id/* net/sctp/socket.c 71 */(struct sock *sk);
	struct sctp_chunks_param *cocci_id/* net/sctp/socket.c 7082 */;
	struct sctp_authchunks cocci_id/* net/sctp/socket.c 7080 */;
	struct sctp_authchunks __user *cocci_id/* net/sctp/socket.c 7079 */;
	struct sctp_authkeyid cocci_id/* net/sctp/socket.c 6999 */;
	struct sctp_hmacalgo cocci_id/* net/sctp/socket.c 6976 */;
	struct sctp_paramhdr cocci_id/* net/sctp/socket.c 6974 */;
	struct sctp_hmac_algo_param *cocci_id/* net/sctp/socket.c 6964 */;
	struct sctp_hmacalgo __user *cocci_id/* net/sctp/socket.c 6963 */;
	void __user *cocci_id/* net/sctp/socket.c 6963 */;
	struct sctp_assocparams cocci_id/* net/sctp/socket.c 6681 */;
	struct sctp_rtoinfo cocci_id/* net/sctp/socket.c 6625 */;
	struct sctp_sndinfo cocci_id/* net/sctp/socket.c 6548 */;
	struct sctp_bind_addr *cocci_id/* net/sctp/socket.c 652 */;
	struct sctp_sndrcvinfo cocci_id/* net/sctp/socket.c 6502 */;
	struct sctp_setadaptation cocci_id/* net/sctp/socket.c 6460 */;
	struct sctp_prim cocci_id/* net/sctp/socket.c 6418 */;
	struct sctp_getaddrs __user *cocci_id/* net/sctp/socket.c 6395 */;
	struct sctp_sockaddr_entry cocci_id/* net/sctp/socket.c 6358 */;
	struct sctp_getaddrs cocci_id/* net/sctp/socket.c 6313 */;
	size_t cocci_id/* net/sctp/socket.c 6263 */;
	struct sctp_initmsg cocci_id/* net/sctp/socket.c 6200 */;
	struct sctp_sack_info cocci_id/* net/sctp/socket.c 6128 */;
	struct sctp_paddrparams cocci_id/* net/sctp/socket.c 5984 */;
	sctp_peeloff_flags_arg_t cocci_id/* net/sctp/socket.c 5817 */;
	struct file *cocci_id/* net/sctp/socket.c 5784 */;
	sctp_peeloff_arg_t cocci_id/* net/sctp/socket.c 5783 */;
	struct file **cocci_id/* net/sctp/socket.c 5746 */;
	unsigned cocci_id/* net/sctp/socket.c 5746 */;
	sctp_peeloff_arg_t *cocci_id/* net/sctp/socket.c 5745 */;
	struct socket *cocci_id/* net/sctp/socket.c 5699 */;
	struct socket **cocci_id/* net/sctp/socket.c 5695 */;
	__u8 *cocci_id/* net/sctp/socket.c 5648 */;
	struct sctp_event_subscribe cocci_id/* net/sctp/socket.c 5647 */;
	struct sctp_paddrinfo cocci_id/* net/sctp/socket.c 5563 */;
	struct sctp_status cocci_id/* net/sctp/socket.c 5483 */;
	struct rhashtable_iter cocci_id/* net/sctp/socket.c 5441 */;
	int (*cocci_id/* net/sctp/socket.c 5438 */)(struct sctp_transport *,
						    void *);
	struct sctp_hashbucket *cocci_id/* net/sctp/socket.c 5400 */;
	struct sctp_ep_common *cocci_id/* net/sctp/socket.c 5399 */;
	int (*cocci_id/* net/sctp/socket.c 5395 */)(struct sctp_endpoint *,
						    void *);
	struct rhashtable_iter *cocci_id/* net/sctp/socket.c 5378 */;
	struct sctp_info *cocci_id/* net/sctp/socket.c 5252 */;
	unsigned long cocci_id/* net/sctp/socket.c 4983 */;
	struct sctp_association cocci_id/* net/sctp/socket.c 4959 */;
	bool cocci_id/* net/sctp/socket.c 4926 */;
	int *cocci_id/* net/sctp/socket.c 4926 */;
	struct sctp_ulpevent *cocci_id/* net/sctp/socket.c 4434 */;
	struct sctp_event *cocci_id/* net/sctp/socket.c 4431 */;
	struct sctp_add_streams cocci_id/* net/sctp/socket.c 4263 */;
	struct sctp_reset_streams *cocci_id/* net/sctp/socket.c 4203 */;
	struct sctp_authkey cocci_id/* net/sctp/socket.c 3691 */;
	struct sctp_authkey *cocci_id/* net/sctp/socket.c 3687 */;
	struct sctp_hmacalgo *cocci_id/* net/sctp/socket.c 3647 */;
	struct sctp_authchunk cocci_id/* net/sctp/socket.c 3614 */;
	struct sctp_setpeerprim cocci_id/* net/sctp/socket.c 3334 */;
	struct sctp_data_chunk cocci_id/* net/sctp/socket.c 3301 */;
	struct sockaddr cocci_id/* net/sctp/socket.c 321 */;
	__u32 cocci_id/* net/sctp/socket.c 3177 */;
	int cocci_id/* net/sctp/socket.c 312 */(struct sock *,
						union sctp_addr *);
	struct sctp_sack_info *cocci_id/* net/sctp/socket.c 2705 */;
	sctp_assoc_t cocci_id/* net/sctp/socket.c 254 */;
	struct sockaddr_storage *cocci_id/* net/sctp/socket.c 253 */;
	struct net *cocci_id/* net/sctp/socket.c 2431 */;
	struct sctp_paddrparams *cocci_id/* net/sctp/socket.c 2420 */;
	struct sctp_cmsgs cocci_id/* net/sctp/socket.c 1935 */;
	struct sk_buff *cocci_id/* net/sctp/socket.c 179 */;
	struct sctp_datamsg *cocci_id/* net/sctp/socket.c 1785 */;
	void (*cocci_id/* net/sctp/socket.c 176 */)(struct sk_buff *,
						    struct sock *);
	struct in6_addr cocci_id/* net/sctp/socket.c 1715 */;
	struct in_addr cocci_id/* net/sctp/socket.c 1705 */;
	struct cmsghdr cocci_id/* net/sctp/socket.c 1703 */;
	__be32 cocci_id/* net/sctp/socket.c 1652 */;
	struct sctp_sndrcvinfo *cocci_id/* net/sctp/socket.c 1584 */;
	int cocci_id/* net/sctp/socket.c 1580 */(const struct msghdr *msg,
						 struct sctp_cmsgs *cmsgs);
	struct sctp_outq *cocci_id/* net/sctp/socket.c 154 */;
	void (*cocci_id/* net/sctp/socket.c 151 */)(struct sctp_chunk *);
	unsigned int cocci_id/* net/sctp/socket.c 1476 */;
	struct list_head *cocci_id/* net/sctp/socket.c 1475 */;
	struct sctp_chunk *cocci_id/* net/sctp/socket.c 145 */;
	struct sctp_chunk cocci_id/* net/sctp/socket.c 139 */;
	struct compat_sctp_getaddrs_old cocci_id/* net/sctp/socket.c 1388 */;
	struct sctp_getaddrs_old cocci_id/* net/sctp/socket.c 1382 */;
	struct compat_sctp_getaddrs_old {
		sctp_assoc_t assoc_id;
		s32 addr_num;
		compat_uptr_t addrs;
	} cocci_id/* net/sctp/socket.c 1371 */;
	struct sockaddr __user *cocci_id/* net/sctp/socket.c 1291 */;
	long cocci_id/* net/sctp/socket.c 1156 */;
	struct sctp_af *cocci_id/* net/sctp/socket.c 1154 */;
	union sctp_addr *cocci_id/* net/sctp/socket.c 1153 */;
	void *cocci_id/* net/sctp/socket.c 1152 */;
	struct sctp_association *cocci_id/* net/sctp/socket.c 1151 */;
	struct sctp_transport *cocci_id/* net/sctp/socket.c 1150 */;
	struct sctp_endpoint *cocci_id/* net/sctp/socket.c 1149 */;
	struct sctp_sock *cocci_id/* net/sctp/socket.c 1148 */;
	sctp_assoc_t *cocci_id/* net/sctp/socket.c 1146 */;
	struct sockaddr *cocci_id/* net/sctp/socket.c 1145 */;
	struct sock *cocci_id/* net/sctp/socket.c 1145 */;
	int cocci_id/* net/sctp/socket.c 1145 */;
	__u16 cocci_id/* net/sctp/socket.c 1088 */;
	enum sctp_scope cocci_id/* net/sctp/socket.c 1054 */;
	struct sctp_transport **cocci_id/* net/sctp/socket.c 1049 */;
	const struct sctp_initmsg *cocci_id/* net/sctp/socket.c 1048 */;
	const union sctp_addr *cocci_id/* net/sctp/socket.c 1047 */;
}
