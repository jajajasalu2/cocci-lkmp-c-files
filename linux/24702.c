cocci_test_suite() {
	char *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 970 */;
	struct ip_vs_sync_conn_v0 *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 966 */;
	struct ip_vs_sync_mesg_v0 *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 965 */;
	const char *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 962 */;
	struct ip_vs_proto_data *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 948 */;
	struct ip_vs_sync_conn_options {
		struct ip_vs_seq in_seq;
		struct ip_vs_seq out_seq;
	} cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 90 */;
	struct ip_vs_dest *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 852 */;
	struct ip_vs_sync_conn_options *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 850 */;
	__u32 cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 849 */;
	__be16 cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 848 */;
	char cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 814 */[IP_VS_PENAME_MAXLEN + 1];
	const union nf_inet_addr *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 800 */;
	__u8 *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 794 */;
	unsigned int cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 794 */;
	struct ip_vs_conn_param *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 793 */;
	union ip_vs_sync_conn *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 792 */;
	struct ip_vs_seq cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 755 */;
	struct ip_vs_sync_conn_v0 {
		__u8 reserved;
		__u8 protocol;
		__be16 cport;
		__be16 vport;
		__be16 dport;
		__be32 caddr;
		__be32 vaddr;
		__be32 daddr;
		__be16 flags;
		__be16 state;
	} cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 71 */;
	struct lock_class_key cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 66 */;
	long cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 507 */;
	bool cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 445 */;
	struct ip_vs_conn *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 445 */;
	unsigned long cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 394 */;
	struct netns_ipvs *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 393 */;
	struct ipvs_master_sync_state *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 393 */;
	struct ip_vs_sync_buff *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 392 */;
	unsigned char *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 352 */;
	struct ip_vs_sync_buff cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 336 */;
	struct ip_vs_seq *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 299 */;
	struct ip_vs_sync_buff {
		struct list_head list;
		unsigned long firstuse;
		struct ip_vs_sync_mesg *mesg;
		unsigned char *head;
		unsigned char *end;
	} cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 273 */;
	union ipvs_sockaddr {
		struct sockaddr_in in;
		struct sockaddr_in6 in6;
	} cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 268 */;
	struct ip_vs_sync_mesg {
		__u8 reserved;
		__u8 syncid;
		__be16 size;
		__u8 nr_conns;
		__s8 version;
		__u16 spare;
	} cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 258 */;
	struct ip_vs_sync_mesg_v0 {
		__u8 nr_conns;
		__u8 syncid;
		__be16 size;
	} cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 249 */;
	struct ip_vs_sync_conn_v0 cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 206 */;
	int __net_init cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 2031 */;
	struct ip_vs_sync_thread_data {
		struct task_struct *task;
		struct netns_ipvs *ipvs;
		struct socket *sock;
		char *buf;
		int id;
	} cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 197 */;
	struct ip_vs_sync_thread_data cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1855 */;
	struct iphdr cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1804 */;
	struct udphdr cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1803 */;
	struct ipv6hdr cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1803 */;
	u16 cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1759 */;
	int (*cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1756 */)(void *data);
	struct task_struct *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1753 */;
	struct ip_vs_sync_thread_data *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1752 */;
	union ip_vs_sync_conn {
		struct ip_vs_sync_v4 v4;
		struct ip_vs_sync_v6 v6;
	} cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 175 */;
	struct ipvs_master_sync_state cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1636 */;
	struct work_struct *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1633 */;
	struct kvec cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1617 */;
	struct msghdr cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1616 */;
	size_t cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1592 */;
	void *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1589 */;
	struct ip_vs_sync_v6 {
		__u8 type;
		__u8 protocol;
		__be16 ver_size;
		__be32 flags;
		__be16 state;
		__be16 cport;
		__be16 vport;
		__be16 dport;
		__be32 fwmark;
		__be32 timeout;
		struct in6_addr caddr;
		struct in6_addr vaddr;
		struct in6_addr daddr;
	} cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 155 */;
	union ipvs_sockaddr cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1534 */;
	struct socket **cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1531 */;
	struct sockaddr_in6 cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1454 */;
	struct ipvs_sync_daemon_cfg *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1451 */;
	union ipvs_sockaddr *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1450 */;
	int *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1450 */;
	void cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1450 */;
	struct sockaddr *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1447 */;
	struct sockaddr_in cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1432 */;
	__be32 cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1431 */;
	struct socket *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1429 */;
	struct net_device *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1429 */;
	int cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1429 */;
	struct in6_addr *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1413 */;
	struct in_addr cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1398 */;
	struct ip_mreqn cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1394 */;
	struct sock *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1392 */;
	struct in_addr *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1392 */;
	struct ipv6_pinfo *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1374 */;
	struct inet_sock *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1364 */;
	struct ip_vs_sync_v4 {
		__u8 type;
		__u8 protocol;
		__be16 ver_size;
		__be32 flags;
		__be16 state;
		__be16 cport;
		__be16 vport;
		__be16 dport;
		__be32 fwmark;
		__be32 timeout;
		__be32 caddr;
		__be32 vaddr;
		__be32 daddr;
	} cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 133 */;
	u_char cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1301 */;
	struct ip_vs_sync_mesg cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1232 */;
	struct ip_vs_sync_mesg_v0 cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1214 */;
	struct ip_vs_sync_mesg *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1210 */;
	const size_t cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1208 */;
	union nf_inet_addr *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1182 */;
	struct ip_vs_sync_v4 cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1098 */;
	struct ip_vs_sync_v6 cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1090 */;
	struct ip_vs_conn_param cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1078 */;
	struct ip_vs_protocol *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1077 */;
	__u8 **cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1054 */;
	unsigned int *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1053 */;
	struct ip_vs_sync_conn_options cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1039 */;
	__u32 *cocci_id/* net/netfilter/ipvs/ip_vs_sync.c 1032 */;
}
