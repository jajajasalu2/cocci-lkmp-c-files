cocci_test_suite() {
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/3com/typhoon.c 999 */;
	struct resp_desc cocci_id/* drivers/net/ethernet/3com/typhoon.c 974 */[3];
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/3com/typhoon.c 969 */;
	struct stats_resp *cocci_id/* drivers/net/ethernet/3com/typhoon.c 904 */;
	struct resp_desc cocci_id/* drivers/net/ethernet/3com/typhoon.c 903 */[7];
	struct net_device_stats *cocci_id/* drivers/net/ethernet/3com/typhoon.c 900 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/3com/typhoon.c 874 */;
	u32 cocci_id/* drivers/net/ethernet/3com/typhoon.c 863 */[2];
	struct resp_desc cocci_id/* drivers/net/ethernet/3com/typhoon.c 82 */;
	const skb_frag_t *cocci_id/* drivers/net/ethernet/3com/typhoon.c 813 */;
	struct cmd_desc cocci_id/* drivers/net/ethernet/3com/typhoon.c 81 */;
	u64 cocci_id/* drivers/net/ethernet/3com/typhoon.c 761 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/3com/typhoon.c 711 */;
	struct tcpopt_desc cocci_id/* drivers/net/ethernet/3com/typhoon.c 699 */;
	struct tcpopt_desc *cocci_id/* drivers/net/ethernet/3com/typhoon.c 694 */;
	const int cocci_id/* drivers/net/ethernet/3com/typhoon.c 60 */;
	struct resp_desc *cocci_id/* drivers/net/ethernet/3com/typhoon.c 577 */;
	unsigned int cocci_id/* drivers/net/ethernet/3com/typhoon.c 54 */;
	int cocci_id/* drivers/net/ethernet/3com/typhoon.c 47 */;
	struct cmd_desc *cocci_id/* drivers/net/ethernet/3com/typhoon.c 463 */;
	struct rx_desc cocci_id/* drivers/net/ethernet/3com/typhoon.c 374 */;
	u32 *cocci_id/* drivers/net/ethernet/3com/typhoon.c 346 */;
	enum state_values{Sleeping=0, Running,} cocci_id/* drivers/net/ethernet/3com/typhoon.c 306 */;
	enum completion_wait_values{NoWait=0, WaitNoSleep, WaitSleep,} cocci_id/* drivers/net/ethernet/3com/typhoon.c 298 */;
	struct typhoon {
		struct transmit_ring txLoRing ____cacheline_aligned;
		struct pci_dev *tx_pdev;
		void __iomem *tx_ioaddr;
		u32 txlo_dma_addr;
		void __iomem *ioaddr ____cacheline_aligned;
		struct typhoon_indexes *indexes;
		u8 awaiting_resp;
		u8 duplex;
		u8 speed;
		u8 card_state;
		struct basic_ring rxLoRing;
		struct pci_dev *pdev;
		struct net_device *dev;
		struct napi_struct napi;
		struct basic_ring rxHiRing;
		struct basic_ring rxBuffRing;
		struct rxbuff_ent rxbuffers[RXENT_ENTRIES];
		spinlock_t command_lock ____cacheline_aligned;
		struct basic_ring cmdRing;
		struct basic_ring respRing;
		struct net_device_stats stats_saved;
		struct typhoon_shared *shared;
		dma_addr_t shared_dma;
		__le16 xcvr_select;
		__le16 wol_events;
		__le32 offload;
		int capabilities;
		struct transmit_ring txHiRing;
	} cocci_id/* drivers/net/ethernet/3com/typhoon.c 260 */;
	void cocci_id/* drivers/net/ethernet/3com/typhoon.c 2555 */;
	void __exit cocci_id/* drivers/net/ethernet/3com/typhoon.c 2554 */;
	struct rxbuff_ent {
		struct sk_buff *skb;
		dma_addr_t dma_addr;
	} cocci_id/* drivers/net/ethernet/3com/typhoon.c 255 */;
	int __init cocci_id/* drivers/net/ethernet/3com/typhoon.c 2548 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/3com/typhoon.c 2537 */;
	u16 cocci_id/* drivers/net/ethernet/3com/typhoon.c 2478 */;
	unsigned long long cocci_id/* drivers/net/ethernet/3com/typhoon.c 2468 */;
	struct typhoon_shared {
		struct typhoon_interface iface;
		struct typhoon_indexes indexes __3xp_aligned;
		struct tx_desc txLo[TXLO_ENTRIES]__3xp_aligned;
		struct rx_desc rxLo[RX_ENTRIES]__3xp_aligned;
		struct rx_desc rxHi[RX_ENTRIES]__3xp_aligned;
		struct cmd_desc cmd[COMMAND_ENTRIES]__3xp_aligned;
		struct resp_desc resp[RESPONSE_ENTRIES]__3xp_aligned;
		struct rx_free rxBuff[RXFREE_ENTRIES]__3xp_aligned;
		u32 zeroWord;
		struct tx_desc txHi[TXHI_ENTRIES];
	}__packed cocci_id/* drivers/net/ethernet/3com/typhoon.c 242 */;
	__be32 *cocci_id/* drivers/net/ethernet/3com/typhoon.c 2402 */;
	__be16 *cocci_id/* drivers/net/ethernet/3com/typhoon.c 2401 */;
	const char *cocci_id/* drivers/net/ethernet/3com/typhoon.c 2276 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/3com/typhoon.c 2265 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/3com/typhoon.c 2253 */;
	pm_message_t cocci_id/* drivers/net/ethernet/3com/typhoon.c 2149 */;
	struct net_device *cocci_id/* drivers/net/ethernet/3com/typhoon.c 2093 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/3com/typhoon.c 206 */[];
	struct net_device_stats cocci_id/* drivers/net/ethernet/3com/typhoon.c 1993 */;
	pci_power_t cocci_id/* drivers/net/ethernet/3com/typhoon.c 1805 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/3com/typhoon.c 1764 */;
	struct typhoon cocci_id/* drivers/net/ethernet/3com/typhoon.c 1726 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1724 */;
	struct typhoon_card_info cocci_id/* drivers/net/ethernet/3com/typhoon.c 171 */[];
	__le32 cocci_id/* drivers/net/ethernet/3com/typhoon.c 1644 */;
	struct rx_desc *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1636 */;
	enum typhoon_cards{TYPHOON_TX=0, TYPHOON_TX95, TYPHOON_TX97, TYPHOON_SVR, TYPHOON_SVR95, TYPHOON_SVR97, TYPHOON_TXM, TYPHOON_BSVR, TYPHOON_FX95, TYPHOON_FX97, TYPHOON_FX95SVR, TYPHOON_FX97SVR, TYPHOON_FXM,} cocci_id/* drivers/net/ethernet/3com/typhoon.c 163 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/3com/typhoon.c 1594 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1593 */;
	struct rx_free *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1592 */;
	struct basic_ring *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1591 */;
	struct rxbuff_ent *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1590 */;
	struct typhoon_indexes *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1589 */;
	u32 cocci_id/* drivers/net/ethernet/3com/typhoon.c 1587 */;
	struct typhoon *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1587 */;
	unsigned long cocci_id/* drivers/net/ethernet/3com/typhoon.c 1523 */;
	struct tx_desc *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1511 */;
	struct typhoon_card_info {
		const char *name;
		const int capabilities;
	} cocci_id/* drivers/net/ethernet/3com/typhoon.c 151 */;
	volatile __le32 *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1508 */;
	struct transmit_ring *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1507 */;
	void __iomem *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1473 */;
	__le16 cocci_id/* drivers/net/ethernet/3com/typhoon.c 1427 */;
	struct typhoon_section_header cocci_id/* drivers/net/ethernet/3com/typhoon.c 1403 */;
	struct typhoon_section_header *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1402 */;
	struct typhoon_file_header cocci_id/* drivers/net/ethernet/3com/typhoon.c 1395 */;
	struct typhoon_file_header *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1351 */;
	__sum16 cocci_id/* drivers/net/ethernet/3com/typhoon.c 1339 */;
	void *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1337 */;
	const u8 *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1336 */;
	const struct typhoon_section_header *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1335 */;
	const struct typhoon_file_header *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1334 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1333 */;
	const struct firmware *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1269 */;
	struct typhoon_indexes cocci_id/* drivers/net/ethernet/3com/typhoon.c 1255 */;
	u8 *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1228 */;
	struct rx_free cocci_id/* drivers/net/ethernet/3com/typhoon.c 1206 */;
	struct tx_desc cocci_id/* drivers/net/ethernet/3com/typhoon.c 1197 */;
	struct typhoon_interface *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1185 */;
	struct typhoon_shared cocci_id/* drivers/net/ethernet/3com/typhoon.c 1180 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/3com/typhoon.c 1151 */;
	struct ethtool_ringparam *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1142 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1111 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/3com/typhoon.c 1061 */;
}
