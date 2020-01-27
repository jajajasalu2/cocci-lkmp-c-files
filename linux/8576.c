cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 9776 */[4];
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 9775 */;
	struct net_device *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 9748 */;
	unsigned char *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 9715 */;
	struct ethtool_coalesce *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 9500 */;
	void cocci_id/* drivers/net/ethernet/broadcom/tg3.c 9500 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 9379 */;
	void cocci_id/* drivers/net/ethernet/broadcom/tg3.c 9345 */(struct net_device *);
	void cocci_id/* drivers/net/ethernet/broadcom/tg3.c 9344 */(struct tg3 *,
								    struct tg3_ethtool_stats *);
	void cocci_id/* drivers/net/ethernet/broadcom/tg3.c 9343 */(struct tg3 *,
								    struct rtnl_link_stats64 *);
	void (*cocci_id/* drivers/net/ethernet/broadcom/tg3.c 9071 */)(struct tg3 *,
								       u32,
								       u32);
	struct tg3_napi *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 8947 */;
	u16 *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 8789 */;
	struct tg3_hw_status *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 8777 */;
	struct tg3_hw_stats cocci_id/* drivers/net/ethernet/broadcom/tg3.c 8770 */;
	struct tg3_tx_ring_info cocci_id/* drivers/net/ethernet/broadcom/tg3.c 8648 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 8561 */;
	netdev_features_t cocci_id/* drivers/net/ethernet/broadcom/tg3.c 8322 */;
	skb_frag_t *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 8090 */;
	__be16 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 7928 */;
	__sum16 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 7927 */;
	struct netdev_queue *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 7923 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/broadcom/tg3.c 7915 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/broadcom/tg3.c 7869 */(struct sk_buff *,
									   struct net_device *);
	struct sk_buff **cocci_id/* drivers/net/ethernet/broadcom/tg3.c 7808 */;
	const skb_frag_t *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 7789 */;
	struct tg3_tx_buffer_desc *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 7695 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/broadcom/tg3.c 7683 */;
	enum TG3_FLAGS cocci_id/* drivers/net/ethernet/broadcom/tg3.c 76 */;
	unsigned long *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 76 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/broadcom/tg3.c 7518 */;
	struct tg3_napi cocci_id/* drivers/net/ethernet/broadcom/tg3.c 7331 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 7329 */;
	struct skb_shared_info cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6715 */;
	struct ring_info *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6684 */;
	struct tg3_rx_buffer_desc *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6683 */;
	unsigned int *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6681 */;
	struct tg3_rx_prodring_set *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6679 */;
	void *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6645 */;
	struct tg3_tx_ring_info *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6560 */;
	struct skb_shared_hwtstamps cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6356 */;
	struct skb_shared_hwtstamps *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6354 */;
	const struct ptp_clock_info cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6337 */;
	struct ptp_clock_request *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6275 */;
	const struct timespec64 *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6259 */;
	struct ptp_system_timestamp *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6243 */;
	struct timespec64 *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6242 */;
	s64 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6231 */;
	struct tg3 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6197 */;
	s32 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6195 */;
	struct ptp_clock_info *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6195 */;
	struct ethtool_ts_info *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6167 */;
	void cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6166 */(struct tg3 *tp);
	void cocci_id/* drivers/net/ethernet/broadcom/tg3.c 6165 */(struct tg3 *tp,
								    int irq_sync);
	struct tg3_fiber_aneginfo cocci_id/* drivers/net/ethernet/broadcom/tg3.c 5416 */;
	unsigned long cocci_id/* drivers/net/ethernet/broadcom/tg3.c 5165 */;
	struct tg3_fiber_aneginfo *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 5162 */;
	struct tg3_fiber_aneginfo {
		int state;
#define ANEG_STATE_UNKNOWN 0
#define ANEG_STATE_AN_ENABLE 1
#define ANEG_STATE_RESTART_INIT 2
#define ANEG_STATE_RESTART 3
#define ANEG_STATE_DISABLE_LINK_OK 4
#define ANEG_STATE_ABILITY_DETECT_INIT 5
#define ANEG_STATE_ABILITY_DETECT 6
#define ANEG_STATE_ACK_DETECT_INIT 7
#define ANEG_STATE_ACK_DETECT 8
#define ANEG_STATE_COMPLETE_ACK_INIT 9
#define ANEG_STATE_COMPLETE_ACK 10
#define ANEG_STATE_IDLE_DETECT_INIT 11
#define ANEG_STATE_IDLE_DETECT 12
#define ANEG_STATE_LINK_OK 13
#define ANEG_STATE_NEXT_PAGE_WAIT_INIT 14
#define ANEG_STATE_NEXT_PAGE_WAIT 15
		u32 flags;
#define MR_AN_ENABLE 0x00000001
#define MR_RESTART_AN 0x00000002
#define MR_AN_COMPLETE 0x00000004
#define MR_PAGE_RX 0x00000008
#define MR_NP_LOADED 0x00000010
#define MR_TOGGLE_TX 0x00000020
#define MR_LP_ADV_FULL_DUPLEX 0x00000040
#define MR_LP_ADV_HALF_DUPLEX 0x00000080
#define MR_LP_ADV_SYM_PAUSE 0x00000100
#define MR_LP_ADV_ASYM_PAUSE 0x00000200
#define MR_LP_ADV_REMOTE_FAULT1 0x00000400
#define MR_LP_ADV_REMOTE_FAULT2 0x00000800
#define MR_LP_ADV_NEXT_PAGE 0x00001000
#define MR_TOGGLE_RX 0x00002000
#define MR_NP_RX 0x00004000
#define MR_LINK_OK 0x80000000
		unsigned long link_time,cur_time;
		u32 ability_match_cfg;
		int ability_match_count;
		char ability_match,idle_match,ack_match;
		u32 txconfig,rxconfig;
#define ANEG_CFG_NP 0x00000080
#define ANEG_CFG_ACK 0x00000040
#define ANEG_CFG_RF2 0x00000020
#define ANEG_CFG_RF1 0x00000010
#define ANEG_CFG_PS2 0x00000001
#define ANEG_CFG_PS1 0x00008000
#define ANEG_CFG_HD 0x00004000
#define ANEG_CFG_FD 0x00002000
#define ANEG_CFG_INVAL 0x00001f06
	} cocci_id/* drivers/net/ethernet/broadcom/tg3.c 5097 */;
	struct ethtool_eee cocci_id/* drivers/net/ethernet/broadcom/tg3.c 4631 */;
	int cocci_id/* drivers/net/ethernet/broadcom/tg3.c 4030 */(struct tg3 *, bool);
	bool cocci_id/* drivers/net/ethernet/broadcom/tg3.c 3976 */;
	u8 *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 3957 */;
	struct tg3_firmware_hdr *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 3798 */;
	const struct tg3_firmware_hdr *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 3679 */;
	const struct {
		const char string[ETH_GSTRING_LEN];
	} cocci_id/* drivers/net/ethernet/broadcom/tg3.c 364 */[];
	const int cocci_id/* drivers/net/ethernet/broadcom/tg3.c 3595 */;
	__be32 *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 3324 */;
	const u32 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 2471 */[4][6];
	int *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 2469 */;
	struct ethtool_eee *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 2352 */;
	char cocci_id/* drivers/net/ethernet/broadcom/tg3.c 225 */[];
	struct phy_device *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 2015 */;
	u8 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 2012 */;
	u16 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 1925 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/broadcom/tg3.c 18317 */;
	const struct pci_error_handlers cocci_id/* drivers/net/ethernet/broadcom/tg3.c 18311 */;
	pci_channel_state_t cocci_id/* drivers/net/ethernet/broadcom/tg3.c 18169 */;
	pci_ers_result_t cocci_id/* drivers/net/ethernet/broadcom/tg3.c 18168 */;
	struct device *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 18102 */;
	struct ring_info cocci_id/* drivers/net/ethernet/broadcom/tg3.c 178 */;
	char cocci_id/* drivers/net/ethernet/broadcom/tg3.c 17626 */[40];
	char *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 17552 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/broadcom/tg3.c 17285 */[];
	struct tg3_internal_buffer_desc cocci_id/* drivers/net/ethernet/broadcom/tg3.c 17205 */;
	void __iomem *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 16851 */;
	long cocci_id/* drivers/net/ethernet/broadcom/tg3.c 1643 */;
	struct tg3_tx_buffer_desc cocci_id/* drivers/net/ethernet/broadcom/tg3.c 163 */;
	struct tg3_dev_id {
		u32 vendor;
		u32 device;
	} cocci_id/* drivers/net/ethernet/broadcom/tg3.c 16294 */[];
	struct tg3_dev_id *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 16269 */;
	struct tg3_dev_id {
		u32 vendor;
		u32 device;
		u32 rev;
	} cocci_id/* drivers/net/ethernet/broadcom/tg3.c 16254 */[];
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 16181 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 16064 */;
	struct tg3_ext_rx_buffer_desc cocci_id/* drivers/net/ethernet/broadcom/tg3.c 160 */;
	struct tg3_rx_buffer_desc cocci_id/* drivers/net/ethernet/broadcom/tg3.c 158 */;
	struct subsys_tbl_ent *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 15135 */;
	struct subsys_tbl_ent cocci_id/* drivers/net/ethernet/broadcom/tg3.c 15071 */[];
	struct subsys_tbl_ent {
		u16 subsys_vendor,subsys_devid;
		u32 phy_id;
	} cocci_id/* drivers/net/ethernet/broadcom/tg3.c 15066 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/broadcom/tg3.c 14296 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/broadcom/tg3.c 14164 */;
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 13996 */;
	struct hwtstamp_config cocci_id/* drivers/net/ethernet/broadcom/tg3.c 13936 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 13933 */;
	struct mii_bus *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 1386 */;
	struct ethtool_test *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 13757 */;
	struct tcphdr *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 13484 */;
	struct iphdr *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 13463 */;
	const u8 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 13409 */[];
	struct mem_entry *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 13376 */;
	struct mem_entry {
		u32 offset;
		u32 len;
	} cocci_id/* drivers/net/ethernet/broadcom/tg3.c 13335 */[];
	const u32 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 13316 */[];
	struct {
		u16 offset;
		u16 flags;
#define TG3_FL_5705 0x1
#define TG3_FL_NOT_5705 0x2
#define TG3_FL_NOT_5788 0x4
#define TG3_FL_NOT_5750 0x8
		u32 read_mask;
		u32 write_mask;
	} cocci_id/* drivers/net/ethernet/broadcom/tg3.c 13098 */[];
	u8 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12976 */[NVRAM_SELFBOOT_DATA_SIZE];
	struct tg3_ethtool_stats cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12799 */;
	u64 *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12792 */;
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12792 */;
	enum ethtool_phys_id_state cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12760 */;
	struct ethtool_channels *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12693 */;
	size_t cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12664 */;
	const u8 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12661 */;
	const u8 *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12660 */;
	const u32 *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12660 */;
	struct ethtool_rxnfc *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12608 */;
	struct ethtool_pauseparam *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12486 */;
	struct ethtool_ringparam *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12410 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12327 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12317 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12222 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12147 */;
	__be32 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 12005 */;
	struct ethtool_eeprom *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 11999 */;
	struct ethtool_regs *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 11974 */;
	struct rtnl_link_stats64 *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 11914 */;
	struct tg3_ethtool_stats *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 11830 */;
	struct tg3_hw_stats *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 11804 */;
	u64 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 11797 */;
	tg3_stat64_t *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 11797 */;
	struct msix_entry cocci_id/* drivers/net/ethernet/broadcom/tg3.c 11463 */[TG3_IRQ_MAX_VECS];
	unsigned cocci_id/* drivers/net/ethernet/broadcom/tg3.c 11454 */;
	u32 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 1124 */;
	irq_handler_t cocci_id/* drivers/net/ethernet/broadcom/tg3.c 11239 */;
	u32 *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 1122 */;
	struct tg3 *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 1121 */;
	unsigned int cocci_id/* drivers/net/ethernet/broadcom/tg3.c 1121 */;
	int cocci_id/* drivers/net/ethernet/broadcom/tg3.c 1121 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 11190 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 10990 */;
	struct tg3_ocir cocci_id/* drivers/net/ethernet/broadcom/tg3.c 10866 */[TG3_SD_NUM_RECS];
	struct attribute *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 10845 */[];
	struct sensor_device_attribute *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 10826 */;
	struct device_attribute *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 10824 */;
	ssize_t cocci_id/* drivers/net/ethernet/broadcom/tg3.c 10823 */;
	struct tg3_ocir *cocci_id/* drivers/net/ethernet/broadcom/tg3.c 10806 */;
	u32 cocci_id/* drivers/net/ethernet/broadcom/tg3.c 10615 */[10];
}
