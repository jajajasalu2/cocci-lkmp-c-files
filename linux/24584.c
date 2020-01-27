cocci_test_suite() {
	u8 cocci_id/* net/core/ethtool.c 992 */[NETDEV_RSS_KEY_LEN]__read_mostly;
	struct ethtool_rxnfc *cocci_id/* net/core/ethtool.c 976 */;
	size_t cocci_id/* net/core/ethtool.c 907 */;
	struct ethtool_rxnfc cocci_id/* net/core/ethtool.c 906 */;
	struct ethtool_sset_info cocci_id/* net/core/ethtool.c 818 */;
	struct ethtool_drvinfo cocci_id/* net/core/ethtool.c 763 */;
	struct ethtool_cmd cocci_id/* net/core/ethtool.c 711 */;
	s8 cocci_id/* net/core/ethtool.c 634 */;
	struct ethtool_link_ksettings cocci_id/* net/core/ethtool.c 614 */;
	const char cocci_id/* net/core/ethtool.c 57 */[NETDEV_FEATURE_COUNT][ETH_GSTRING_LEN];
	struct ethtool_link_usettings cocci_id/* net/core/ethtool.c 563 */;
	const void __user *cocci_id/* net/core/ethtool.c 561 */;
	struct ethtool_link_ksettings *cocci_id/* net/core/ethtool.c 545 */;
	int cocci_id/* net/core/ethtool.c 544 */;
	struct ethtool_link_usettings {
		struct ethtool_link_settings base;
		struct {
			__u32 supported[__ETHTOOL_LINK_MODE_MASK_NU32];
			__u32 advertising[__ETHTOOL_LINK_MODE_MASK_NU32];
			__u32 lp_advertising[__ETHTOOL_LINK_MODE_MASK_NU32];
		} link_modes;
	} cocci_id/* net/core/ethtool.c 534 */;
	const struct ethtool_link_ksettings *cocci_id/* net/core/ethtool.c 489 */;
	struct ethtool_cmd *cocci_id/* net/core/ethtool.c 488 */;
	const struct ethtool_cmd *cocci_id/* net/core/ethtool.c 441 */;
	bool cocci_id/* net/core/ethtool.c 438 */;
	struct ethtool_ts_info *cocci_id/* net/core/ethtool.c 42 */;
	const unsigned long *cocci_id/* net/core/ethtool.c 413 */;
	u32 *cocci_id/* net/core/ethtool.c 412 */;
	unsigned long *cocci_id/* net/core/ethtool.c 403 */;
	unsigned int cocci_id/* net/core/ethtool.c 391 */;
	netdev_features_t cocci_id/* net/core/ethtool.c 358 */;
	u32 cocci_id/* net/core/ethtool.c 338 */;
	struct net_device *cocci_id/* net/core/ethtool.c 338 */;
	const struct ethtool_flow_ext *cocci_id/* net/core/ethtool.c 3041 */;
	const struct ethtool_tcpip6_spec *cocci_id/* net/core/ethtool.c 2969 */;
	struct ethtool_rx_flow_key cocci_id/* net/core/ethtool.c 2940 */;
	const struct ethtool_tcpip4_spec *cocci_id/* net/core/ethtool.c 2920 */;
	const struct ethhdr *cocci_id/* net/core/ethtool.c 2895 */;
	struct ethtool_rx_flow_match cocci_id/* net/core/ethtool.c 2875 */;
	struct ethtool_rx_flow_rule cocci_id/* net/core/ethtool.c 2874 */;
	struct flow_action_entry *cocci_id/* net/core/ethtool.c 2872 */;
	struct ethtool_rx_flow_match *cocci_id/* net/core/ethtool.c 2870 */;
	struct in6_addr cocci_id/* net/core/ethtool.c 2869 */;
	const struct ethtool_rx_flow_spec *cocci_id/* net/core/ethtool.c 2868 */;
	const struct ethtool_rx_flow_spec_input *cocci_id/* net/core/ethtool.c 2866 */;
	struct ethtool_rx_flow_rule *cocci_id/* net/core/ethtool.c 2865 */;
	struct ethtool_rx_flow_match {
		struct flow_dissector dissector;
		struct ethtool_rx_flow_key key;
		struct ethtool_rx_flow_key mask;
	} cocci_id/* net/core/ethtool.c 2859 */;
	struct ethtool_rx_flow_key {
		struct flow_dissector_key_basic basic;
		union {
			struct flow_dissector_key_ipv4_addrs ipv4;
			struct flow_dissector_key_ipv6_addrs ipv6;
		};
		struct flow_dissector_key_ports tp;
		struct flow_dissector_key_ip ip;
		struct flow_dissector_key_vlan vlan;
		struct flow_dissector_key_eth_addrs eth_addrs;
	}__aligned(BITS_PER_LONG/8) cocci_id/* net/core/ethtool.c 2847 */;
	void __user *cocci_id/* net/core/ethtool.c 2564 */;
	struct net *cocci_id/* net/core/ethtool.c 2561 */;
	struct ifreq *cocci_id/* net/core/ethtool.c 2561 */;
	struct ethtool_fecparam cocci_id/* net/core/ethtool.c 2531 */;
	u16 cocci_id/* net/core/ethtool.c 2458 */;
	const struct ethtool_tunable *cocci_id/* net/core/ethtool.c 2448 */;
	struct ethtool_per_queue_op cocci_id/* net/core/ethtool.c 2430 */;
	void cocci_id/* net/core/ethtool.c 243 */;
	int noinline_for_stack cocci_id/* net/core/ethtool.c 2427 */;
	struct ethtool_coalesce *cocci_id/* net/core/ethtool.c 2378 */;
	struct ethtool_per_queue_op *cocci_id/* net/core/ethtool.c 2342 */;
	struct ethtool_tunable cocci_id/* net/core/ethtool.c 2287 */;
	struct ethtool_modinfo cocci_id/* net/core/ethtool.c 2252 */;
	struct phy_device *cocci_id/* net/core/ethtool.c 2234 */;
	const struct ethtool_ops *cocci_id/* net/core/ethtool.c 2233 */;
	u8 *cocci_id/* net/core/ethtool.c 2231 */;
	struct ethtool_eeprom *cocci_id/* net/core/ethtool.c 2231 */;
	struct ethtool_modinfo *cocci_id/* net/core/ethtool.c 2194 */;
	struct ethtool_ts_info cocci_id/* net/core/ethtool.c 2166 */;
	void *cocci_id/* net/core/ethtool.c 2107 */;
	struct ethtool_dump cocci_id/* net/core/ethtool.c 2105 */;
	__u32 cocci_id/* net/core/ethtool.c 2104 */;
	struct ethtool_flash cocci_id/* net/core/ethtool.c 2052 */;
	char __user *cocci_id/* net/core/ethtool.c 2050 */;
	int (*cocci_id/* net/core/ethtool.c 2036 */)(struct net_device *, u32);
	void (*cocci_id/* net/core/ethtool.c 2021 */)(struct net_device *,
						      u32);
	u32 (*cocci_id/* net/core/ethtool.c 2006 */)(struct net_device *);
	struct ethtool_perm_addr cocci_id/* net/core/ethtool.c 1988 */;
	u64 cocci_id/* net/core/ethtool.c 1948 */;
	u64 *cocci_id/* net/core/ethtool.c 1936 */;
	struct ethtool_stats cocci_id/* net/core/ethtool.c 1935 */;
	struct ethtool_set_features_block cocci_id/* net/core/ethtool.c 180 */[ETHTOOL_DEV_FEATURE_WORDS];
	struct ethtool_sfeatures cocci_id/* net/core/ethtool.c 179 */;
	struct ethtool_gstrings cocci_id/* net/core/ethtool.c 1788 */;
	struct ethtool_test cocci_id/* net/core/ethtool.c 1750 */;
	struct ethtool_pauseparam cocci_id/* net/core/ethtool.c 1723 */;
	struct ethtool_channels cocci_id/* net/core/ethtool.c 1668 */;
	struct ethtool_ringparam cocci_id/* net/core/ethtool.c 1631 */;
	struct ethtool_coalesce cocci_id/* net/core/ethtool.c 1603 */;
	struct ethtool_eeprom cocci_id/* net/core/ethtool.c 1494 */;
	int (*cocci_id/* net/core/ethtool.c 1490 */)(struct net_device *,
						     struct ethtool_eeprom *,
						     u8 *);
	struct ethtool_value cocci_id/* net/core/ethtool.c 1477 */;
	u32 __user *cocci_id/* net/core/ethtool.c 146 */;
	struct ethtool_get_features_block cocci_id/* net/core/ethtool.c 145 */[ETHTOOL_DEV_FEATURE_WORDS];
	struct ethtool_eee cocci_id/* net/core/ethtool.c 1435 */;
	struct ethtool_gfeatures cocci_id/* net/core/ethtool.c 141 */;
	struct ethtool_wolinfo cocci_id/* net/core/ethtool.c 1399 */;
	struct ethtool_regs cocci_id/* net/core/ethtool.c 1337 */;
	const char cocci_id/* net/core/ethtool.c 131 */[__ETHTOOL_PHY_TUNABLE_COUNT][ETH_GSTRING_LEN];
	const char cocci_id/* net/core/ethtool.c 123 */[__ETHTOOL_TUNABLE_COUNT][ETH_GSTRING_LEN];
	const char cocci_id/* net/core/ethtool.c 116 */[ETH_RSS_HASH_FUNCS_COUNT][ETH_GSTRING_LEN];
	u8 cocci_id/* net/core/ethtool.c 1154 */;
	struct ethtool_rxfh cocci_id/* net/core/ethtool.c 1150 */;
	struct ethtool_rxfh_indir cocci_id/* net/core/ethtool.c 1048 */;
}