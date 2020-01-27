cocci_test_suite() {
	u32 *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 918 */;
	__u64 cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 825 */;
	s8 cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 824 */;
	struct flow_match_ipv6_addrs cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 606 */;
	struct ethtool_tcpip4_spec cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 582 */;
	struct ethtool_tcpip6_spec cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 578 */;
	size_t cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 559 */;
	const __be16 cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 470 */;
	const __be32 *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 470 */;
	const struct cfp_udf_layout cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 39 */;
	const u8 cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 36 */[UDFS_PER_SLICE];
	u8 cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 345 */;
	struct flow_match_ip cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 344 */;
	struct flow_match_ports cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 343 */;
	struct flow_match_ipv4_addrs cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 342 */;
	struct ethtool_rx_flow_rule *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 341 */;
	const struct cfp_udf_layout *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 339 */;
	struct ethtool_rx_flow_spec_input cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 338 */;
	struct ethtool_rx_flow_spec *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 336 */;
	struct cfp_udf_layout {
		struct cfp_udf_slice_layout udfs[UDF_NUM_SLICES];
	} cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 32 */;
	struct flow_dissector_key_ports *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 263 */;
	struct flow_dissector_key_ipv4_addrs *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 262 */;
	struct cfp_udf_slice_layout {
		u8 slices[UDFS_PER_SLICE];
		u32 mask_value;
		u32 base_offset;
	} cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 26 */;
	u32 cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 218 */;
	bool cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 215 */;
	unsigned int cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 211 */;
	struct bcm_sf2_priv *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 210 */;
	int cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 210 */;
	struct cfp_rule {
		int port;
		struct ethtool_rx_flow_spec fs;
		struct list_head next;
	} cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 20 */;
	const struct cfp_udf_slice_layout *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 142 */;
	const struct bcm_sf2_cfp_stat *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 1257 */;
	uint64_t *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 1253 */;
	char cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 1234 */[ETH_GSTRING_LEN];
	uint8_t *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 1230 */;
	const struct bcm_sf2_cfp_stat {
		unsigned int offset;
		unsigned int ram_loc;
		const char *name;
	} cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 1207 */[];
	const u8 *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 117 */;
	struct cfp_rule *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 1162 */;
	struct dsa_switch *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 1159 */;
	void cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 1159 */;
	struct net_device *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 1052 */;
	struct ethtool_rxnfc *cocci_id/* drivers/net/dsa/bcm_sf2_cfp.c 1012 */;
}
