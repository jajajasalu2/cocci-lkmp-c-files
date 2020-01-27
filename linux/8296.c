cocci_test_suite() {
	rtl_ocpar_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 977 */;
	rtl_phyar_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 942 */;
	enum mac_version{RTL_GIGA_MAC_VER_02, RTL_GIGA_MAC_VER_03, RTL_GIGA_MAC_VER_04, RTL_GIGA_MAC_VER_05, RTL_GIGA_MAC_VER_06, RTL_GIGA_MAC_VER_07, RTL_GIGA_MAC_VER_08, RTL_GIGA_MAC_VER_09, RTL_GIGA_MAC_VER_10, RTL_GIGA_MAC_VER_11, RTL_GIGA_MAC_VER_12, RTL_GIGA_MAC_VER_13, RTL_GIGA_MAC_VER_14, RTL_GIGA_MAC_VER_15, RTL_GIGA_MAC_VER_16, RTL_GIGA_MAC_VER_17, RTL_GIGA_MAC_VER_18, RTL_GIGA_MAC_VER_19, RTL_GIGA_MAC_VER_20, RTL_GIGA_MAC_VER_21, RTL_GIGA_MAC_VER_22, RTL_GIGA_MAC_VER_23, RTL_GIGA_MAC_VER_24, RTL_GIGA_MAC_VER_25, RTL_GIGA_MAC_VER_26, RTL_GIGA_MAC_VER_27, RTL_GIGA_MAC_VER_28, RTL_GIGA_MAC_VER_29, RTL_GIGA_MAC_VER_30, RTL_GIGA_MAC_VER_31, RTL_GIGA_MAC_VER_32, RTL_GIGA_MAC_VER_33, RTL_GIGA_MAC_VER_34, RTL_GIGA_MAC_VER_35, RTL_GIGA_MAC_VER_36, RTL_GIGA_MAC_VER_37, RTL_GIGA_MAC_VER_38, RTL_GIGA_MAC_VER_39, RTL_GIGA_MAC_VER_40, RTL_GIGA_MAC_VER_41, RTL_GIGA_MAC_VER_42, RTL_GIGA_MAC_VER_43, RTL_GIGA_MAC_VER_44, RTL_GIGA_MAC_VER_45, RTL_GIGA_MAC_VER_46, RTL_GIGA_MAC_VER_47, RTL_GIGA_MAC_VER_48, RTL_GIGA_MAC_VER_49, RTL_GIGA_MAC_VER_50, RTL_GIGA_MAC_VER_51, RTL_GIGA_MAC_VER_52, RTL_GIGA_MAC_VER_60, RTL_GIGA_MAC_VER_61, RTL_GIGA_MAC_NONE,} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 87 */;
	rtl_ocp_gphy_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 849 */;
	void (*cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 787 */)(unsigned int);
	const struct rtl_cond *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 786 */;
	struct rtl_cond {
		bool (*check)(struct rtl8169_private *);
		const char *msg;
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 776 */;
	struct RxDesc cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 75 */;
	struct TxDesc cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 74 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 7021 */;
	void (*cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 694 */)(struct rtl8169_private *tp);
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6821 */;
	struct clk *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6774 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6642 */;
	struct mii_bus *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6617 */;
	rtl_rxtx_empty_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6612 */;
	rtl_link_list_ready_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6607 */;
	u8 cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6588 */[ETH_ALEN];
	const struct net_device_ops cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6533 */;
	struct rtl8169_private {
		void __iomem *mmio_addr;
		struct pci_dev *pci_dev;
		struct net_device *dev;
		struct phy_device *phydev;
		struct napi_struct napi;
		u32 msg_enable;
		enum mac_version mac_version;
		u32 cur_rx;
		u32 cur_tx;
		u32 dirty_tx;
		struct rtl8169_stats rx_stats;
		struct rtl8169_stats tx_stats;
		struct TxDesc *TxDescArray;
		struct RxDesc *RxDescArray;
		dma_addr_t TxPhyAddr;
		dma_addr_t RxPhyAddr;
		struct page *Rx_databuff[NUM_RX_DESC];
		struct ring_info tx_skb[NUM_TX_DESC];
		u16 cp_cmd;
		u32 irq_mask;
		struct clk *clk;
		struct {
		DECLARE_BITMAP(flags,RTL_FLAG_MAX)
			;
			struct mutex mutex;
			struct work_struct work;
		} wk;
		unsigned irq_enabled:1;
		unsigned supports_gmii:1;
		unsigned aspm_manageable:1;
		dma_addr_t counters_phys_addr;
		struct rtl8169_counters *counters;
		struct rtl8169_tc_offsets tc_offset;
		u32 saved_wolopts;
		int eee_adv;
		const char *fw_name;
		struct rtl_fw *rtl_fw;
		u32 ocp_base;
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 650 */;
	const struct dev_pm_ops cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6450 */;
	struct rtl8169_stats {
		u64 packets;
		u64 bytes;
		struct u64_stats_sync syncp;
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 644 */;
	enum rtl_flag{RTL_FLAG_TASK_ENABLED=0, RTL_FLAG_TASK_RESET_PENDING, RTL_FLAG_MAX,} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 638 */;
	struct rtl8169_private *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6369 */;
	struct net_device *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6367 */;
	void cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6367 */;
	struct rtl8169_tc_offsets {
		bool inited;
		__le64 tx_errors;
		__le32 tx_multi_collision;
		__le16 tx_aborted;
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 631 */;
	struct rtnl_link_stats64 *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6280 */;
	struct rtl8169_counters {
		__le64 tx_packets;
		__le64 rx_packets;
		__le64 tx_errors;
		__le32 rx_errors;
		__le16 rx_missed;
		__le16 align_errors;
		__le32 tx_one_collision;
		__le32 tx_multi_collision;
		__le64 rx_unicast;
		__le64 rx_broadcast;
		__le32 rx_multicast;
		__le16 tx_aborted;
		__le16 tx_underun;
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 615 */;
	phy_interface_t cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6108 */;
	struct ring_info {
		struct sk_buff *skb;
		u32 len;
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 610 */;
	struct rtl8169_private cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6063 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6061 */;
	struct RxDesc {
		__le32 opts1;
		__le32 opts2;
		__le64 addr;
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 604 */;
	const struct {
		int bitnr;
		void (*action)(struct rtl8169_private *);
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6032 */[];
	struct work_struct *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 6030 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5998 */;
	struct TxDesc {
		__le32 opts1;
		__le32 opts2;
		__le64 addr;
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 598 */;
	const void *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5909 */;
	enum rtl_rx_desc_bit{PID1=(1 << 18), PID0=(1 << 17), IPFail=(1 << 16), UDPFail=(1 << 15), TCPFail=(1 << 14), RxVlanTag=(1 << 16),} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 575 */;
	netdev_features_t cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5748 */;
	u32 cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5647 */[2];
	struct TxDesc *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5644 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5639 */;
	enum rtl_tx_desc_bit_1{TD1_GTSENV4=(1 << 26), TD1_GTSENV6=(1 << 25), TD1_IPv6_CS=(1 << 28), TD1_IPv4_CS=(1 << 29), TD1_TCP_CS=(1 << 30), TD1_UDP_CS=(1 << 31),} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 558 */;
	const struct iphdr *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5538 */;
	struct tcphdr *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5514 */;
	const struct ipv6hdr *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5513 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5511 */;
	enum rtl_tx_desc_bit_0{

#define

TD0_MSS_SHIFT

16


TD0_TCP_CS=(1 << 16), TD0_UDP_CS=(1 << 17), TD0_IP_CS=(1 << 18),} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 549 */;
	const skb_frag_t *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5465 */;
	struct skb_shared_info *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5458 */;
	__le32 cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5445 */;
	struct ring_info *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5393 */;
	enum rtl_tx_desc_bit{TD_LSO=(1 << 27), TxVlanTag=(1 << 17),} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 539 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5303 */;
	struct device *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5301 */;
	enum rtl_desc_bit{DescOwn=(1 << 31), RingEnd=(1 << 30), FirstFrag=(1 << 29), LastFrag=(1 << 28),} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 530 */;
	struct RxDesc *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5299 */;
	struct page *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5298 */;
	const rtl_generic_fct cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5136 */[];
	rtl_mac_ocp_e00e_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 5012 */;
	const struct ephy_info cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 4897 */[];
	const struct ephy_info *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 4146 */;
	int cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 4146 */;
	struct ephy_info {
		unsigned int offset;
		u16 mask;
		u16 bits;
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 4139 */;
	enum rtl_register_content{SYSErr=0x8000, PCSTimeout=0x4000, SWInt=0x0100, TxDescUnavail=0x0080, RxFIFOOver=0x0040, LinkChg=0x0020, RxOverflow=0x0010, TxErr=0x0008, TxOK=0x0004, RxErr=0x0002, RxOK=0x0001, RxRWT=(1 << 22), RxRES=(1 << 21), RxRUNT=(1 << 20), RxCRC=(1 << 19), StopReq=0x80, CmdReset=0x10, CmdRxEnb=0x08, CmdTxEnb=0x04, RxBufEmpty=0x01, HPQ=0x80, NPQ=0x40, FSWInt=0x01, Cfg9346_Lock=0x00, Cfg9346_Unlock=0xc0, AcceptErr=0x20, AcceptRunt=0x10, AcceptBroadcast=0x08, AcceptMulticast=0x04, AcceptMyPhys=0x02, AcceptAllPhys=0x01, TxInterFrameGapShift=24, TxDMAShift=8, LEDS1=(1 << 7), LEDS0=(1 << 6), Speed_down=(1 << 4), MEMMAP=(1 << 3), IOMAP=(1 << 2), VPD=(1 << 1), PMEnable=(1 << 0), ClkReqEn=(1 << 7), MSIEnable=(1 << 5), PCI_Clock_66MHz=0x01, PCI_Clock_33MHz=0x00, MagicPacket=(1 << 5), LinkUp=(1 << 4), Jumbo_En0=(1 << 2), Rdy_to_L23=(1 << 1), Beacon_en=(1 << 0), Jumbo_En1=(1 << 1), BWF=(1 << 6), MWF=(1 << 5), UWF=(1 << 4), Spi_en=(1 << 3), LanWake=(1 << 1), PMEStatus=(1 << 0), ASPM_en=(1 << 0), EnableBist=(1 << 15), Mac_dbgo_oe=(1 << 14), Normal_mode=(1 << 13), Force_half_dup=(1 << 12), Force_rxflow_en=(1 << 11), Force_txflow_en=(1 << 10), Cxpl_dbg_sel=(1 << 9), ASF=(1 << 8), PktCntrDisable=(1 << 7), Mac_dbgo_sel=0x001c, RxVlan=(1 << 6), RxChkSum=(1 << 5), PCIDAC=(1 << 4), PCIMulRW=(1 << 3), TBI_Enable=0x80, TxFlowCtrl=0x40, RxFlowCtrl=0x20, _1000bpsF=0x10, _100bps=0x08, _10bps=0x04, LinkStatus=0x02, FullDup=0x01, CounterReset=0x1, CounterDump=0x8, MagicPacket_v2=(1 << 16),} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 409 */;
	rtl_csiar_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 4088 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 4063 */;
	unsigned cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 4027 */;
	rtl_txcfg_empty_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 3965 */;
	rtl_npq_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 3960 */;
	enum rtl8125_registers{IntrMask_8125=0x38, IntrStatus_8125=0x3c, TxPoll_8125=0x90, MAC0_BKP=0x19e0,} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 396 */;
	rtl_chipcmd_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 3916 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 3678 */;
	enum rtl_flag cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 3614 */;
	enum rtl8168_registers{LED_FREQ=0x1a, EEE_LED=0x1b, ERIDR=0x70, ERIAR=0x74,

#define

ERIAR_FLAG

0x80000000




#define

ERIAR_WRITE_CMD

0x80000000




#define

ERIAR_READ_CMD

0x00000000




#define

ERIAR_ADDR_BYTE_ALIGN

4




#define

ERIAR_TYPE_SHIFT

16




#define

ERIAR_EXGMAC

(

0x00

<<

ERIAR_TYPE_SHIFT

)




#define

ERIAR_MSIX

(

0x01

<<

ERIAR_TYPE_SHIFT

)




#define

ERIAR_ASF

(

0x02

<<

ERIAR_TYPE_SHIFT

)




#define

ERIAR_OOB

(

0x02

<<

ERIAR_TYPE_SHIFT

)




#define

ERIAR_MASK_SHIFT

12




#define

ERIAR_MASK_0001

(

0x1

<<

ERIAR_MASK_SHIFT

)




#define

ERIAR_MASK_0011

(

0x3

<<

ERIAR_MASK_SHIFT

)




#define

ERIAR_MASK_0100

(

0x4

<<

ERIAR_MASK_SHIFT

)




#define

ERIAR_MASK_0101

(

0x5

<<

ERIAR_MASK_SHIFT

)




#define

ERIAR_MASK_1111

(

0xf

<<

ERIAR_MASK_SHIFT

)


 EPHY_RXER_NUM=0x7c, OCPDR=0xb0,

#define

OCPDR_WRITE_CMD

0x80000000




#define

OCPDR_READ_CMD

0x00000000




#define

OCPDR_REG_MASK

0x7f




#define

OCPDR_GPHY_REG_SHIFT

16




#define

OCPDR_DATA_MASK

0xffff


 OCPAR=0xb4,

#define

OCPAR_FLAG

0x80000000




#define

OCPAR_GPHY_WRITE_CMD

0x8000f060




#define

OCPAR_GPHY_READ_CMD

0x0000f060


 GPHY_OCP=0xb8, RDSAR1=0xd0, MISC=0xf0,

#define

TXPLA_RST

(

1

<<

29

)




#define

DISABLE_LAN_EN

(

1

<<

23

)




#define

PWM_EN

(

1

<<

22

)




#define

RXDV_GATED_EN

(

1

<<

19

)




#define

EARLY_TALLY_EN

(

1

<<

16

)


} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 355 */;
	const struct phy_reg cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 3378 */[];
	enum rtl8168_8101_registers{CSIDR=0x64, CSIAR=0x68,

#define

CSIAR_FLAG

0x80000000




#define

CSIAR_WRITE_CMD

0x80000000




#define

CSIAR_BYTE_ENABLE

0x0000f000




#define

CSIAR_ADDR_MASK

0x00000fff


 PMCH=0x6f, EPHYAR=0x80,

#define

EPHYAR_FLAG

0x80000000




#define

EPHYAR_WRITE_CMD

0x80000000




#define

EPHYAR_REG_MASK

0x1f




#define

EPHYAR_REG_SHIFT

16




#define

EPHYAR_DATA_MASK

0xffff


 DLLPR=0xd0,

#define

PFM_EN

(

1

<<

6

)




#define

TX_10M_PS_EN

(

1

<<

7

)


 DBG_REG=0xd1,

#define

FIX_NAK_1

(

1

<<

4

)




#define

FIX_NAK_2

(

1

<<

3

)


 TWSI=0xd2, MCU=0xd3,

#define

NOW_IS_OOB

(

1

<<

7

)




#define

TX_EMPTY

(

1

<<

5

)




#define

RX_EMPTY

(

1

<<

4

)




#define

RXTX_EMPTY

(

TX_EMPTY

|

RX_EMPTY

)




#define

EN_NDP

(

1

<<

3

)




#define

EN_OOB_RESET

(

1

<<

2

)




#define

LINK_LIST_RDY

(

1

<<

1

)


 EFUSEAR=0xdc,

#define

EFUSEAR_FLAG

0x80000000




#define

EFUSEAR_WRITE_CMD

0x80000000




#define

EFUSEAR_READ_CMD

0x00000000




#define

EFUSEAR_REG_MASK

0x03ff




#define

EFUSEAR_REG_SHIFT

8




#define

EFUSEAR_DATA_MASK

0xff


 MISC_1=0xf2,

#define

PFM_D3COLD_EN

(

1

<<

6

)


} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 315 */;
	const u16 cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 2908 */[];
	const u32 cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 2724 */[];
	enum rtl_registers{MAC0=0, MAC4=4, MAR0=8, CounterAddrLow=0x10, CounterAddrHigh=0x14, TxDescStartAddrLow=0x20, TxDescStartAddrHigh=0x24, TxHDescStartAddrLow=0x28, TxHDescStartAddrHigh=0x2c, FLASH=0x30, ERSR=0x36, ChipCmd=0x37, TxPoll=0x38, IntrMask=0x3c, IntrStatus=0x3e, TxConfig=0x40, RxConfig=0x44, RxMissed=0x4c, Cfg9346=0x50, Config0=0x51, Config1=0x52, Config2=0x53, Config3=0x54, Config4=0x55, Config5=0x56, PHYAR=0x60, PHYstatus=0x6c, RxMaxSize=0xda, CPlusCmd=0xe0, IntrMitigate=0xe2, RxDescAddrLow=0xe4, RxDescAddrHigh=0xe8, EarlyTxThres=0xec, MaxTxPacketSize=0xec, FuncEvent=0xf0, FuncEventMask=0xf4, FuncPresetState=0xf8, IBCR0=0xf8, IBCR2=0xf9, IBIMR0=0xfa, IBISR0=0xfb, FuncForceEvent=0xfc,} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 241 */;
	struct {
		u32 msg_enable;
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 237 */;
	const struct phy_reg *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 2277 */;
	struct phy_reg {
		u16 reg;
		u16 val;
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 2271 */;
	const struct rtl_mac_info *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 2252 */;
	const struct rtl_mac_info {
		u16 mask;
		u16 val;
		u16 mac_version;
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 2163 */[];
	const struct pci_device_id cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 212 */[];
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 2113 */;
	struct ethtool_eee *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 2059 */;
	struct {
		u32 frames;
		u32 usecs;
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1999 */[];
	const struct rtl_coalesce_info *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1976 */;
	u16 *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1974 */;
	const struct rtl_coalesce_scale *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1973 */;
	struct {
		u32 *max_frames;
		u32 *usecs;
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1928 */[];
	struct ethtool_coalesce *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1923 */;
	const struct rtl_coalesce_info cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1895 */[];
	struct rtl_coalesce_info {
		u32 speed;
		struct rtl_coalesce_scale scalev[4];
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1875 */;
	struct rtl_coalesce_scale {
		u32 nsecs[2];
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1869 */;
	u8 *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1831 */;
	struct rtl8169_counters *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1805 */;
	u64 *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1801 */;
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1801 */;
	u64 cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1727 */;
	rtl_counters_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1717 */;
	const char cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1691 */[][ETH_GSTRING_LEN];
	u32 *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1668 */;
	u32 __iomem *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1667 */;
	void *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1664 */;
	struct ethtool_regs *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1663 */;
	struct rtl_fw *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1576 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1573 */;
	const struct {
		const char *name;
		const char *fw_name;
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 151 */[];
	u8 cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1496 */;
	unsigned int cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1495 */;
	const struct {
		u32 opt;
		u16 reg;
		u8 mask;
	} cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1483 */[];
	u32 cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1481 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1471 */;
	rtl_efusear_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1370 */;
	bool cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1350 */;
	rtl_ocp_tx_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1262 */;
	rtl_ep_ocp_read_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1257 */;
	u16 cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1250 */;
	rtl_dp_ocp_read_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1248 */;
	rtl_eriar_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1150 */;
	rtl_ephyar_cond cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1127 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/realtek/r8169_main.c 1094 */;
}
