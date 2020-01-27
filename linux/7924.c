cocci_test_suite() {
	struct usb_driver cocci_id/* drivers/net/usb/catc.c 961 */;
	const struct usb_device_id cocci_id/* drivers/net/usb/catc.c 952 */[];
	struct usb_interface *cocci_id/* drivers/net/usb/catc.c 933 */;
	enum register_offsets{TxBufCount=0x20, RxBufCount=0x21, OpModes=0x22, TxQed=0x23, RxQed=0x24, MaxBurst=0x25, RxUnit=0x60, EthStatus=0x61, StationAddr0=0x67, EthStats=0x69, LEDCtrl=0x81,} cocci_id/* drivers/net/usb/catc.c 88 */;
	u32 *cocci_id/* drivers/net/usb/catc.c 835 */;
	struct catc cocci_id/* drivers/net/usb/catc.c 781 */;
	u8 cocci_id/* drivers/net/usb/catc.c 772 */[ETH_ALEN];
	struct device *cocci_id/* drivers/net/usb/catc.c 768 */;
	const struct usb_device_id *cocci_id/* drivers/net/usb/catc.c 766 */;
	const struct net_device_ops cocci_id/* drivers/net/usb/catc.c 751 */;
	enum control_requests{ReadMem=0xf1, GetMac=0xf2, Reset=0xf4, SetMac=0xf5, SetRxMode=0xf5, WriteROM=0xf8, SetReg=0xfa, GetReg=0xfb, WriteMem=0xfc, ReadROM=0xfd,} cocci_id/* drivers/net/usb/catc.c 71 */;
	const struct ethtool_ops cocci_id/* drivers/net/usb/catc.c 704 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/usb/catc.c 681 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/usb/catc.c 672 */;
	struct net_device *cocci_id/* drivers/net/usb/catc.c 671 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/usb/catc.c 629 */;
	u32 cocci_id/* drivers/net/usb/catc.c 620 */;
	unsigned char *cocci_id/* drivers/net/usb/catc.c 618 */;
	struct timer_list *cocci_id/* drivers/net/usb/catc.c 603 */;
	unsigned long cocci_id/* drivers/net/usb/catc.c 538 */;
	struct ctrl_queue *cocci_id/* drivers/net/usb/catc.c 536 */;
	void (*cocci_id/* drivers/net/usb/catc.c 534 */)(struct catc *catc,
							 struct ctrl_queue *q);
	void *cocci_id/* drivers/net/usb/catc.c 534 */;
	u8 cocci_id/* drivers/net/usb/catc.c 533 */;
	u16 cocci_id/* drivers/net/usb/catc.c 533 */;
	struct catc *cocci_id/* drivers/net/usb/catc.c 533 */;
	int cocci_id/* drivers/net/usb/catc.c 533 */;
	const char cocci_id/* drivers/net/usb/catc.c 53 */[];
	struct urb *cocci_id/* drivers/net/usb/catc.c 498 */;
	void cocci_id/* drivers/net/usb/catc.c 498 */;
	struct usb_ctrlrequest *cocci_id/* drivers/net/usb/catc.c 475 */;
	struct usb_device *cocci_id/* drivers/net/usb/catc.c 473 */;
	char *cocci_id/* drivers/net/usb/catc.c 415 */;
	netdev_tx_t cocci_id/* drivers/net/usb/catc.c 409 */;
	__be16 *cocci_id/* drivers/net/usb/catc.c 293 */;
	unsigned int cocci_id/* drivers/net/usb/catc.c 283 */;
	u8 *cocci_id/* drivers/net/usb/catc.c 281 */;
	__le16 *cocci_id/* drivers/net/usb/catc.c 233 */;
	struct sk_buff *cocci_id/* drivers/net/usb/catc.c 216 */;
	struct catc {
		struct net_device *netdev;
		struct usb_device *usbdev;
		unsigned long flags;
		unsigned int tx_ptr,tx_idx;
		unsigned int ctrl_head,ctrl_tail;
		spinlock_t tx_lock,ctrl_lock;
		u8 tx_buf[2][TX_MAX_BURST * (PKT_SZ + 2)];
		u8 rx_buf[RX_MAX_BURST * (PKT_SZ + 2)];
		u8 irq_buf[2];
		u8 ctrl_buf[64];
		struct usb_ctrlrequest ctrl_dr;
		struct timer_list timer;
		u8 stats_buf[8];
		u16 stats_vals[4];
		unsigned long last_stats;
		u8 multicast[64];
		struct ctrl_queue {
			u8 dir;
			u8 request;
			u16 value;
			u16 index;
			void *buf;
			int len;
			void (*callback)(struct catc *catc,
					 struct ctrl_queue *q);
		} ctrl_queue[CTRL_QUEUE];
		struct urb *tx_urb,*rx_urb,*irq_urb,*ctrl_urb;
		u8 is_f5u011;
		u8 rxmode[2];
		atomic_t recq_sz;
	} cocci_id/* drivers/net/usb/catc.c 149 */;
	enum link_status{LinkNoChange=0, LinkGood=1, LinkBad=2,} cocci_id/* drivers/net/usb/catc.c 135 */;
	enum led_values{LEDFast=0x01, LEDSlow=0x02, LEDFlash=0x03, LEDPulse=0x04, LEDLink=0x08,} cocci_id/* drivers/net/usb/catc.c 127 */;
	enum rx_filter_bits{RxEnable=0x01, RxPolarity=0x02, RxForceOK=0x04, RxMultiCast=0x08, RxPromisc=0x10, AltRxPromisc=0x20,} cocci_id/* drivers/net/usb/catc.c 118 */;
	enum op_mode_bits{Op3MemWaits=0x03, OpLenInclude=0x08, OpRxMerge=0x10, OpTxMerge=0x20, OpWin95bugfix=0x40, OpLoopback=0x80,} cocci_id/* drivers/net/usb/catc.c 109 */;
	enum eth_stats{TxSingleColl=0x00, TxMultiColl=0x02, TxExcessColl=0x04, RxFramErr=0x06,} cocci_id/* drivers/net/usb/catc.c 102 */;
}