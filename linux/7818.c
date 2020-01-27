cocci_test_suite() {
	struct mpt_lan_priv {
		MPT_ADAPTER *mpt_dev;
		u8 pnum;
		atomic_t buckets_out;
		int bucketthresh;
		int *mpt_txfidx;
		int mpt_txfidx_tail;
		spinlock_t txfidx_lock;
		int *mpt_rxfidx;
		int mpt_rxfidx_tail;
		spinlock_t rxfidx_lock;
		struct BufferControl *RcvCtl;
		struct BufferControl *SendCtl;
		int max_buckets_out;
		int tx_max_out;
		u32 total_posted;
		u32 total_received;
		struct delayed_work post_buckets_task;
		struct net_device *dev;
		unsigned long post_buckets_active;
	} cocci_id/* drivers/message/fusion/mptlan.c 88 */;
	struct BufferControl {
		struct sk_buff *skb;
		dma_addr_t dma;
		unsigned int len;
	} cocci_id/* drivers/message/fusion/mptlan.c 82 */;
	SGETransaction32_t cocci_id/* drivers/message/fusion/mptlan.c 76 */;
	LANReceivePostRequest_t cocci_id/* drivers/message/fusion/mptlan.c 73 */;
	u16 cocci_id/* drivers/message/fusion/mptlan.c 687 */;
	const unsigned char *cocci_id/* drivers/message/fusion/mptlan.c 683 */;
	LANSendRequest_t *cocci_id/* drivers/message/fusion/mptlan.c 680 */;
	netdev_tx_t cocci_id/* drivers/message/fusion/mptlan.c 674 */;
	u32 *cocci_id/* drivers/message/fusion/mptlan.c 609 */;
	unsigned long cocci_id/* drivers/message/fusion/mptlan.c 499 */;
	struct mpt_lan_priv *cocci_id/* drivers/message/fusion/mptlan.c 497 */;
	LANResetRequest_t *cocci_id/* drivers/message/fusion/mptlan.c 467 */;
	struct BufferControl cocci_id/* drivers/message/fusion/mptlan.c 403 */;
	EventNotificationReply_t *cocci_id/* drivers/message/fusion/mptlan.c 345 */;
	LANReceivePostReply_t *cocci_id/* drivers/message/fusion/mptlan.c 257 */;
	LANSendReply_t *cocci_id/* drivers/message/fusion/mptlan.c 248 */;
	void cocci_id/* drivers/message/fusion/mptlan.c 214 */;
	u32 cocci_id/* drivers/message/fusion/mptlan.c 180 */;
	struct net_device *cocci_id/* drivers/message/fusion/mptlan.c 170 */;
	MPT_FRAME_HDR *cocci_id/* drivers/message/fusion/mptlan.c 168 */;
	MPT_ADAPTER *cocci_id/* drivers/message/fusion/mptlan.c 168 */;
	int cocci_id/* drivers/message/fusion/mptlan.c 167 */;
	struct fcllc cocci_id/* drivers/message/fusion/mptlan.c 1531 */;
	u8 cocci_id/* drivers/message/fusion/mptlan.c 152 */;
	struct mpt_lan_ohdr cocci_id/* drivers/message/fusion/mptlan.c 1493 */;
	struct fcllc *cocci_id/* drivers/message/fusion/mptlan.c 1490 */;
	struct mpt_lan_ohdr *cocci_id/* drivers/message/fusion/mptlan.c 1489 */;
	unsigned short cocci_id/* drivers/message/fusion/mptlan.c 1486 */;
	void __exit cocci_id/* drivers/message/fusion/mptlan.c 1471 */;
	unsigned short cocci_id/* drivers/message/fusion/mptlan.c 145 */(struct sk_buff *skb,
									 struct net_device *dev);
	int __init cocci_id/* drivers/message/fusion/mptlan.c 1445 */;
	struct mpt_pci_driver cocci_id/* drivers/message/fusion/mptlan.c 1440 */;
	int cocci_id/* drivers/message/fusion/mptlan.c 144 */(MPT_ADAPTER *ioc,
							      EventNotificationReply_t *pEvReply);
	int cocci_id/* drivers/message/fusion/mptlan.c 143 */(MPT_ADAPTER *ioc,
							      int reset_phase);
	int cocci_id/* drivers/message/fusion/mptlan.c 141 */(struct net_device *dev,
							      LANSendReply_t *pSendRep);
	const struct pci_device_id *cocci_id/* drivers/message/fusion/mptlan.c 1383 */;
	struct pci_dev *cocci_id/* drivers/message/fusion/mptlan.c 1383 */;
	int cocci_id/* drivers/message/fusion/mptlan.c 138 */(struct net_device *dev,
							      LANReceivePostReply_t *pRecvRep);
	int cocci_id/* drivers/message/fusion/mptlan.c 137 */(struct net_device *dev,
							      u32 tmsg);
	void cocci_id/* drivers/message/fusion/mptlan.c 135 */(struct net_device *dev,
							       int priority);
	u8 *cocci_id/* drivers/message/fusion/mptlan.c 1346 */;
	void cocci_id/* drivers/message/fusion/mptlan.c 134 */(struct mpt_lan_priv *priv);
	int cocci_id/* drivers/message/fusion/mptlan.c 133 */(struct net_device *dev);
	u8 cocci_id/* drivers/message/fusion/mptlan.c 1307 */[FC_ALEN];
	const struct net_device_ops cocci_id/* drivers/message/fusion/mptlan.c 1294 */;
	struct mpt_lan_priv cocci_id/* drivers/message/fusion/mptlan.c 1290 */;
	int cocci_id/* drivers/message/fusion/mptlan.c 129 */(MPT_ADAPTER *ioc,
							      MPT_FRAME_HDR *mf,
							      MPT_FRAME_HDR *reply);
	struct work_struct *cocci_id/* drivers/message/fusion/mptlan.c 1288 */;
	u64 cocci_id/* drivers/message/fusion/mptlan.c 1247 */;
	struct mpt_lan_ohdr {
		u16 dtype;
		u8 daddr[FC_ALEN];
		u16 stype;
		u8 saddr[FC_ALEN];
	} cocci_id/* drivers/message/fusion/mptlan.c 117 */;
	SGESimple64_t cocci_id/* drivers/message/fusion/mptlan.c 1162 */;
	dma_addr_t cocci_id/* drivers/message/fusion/mptlan.c 1148 */;
	struct sk_buff *cocci_id/* drivers/message/fusion/mptlan.c 1147 */;
	SGESimple64_t *cocci_id/* drivers/message/fusion/mptlan.c 1146 */;
	SGETransaction32_t *cocci_id/* drivers/message/fusion/mptlan.c 1145 */;
	LANReceivePostRequest_t *cocci_id/* drivers/message/fusion/mptlan.c 1144 */;
}
