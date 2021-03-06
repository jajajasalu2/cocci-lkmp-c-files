cocci_test_suite() {
	unsigned int cocci_id/* drivers/firewire/net.c 988 */;
	struct rfc2734_header *cocci_id/* drivers/firewire/net.c 95 */;
	int cocci_id/* drivers/firewire/net.c 829 */(struct fwnet_packet_task *ptask);
	struct fwnet_packet_task *cocci_id/* drivers/firewire/net.c 816 */;
	struct kmem_cache *cocci_id/* drivers/firewire/net.c 814 */;
	__be16 *cocci_id/* drivers/firewire/net.c 762 */;
	u32 cocci_id/* drivers/firewire/net.c 758 */;
	size_t cocci_id/* drivers/firewire/net.c 758 */;
	unsigned long long cocci_id/* drivers/firewire/net.c 715 */;
	struct fw_request *cocci_id/* drivers/firewire/net.c 713 */;
	struct rfc2734_header {
		u32 w0;
		u32 w1;
	} cocci_id/* drivers/firewire/net.c 70 */;
	struct fwnet_partial_datagram cocci_id/* drivers/firewire/net.c 648 */;
	struct rfc2734_header cocci_id/* drivers/firewire/net.c 575 */;
	__be32 *cocci_id/* drivers/firewire/net.c 569 */;
	__be16 cocci_id/* drivers/firewire/net.c 521 */;
	u16 *cocci_id/* drivers/firewire/net.c 520 */;
	struct fwnet_header *cocci_id/* drivers/firewire/net.c 519 */;
	__be64 cocci_id/* drivers/firewire/net.c 493 */;
	bool cocci_id/* drivers/firewire/net.c 489 */;
	u16 cocci_id/* drivers/firewire/net.c 488 */;
	struct sk_buff *cocci_id/* drivers/firewire/net.c 488 */;
	struct net_device *cocci_id/* drivers/firewire/net.c 487 */;
	struct fwnet_fragment_info cocci_id/* drivers/firewire/net.c 310 */;
	struct list_head *cocci_id/* drivers/firewire/net.c 302 */;
	struct fwnet_partial_datagram *cocci_id/* drivers/firewire/net.c 299 */;
	struct fwnet_fragment_info *cocci_id/* drivers/firewire/net.c 298 */;
	const struct header_ops cocci_id/* drivers/firewire/net.c 276 */;
	const struct sk_buff *cocci_id/* drivers/firewire/net.c 269 */;
	unsigned char *cocci_id/* drivers/firewire/net.c 269 */;
	const struct net_device *cocci_id/* drivers/firewire/net.c 264 */;
	const unsigned char *cocci_id/* drivers/firewire/net.c 264 */;
	u8 *cocci_id/* drivers/firewire/net.c 250 */;
	struct hh_cache *cocci_id/* drivers/firewire/net.c 242 */;
	const struct neighbour *cocci_id/* drivers/firewire/net.c 241 */;
	const void *cocci_id/* drivers/firewire/net.c 218 */;
	unsigned short cocci_id/* drivers/firewire/net.c 218 */;
	__u64 cocci_id/* drivers/firewire/net.c 207 */;
	union fwnet_hwaddr *cocci_id/* drivers/firewire/net.c 207 */;
	struct fwnet_packet_task {
		struct fw_transaction transaction;
		struct rfc2734_header hdr;
		struct sk_buff *skb;
		struct fwnet_device *dev;
		int outstanding_pkts;
		u64 fifo_addr;
		u16 dest_node;
		u16 max_payload;
		u8 generation;
		u8 speed;
		u8 enqueued;
	} cocci_id/* drivers/firewire/net.c 189 */;
	struct fwnet_peer {
		struct list_head peer_link;
		struct fwnet_device *dev;
		u64 guid;
		struct list_head pd_list;
		unsigned pdg_size;
		u16 datagram_label;
		u16 max_payload;
		int node_id;
		int generation;
		unsigned speed;
	} cocci_id/* drivers/firewire/net.c 172 */;
	void __exit cocci_id/* drivers/firewire/net.c 1705 */;
	struct fwnet_packet_task cocci_id/* drivers/firewire/net.c 1683 */;
	int __init cocci_id/* drivers/firewire/net.c 1668 */;
	struct fw_descriptor cocci_id/* drivers/firewire/net.c 1638 */;
	const u32 cocci_id/* drivers/firewire/net.c 1622 */[];
	struct fw_driver cocci_id/* drivers/firewire/net.c 1610 */;
	const struct ieee1394_device_id cocci_id/* drivers/firewire/net.c 1592 */[];
	const struct ieee1394_device_id *cocci_id/* drivers/firewire/net.c 1443 */;
	u64 cocci_id/* drivers/firewire/net.c 1422 */;
	struct fwnet_peer *cocci_id/* drivers/firewire/net.c 1413 */;
	struct fw_unit *cocci_id/* drivers/firewire/net.c 1411 */;
	struct fw_device *cocci_id/* drivers/firewire/net.c 1411 */;
	int cocci_id/* drivers/firewire/net.c 1410 */;
	struct fw_card *cocci_id/* drivers/firewire/net.c 1399 */;
	const struct net_device_ops cocci_id/* drivers/firewire/net.c 1378 */;
	const struct ethtool_ops cocci_id/* drivers/firewire/net.c 1374 */;
	struct fwnet_device {
		struct list_head dev_link;
		spinlock_t lock;
		enum{FWNET_BROADCAST_ERROR, FWNET_BROADCAST_RUNNING, FWNET_BROADCAST_STOPPED,} broadcast_state;
		struct fw_iso_context *broadcast_rcv_context;
		struct fw_iso_buffer broadcast_rcv_buffer;
		void **broadcast_rcv_buffer_ptrs;
		unsigned broadcast_rcv_next_ptr;
		unsigned num_broadcast_rcv_ptrs;
		unsigned rcv_buffer_size;
		unsigned broadcast_xmt_max_payload;
		u16 broadcast_xmt_datagramlabel;
		struct fw_address_handler handler;
		u64 local_fifo;
		int queued_datagrams;
		int peer_count;
		struct list_head peer_list;
		struct fw_card *card;
		struct net_device *netdev;
	} cocci_id/* drivers/firewire/net.c 134 */;
	u8 cocci_id/* drivers/firewire/net.c 1302 */;
	struct fwnet_header cocci_id/* drivers/firewire/net.c 1238 */;
	netdev_tx_t cocci_id/* drivers/firewire/net.c 1236 */;
	struct fwnet_partial_datagram {
		struct list_head pd_link;
		struct list_head fi_list;
		struct sk_buff *skb;
		char *pbuf;
		u16 datagram_label;
		u16 ether_type;
		u16 datagram_size;
	} cocci_id/* drivers/firewire/net.c 120 */;
	char *cocci_id/* drivers/firewire/net.c 1158 */;
	struct fwnet_fragment_info {
		struct list_head fi_link;
		u16 offset;
		u16 len;
	} cocci_id/* drivers/firewire/net.c 114 */;
	void *cocci_id/* drivers/firewire/net.c 1129 */;
	void **cocci_id/* drivers/firewire/net.c 1120 */;
	unsigned long cocci_id/* drivers/firewire/net.c 1119 */;
	struct fw_iso_packet cocci_id/* drivers/firewire/net.c 1118 */;
	struct fw_iso_context *cocci_id/* drivers/firewire/net.c 1114 */;
	unsigned cocci_id/* drivers/firewire/net.c 1088 */;
	struct fwnet_device *cocci_id/* drivers/firewire/net.c 1086 */;
	void cocci_id/* drivers/firewire/net.c 1086 */;
}
