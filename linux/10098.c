cocci_test_suite() {
	u32 *cocci_id/* drivers/net/gtp.c 90 */;
	u64 cocci_id/* drivers/net/gtp.c 88 */;
	u32 cocci_id/* drivers/net/gtp.c 88 */;
	struct net *cocci_id/* drivers/net/gtp.c 878 */;
	void cocci_id/* drivers/net/gtp.c 86 */(struct pdp_ctx *pctx);
	struct nlattr *cocci_id/* drivers/net/gtp.c 835 */[];
	struct gtp_net {
		struct list_head gtp_dev_list;
	} cocci_id/* drivers/net/gtp.c 80 */;
	struct socket *cocci_id/* drivers/net/gtp.c 795 */;
	struct udp_tunnel_sock_cfg cocci_id/* drivers/net/gtp.c 794 */;
	struct hlist_head cocci_id/* drivers/net/gtp.c 769 */;
	struct gtp_dev cocci_id/* drivers/net/gtp.c 756 */;
	struct rtnl_link_ops cocci_id/* drivers/net/gtp.c 752 */;
	const struct net_device *cocci_id/* drivers/net/gtp.c 739 */;
	size_t cocci_id/* drivers/net/gtp.c 734 */;
	const struct nla_policy cocci_id/* drivers/net/gtp.c 718 */[IFLA_GTP_MAX + 1];
	struct list_head *cocci_id/* drivers/net/gtp.c 704 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/gtp.c 655 */;
	int cocci_id/* drivers/net/gtp.c 643 */(struct gtp_dev *gtp,
						struct nlattr *data[]);
	int cocci_id/* drivers/net/gtp.c 642 */(struct gtp_dev *gtp,
						int hsize);
	struct gtp_dev {
		struct list_head list;
		struct sock *sk0;
		struct sock *sk1u;
		struct net_device *dev;
		unsigned int role;
		unsigned int hash_size;
		struct hlist_head *tid_hash;
		struct hlist_head *addr_hash;
	} cocci_id/* drivers/net/gtp.c 64 */;
	const struct net_device_ops cocci_id/* drivers/net/gtp.c 612 */;
	struct gtp_pktinfo cocci_id/* drivers/net/gtp.c 567 */;
	netdev_tx_t cocci_id/* drivers/net/gtp.c 564 */;
	struct iphdr cocci_id/* drivers/net/gtp.c 530 */;
	__be16 cocci_id/* drivers/net/gtp.c 490 */;
	struct iphdr *cocci_id/* drivers/net/gtp.c 489 */;
	struct flowi4 cocci_id/* drivers/net/gtp.c 488 */;
	struct rtable *cocci_id/* drivers/net/gtp.c 487 */;
	struct gtp_pktinfo *cocci_id/* drivers/net/gtp.c 483 */;
	struct net_device *cocci_id/* drivers/net/gtp.c 482 */;
	struct flowi4 *cocci_id/* drivers/net/gtp.c 471 */;
	struct gtp_pktinfo {
		struct sock *sk;
		struct iphdr *iph;
		struct flowi4 fl4;
		struct rtable *rt;
		struct pdp_ctx *pctx;
		struct net_device *dev;
		__be16 gtph_port;
	} cocci_id/* drivers/net/gtp.c 444 */;
	struct gtp1_header *cocci_id/* drivers/net/gtp.c 424 */;
	struct gtp0_header *cocci_id/* drivers/net/gtp.c 407 */;
	int cocci_id/* drivers/net/gtp.c 406 */;
	struct sk_buff *cocci_id/* drivers/net/gtp.c 404 */;
	const struct sock *cocci_id/* drivers/net/gtp.c 391 */;
	struct pcpu_sw_netstats cocci_id/* drivers/net/gtp.c 375 */;
	struct pdp_ctx {
		struct hlist_node hlist_tid;
		struct hlist_node hlist_addr;
		union {
			struct {
				u64 tid;
				u16 flow;
			} v0;
			struct {
				u32 i_tei;
				u32 o_tei;
			} v1;
		} u;
		u8 gtp_version;
		u16 af;
		struct in_addr ms_addr_ip4;
		struct in_addr peer_addr_ip4;
		struct sock *sk;
		struct net_device *dev;
		atomic_t tx_seq;
		struct rcu_head rcu_head;
	} cocci_id/* drivers/net/gtp.c 36 */;
	struct gtp_dev *cocci_id/* drivers/net/gtp.c 289 */;
	struct sock *cocci_id/* drivers/net/gtp.c 287 */;
	void cocci_id/* drivers/net/gtp.c 287 */;
	struct gtp1_header cocci_id/* drivers/net/gtp.c 248 */;
	struct gtp0_header cocci_id/* drivers/net/gtp.c 221 */;
	struct udphdr cocci_id/* drivers/net/gtp.c 220 */;
	unsigned int cocci_id/* drivers/net/gtp.c 220 */;
	struct pcpu_sw_netstats *cocci_id/* drivers/net/gtp.c 185 */;
	bool cocci_id/* drivers/net/gtp.c 172 */;
	void __exit cocci_id/* drivers/net/gtp.c 1399 */;
	struct pdp_ctx cocci_id/* drivers/net/gtp.c 1386 */;
	int __init cocci_id/* drivers/net/gtp.c 1367 */;
	struct gtp_net cocci_id/* drivers/net/gtp.c 1364 */;
	struct pernet_operations cocci_id/* drivers/net/gtp.c 1360 */;
	void __net_exit cocci_id/* drivers/net/gtp.c 1346 */;
	int __net_init cocci_id/* drivers/net/gtp.c 1338 */;
	const struct genl_ops cocci_id/* drivers/net/gtp.c 1304 */[];
	const struct nla_policy cocci_id/* drivers/net/gtp.c 1292 */[GTPA_MAX + 1];
	unsigned long cocci_id/* drivers/net/gtp.c 1277 */;
	struct gtp_net *cocci_id/* drivers/net/gtp.c 1252 */;
	struct netlink_callback *cocci_id/* drivers/net/gtp.c 1246 */;
	void *cocci_id/* drivers/net/gtp.c 1174 */;
	struct genl_family cocci_id/* drivers/net/gtp.c 1169 */;
	struct genl_info *cocci_id/* drivers/net/gtp.c 1139 */;
	__be32 cocci_id/* drivers/net/gtp.c 1109 */;
	struct hlist_head *cocci_id/* drivers/net/gtp.c 107 */;
	struct pdp_ctx *cocci_id/* drivers/net/gtp.c 105 */;
	struct rcu_head *cocci_id/* drivers/net/gtp.c 1024 */;
}
