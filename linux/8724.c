cocci_test_suite() {
	struct qed_tunn_params cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 984 */;
	struct udp_tunnel_info *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 981 */;
	struct qede_arfs {
#define QEDE_ARFS_BUCKET_HEAD (edev, idx)(&(edev)->arfs->arfs_hl_head[idx])
#define QEDE_ARFS_POLL_COUNT 100
#define QEDE_RFS_FLW_BITSHIFT (4)
#define QEDE_RFS_FLW_MASK ((1 << QEDE_RFS_FLW_BITSHIFT) - 1)
						struct hlist_head arfs_hl_head[1 << QEDE_RFS_FLW_BITSHIFT];
		spinlock_t arfs_list_lock;
		unsigned long *arfs_fltr_bmap;
		int filter_count;
		enum qed_filter_config_mode mode;
	} cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 97 */;
	struct qede_reload_args cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 959 */;
	netdev_features_t cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 937 */;
	struct qede_reload_args *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 932 */;
	struct qede_vlan *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 799 */;
	struct qed_dev_eth_info *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 798 */;
	struct qede_arfs_fltr_node {
#define QEDE_FLTR_VALID 0
		unsigned long state;
		void *data;
		dma_addr_t mapping;
		int buf_len;
		struct qede_arfs_tuple tuple;
		u32 flow_id;
		u64 sw_id;
		u16 rxq_id;
		u16 next_rxq_id;
		u8 vfid;
		bool filter_op;
		bool used;
		u8 fw_rc;
		bool b_is_drop;
		struct hlist_node node;
	} cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 69 */;
	struct qed_update_vport_params *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 672 */;
	unsigned char cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 642 */[ETH_ALEN];
	u8 *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 587 */;
	struct qed_update_vport_rss_params *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 587 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 454 */;
	u16 cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 448 */;
	struct qede_arfs_tuple {
		union {
			__be32 src_ipv4;
			struct in6_addr src_ipv6;
		};
		union {
			__be32 dst_ipv4;
			struct in6_addr dst_ipv6;
		};
		__be16 src_port;
		__be16 dst_port;
		__be16 eth_proto;
		u8 ip_proto;
		enum qed_filter_config_mode mode;
		bool (*ip_comp)(struct qede_arfs_tuple *a, struct qede_arfs_tuple *b);
		void (*build_hdr)(struct qede_arfs_tuple *t, void *header);
		void (*stringify)(struct qede_arfs_tuple *t, void *buffer);
	} cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 42 */;
	const struct sk_buff *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 410 */;
	struct hlist_head *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 410 */;
	struct in6_addr cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 399 */;
	struct in6_addr *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 398 */;
	bool cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 388 */;
	long cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 349 */;
	u8 cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 211 */;
	void *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 211 */;
	void cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 211 */;
	struct qede_arfs_tuple cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 2097 */;
	struct qede_arfs_fltr_node *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 2096 */;
	struct ethtool_rx_flow_spec *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 2095 */;
	struct qede_dev *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 2093 */;
	struct ethtool_rxnfc *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 2093 */;
	int cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 2093 */;
	struct ethtool_rx_flow_rule *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 2052 */;
	struct ethtool_rx_flow_spec_input cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 2051 */;
	enum qed_filter_config_mode cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 203 */;
	__u32 cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 2019 */;
	struct flow_action *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 2017 */;
	struct flow_cls_offload *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1946 */;
	__be16 cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1945 */;
	struct flow_match_basic cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1925 */;
	struct flow_dissector *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1901 */;
	struct flow_match_ipv4_addrs cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1838 */;
	struct flow_match_ipv6_addrs cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1811 */;
	struct flow_match_ports cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1785 */;
	struct flow_rule *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1781 */;
	const struct flow_action_entry *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1751 */;
	u64 cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1707 */;
	struct hlist_node *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1673 */;
	struct udphdr cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1573 */;
	struct tcphdr cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1570 */;
	struct ipv6hdr *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1560 */;
	struct ipv6hdr cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1559 */;
	const char *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1532 */;
	struct ethhdr *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1514 */;
	struct iphdr *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1513 */;
	struct iphdr cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1512 */;
	__be16 *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1512 */;
	struct qede_arfs_tuple *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1509 */;
	char cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 137 */[QEDE_FILTER_PRINT_MAX_LEN];
	u32 *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1366 */;
	size_t cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1274 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1272 */;
	unsigned char *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1271 */;
	struct qed_filter_params cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1270 */;
	enum qed_filter_rx_mode_type cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1268 */;
	struct net_device *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1266 */;
	enum qed_filter_rx_mode_type *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1204 */;
	struct qed_ntuple_filter_params cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 118 */;
	const struct qed_eth_ops *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 117 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1150 */;
	enum qed_filter_xcast_params_type cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1130 */;
	struct netdev_bpf *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1114 */;
	struct bpf_prog *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_filter.c 1095 */;
}
