cocci_test_suite() {
	struct cpsw_hw_stats cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 76 */;
	struct ethtool_ts_info *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 713 */;
	enum{CPSW_STATS, CPDMA_RX_STATS, CPDMA_TX_STATS,} cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 69 */;
	struct ethtool_ringparam *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 656 */;
	struct cpsw_stats {
		char stat_string[ETH_GSTRING_LEN];
		int type;
		int sizeof_stat;
		int stat_offset;
	} cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 62 */;
	cpdma_handler_fn cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 595 */;
	struct cpsw_vector *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 537 */;
	struct netdev_queue *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 536 */;
	void (*cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 535 */)(void *,
									 int,
									 int);
	struct ethtool_channels *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 510 */;
	struct cpsw_common *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 509 */;
	struct ethtool_eee *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 422 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 410 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 396 */;
	struct cpsw_priv *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 358 */;
	struct net_device *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 356 */;
	struct ethtool_regs *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 345 */;
	void *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 345 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 313 */;
	struct ethtool_pauseparam *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 304 */;
	u32 *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 289 */;
	struct cpdma_chan_stats cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 276 */;
	u8 *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 274 */;
	u64 *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 272 */;
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 272 */;
	long cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 245 */;
	struct cpsw_hw_stats {
		u32 rxgoodframes;
		u32 rxbroadcastframes;
		u32 rxmulticastframes;
		u32 rxpauseframes;
		u32 rxcrcerrors;
		u32 rxaligncodeerrors;
		u32 rxoversizedframes;
		u32 rxjabberframes;
		u32 rxundersizedframes;
		u32 rxfragments;
		u32 __pad_0[2];
		u32 rxoctets;
		u32 txgoodframes;
		u32 txbroadcastframes;
		u32 txmulticastframes;
		u32 txpauseframes;
		u32 txdeferredframes;
		u32 txcollisionframes;
		u32 txsinglecollframes;
		u32 txmultcollframes;
		u32 txexcessivecollisions;
		u32 txlatecollisions;
		u32 txunderrun;
		u32 txcarriersenseerrors;
		u32 txoctets;
		u32 octetframes64;
		u32 octetframes65t127;
		u32 octetframes128t255;
		u32 octetframes256t511;
		u32 octetframes512t1023;
		u32 octetframes1024tup;
		u32 netoctets;
		u32 rxsofoverruns;
		u32 rxmofoverruns;
		u32 rxdmaoverruns;
	} cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 24 */;
	u8 **cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 234 */;
	int cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 234 */;
	void cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 234 */;
	struct ethtool_coalesce *cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 155 */;
	u32 cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 141 */;
	const struct cpsw_stats cocci_id/* drivers/net/ethernet/ti/cpsw_ethtool.c 122 */[];
}
