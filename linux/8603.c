cocci_test_suite() {
	int (*cocci_id/* drivers/net/ethernet/intel/e100.c 848 */)(struct nic *,
								   struct cb *,
								   struct sk_buff *);
	dma_addr_t cocci_id/* drivers/net/ethernet/intel/e100.c 816 */;
	u8 cocci_id/* drivers/net/ethernet/intel/e100.c 726 */;
	__le16 cocci_id/* drivers/net/ethernet/intel/e100.c 722 */;
	u16 *cocci_id/* drivers/net/ethernet/intel/e100.c 722 */;
	u32 cocci_id/* drivers/net/ethernet/intel/e100.c 686 */[3];
	unsigned long cocci_id/* drivers/net/ethernet/intel/e100.c 628 */;
	struct nic {
		u32 msg_enable ____cacheline_aligned;
		struct net_device *netdev;
		struct pci_dev *pdev;
		u16 (*mdio_ctrl)(struct nic *nic, u32 addr, u32 dir, u32 reg,
				 u16 data);
		struct rx *rxs ____cacheline_aligned;
		struct rx *rx_to_use;
		struct rx *rx_to_clean;
		struct rfd blank_rfd;
		enum ru_state ru_running;
		spinlock_t cb_lock ____cacheline_aligned;
		spinlock_t cmd_lock;
		struct csr __iomem *csr;
		enum scb_cmd_lo cuc_cmd;
		unsigned int cbs_avail;
		struct napi_struct napi;
		struct cb *cbs;
		struct cb *cb_to_use;
		struct cb *cb_to_send;
		struct cb *cb_to_clean;
		__le16 tx_command;
		enum{ich=(1 << 0), promiscuous=(1 << 1), multicast_all=(1 << 2), wol_magic=(1 << 3), ich_10h_workaround=(1 << 4),} flags ____cacheline_aligned;
		enum mac mac;
		enum phy phy;
		struct params params;
		struct timer_list watchdog;
		struct mii_if_info mii;
		struct work_struct tx_timeout_task;
		enum loopback loopback;
		struct mem *mem;
		dma_addr_t dma_addr;
		struct dma_pool *cbs_pool;
		dma_addr_t cbs_dma_addr;
		u8 adaptive_ifs;
		u8 tx_threshold;
		u32 tx_frames;
		u32 tx_collisions;
		u32 tx_deferred;
		u32 tx_single_collisions;
		u32 tx_multiple_collisions;
		u32 tx_fc_pause;
		u32 tx_tco_frames;
		u32 rx_fc_pause;
		u32 rx_fc_unsupported;
		u32 rx_tco_frames;
		u32 rx_short_frame_errors;
		u32 rx_over_length_errors;
		u16 eeprom_wc;
		__le16 eeprom[256];
		spinlock_t mdio_lock;
		const struct firmware *fw;
	} cocci_id/* drivers/net/ethernet/intel/e100.c 540 */;
	struct params {
		struct param_range rfds;
		struct param_range cbs;
	} cocci_id/* drivers/net/ethernet/intel/e100.c 535 */;
	struct param_range {
		u32 min;
		u32 max;
		u32 count;
	} cocci_id/* drivers/net/ethernet/intel/e100.c 529 */;
	struct mem {
		struct {
			u32 signature;
			u32 result;
		} selftest;
		struct stats stats;
		u8 dump_buf[596];
	} cocci_id/* drivers/net/ethernet/intel/e100.c 520 */;
	struct stats {
		__le32 tx_good_frames,tx_max_collisions,tx_late_collisions,tx_underruns,tx_lost_crs,tx_deferred,tx_single_collisions,tx_multiple_collisions,tx_total_collisions;
		__le32 rx_good_frames,rx_crc_errors,rx_alignment_errors,rx_resource_errors,rx_overrun_errors,rx_cdt_errors,rx_short_frame_errors;
		__le32 fc_xmt_pause,fc_rcv_pause,fc_rcv_unsupported;
		__le16 xmt_tco_frames,rcv_tco_frames;
		__le32 complete;
	} cocci_id/* drivers/net/ethernet/intel/e100.c 508 */;
	enum loopback{lb_none=0, lb_mac=1, lb_phy=3,} cocci_id/* drivers/net/ethernet/intel/e100.c 504 */;
	struct cb {
		__le16 status;
		__le16 command;
		__le32 link;
		union {
			u8 iaaddr[ETH_ALEN];
			__le32 ucode[UCODE_SIZE];
			struct config config;
			struct multi multi;
			struct {
				u32 tbd_array;
				u16 tcb_byte_count;
				u8 threshold;
				u8 tbd_count;
				struct {
					__le32 buf_addr;
					__le16 size;
					u16 eol;
				} tbd;
			} tcb;
			__le32 dump_buffer_addr;
		} u;
		struct cb *next,*prev;
		dma_addr_t dma_addr;
		struct sk_buff *skb;
	} cocci_id/* drivers/net/ethernet/intel/e100.c 477 */;
	struct multi {
		__le16 count;
		u8 addr[E100_MAX_MULTICAST_ADDRS * ETH_ALEN + 2];
	} cocci_id/* drivers/net/ethernet/intel/e100.c 470 */;
	struct rx {
		struct rx *next,*prev;
		struct sk_buff *skb;
		dma_addr_t dma_addr;
	} cocci_id/* drivers/net/ethernet/intel/e100.c 419 */;
	struct rfd {
		__le16 status;
		__le16 command;
		__le32 link;
		__le32 rbd;
		__le16 actual_size;
		__le16 size;
	} cocci_id/* drivers/net/ethernet/intel/e100.c 410 */;
	enum cb_command{cb_nop=0x0000, cb_iaaddr=0x0001, cb_config=0x0002, cb_multi=0x0003, cb_tx=0x0004, cb_ucode=0x0005, cb_dump=0x0006, cb_tx_sf=0x0008, cb_tx_nc=0x0010, cb_cid=0x1f00, cb_i=0x2000, cb_s=0x4000, cb_el=0x8000,} cocci_id/* drivers/net/ethernet/intel/e100.c 394 */;
	enum cb_status{cb_complete=0x8000, cb_ok=0x2000,} cocci_id/* drivers/net/ethernet/intel/e100.c 385 */;
	enum eeprom_config_asf{eeprom_asf=0x8000, eeprom_gcl=0x4000,} cocci_id/* drivers/net/ethernet/intel/e100.c 380 */;
	enum eeprom_id{eeprom_id_wol=0x0020,} cocci_id/* drivers/net/ethernet/intel/e100.c 376 */;
	enum eeprom_phy_iface{NoSuchPhy=0, I82553AB, I82553C, I82503, DP83840, S80C240, S80C24, I82555, DP83840A=10,} cocci_id/* drivers/net/ethernet/intel/e100.c 364 */;
	enum eeprom_cnfg_mdix{eeprom_mdix_enabled=0x0080,} cocci_id/* drivers/net/ethernet/intel/e100.c 360 */;
	enum eeprom_offsets{eeprom_cnfg_mdix=0x03, eeprom_phy_iface=0x06, eeprom_id=0x0A, eeprom_config_asf=0x0D, eeprom_smbus_addr=0x90,} cocci_id/* drivers/net/ethernet/intel/e100.c 352 */;
	enum eeprom_op{op_write=0x05, op_read=0x06, op_ewds=0x10, op_ewen=0x13,} cocci_id/* drivers/net/ethernet/intel/e100.c 345 */;
	enum mdi_ctrl{mdi_write=0x04000000, mdi_read=0x08000000, mdi_ready=0x10000000,} cocci_id/* drivers/net/ethernet/intel/e100.c 339 */;
	enum eeprom_ctrl_lo{eesk=0x01, eecs=0x02, eedi=0x04, eedo=0x08,} cocci_id/* drivers/net/ethernet/intel/e100.c 332 */;
	enum port{software_reset=0x0000, selftest=0x0001, selective_reset=0x0002,} cocci_id/* drivers/net/ethernet/intel/e100.c 326 */;
	enum cuc_dump{cuc_dump_complete=0x0000A005, cuc_dump_reset_complete=0x0000A007,} cocci_id/* drivers/net/ethernet/intel/e100.c 321 */;
	void __exit cocci_id/* drivers/net/ethernet/intel/e100.c 3176 */;
	int __init cocci_id/* drivers/net/ethernet/intel/e100.c 3167 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/intel/e100.c 3153 */;
	const struct pci_error_handlers cocci_id/* drivers/net/ethernet/intel/e100.c 3147 */;
	enum scb_cmd_lo{cuc_nop=0x00, ruc_start=0x01, ruc_load_base=0x06, cuc_start=0x10, cuc_resume=0x20, cuc_dump_addr=0x40, cuc_dump_stats=0x50, cuc_load_base=0x60, cuc_dump_reset=0x70,} cocci_id/* drivers/net/ethernet/intel/e100.c 309 */;
	pci_ers_result_t cocci_id/* drivers/net/ethernet/intel/e100.c 3081 */;
	pci_channel_state_t cocci_id/* drivers/net/ethernet/intel/e100.c 3081 */;
	pm_message_t cocci_id/* drivers/net/ethernet/intel/e100.c 3032 */;
	enum scb_cmd_hi{irq_mask_none=0x00, irq_mask_all=0x01, irq_sw_gen=0x02,} cocci_id/* drivers/net/ethernet/intel/e100.c 303 */;
	bool cocci_id/* drivers/net/ethernet/intel/e100.c 3020 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/intel/e100.c 3020 */;
	int cocci_id/* drivers/net/ethernet/intel/e100.c 3020 */;
	u16 cocci_id/* drivers/net/ethernet/intel/e100.c 3005 */;
	struct nic *cocci_id/* drivers/net/ethernet/intel/e100.c 2994 */;
	struct net_device *cocci_id/* drivers/net/ethernet/intel/e100.c 2993 */;
	bool *cocci_id/* drivers/net/ethernet/intel/e100.c 2991 */;
	void cocci_id/* drivers/net/ethernet/intel/e100.c 2991 */;
	unsigned long long cocci_id/* drivers/net/ethernet/intel/e100.c 2952 */;
	enum scb_stat_ack{stat_ack_not_ours=0x00, stat_ack_sw_gen=0x04, stat_ack_rnr=0x10, stat_ack_cu_idle=0x20, stat_ack_frame_rx=0x40, stat_ack_cu_cmd_done=0x80, stat_ack_not_present=0xFF, stat_ack_rx=(stat_ack_sw_gen | stat_ack_rnr | stat_ack_frame_rx), stat_ack_tx=(stat_ack_cu_idle | stat_ack_cu_cmd_done),} cocci_id/* drivers/net/ethernet/intel/e100.c 291 */;
	struct csr cocci_id/* drivers/net/ethernet/intel/e100.c 2870 */;
	enum ru_state{RU_SUSPENDED=0, RU_RUNNING=1, RU_UNINITIALIZED=-1,} cocci_id/* drivers/net/ethernet/intel/e100.c 285 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/intel/e100.c 2818 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/intel/e100.c 2803 */;
	netdev_features_t cocci_id/* drivers/net/ethernet/intel/e100.c 2790 */;
	enum scb_status{rus_no_res=0x08, rus_ready=0x10, rus_mask=0x3C,} cocci_id/* drivers/net/ethernet/intel/e100.c 279 */;
	struct mem cocci_id/* drivers/net/ethernet/intel/e100.c 2758 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/intel/e100.c 2749 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/intel/e100.c 2724 */;
	unsigned long *cocci_id/* drivers/net/ethernet/intel/e100.c 2698 */;
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/intel/e100.c 2692 */;
	const char cocci_id/* drivers/net/ethernet/intel/e100.c 2663 */[][ETH_GSTRING_LEN];
	enum led_state{led_on=0x01, led_off=0x04, led_on_559=0x05, led_on_557=0x07,} cocci_id/* drivers/net/ethernet/intel/e100.c 2632 */;
	struct csr {
		struct {
			u8 status;
			u8 stat_ack;
			u8 cmd_lo;
			u8 cmd_hi;
			u32 gen_ptr;
		} scb;
		u32 port;
		u16 flash_ctrl;
		u8 eeprom_ctrl_lo;
		u8 eeprom_ctrl_hi;
		u32 mdi_ctrl;
		u32 rx_dma_count;
	} cocci_id/* drivers/net/ethernet/intel/e100.c 263 */;
	enum ethtool_phys_id_state cocci_id/* drivers/net/ethernet/intel/e100.c 2629 */;
	u64 cocci_id/* drivers/net/ethernet/intel/e100.c 2602 */;
	struct ethtool_cmd cocci_id/* drivers/net/ethernet/intel/e100.c 2598 */;
	u64 *cocci_id/* drivers/net/ethernet/intel/e100.c 2596 */;
	struct ethtool_test *cocci_id/* drivers/net/ethernet/intel/e100.c 2596 */;
	struct param_range *cocci_id/* drivers/net/ethernet/intel/e100.c 2553 */;
	struct ethtool_ringparam *cocci_id/* drivers/net/ethernet/intel/e100.c 2550 */;
	struct ethtool_eeprom *cocci_id/* drivers/net/ethernet/intel/e100.c 2525 */;
	enum phy{phy_100a=0x000003E0, phy_100c=0x035002A8, phy_82555_tx=0x015002A8, phy_nsc_tx=0x5C002000, phy_82562_et=0x033002A8, phy_82562_em=0x032002A8, phy_82562_ek=0x031002A8, phy_82562_eh=0x017002A8, phy_82552_v=0xd061004d, phy_unknown=0xFFFFFFFF,} cocci_id/* drivers/net/ethernet/intel/e100.c 249 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/intel/e100.c 2466 */;
	u32 *cocci_id/* drivers/net/ethernet/intel/e100.c 2449 */;
	struct ethtool_regs *cocci_id/* drivers/net/ethernet/intel/e100.c 2446 */;
	void *cocci_id/* drivers/net/ethernet/intel/e100.c 2446 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/intel/e100.c 2429 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/intel/e100.c 2416 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/intel/e100.c 2406 */;
	struct rfd cocci_id/* drivers/net/ethernet/intel/e100.c 2386 */;
	enum loopback cocci_id/* drivers/net/ethernet/intel/e100.c 2344 */;
	enum mac{mac_82557_D100_A=0, mac_82557_D100_B=1, mac_82557_D100_C=2, mac_82558_D101_A4=4, mac_82558_D101_B0=5, mac_82559_D101M=8, mac_82559_D101S=9, mac_82550_D102=12, mac_82550_D102_C=13, mac_82551_E=14, mac_82551_F=15, mac_82551_10=16, mac_unknown=0xFF,} cocci_id/* drivers/net/ethernet/intel/e100.c 233 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/intel/e100.c 2328 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/intel/e100.c 2254 */;
	struct nic cocci_id/* drivers/net/ethernet/intel/e100.c 2222 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/intel/e100.c 2220 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/intel/e100.c 2192 */;
	struct rx cocci_id/* drivers/net/ethernet/intel/e100.c 2161 */;
	struct rfd *cocci_id/* drivers/net/ethernet/intel/e100.c 2156 */;
	struct rx *cocci_id/* drivers/net/ethernet/intel/e100.c 2154 */;
	unsigned int *cocci_id/* drivers/net/ethernet/intel/e100.c 2053 */;
	struct cb cocci_id/* drivers/net/ethernet/intel/e100.c 1897 */;
	unsigned int cocci_id/* drivers/net/ethernet/intel/e100.c 1882 */;
	struct cb *cocci_id/* drivers/net/ethernet/intel/e100.c 1881 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/intel/e100.c 186 */[];
	netdev_tx_t cocci_id/* drivers/net/ethernet/intel/e100.c 1776 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/intel/e100.c 1688 */;
	u32 cocci_id/* drivers/net/ethernet/intel/e100.c 1672 */;
	__le32 *cocci_id/* drivers/net/ethernet/intel/e100.c 1609 */;
	struct stats *cocci_id/* drivers/net/ethernet/intel/e100.c 1608 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/intel/e100.c 1607 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/intel/e100.c 1566 */;
	const struct firmware *cocci_id/* drivers/net/ethernet/intel/e100.c 1342 */;
	const char *cocci_id/* drivers/net/ethernet/intel/e100.c 1224 */;
	struct config cocci_id/* drivers/net/ethernet/intel/e100.c 1080 */;
	u8 *cocci_id/* drivers/net/ethernet/intel/e100.c 1075 */;
	struct config *cocci_id/* drivers/net/ethernet/intel/e100.c 1074 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/intel/e100.c 1072 */;
	struct param_range cocci_id/* drivers/net/ethernet/intel/e100.c 1041 */;
}