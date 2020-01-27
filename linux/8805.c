cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 991 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 991 */;
	enum{NvRegIrqStatus=0x000,

#define

NVREG_IRQSTAT_MIIEVENT

0x040




#define

NVREG_IRQSTAT_MASK

0x83ff


 NvRegIrqMask=0x004,

#define

NVREG_IRQ_RX_ERROR

0x0001




#define

NVREG_IRQ_RX

0x0002




#define

NVREG_IRQ_RX_NOBUF

0x0004




#define

NVREG_IRQ_TX_ERR

0x0008




#define

NVREG_IRQ_TX_OK

0x0010




#define

NVREG_IRQ_TIMER

0x0020




#define

NVREG_IRQ_LINK

0x0040




#define

NVREG_IRQ_RX_FORCED

0x0080




#define

NVREG_IRQ_TX_FORCED

0x0100




#define

NVREG_IRQ_RECOVER_ERROR

0x8200




#define

NVREG_IRQMASK_THROUGHPUT

0x00df




#define

NVREG_IRQMASK_CPU

0x0060




#define

NVREG_IRQ_TX_ALL

(

NVREG_IRQ_TX_ERR

|

NVREG_IRQ_TX_OK

|

NVREG_IRQ_TX_FORCED

)




#define

NVREG_IRQ_RX_ALL

(

NVREG_IRQ_RX_ERROR

|

NVREG_IRQ_RX

|

NVREG_IRQ_RX_NOBUF

|

NVREG_IRQ_RX_FORCED

)




#define

NVREG_IRQ_OTHER

(

NVREG_IRQ_TIMER

|

NVREG_IRQ_LINK

|

NVREG_IRQ_RECOVER_ERROR

)


 NvRegUnknownSetupReg6=0x008,

#define

NVREG_UNKSETUP6_VAL

3


 NvRegPollingInterval=0x00c,

#define

NVREG_POLL_DEFAULT_THROUGHPUT

65535




#define

NVREG_POLL_DEFAULT_CPU

13


 NvRegMSIMap0=0x020, NvRegMSIMap1=0x024, NvRegMSIIrqMask=0x030,

#define

NVREG_MSI_VECTOR_0_ENABLED

0x01


 NvRegMisc1=0x080,

#define

NVREG_MISC1_PAUSE_TX

0x01




#define

NVREG_MISC1_HD

0x02




#define

NVREG_MISC1_FORCE

0x3b0f3c


 NvRegMacReset=0x34,

#define

NVREG_MAC_RESET_ASSERT

0x0F3


 NvRegTransmitterControl=0x084,

#define

NVREG_XMITCTL_START

0x01




#define

NVREG_XMITCTL_MGMT_ST

0x40000000




#define

NVREG_XMITCTL_SYNC_MASK

0x000f0000




#define

NVREG_XMITCTL_SYNC_NOT_READY

0x0




#define

NVREG_XMITCTL_SYNC_PHY_INIT

0x00040000




#define

NVREG_XMITCTL_MGMT_SEMA_MASK

0x00000f00




#define

NVREG_XMITCTL_MGMT_SEMA_FREE

0x0




#define

NVREG_XMITCTL_HOST_SEMA_MASK

0x0000f000




#define

NVREG_XMITCTL_HOST_SEMA_ACQ

0x0000f000




#define

NVREG_XMITCTL_HOST_LOADED

0x00004000




#define

NVREG_XMITCTL_TX_PATH_EN

0x01000000




#define

NVREG_XMITCTL_DATA_START

0x00100000




#define

NVREG_XMITCTL_DATA_READY

0x00010000




#define

NVREG_XMITCTL_DATA_ERROR

0x00020000


 NvRegTransmitterStatus=0x088,

#define

NVREG_XMITSTAT_BUSY

0x01


 NvRegPacketFilterFlags=0x8c,

#define

NVREG_PFF_PAUSE_RX

0x08




#define

NVREG_PFF_ALWAYS

0x7F0000




#define

NVREG_PFF_PROMISC

0x80




#define

NVREG_PFF_MYADDR

0x20




#define

NVREG_PFF_LOOPBACK

0x10


 NvRegOffloadConfig=0x90,

#define

NVREG_OFFLOAD_HOMEPHY

0x601




#define

NVREG_OFFLOAD_NORMAL

RX_NIC_BUFSIZE


 NvRegReceiverControl=0x094,

#define

NVREG_RCVCTL_START

0x01




#define

NVREG_RCVCTL_RX_PATH_EN

0x01000000


 NvRegReceiverStatus=0x98,

#define

NVREG_RCVSTAT_BUSY

0x01


 NvRegSlotTime=0x9c,

#define

NVREG_SLOTTIME_LEGBF_ENABLED

0x80000000




#define

NVREG_SLOTTIME_10_100_FULL

0x00007f00




#define

NVREG_SLOTTIME_1000_FULL

0x0003ff00




#define

NVREG_SLOTTIME_HALF

0x0000ff00




#define

NVREG_SLOTTIME_DEFAULT

0x00007f00




#define

NVREG_SLOTTIME_MASK

0x000000ff


 NvRegTxDeferral=0xA0,

#define

NVREG_TX_DEFERRAL_DEFAULT

0x15050f




#define

NVREG_TX_DEFERRAL_RGMII_10_100

0x16070f




#define

NVREG_TX_DEFERRAL_RGMII_1000

0x14050f




#define

NVREG_TX_DEFERRAL_RGMII_STRETCH_10

0x16190f




#define

NVREG_TX_DEFERRAL_RGMII_STRETCH_100

0x16300f




#define

NVREG_TX_DEFERRAL_MII_STRETCH

0x152000


 NvRegRxDeferral=0xA4,

#define

NVREG_RX_DEFERRAL_DEFAULT

0x16


 NvRegMacAddrA=0xA8, NvRegMacAddrB=0xAC, NvRegMulticastAddrA=0xB0,

#define

NVREG_MCASTADDRA_FORCE

0x01


 NvRegMulticastAddrB=0xB4, NvRegMulticastMaskA=0xB8,

#define

NVREG_MCASTMASKA_NONE

0xffffffff


 NvRegMulticastMaskB=0xBC,

#define

NVREG_MCASTMASKB_NONE

0xffff


 NvRegPhyInterface=0xC0,

#define

PHY_RGMII

0x10000000


 NvRegBackOffControl=0xC4,

#define

NVREG_BKOFFCTRL_DEFAULT

0x70000000




#define

NVREG_BKOFFCTRL_SEED_MASK

0x000003ff




#define

NVREG_BKOFFCTRL_SELECT

24




#define

NVREG_BKOFFCTRL_GEAR

12


 NvRegTxRingPhysAddr=0x100, NvRegRxRingPhysAddr=0x104, NvRegRingSizes=0x108,

#define

NVREG_RINGSZ_TXSHIFT

0




#define

NVREG_RINGSZ_RXSHIFT

16


 NvRegTransmitPoll=0x10c,

#define

NVREG_TRANSMITPOLL_MAC_ADDR_REV

0x00008000


 NvRegLinkSpeed=0x110,

#define

NVREG_LINKSPEED_FORCE

0x10000




#define

NVREG_LINKSPEED_10

1000




#define

NVREG_LINKSPEED_100

100




#define

NVREG_LINKSPEED_1000

50




#define

NVREG_LINKSPEED_MASK

(

0xFFF

)


 NvRegUnknownSetupReg5=0x130,

#define

NVREG_UNKSETUP5_BIT31

(

1

<<

31

)


 NvRegTxWatermark=0x13c,

#define

NVREG_TX_WM_DESC1_DEFAULT

0x0200010




#define

NVREG_TX_WM_DESC2_3_DEFAULT

0x1e08000




#define

NVREG_TX_WM_DESC2_3_1000

0xfe08000


 NvRegTxRxControl=0x144,

#define

NVREG_TXRXCTL_KICK

0x0001




#define

NVREG_TXRXCTL_BIT1

0x0002




#define

NVREG_TXRXCTL_BIT2

0x0004




#define

NVREG_TXRXCTL_IDLE

0x0008




#define

NVREG_TXRXCTL_RESET

0x0010




#define

NVREG_TXRXCTL_RXCHECK

0x0400




#define

NVREG_TXRXCTL_DESC_1

0




#define

NVREG_TXRXCTL_DESC_2

0x002100




#define

NVREG_TXRXCTL_DESC_3

0xc02200




#define

NVREG_TXRXCTL_VLANSTRIP

0x00040




#define

NVREG_TXRXCTL_VLANINS

0x00080


 NvRegTxRingPhysAddrHigh=0x148, NvRegRxRingPhysAddrHigh=0x14C, NvRegTxPauseFrame=0x170,

#define

NVREG_TX_PAUSEFRAME_DISABLE

0x0fff0080




#define

NVREG_TX_PAUSEFRAME_ENABLE_V1

0x01800010




#define

NVREG_TX_PAUSEFRAME_ENABLE_V2

0x056003f0




#define

NVREG_TX_PAUSEFRAME_ENABLE_V3

0x09f00880


 NvRegTxPauseFrameLimit=0x174,

#define

NVREG_TX_PAUSEFRAMELIMIT_ENABLE

0x00010000


 NvRegMIIStatus=0x180,

#define

NVREG_MIISTAT_ERROR

0x0001




#define

NVREG_MIISTAT_LINKCHANGE

0x0008




#define

NVREG_MIISTAT_MASK_RW

0x0007




#define

NVREG_MIISTAT_MASK_ALL

0x000f


 NvRegMIIMask=0x184,

#define

NVREG_MII_LINKCHANGE

0x0008


 NvRegAdapterControl=0x188,

#define

NVREG_ADAPTCTL_START

0x02




#define

NVREG_ADAPTCTL_LINKUP

0x04




#define

NVREG_ADAPTCTL_PHYVALID

0x40000




#define

NVREG_ADAPTCTL_RUNNING

0x100000




#define

NVREG_ADAPTCTL_PHYSHIFT

24


 NvRegMIISpeed=0x18c,

#define

NVREG_MIISPEED_BIT8

(

1

<<

8

)




#define

NVREG_MIIDELAY

5


 NvRegMIIControl=0x190,

#define

NVREG_MIICTL_INUSE

0x08000




#define

NVREG_MIICTL_WRITE

0x00400




#define

NVREG_MIICTL_ADDRSHIFT

5


 NvRegMIIData=0x194, NvRegTxUnicast=0x1a0, NvRegTxMulticast=0x1a4, NvRegTxBroadcast=0x1a8, NvRegWakeUpFlags=0x200,

#define

NVREG_WAKEUPFLAGS_VAL

0x7770




#define

NVREG_WAKEUPFLAGS_BUSYSHIFT

24




#define

NVREG_WAKEUPFLAGS_ENABLESHIFT

16




#define

NVREG_WAKEUPFLAGS_D3SHIFT

12




#define

NVREG_WAKEUPFLAGS_D2SHIFT

8




#define

NVREG_WAKEUPFLAGS_D1SHIFT

4




#define

NVREG_WAKEUPFLAGS_D0SHIFT

0




#define

NVREG_WAKEUPFLAGS_ACCEPT_MAGPAT

0x01




#define

NVREG_WAKEUPFLAGS_ACCEPT_WAKEUPPAT

0x02




#define

NVREG_WAKEUPFLAGS_ACCEPT_LINKCHANGE

0x04




#define

NVREG_WAKEUPFLAGS_ENABLE

0x1111


 NvRegMgmtUnitGetVersion=0x204,

#define

NVREG_MGMTUNITGETVERSION

0x01


 NvRegMgmtUnitVersion=0x208,

#define

NVREG_MGMTUNITVERSION

0x08


 NvRegPowerCap=0x268,

#define

NVREG_POWERCAP_D3SUPP

(

1

<<

30

)




#define

NVREG_POWERCAP_D2SUPP

(

1

<<

26

)




#define

NVREG_POWERCAP_D1SUPP

(

1

<<

25

)


 NvRegPowerState=0x26c,

#define

NVREG_POWERSTATE_POWEREDUP

0x8000




#define

NVREG_POWERSTATE_VALID

0x0100




#define

NVREG_POWERSTATE_MASK

0x0003




#define

NVREG_POWERSTATE_D0

0x0000




#define

NVREG_POWERSTATE_D1

0x0001




#define

NVREG_POWERSTATE_D2

0x0002




#define

NVREG_POWERSTATE_D3

0x0003


 NvRegMgmtUnitControl=0x278,

#define

NVREG_MGMTUNITCONTROL_INUSE

0x20000


 NvRegTxCnt=0x280, NvRegTxZeroReXmt=0x284, NvRegTxOneReXmt=0x288, NvRegTxManyReXmt=0x28c, NvRegTxLateCol=0x290, NvRegTxUnderflow=0x294, NvRegTxLossCarrier=0x298, NvRegTxExcessDef=0x29c, NvRegTxRetryErr=0x2a0, NvRegRxFrameErr=0x2a4, NvRegRxExtraByte=0x2a8, NvRegRxLateCol=0x2ac, NvRegRxRunt=0x2b0, NvRegRxFrameTooLong=0x2b4, NvRegRxOverflow=0x2b8, NvRegRxFCSErr=0x2bc, NvRegRxFrameAlignErr=0x2c0, NvRegRxLenErr=0x2c4, NvRegRxUnicast=0x2c8, NvRegRxMulticast=0x2cc, NvRegRxBroadcast=0x2d0, NvRegTxDef=0x2d4, NvRegTxFrame=0x2d8, NvRegRxCnt=0x2dc, NvRegTxPause=0x2e0, NvRegRxPause=0x2e4, NvRegRxDropFrame=0x2e8, NvRegVlanControl=0x300,

#define

NVREG_VLANCONTROL_ENABLE

0x2000


 NvRegMSIXMap0=0x3e0, NvRegMSIXMap1=0x3e4, NvRegMSIXIrqStatus=0x3f0, NvRegPowerState2=0x600,

#define

NVREG_POWERSTATE2_POWERUP_MASK

0x0F15




#define

NVREG_POWERSTATE2_POWERUP_REV_A3

0x0001




#define

NVREG_POWERSTATE2_PHY_RESET

0x0004




#define

NVREG_POWERSTATE2_GATE_CLOCKS

0x0F00


} cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 94 */;
	u8 __iomem *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 939 */;
	enum{NV_CROSSOVER_DETECTION_DISABLED, NV_CROSSOVER_DETECTION_ENABLED,} cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 922 */;
	bool cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 916 */;
	int cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 911 */;
	enum{NV_DMA_64BIT_DISABLED, NV_DMA_64BIT_ENABLED,} cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 907 */;
	enum{NV_MSIX_INT_DISABLED, NV_MSIX_INT_ENABLED,} cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 898 */;
	enum{NV_MSI_INT_DISABLED, NV_MSI_INT_ENABLED,} cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 889 */;
	enum{NV_OPTIMIZATION_MODE_THROUGHPUT, NV_OPTIMIZATION_MODE_CPU, NV_OPTIMIZATION_MODE_DYNAMIC,} cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 870 */;
	struct fe_priv {
		spinlock_t lock;
		struct net_device *dev;
		struct napi_struct napi;
		spinlock_t hwstats_lock;
		struct nv_ethtool_stats estats;
		int in_shutdown;
		u32 linkspeed;
		int duplex;
		int autoneg;
		int fixed_mode;
		int phyaddr;
		int wolenabled;
		unsigned int phy_oui;
		unsigned int phy_model;
		unsigned int phy_rev;
		u16 gigabit;
		int intr_test;
		int recover_error;
		int quiet_count;
		dma_addr_t ring_addr;
		struct pci_dev *pci_dev;
		u32 orig_mac[2];
		u32 events;
		u32 irqmask;
		u32 desc_ver;
		u32 txrxctl_bits;
		u32 vlanctl_bits;
		u32 driver_data;
		u32 device_id;
		u32 register_size;
		u32 mac_in_use;
		int mgmt_version;
		int mgmt_sema;
		void __iomem *base;
		union ring_type get_rx,put_rx,last_rx;
		struct nv_skb_map *get_rx_ctx,*put_rx_ctx;
		struct nv_skb_map *last_rx_ctx;
		struct nv_skb_map *rx_skb;
		union ring_type rx_ring;
		unsigned int rx_buf_sz;
		unsigned int pkt_limit;
		struct timer_list oom_kick;
		struct timer_list nic_poll;
		struct timer_list stats_poll;
		u32 nic_poll_irq;
		int rx_ring_size;
		struct u64_stats_sync swstats_rx_syncp;
		struct nv_txrx_stats __percpu *txrx_stats;
		int need_linktimer;
		unsigned long link_timeout;
		union ring_type get_tx,put_tx,last_tx;
		struct nv_skb_map *get_tx_ctx,*put_tx_ctx;
		struct nv_skb_map *last_tx_ctx;
		struct nv_skb_map *tx_skb;
		union ring_type tx_ring;
		u32 tx_flags;
		int tx_ring_size;
		int tx_limit;
		u32 tx_pkts_in_progress;
		struct nv_skb_map *tx_change_owner;
		struct nv_skb_map *tx_end_flip;
		int tx_stop;
		struct u64_stats_sync swstats_tx_syncp;
		u32 msi_flags;
		struct msix_entry msi_x_entry[NV_MSI_X_MAX_VECTORS];
		u32 pause_flags;
		u32 saved_config_space[NV_PCI_REGSZ_MAX / 4];
		char name_rx[IFNAMSIZ + 3];
		char name_tx[IFNAMSIZ + 3];
		char name_other[IFNAMSIZ + 6];
	} cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 753 */;
	struct nv_txrx_stats {
		u64 stat_rx_packets;
		u64 stat_rx_bytes;
		u64 stat_rx_missed_errors;
		u64 stat_rx_dropped;
		u64 stat_tx_packets;
		u64 stat_tx_bytes;
		u64 stat_tx_dropped;
	} cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 716 */;
	struct nv_skb_map {
		struct sk_buff *skb;
		dma_addr_t dma;
		unsigned int dma_len:31;
		unsigned int dma_single:1;
		struct ring_desc_ex *first_tx_desc;
		struct nv_skb_map *next_tx_ctx;
	} cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 707 */;
	const struct register_test cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 697 */[];
	struct register_test {
		__u32 reg;
		__u32 mask;
	} cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 692 */;
	struct nv_ethtool_stats cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 677 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 6469 */;
	struct nv_ethtool_stats {
		u64 tx_bytes;
		u64 tx_zero_rexmt;
		u64 tx_one_rexmt;
		u64 tx_many_rexmt;
		u64 tx_late_collision;
		u64 tx_fifo_errors;
		u64 tx_carrier_errors;
		u64 tx_excess_deferral;
		u64 tx_retry_error;
		u64 rx_frame_error;
		u64 rx_extra_byte;
		u64 rx_late_collision;
		u64 rx_runt;
		u64 rx_frame_too_long;
		u64 rx_over_errors;
		u64 rx_crc_errors;
		u64 rx_frame_align_error;
		u64 rx_length_error;
		u64 rx_unicast;
		u64 rx_multicast;
		u64 rx_broadcast;
		u64 rx_packets;
		u64 rx_errors_total;
		u64 tx_errors_total;
		u64 tx_deferral;
		u64 tx_packets;
		u64 rx_bytes;
		u64 tx_pause;
		u64 rx_pause;
		u64 rx_drop_frame;
		u64 tx_unicast;
		u64 tx_multicast;
		u64 tx_broadcast;
	} cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 637 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 6305 */[];
	struct device *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 6241 */;
	u16 cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 6162 */;
	const struct nv_ethtool_str cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 597 */[];
	struct nv_ethtool_str {
		char name[ETH_GSTRING_LEN];
	} cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 593 */;
	struct nv_skb_map cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 5871 */;
	struct nv_txrx_stats cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 5737 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 5708 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 5708 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 5674 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 5354 */;
	struct nv_ethtool_str cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 5346 */;
	u8 *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 5342 */;
	struct ethtool_test *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 5262 */;
	u8 cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 5193 */;
	u64 cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 5026 */;
	u64 *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 5017 */;
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 5017 */;
	netdev_features_t cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 4928 */;
	struct ethtool_pauseparam *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 4794 */;
	struct ethtool_ringparam *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 4659 */;
	u32 *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 4602 */;
	struct ethtool_regs *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 4598 */;
	void *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 4598 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 4418 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 4337 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 4304 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 4296 */;
	unsigned int cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 4167 */;
	unsigned long cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 4166 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 4160 */;
	irqreturn_t (*cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 4022 */)(int foo,
										  void *data);
	struct fe_priv cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 3784 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 3782 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 3679 */;
	union ring_type {
		struct ring_desc *orig;
		struct ring_desc_ex *ex;
	} cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 354 */;
	struct ring_desc_ex {
		__le32 bufhigh;
		__le32 buflow;
		__le32 txvlan;
		__le32 flaglen;
	} cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 347 */;
	struct ring_desc {
		__le32 buf;
		__le32 flaglen;
	} cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 342 */;
	__le16 *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 3242 */;
	__le32 *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 3241 */;
	unsigned char *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 3238 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 3235 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 3177 */;
	u32 cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 3160 */[2];
	struct ethhdr *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 2858 */;
	struct vlan_ethhdr *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 2854 */;
	union ring_type cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 2747 */;
	skb_frag_t *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 2467 */;
	const skb_frag_t *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 2289 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 2210 */;
	const u32 cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 2137 */[BACKOFF_SEEDSET_ROWS][BACKOFF_SEEDSET_LFSRS];
	struct nv_skb_map *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 2018 */;
	struct ring_desc_ex *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 1871 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 1837 */;
	struct ring_desc *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 1830 */;
	struct nv_txrx_stats *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 1736 */;
	struct rtnl_link_stats64 *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 1734 */;
	const struct {
		int reg;
		int init;
	} cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 1205 */[];
	struct ring_desc_ex cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 1032 */;
	struct ring_desc cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 1025 */;
	struct fe_priv *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 1020 */;
	struct net_device *cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 1018 */;
	void cocci_id/* drivers/net/ethernet/nvidia/forcedeth.c 1018 */;
}
