cocci_test_suite() {
	struct qede_stats_ah cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 98 */;
	struct ethtool_pauseparam *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 972 */;
	struct qede_stats cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 95 */;
	struct qede_stats_bb cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 94 */;
	struct ethtool_ringparam *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 931 */;
	struct qede_stats_common cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 89 */;
	struct qede_tx_queue *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 840 */;
	struct ethtool_coalesce cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 820 */;
	struct qede_fastpath *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 815 */;
	u16 cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 814 */;
	void *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 812 */;
	struct ethtool_coalesce *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 810 */;
	struct ethtool_flash *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 802 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 790 */;
	struct qed_link_params cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 765 */;
	u8 cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 751 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 701 */;
	struct qede_tx_queue cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 67 */;
	char cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 657 */[ETHTOOL_FWVERS_LEN];
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 655 */;
	const struct {
		u64 offset;
		char string[ETH_GSTRING_LEN];
	} cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 54 */[];
	const struct ethtool_link_settings *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 531 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 529 */;
	struct ethtool_link_settings *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 493 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 491 */;
	struct qede_rx_queue cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 45 */;
	const struct qede_link_mode_mapping cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 428 */[];
	struct qede_link_mode_mapping {
		u32 qed_link_mode;
		u32 ethtool_link_mode;
	} cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 423 */;
	u64 *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 332 */;
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 332 */;
	struct qede_rx_queue *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 321 */;
	u64 **cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 321 */;
	bool cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 249 */;
	const char cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 211 */[QEDE_ETHTOOL_TEST_MAX][ETH_GSTRING_LEN];
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 2089 */;
	u8 **cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 2067 */;
	struct ethtool_dump *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 2047 */;
	enum qede_ethtool_tests{QEDE_ETHTOOL_INT_LOOPBACK, QEDE_ETHTOOL_INTERRUPT_TEST, QEDE_ETHTOOL_MEMORY_TEST, QEDE_ETHTOOL_REGISTER_TEST, QEDE_ETHTOOL_CLOCK_TEST, QEDE_ETHTOOL_NVRAM_TEST, QEDE_ETHTOOL_TEST_MAX,} cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 201 */;
	const char cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 196 */[QEDE_PRI_FLAG_LEN][ETH_GSTRING_LEN];
	u8 *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1930 */;
	struct ethtool_eeprom *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1930 */;
	enum{QEDE_PRI_FLAG_CMT, QEDE_PRI_FLAG_SMART_AN_SUPPORT, QEDE_PRI_FLAG_LEN,} cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 190 */;
	u8 cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1896 */[4];
	struct ethtool_modinfo *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1893 */;
	struct qed_link_output cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1814 */;
	struct ethtool_eee *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1811 */;
	const struct ethtool_tunable *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1796 */;
	const void *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1771 */;
	u64 cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1733 */;
	struct ethtool_test *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1724 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1654 */;
	unsigned char cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1626 */;
	union eth_rx_cqe *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1573 */;
	struct sw_rx_data *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1572 */;
	struct eth_fast_path_rx_reg_cqe *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1570 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1495 */;
	struct eth_tx_1st_bd *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1494 */;
	const u8 cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1417 */;
	const u8 *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1417 */;
	const u32 *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1416 */;
	u32 *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1396 */;
	struct qed_update_vport_params *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1259 */;
	struct ethtool_rxnfc *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1198 */;
	enum ethtool_phys_id_state cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1171 */;
	struct ethtool_ts_info *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1163 */;
	struct ethtool_channels *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1080 */;
	void cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1079 */;
	struct qede_reload_args cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1061 */;
	struct qede_dev *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1060 */;
	struct net_device *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1058 */;
	int cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1058 */;
	struct qede_reload_args *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1052 */;
	struct ethtool_regs *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 1030 */;
	const struct {
		u64 offset;
		char string[ETH_GSTRING_LEN];
		unsigned long attr;
#define QEDE_STAT_PF_ONLY 0
#define QEDE_STAT_BB_ONLY 1
#define QEDE_STAT_AH_ONLY 2
	} cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ethtool.c 101 */[];
}
