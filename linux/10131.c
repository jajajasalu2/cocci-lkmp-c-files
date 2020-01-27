cocci_test_suite() {
	struct sk_buff_head cocci_id/* drivers/net/xen-netfront.c 997 */;
	struct netfront_rx_info cocci_id/* drivers/net/xen-netfront.c 992 */;
	struct napi_struct *cocci_id/* drivers/net/xen-netfront.c 987 */;
	struct netfront_info cocci_id/* drivers/net/xen-netfront.c 98 */;
	struct netfront_stats *cocci_id/* drivers/net/xen-netfront.c 954 */;
	struct sk_buff_head *cocci_id/* drivers/net/xen-netfront.c 952 */;
	struct netfront_queue *cocci_id/* drivers/net/xen-netfront.c 951 */;
	struct netfront_info *cocci_id/* drivers/net/xen-netfront.c 938 */;
	bool cocci_id/* drivers/net/xen-netfront.c 929 */;
	struct sk_buff *cocci_id/* drivers/net/xen-netfront.c 927 */;
	struct net_device *cocci_id/* drivers/net/xen-netfront.c 927 */;
	int cocci_id/* drivers/net/xen-netfront.c 927 */;
	struct netfront_stats {
		u64 packets;
		u64 bytes;
		struct u64_stats_sync syncp;
	} cocci_id/* drivers/net/xen-netfront.c 92 */;
	struct xen_netif_rx_response *cocci_id/* drivers/net/xen-netfront.c 898 */;
	struct netfront_rx_info *cocci_id/* drivers/net/xen-netfront.c 782 */;
	struct xen_netif_extra_info *cocci_id/* drivers/net/xen-netfront.c 738 */;
	struct netfront_cb *cocci_id/* drivers/net/xen-netfront.c 72 */;
	struct netfront_cb {
		int pull_to;
	} cocci_id/* drivers/net/xen-netfront.c 68 */;
	const struct ethtool_ops cocci_id/* drivers/net/xen-netfront.c 66 */;
	netdev_tx_t cocci_id/* drivers/net/xen-netfront.c 565 */;
	u16 cocci_id/* drivers/net/xen-netfront.c 545 */;
	skb_frag_t *cocci_id/* drivers/net/xen-netfront.c 532 */;
	struct xennet_gnttab_make_txreq *cocci_id/* drivers/net/xen-netfront.c 481 */;
	struct xennet_gnttab_make_txreq cocci_id/* drivers/net/xen-netfront.c 466 */;
	struct xen_netif_tx_request *cocci_id/* drivers/net/xen-netfront.c 462 */;
	struct xennet_gnttab_make_txreq {
		struct netfront_queue *queue;
		struct sk_buff *skb;
		struct page *page;
		struct xen_netif_tx_request *tx;
		unsigned int size;
	} cocci_id/* drivers/net/xen-netfront.c 420 */;
	struct xen_netif_tx_response *cocci_id/* drivers/net/xen-netfront.c 388 */;
	struct xen_netif_rx_request *cocci_id/* drivers/net/xen-netfront.c 299 */;
	RING_IDX cocci_id/* drivers/net/xen-netfront.c 285 */;
	struct page *cocci_id/* drivers/net/xen-netfront.c 260 */;
	struct netdev_queue *cocci_id/* drivers/net/xen-netfront.c 248 */;
	struct timer_list *cocci_id/* drivers/net/xen-netfront.c 233 */;
	const struct attribute_group cocci_id/* drivers/net/xen-netfront.c 224 */;
	void __exit cocci_id/* drivers/net/xen-netfront.c 2214 */;
	int __init cocci_id/* drivers/net/xen-netfront.c 2192 */;
	struct xenbus_driver cocci_id/* drivers/net/xen-netfront.c 2184 */;
	const struct xenbus_device_id cocci_id/* drivers/net/xen-netfront.c 2179 */[];
	struct attribute *cocci_id/* drivers/net/xen-netfront.c 2130 */[];
	const char *cocci_id/* drivers/net/xen-netfront.c 2109 */;
	size_t cocci_id/* drivers/net/xen-netfront.c 2109 */;
	struct device_attribute *cocci_id/* drivers/net/xen-netfront.c 2102 */;
	char *cocci_id/* drivers/net/xen-netfront.c 2102 */;
	struct device *cocci_id/* drivers/net/xen-netfront.c 2101 */;
	ssize_t cocci_id/* drivers/net/xen-netfront.c 2101 */;
	u32 cocci_id/* drivers/net/xen-netfront.c 2078 */;
	u8 *cocci_id/* drivers/net/xen-netfront.c 2078 */;
	atomic_t *cocci_id/* drivers/net/xen-netfront.c 2075 */;
	u64 *cocci_id/* drivers/net/xen-netfront.c 2069 */;
	struct ethtool_stats *cocci_id/* drivers/net/xen-netfront.c 2069 */;
	const struct xennet_stat {
		char name[ETH_GSTRING_LEN];
		u16 offset;
	} cocci_id/* drivers/net/xen-netfront.c 2048 */[];
	enum xenbus_state cocci_id/* drivers/net/xen-netfront.c 2009 */;
	struct xenbus_device *cocci_id/* drivers/net/xen-netfront.c 2008 */;
	unsigned int cocci_id/* drivers/net/xen-netfront.c 195 */;
	unsigned short cocci_id/* drivers/net/xen-netfront.c 186 */;
	union skb_entry *cocci_id/* drivers/net/xen-netfront.c 185 */;
	unsigned *cocci_id/* drivers/net/xen-netfront.c 185 */;
	void cocci_id/* drivers/net/xen-netfront.c 185 */;
	struct xenbus_transaction cocci_id/* drivers/net/xen-netfront.c 1802 */;
	struct netfront_queue cocci_id/* drivers/net/xen-netfront.c 1763 */;
	unsigned int *cocci_id/* drivers/net/xen-netfront.c 1758 */;
	const union skb_entry *cocci_id/* drivers/net/xen-netfront.c 175 */;
	struct xenbus_transaction *cocci_id/* drivers/net/xen-netfront.c 1660 */;
	struct netfront_rx_info {
		struct xen_netif_rx_response rx;
		struct xen_netif_extra_info extras[XEN_NETIF_EXTRA_TYPE_MAX - 1];
	} cocci_id/* drivers/net/xen-netfront.c 165 */;
	unsigned long cocci_id/* drivers/net/xen-netfront.c 1593 */;
	grant_ref_t cocci_id/* drivers/net/xen-netfront.c 1537 */;
	struct xen_netif_rx_sring *cocci_id/* drivers/net/xen-netfront.c 1536 */;
	struct xen_netif_tx_sring *cocci_id/* drivers/net/xen-netfront.c 1535 */;
	struct netfront_info {
		struct list_head list;
		struct net_device *netdev;
		struct xenbus_device *xbdev;
		struct netfront_queue *queues;
		struct netfront_stats __percpu *rx_stats;
		struct netfront_stats __percpu *tx_stats;
		atomic_t rx_gso_checksum_fixup;
	} cocci_id/* drivers/net/xen-netfront.c 149 */;
	u8 cocci_id/* drivers/net/xen-netfront.c 1441 */[];
	void *cocci_id/* drivers/net/xen-netfront.c 1378 */;
	const struct xenbus_device_id *cocci_id/* drivers/net/xen-netfront.c 1356 */;
	struct netfront_stats cocci_id/* drivers/net/xen-netfront.c 1305 */;
	const struct net_device_ops cocci_id/* drivers/net/xen-netfront.c 1264 */;
	irqreturn_t cocci_id/* drivers/net/xen-netfront.c 1245 */;
	netdev_features_t cocci_id/* drivers/net/xen-netfront.c 1185 */;
	u64 cocci_id/* drivers/net/xen-netfront.c 1104 */;
	struct rtnl_link_stats64 *cocci_id/* drivers/net/xen-netfront.c 1096 */;
	struct netfront_queue {
		unsigned int id;
		char name[QUEUE_NAME_SIZE];
		struct netfront_info *info;
		struct napi_struct napi;
		unsigned int tx_evtchn,rx_evtchn;
		unsigned int tx_irq,rx_irq;
		char tx_irq_name[IRQ_NAME_SIZE];
		char rx_irq_name[IRQ_NAME_SIZE];
		spinlock_t tx_lock;
		struct xen_netif_tx_front_ring tx;
		int tx_ring_ref;
		union skb_entry {
			struct sk_buff *skb;
			unsigned long link;
		} tx_skbs[NET_TX_RING_SIZE];
		grant_ref_t gref_tx_head;
		grant_ref_t grant_tx_ref[NET_TX_RING_SIZE];
		struct page *grant_tx_page[NET_TX_RING_SIZE];
		unsigned tx_skb_freelist;
		spinlock_t rx_lock ____cacheline_aligned_in_smp;
		struct xen_netif_rx_front_ring rx;
		int rx_ring_ref;
		struct timer_list rx_refill_timer;
		struct sk_buff *rx_skbs[NET_RX_RING_SIZE];
		grant_ref_t gref_rx_head;
		grant_ref_t grant_rx_ref[NET_RX_RING_SIZE];
	} cocci_id/* drivers/net/xen-netfront.c 100 */;
}