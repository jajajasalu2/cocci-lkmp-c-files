cocci_test_suite() {
	struct ethtool_regs *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 963 */;
	void cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 945 */;
	const struct wreg_addr *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 889 */;
	u32 *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 886 */;
	int cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 886 */;
	u32 cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 795 */;
	const struct reg_addr *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 785 */;
	const u32 *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 745 */;
	struct bnx2x *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 745 */;
	const struct {
		long offset;
		int size;
		bool is_port_stat;
		char string[ETH_GSTRING_LEN];
	} cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 74 */[];
	const struct {
		long offset;
		int size;
		char string[ETH_GSTRING_LEN];
	} cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 37 */[];
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 369 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 3665 */;
	struct ethtool_ts_info *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 3635 */;
	struct ethtool_channels *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 3559 */;
	struct net_device *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 3558 */;
	const u8 cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 3518 */;
	const u8 *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 3518 */;
	size_t cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 3492 */;
	u8 cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 3491 */[T_ETH_INDIRECTION_TABLE_SIZE];
	struct ethtool_rxnfc *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 3327 */;
	enum ethtool_phys_id_state cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 3288 */;
	u64 cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 3254 */;
	u64 *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 3235 */;
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 3235 */;
	char cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 3188 */[MAX_QUEUE_NAME_LEN + 1];
	struct ethtool_test *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 3008 */;
	struct bnx2x_queue_state_params cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2991 */;
	const struct crc_pair cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2920 */[];
	const struct crc_pair *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2900 */;
	struct crc_pair {
		int offset;
		int size;
	} cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2894 */;
	struct code_entry cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2833 */;
	struct code_entry *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2811 */;
	struct code_entry {
		u32 sram_start_addr;
		u32 code_attribute;
#define CODE_IMAGE_TYPE_MASK 0xf0800003
#define CODE_IMAGE_VNTAG_PROFILES_DATA 0xd0000003
#define CODE_IMAGE_LENGTH_MASK 0x007ffffc
#define CODE_IMAGE_TYPE_EXTENDED_DIR 0xe0000000
		u32 nvm_start_addr;
	} cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2759 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 262 */;
	struct eth_tx_parse_bd_e2 cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2617 */;
	struct eth_tx_parse_bd_e2 *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2615 */;
	struct eth_tx_parse_bd_e1x cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2609 */;
	struct eth_tx_parse_bd_e1x *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2607 */;
	unsigned char cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2564 */;
	struct netdev_queue *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2512 */;
	struct sw_rx_bd *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2508 */;
	union eth_rx_cqe *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2506 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2505 */;
	struct eth_tx_start_bd *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2504 */;
	struct sw_tx_bd *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2503 */;
	struct bnx2x_fp_txdata *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2499 */;
	struct bnx2x_fastpath *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2497 */;
	unsigned char *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2496 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2495 */;
	const struct {
		char *name;
		u32 offset;
		u32 hw_mask[BNX2X_CHIP_MAX_OFST];
	} cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2404 */[];
	const struct {
		u32 offset;
		int size;
	} cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2389 */[];
	const struct {
		u32 hw;
		u32 offset0;
		u32 offset1;
		u32 mask;
	} cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2235 */[];
	enum{BNX2X_CHIP_E1_OFST=0, BNX2X_CHIP_E1H_OFST, BNX2X_CHIP_E2_OFST, BNX2X_CHIP_E3_OFST, BNX2X_CHIP_E3B0_OFST, BNX2X_CHIP_MAX_OFST,} cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2212 */;
	struct ethtool_eee *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2109 */;
	const char cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2076 */[BNX2X_PRI_FLAG_LEN][ETH_GSTRING_LEN];
	enum{BNX2X_PRI_FLAG_ISCSI, BNX2X_PRI_FLAG_FCOE, BNX2X_PRI_FLAG_STORAGE, BNX2X_PRI_FLAG_LEN,} cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2069 */;
	const char cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 2059 */[BNX2X_NUM_TESTS_SF][ETH_GSTRING_LEN];
	struct ethtool_pauseparam *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1979 */;
	struct ethtool_ringparam *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1919 */;
	struct ethtool_coalesce cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1891 */;
	struct ethtool_coalesce *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1887 */;
	u8 cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1579 */;
	struct ethtool_modinfo *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1575 */;
	unsigned int cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1516 */;
	u8 *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1489 */;
	struct ethtool_eeprom *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1489 */;
	u16 cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1474 */;
	bool cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1471 */;
	__be32 *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1462 */;
	__be32 cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1404 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1147 */;
	struct extended_dev_info_shared_cfg cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1127 */;
	char cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1110 */[ETHTOOL_FWVERS_LEN];
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1107 */;
	struct dump_header cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1062 */;
	void *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1058 */;
	struct ethtool_dump *cocci_id/* drivers/net/ethernet/broadcom/bnx2x/bnx2x_ethtool.c 1057 */;
}
