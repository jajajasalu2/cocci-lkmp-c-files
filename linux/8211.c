cocci_test_suite() {
	u16 cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 974 */;
	const struct rocker_tlv *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 972 */[ROCKER_TLV_EVENT_MAX + 1];
	__be16 cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 950 */;
	const struct rocker_tlv *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 946 */[ROCKER_TLV_EVENT_MAC_VLAN_MAX + 1];
	int cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 939 */(struct rocker_port *rocker_port,
									const unsigned char *addr,
									__be16 vlan_id);
	const struct rocker_tlv *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 912 */[ROCKER_TLV_EVENT_LINK_CHANGED_MAX + 1];
	irqreturn_t cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 874 */;
	const struct rocker_tlv *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 743 */[ROCKER_TLV_RX_MAX + 1];
	const struct rocker_tlv **cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 726 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 703 */;
	struct net_device *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 702 */;
	char *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 501 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 500 */;
	struct rocker_desc *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 499 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 493 */;
	struct rocker_wait {
		wait_queue_head_t wait;
		bool done;
		bool nowait;
	} cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 48 */;
	struct rocker_desc cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 469 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 43 */[];
	unsigned int cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 428 */;
	const char cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 41 */[];
	struct rocker_dma_ring_info *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 387 */;
	const struct rocker_dma_ring_info *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 368 */;
	uintptr_t cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 358 */;
	void __exit cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 3224 */;
	int __init cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 3207 */;
	struct neighbour *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 3178 */;
	struct notifier_block cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 3165 */;
	struct netdev_notifier_changeupper_info *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 3134 */;
	struct notifier_block *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 3130 */;
	struct rocker_walk_data cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 3118 */;
	struct rocker_walk_data *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 3104 */;
	u32 cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 310 */;
	size_t cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 310 */;
	struct rocker_walk_data {
		struct rocker *rocker;
		struct rocker_port *port;
	} cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 3097 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 3071 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2886 */;
	struct switchdev_notifier_port_obj_info *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2841 */;
	struct rocker_switchdev_event_work *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2794 */;
	struct rocker_switchdev_event_work cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2755 */;
	struct switchdev_notifier_fdb_info cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2743 */;
	struct switchdev_notifier_fdb_info *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2741 */;
	struct rocker_switchdev_event_work {
		struct work_struct work;
		struct switchdev_notifier_fdb_info fdb_info;
		struct rocker_port *rocker_port;
		unsigned long event;
	} cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2732 */;
	struct switchdev_notifier_port_attr_info *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2721 */;
	const struct net_device *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2714 */;
	struct rocker_wait cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 271 */;
	const struct pci_dev *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 270 */;
	struct msix_entry cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2689 */;
	const struct rocker *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 268 */;
	int cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 268 */;
	bool cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2540 */;
	u64 cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2539 */;
	const struct rocker_port *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2536 */;
	void cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2536 */;
	struct rocker_port cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2490 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2488 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2395 */;
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2373 */;
	u64 *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2334 */;
	const struct rocker_tlv *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2331 */[ROCKER_TLV_CMD_PORT_STATS_MAX + 1];
	struct rocker_port_stats {
		char str[ETH_GSTRING_LEN];
		int type;
	} cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2268 */[];
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2262 */;
	struct fib_entry_notifier_info *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2207 */;
	struct fib_notifier_info *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2190 */;
	struct rocker_fib_event_work *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2189 */;
	struct rocker cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2188 */;
	struct fib_rule *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2156 */;
	struct rocker_fib_event_work cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2154 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2151 */;
	struct rocker_fib_event_work {
		struct work_struct work;
		union {
			struct fib_entry_notifier_info fen_info;
			struct fib_rule_notifier_info fr_info;
		};
		struct rocker *rocker;
		unsigned long event;
	} cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2141 */;
	const struct switchdev_obj *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2102 */;
	struct switchdev_trans *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2067 */;
	const struct switchdev_attr *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2066 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2049 */;
	struct netdev_phys_item_id *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2038 */;
	struct port_name cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 2003 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1963 */;
	const skb_frag_t *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1931 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1899 */;
	const struct rocker_tlv *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1848 */[ROCKER_TLV_TX_FRAG_ATTR_MAX + 1];
	const struct rocker_tlv *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1840 */[ROCKER_TLV_TX_MAX + 1];
	struct rocker_world_ops *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1762 */;
	const struct fib_entry_notifier_info *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1741 */;
	const struct switchdev_obj_port_vlan *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1638 */;
	unsigned long *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1567 */;
	struct rocker_world_ops *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1417 */[];
	struct ethtool_link_ksettings cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1380 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1378 */;
	u8 *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1369 */;
	unsigned char *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1360 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1351 */;
	bool *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1330 */;
	int *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1306 */;
	const unsigned char *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1282 */;
	const char *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1216 */;
	struct port_name *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1213 */;
	struct port_name {
		char *buf;
		size_t len;
	} cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1201 */;
	const struct rocker_tlv *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1158 */;
	u8 cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1120 */;
	const struct rocker_tlv *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1118 */[ROCKER_TLV_CMD_PORT_SETTINGS_MAX + 1];
	const struct rocker_tlv *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1117 */[ROCKER_TLV_CMD_MAX + 1];
	const struct rocker_desc_info *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1113 */;
	struct rocker_tlv *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1096 */;
	unsigned long cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1049 */;
	struct rocker_wait *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1048 */;
	struct rocker_desc_info *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1047 */;
	struct rocker *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1046 */;
	rocker_cmd_proc_cb_t cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1044 */;
	rocker_cmd_prep_cb_t cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1043 */;
	void *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1043 */;
	struct rocker_port *cocci_id/* drivers/net/ethernet/rocker/rocker_main.c 1042 */;
}