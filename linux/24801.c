cocci_test_suite() {
	struct nf_dccp_net *cocci_id/* net/netfilter/nf_conntrack_standalone.c 993 */;
	struct nf_sctp_net *cocci_id/* net/netfilter/nf_conntrack_standalone.c 970 */;
	struct ct_iter_state {
		struct seq_net_private p;
		struct hlist_nulls_head *hash;
		unsigned int htable_size;
		unsigned int bucket;
		u_int64_t time_now;
	} cocci_id/* net/netfilter/nf_conntrack_standalone.c 97 */;
	struct nf_tcp_net *cocci_id/* net/netfilter/nf_conntrack_standalone.c 940 */;
	struct ctl_table cocci_id/* net/netfilter/nf_conntrack_standalone.c 926 */[];
	enum nf_ct_sysctl_index{NF_SYSCTL_CT_MAX, NF_SYSCTL_CT_COUNT, NF_SYSCTL_CT_BUCKETS, NF_SYSCTL_CT_CHECKSUM, NF_SYSCTL_CT_LOG_INVALID, NF_SYSCTL_CT_EXPECT_MAX, NF_SYSCTL_CT_ACCT, NF_SYSCTL_CT_HELPER,

#ifdef CONFIG_NF_CONNTRACK_EVENTS
 NF_SYSCTL_CT_EVENTS,

#endif


#ifdef CONFIG_NF_CONNTRACK_TIMESTAMP
 NF_SYSCTL_CT_TIMESTAMP,

#endif
 NF_SYSCTL_CT_PROTO_TIMEOUT_GENERIC, NF_SYSCTL_CT_PROTO_TIMEOUT_TCP_SYN_SENT, NF_SYSCTL_CT_PROTO_TIMEOUT_TCP_SYN_RECV, NF_SYSCTL_CT_PROTO_TIMEOUT_TCP_ESTABLISHED, NF_SYSCTL_CT_PROTO_TIMEOUT_TCP_FIN_WAIT, NF_SYSCTL_CT_PROTO_TIMEOUT_TCP_CLOSE_WAIT, NF_SYSCTL_CT_PROTO_TIMEOUT_TCP_LAST_ACK, NF_SYSCTL_CT_PROTO_TIMEOUT_TCP_TIME_WAIT, NF_SYSCTL_CT_PROTO_TIMEOUT_TCP_CLOSE, NF_SYSCTL_CT_PROTO_TIMEOUT_TCP_RETRANS, NF_SYSCTL_CT_PROTO_TIMEOUT_TCP_UNACK, NF_SYSCTL_CT_PROTO_TCP_LOOSE, NF_SYSCTL_CT_PROTO_TCP_LIBERAL, NF_SYSCTL_CT_PROTO_TCP_MAX_RETRANS, NF_SYSCTL_CT_PROTO_TIMEOUT_UDP, NF_SYSCTL_CT_PROTO_TIMEOUT_UDP_STREAM, NF_SYSCTL_CT_PROTO_TIMEOUT_ICMP, NF_SYSCTL_CT_PROTO_TIMEOUT_ICMPV6,

#ifdef CONFIG_NF_CT_PROTO_SCTP
 NF_SYSCTL_CT_PROTO_TIMEOUT_SCTP_CLOSED, NF_SYSCTL_CT_PROTO_TIMEOUT_SCTP_COOKIE_WAIT, NF_SYSCTL_CT_PROTO_TIMEOUT_SCTP_COOKIE_ECHOED, NF_SYSCTL_CT_PROTO_TIMEOUT_SCTP_ESTABLISHED, NF_SYSCTL_CT_PROTO_TIMEOUT_SCTP_SHUTDOWN_SENT, NF_SYSCTL_CT_PROTO_TIMEOUT_SCTP_SHUTDOWN_RECD, NF_SYSCTL_CT_PROTO_TIMEOUT_SCTP_SHUTDOWN_ACK_SENT, NF_SYSCTL_CT_PROTO_TIMEOUT_SCTP_HEARTBEAT_SENT, NF_SYSCTL_CT_PROTO_TIMEOUT_SCTP_HEARTBEAT_ACKED,

#endif


#ifdef CONFIG_NF_CT_PROTO_DCCP
 NF_SYSCTL_CT_PROTO_TIMEOUT_DCCP_REQUEST, NF_SYSCTL_CT_PROTO_TIMEOUT_DCCP_RESPOND, NF_SYSCTL_CT_PROTO_TIMEOUT_DCCP_PARTOPEN, NF_SYSCTL_CT_PROTO_TIMEOUT_DCCP_OPEN, NF_SYSCTL_CT_PROTO_TIMEOUT_DCCP_CLOSEREQ, NF_SYSCTL_CT_PROTO_TIMEOUT_DCCP_CLOSING, NF_SYSCTL_CT_PROTO_TIMEOUT_DCCP_TIMEWAIT, NF_SYSCTL_CT_PROTO_DCCP_LOOSE,

#endif


#ifdef CONFIG_NF_CT_PROTO_GRE
 NF_SYSCTL_CT_PROTO_TIMEOUT_GRE, NF_SYSCTL_CT_PROTO_TIMEOUT_GRE_STREAM,

#endif
 __NF_SYSCTL_CT_LAST_SYSCTL,} cocci_id/* net/netfilter/nf_conntrack_standalone.c 538 */;
	struct ctl_table_header *cocci_id/* net/netfilter/nf_conntrack_standalone.c 536 */;
	size_t *cocci_id/* net/netfilter/nf_conntrack_standalone.c 520 */;
	void __user *cocci_id/* net/netfilter/nf_conntrack_standalone.c 520 */;
	struct ctl_table *cocci_id/* net/netfilter/nf_conntrack_standalone.c 519 */;
	struct seq_net_private cocci_id/* net/netfilter/nf_conntrack_standalone.c 481 */;
	struct ct_iter_state cocci_id/* net/netfilter/nf_conntrack_standalone.c 471 */;
	kgid_t cocci_id/* net/netfilter/nf_conntrack_standalone.c 468 */;
	kuid_t cocci_id/* net/netfilter/nf_conntrack_standalone.c 467 */;
	struct proc_dir_entry *cocci_id/* net/netfilter/nf_conntrack_standalone.c 466 */;
	const struct seq_operations cocci_id/* net/netfilter/nf_conntrack_standalone.c 457 */;
	const struct ip_conntrack_stat *cocci_id/* net/netfilter/nf_conntrack_standalone.c 426 */;
	unsigned int cocci_id/* net/netfilter/nf_conntrack_standalone.c 425 */;
	void cocci_id/* net/netfilter/nf_conntrack_standalone.c 418 */;
	int cocci_id/* net/netfilter/nf_conntrack_standalone.c 406 */;
	struct net *cocci_id/* net/netfilter/nf_conntrack_standalone.c 405 */;
	loff_t *cocci_id/* net/netfilter/nf_conntrack_standalone.c 403 */;
	struct seq_file *cocci_id/* net/netfilter/nf_conntrack_standalone.c 403 */;
	void *cocci_id/* net/netfilter/nf_conntrack_standalone.c 403 */;
	const struct nf_conntrack_tuple *cocci_id/* net/netfilter/nf_conntrack_standalone.c 35 */;
	const struct nf_conntrack_l4proto *cocci_id/* net/netfilter/nf_conntrack_standalone.c 297 */;
	struct nf_conn *cocci_id/* net/netfilter/nf_conntrack_standalone.c 296 */;
	struct nf_conntrack_tuple_hash *cocci_id/* net/netfilter/nf_conntrack_standalone.c 295 */;
	struct nf_conn_counter *cocci_id/* net/netfilter/nf_conntrack_standalone.c 278 */;
	struct nf_conn_acct *cocci_id/* net/netfilter/nf_conntrack_standalone.c 277 */;
	bool cocci_id/* net/netfilter/nf_conntrack_standalone.c 27 */;
	u16 cocci_id/* net/netfilter/nf_conntrack_standalone.c 249 */;
	const char *cocci_id/* net/netfilter/nf_conntrack_standalone.c 249 */;
	unsigned long long cocci_id/* net/netfilter/nf_conntrack_standalone.c 238 */;
	s64 cocci_id/* net/netfilter/nf_conntrack_standalone.c 227 */;
	struct nf_conn_tstamp *cocci_id/* net/netfilter/nf_conntrack_standalone.c 226 */;
	const struct nf_conn *cocci_id/* net/netfilter/nf_conntrack_standalone.c 223 */;
	const struct nf_conntrack_zone *cocci_id/* net/netfilter/nf_conntrack_standalone.c 197 */;
	char *cocci_id/* net/netfilter/nf_conntrack_standalone.c 177 */;
	u32 cocci_id/* net/netfilter/nf_conntrack_standalone.c 176 */;
	loff_t cocci_id/* net/netfilter/nf_conntrack_standalone.c 138 */;
	void __exit cocci_id/* net/netfilter/nf_conntrack_standalone.c 1201 */;
	int __init cocci_id/* net/netfilter/nf_conntrack_standalone.c 1164 */;
	struct nf_conntrack_net cocci_id/* net/netfilter/nf_conntrack_standalone.c 1161 */;
	struct pernet_operations cocci_id/* net/netfilter/nf_conntrack_standalone.c 1157 */;
	struct list_head *cocci_id/* net/netfilter/nf_conntrack_standalone.c 1147 */;
	struct ct_iter_state *cocci_id/* net/netfilter/nf_conntrack_standalone.c 107 */;
	struct hlist_nulls_node *cocci_id/* net/netfilter/nf_conntrack_standalone.c 105 */;
	struct nf_udp_net *cocci_id/* net/netfilter/nf_conntrack_standalone.c 1025 */;
	struct nf_gre_net *cocci_id/* net/netfilter/nf_conntrack_standalone.c 1016 */;
}
