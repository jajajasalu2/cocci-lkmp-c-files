cocci_test_suite() {
	const u8 *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 999 */;
	u32 cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 998 */;
	struct ofdpa_flow_tbl_key cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 990 */;
	struct fib_info *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 974 */;
	__be32 cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 971 */;
	enum rocker_of_dpa_table_id cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 920 */;
	struct ofdpa_flow_tbl_entry {
		struct hlist_node entry;
		u32 cmd;
		u64 cookie;
		struct ofdpa_flow_tbl_key key;
		size_t key_len;
		u32 key_crc32;
		struct fib_info *fi;
	} cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 92 */;
	size_t cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 761 */;
	struct ofdpa_group_tbl_entry *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 675 */;
	const struct ofdpa_group_tbl_entry *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 621 */;
	struct rocker_tlv *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 510 */;
	const struct ofdpa_flow_tbl_entry *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 509 */;
	void *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 507 */;
	struct rocker_desc_info *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 506 */;
	const struct rocker_port *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 505 */;
	int cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 505 */;
	bool cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 295 */;
	struct ofdpa_port cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2808 */;
	struct ofdpa cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2807 */;
	struct rocker_world_ops cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2805 */;
	struct fib_nh *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2788 */;
	struct ofdpa_flow_tbl_entry *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2778 */;
	struct rocker *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2774 */;
	const char *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 274 */;
	const struct fib_entry_notifier_info *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2733 */;
	const unsigned char *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2710 */;
	__be32 *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2704 */;
	struct ofdpa_flow_tbl_key {
		u32 priority;
		enum rocker_of_dpa_table_id tbl_id;
		union {
			struct {
				u32 in_pport;
				u32 in_pport_mask;
				enum rocker_of_dpa_table_id goto_tbl;
			} ig_port;
			struct {
				u32 in_pport;
				__be16 vlan_id;
				__be16 vlan_id_mask;
				enum rocker_of_dpa_table_id goto_tbl;
				bool untagged;
				__be16 new_vlan_id;
			} vlan;
			struct {
				u32 in_pport;
				u32 in_pport_mask;
				__be16 eth_type;
				u8 eth_dst[ETH_ALEN];
				u8 eth_dst_mask[ETH_ALEN];
				__be16 vlan_id;
				__be16 vlan_id_mask;
				enum rocker_of_dpa_table_id goto_tbl;
				bool copy_to_cpu;
			} term_mac;
			struct {
				__be16 eth_type;
				__be32 dst4;
				__be32 dst4_mask;
				enum rocker_of_dpa_table_id goto_tbl;
				u32 group_id;
			} ucast_routing;
			struct {
				u8 eth_dst[ETH_ALEN];
				u8 eth_dst_mask[ETH_ALEN];
				int has_eth_dst;
				int has_eth_dst_mask;
				__be16 vlan_id;
				u32 tunnel_id;
				enum rocker_of_dpa_table_id goto_tbl;
				u32 group_id;
				bool copy_to_cpu;
			} bridge;
			struct {
				u32 in_pport;
				u32 in_pport_mask;
				u8 eth_src[ETH_ALEN];
				u8 eth_src_mask[ETH_ALEN];
				u8 eth_dst[ETH_ALEN];
				u8 eth_dst_mask[ETH_ALEN];
				__be16 eth_type;
				__be16 vlan_id;
				__be16 vlan_id_mask;
				u8 ip_proto;
				u8 ip_proto_mask;
				u8 ip_tos;
				u8 ip_tos_mask;
				u32 group_id;
			} acl;
		};
	} cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 27 */;
	struct net_device *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2597 */;
	const struct switchdev_obj_port_vlan *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2540 */;
	struct switchdev_trans *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2524 */;
	struct rocker_port *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2522 */;
	unsigned long *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2514 */;
	bool *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 248 */;
	struct ofdpa_neigh_tbl_entry *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2384 */;
	struct ofdpa_internal_vlan_tbl_entry *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2383 */;
	const struct ofdpa_port *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2313 */;
	const struct fib_nh *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2271 */;
	enum{OFDPA_PRIORITY_UNKNOWN=0, OFDPA_PRIORITY_IG_PORT=1, OFDPA_PRIORITY_VLAN=1, OFDPA_PRIORITY_TERM_MAC_UCAST=0, OFDPA_PRIORITY_TERM_MAC_MCAST=1, OFDPA_PRIORITY_BRIDGING_VLAN_DFLT_EXACT=1, OFDPA_PRIORITY_BRIDGING_VLAN_DFLT_WILD=2, OFDPA_PRIORITY_BRIDGING_VLAN=3, OFDPA_PRIORITY_BRIDGING_TENANT_DFLT_EXACT=1, OFDPA_PRIORITY_BRIDGING_TENANT_DFLT_WILD=2, OFDPA_PRIORITY_BRIDGING_TENANT=3, OFDPA_PRIORITY_ACL_CTRL=3, OFDPA_PRIORITY_ACL_NORMAL=2, OFDPA_PRIORITY_ACL_DFLT=1,} cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 221 */;
	bool cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 2089 */[OFDPA_CTRL_MAX];
	const u8 cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 208 */[ETH_ALEN];
	unsigned long cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1988 */;
	struct hlist_node *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1987 */;
	struct ofdpa_fdb_tbl_entry *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1986 */;
	struct ofdpa_port *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1985 */;
	struct ofdpa *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1984 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1982 */;
	void cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1982 */;
	struct ofdpa_port {
		struct ofdpa *ofdpa;
		struct rocker_port *rocker_port;
		struct net_device *dev;
		u32 pport;
		struct net_device *bridge_dev;
		__be16 internal_vlan_id;
		int stp_state;
		u32 brport_flags;
		unsigned long ageing_time;
		bool ctrls[OFDPA_CTRL_MAX];
		unsigned long vlan_bitmap[OFDPA_VLAN_BITMAP_LEN];
	} cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 193 */;
	const struct ofdpa_fdb_tbl_entry *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1885 */;
	const struct ofdpa *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1884 */;
	struct ofdpa_fdb_learn_work *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1845 */;
	struct switchdev_notifier_fdb_info cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1825 */;
	struct ofdpa_fdb_learn_work cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1822 */;
	const struct ofdpa_fdb_learn_work *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1821 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1819 */;
	struct ofdpa_fdb_learn_work {
		struct work_struct work;
		struct ofdpa_port *ofdpa_port;
		int flags;
		u8 addr[ETH_ALEN];
		u16 vid;
	} cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1811 */;
	struct ofdpa {
		struct rocker *rocker;
		DECLARE_HASHTABLE(flow_tbl,16);
		spinlock_t flow_tbl_lock;
		u64 flow_tbl_next_cookie;
		DECLARE_HASHTABLE(group_tbl,16);
		spinlock_t group_tbl_lock;
		struct timer_list fdb_cleanup_timer;
		DECLARE_HASHTABLE(fdb_tbl,16);
		spinlock_t fdb_tbl_lock;
		unsigned long internal_vlan_bitmap[OFDPA_INTERNAL_VLAN_BITMAP_LEN];
		DECLARE_HASHTABLE(internal_vlan_tbl,8);
		spinlock_t internal_vlan_tbl_lock;
		DECLARE_HASHTABLE(neigh_tbl,16);
		spinlock_t neigh_tbl_lock;
		u32 neigh_tbl_next_index;
		unsigned long ageing_time;
		bool fib_aborted;
	} cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 173 */;
	u16 cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1710 */;
	const struct ofdpa_ctrl *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1708 */;
	enum{OFDPA_CTRL_LINK_LOCAL_MCAST, OFDPA_CTRL_LOCAL_ARP, OFDPA_CTRL_IPV4_MCAST, OFDPA_CTRL_IPV6_MCAST, OFDPA_CTRL_DFLT_BRIDGING, OFDPA_CTRL_DFLT_OVS, OFDPA_CTRL_MAX,} cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 157 */;
	struct ofdpa_ctrl {
		const u8 *eth_dst;
		const u8 *eth_dst_mask;
		__be16 eth_type;
		bool acl;
		bool bridge;
		bool term;
		bool copy_to_cpu;
	} cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1543 */[];
	struct ofdpa_neigh_tbl_entry {
		struct hlist_node entry;
		__be32 ip_addr;
		struct net_device *dev;
		u32 ref_count;
		u32 index;
		u8 eth_dst[ETH_ALEN];
		bool ttl_check;
	} cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 147 */;
	unsigned int cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1448 */;
	struct ofdpa_internal_vlan_tbl_entry {
		struct hlist_node entry;
		int ifindex;
		u32 ref_count;
		__be16 vlan_id;
	} cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 140 */;
	u32 *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1377 */;
	struct neighbour *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1352 */;
	struct ofdpa_fdb_tbl_entry {
		struct hlist_node entry;
		u32 key_crc32;
		bool learned;
		unsigned long touched;
		struct ofdpa_fdb_tbl_key {
			struct ofdpa_port *ofdpa_port;
			u8 addr[ETH_ALEN];
			__be16 vlan_id;
		} key;
	} cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 128 */;
	const u32 *cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1165 */;
	struct ofdpa_group_tbl_entry {
		struct hlist_node entry;
		u32 cmd;
		u32 group_id;
		u16 group_count;
		u32 *group_ids;
		union {
			struct {
				u8 pop_vlan;
			} l2_interface;
			struct {
				u8 eth_src[ETH_ALEN];
				u8 eth_dst[ETH_ALEN];
				__be16 vlan_id;
				u32 group_id;
			} l2_rewrite;
			struct {
				u8 eth_src[ETH_ALEN];
				u8 eth_dst[ETH_ALEN];
				__be16 vlan_id;
				bool ttl_check;
				u32 group_id;
			} l3_unicast;
		};
	} cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 102 */;
	u8 cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1002 */;
	__be16 cocci_id/* drivers/net/ethernet/rocker/rocker_ofdpa.c 1001 */;
}
