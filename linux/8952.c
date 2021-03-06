cocci_test_suite() {
	struct sge_eth_txq *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 945 */;
	struct sge_eth_rxq *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 919 */;
	const struct sge *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 840 */;
	struct ethtool_ringparam *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 837 */;
	struct ethtool_pauseparam *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 805 */;
	struct link_config cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 785 */;
	struct link_config *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 784 */;
	const struct link_config *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 763 */;
	struct ethtool_fecparam *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 760 */;
	unsigned int cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 724 */;
	const struct ethtool_link_settings *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 666 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 662 */;
	struct ethtool_link_settings *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 610 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 607 */;
	const unsigned long *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 582 */;
	unsigned long *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 448 */;
	fw_port_cap32_t cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 447 */;
	enum fw_port_module_type cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 371 */;
	enum fw_port_type cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 370 */;
	enum ethtool_phys_id_state cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 348 */;
	size_t cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 328 */;
	struct ethtool_regs *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 324 */;
	unsigned long long cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 321 */;
	struct adapter_stats cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 313 */;
	struct queue_port_stats cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 311 */;
	struct port_stats cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 309 */;
	struct port_stats *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 306 */;
	struct lb_port_stats cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 301 */;
	u64 *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 297 */;
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 296 */;
	int cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 284 */;
	u64 cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 275 */;
	struct adapter_stats *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 273 */;
	struct adapter *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 273 */;
	void cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 273 */;
	struct sge_eohw_txq *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 247 */;
	const struct sge_eth_rxq *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 246 */;
	const struct sge_eth_txq *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 245 */;
	struct queue_port_stats *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 243 */;
	const struct port_info *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 242 */;
	const struct adapter *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 241 */;
	struct adapter_stats {
		u64 db_drop;
		u64 db_full;
		u64 db_empty;
		u64 wc_success;
		u64 wc_fail;
	} cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 233 */;
	struct queue_port_stats {
		u64 tso;
		u64 uso;
		u64 tx_csum;
		u64 rx_csum;
		u64 vlan_ex;
		u64 vlan_ins;
		u64 gro_pkts;
		u64 gro_merged;
	} cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 222 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 167 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1582 */;
	u32 cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1552 */;
	struct port_info *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1525 */;
	u8 *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1522 */;
	struct ethtool_eeprom *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1522 */;
	struct net_device *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1521 */;
	u8 cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1461 */;
	struct ethtool_modinfo *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1458 */;
	struct cudbg_entity_hdr cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1442 */;
	struct cudbg_hdr cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1441 */;
	void *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1432 */;
	struct ethtool_dump *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1431 */;
	const char cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 137 */[][ETH_GSTRING_LEN];
	struct ethtool_rxnfc *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1344 */;
	const u8 cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1319 */;
	const u8 *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1318 */;
	const u32 *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1318 */;
	struct ethtool_ts_info *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1266 */;
	const struct firmware *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1227 */;
	struct ethtool_flash *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1224 */;
	u32 *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1127 */;
	const struct sge_rspq *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1114 */;
	struct ethtool_coalesce *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1110 */;
	int cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1065 */[MAX_NPORTS];
	char cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 103 */[][ETH_GSTRING_LEN];
	struct sge *cocci_id/* drivers/net/ethernet/chelsio/cxgb4/cxgb4_ethtool.c 1002 */;
}
