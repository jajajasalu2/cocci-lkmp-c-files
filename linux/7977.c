cocci_test_suite() {
	void cocci_id/* drivers/net/xen-netback/netback.c 99 */(struct xenvif_queue *queue,
								u16 pending_idx,
								u8 status);
	u32 *cocci_id/* drivers/net/xen-netback/netback.c 974 */;
	enum pkt_hash_types cocci_id/* drivers/net/xen-netback/netback.c 953 */;
	unsigned int cocci_id/* drivers/net/xen-netback/netback.c 81 */;
	struct xen_netif_extra_info cocci_id/* drivers/net/xen-netback/netback.c 801 */[XEN_NETIF_EXTRA_TYPE_MAX - 1];
	struct xen_netif_tx_request cocci_id/* drivers/net/xen-netback/netback.c 800 */[XEN_NETBK_LEGACY_SLOTS_MAX];
	unsigned *cocci_id/* drivers/net/xen-netback/netback.c 790 */;
	struct xenvif_mcast_addr cocci_id/* drivers/net/xen-netback/netback.c 780 */;
	struct xenvif_mcast_addr *cocci_id/* drivers/net/xen-netback/netback.c 721 */;
	const u8 *cocci_id/* drivers/net/xen-netback/netback.c 719 */;
	u64 cocci_id/* drivers/net/xen-netback/netback.c 685 */;
	bool cocci_id/* drivers/net/xen-netback/netback.c 663 */;
	struct xenvif_queue *cocci_id/* drivers/net/xen-netback/netback.c 661 */;
	struct sk_buff *cocci_id/* drivers/net/xen-netback/netback.c 661 */;
	int cocci_id/* drivers/net/xen-netback/netback.c 661 */;
	struct xen_netif_extra_info cocci_id/* drivers/net/xen-netback/netback.c 603 */;
	unsigned int *cocci_id/* drivers/net/xen-netback/netback.c 600 */;
	struct xen_netif_extra_info *cocci_id/* drivers/net/xen-netback/netback.c 599 */;
	struct page *cocci_id/* drivers/net/xen-netback/netback.c 570 */;
	struct skb_shared_info *cocci_id/* drivers/net/xen-netback/netback.c 562 */;
	const bool cocci_id/* drivers/net/xen-netback/netback.c 451 */;
	struct gnttab_copy **cocci_id/* drivers/net/xen-netback/netback.c 438 */;
	struct gnttab_map_grant_ref **cocci_id/* drivers/net/xen-netback/netback.c 437 */;
	grant_handle_t cocci_id/* drivers/net/xen-netback/netback.c 410 */;
	struct gnttab_map_grant_ref *cocci_id/* drivers/net/xen-netback/netback.c 360 */;
	struct xenvif_tx_cb *cocci_id/* drivers/net/xen-netback/netback.c 325 */;
	struct xenvif_tx_cb {
		u16 pending_idx;
	} cocci_id/* drivers/net/xen-netback/netback.c 321 */;
	struct xen_netif_tx_request cocci_id/* drivers/net/xen-netback/netback.c 237 */;
	struct timer_list *cocci_id/* drivers/net/xen-netback/netback.c 186 */;
	void __exit cocci_id/* drivers/net/xen-netback/netback.c 1668 */;
	int __init cocci_id/* drivers/net/xen-netback/netback.c 1632 */;
	irqreturn_t cocci_id/* drivers/net/xen-netback/netback.c 1622 */;
	void *cocci_id/* drivers/net/xen-netback/netback.c 1622 */;
	struct xen_netif_ctrl_request cocci_id/* drivers/net/xen-netback/netback.c 1601 */;
	struct xen_netif_ctrl_response cocci_id/* drivers/net/xen-netback/netback.c 1518 */;
	RING_IDX cocci_id/* drivers/net/xen-netback/netback.c 1517 */;
	u32 cocci_id/* drivers/net/xen-netback/netback.c 1515 */;
	const struct xen_netif_ctrl_request *cocci_id/* drivers/net/xen-netback/netback.c 1514 */;
	struct xenvif *cocci_id/* drivers/net/xen-netback/netback.c 1513 */;
	pending_ring_idx_t cocci_id/* drivers/net/xen-netback/netback.c 147 */;
	unsigned cocci_id/* drivers/net/xen-netback/netback.c 147 */;
	struct xen_netif_rx_sring *cocci_id/* drivers/net/xen-netback/netback.c 1455 */;
	struct xen_netif_tx_sring *cocci_id/* drivers/net/xen-netback/netback.c 1454 */;
	grant_ref_t cocci_id/* drivers/net/xen-netback/netback.c 1450 */;
	void cocci_id/* drivers/net/xen-netback/netback.c 142 */;
	struct gnttab_unmap_grant_ref cocci_id/* drivers/net/xen-netback/netback.c 1404 */;
	struct xen_netif_tx_response *cocci_id/* drivers/net/xen-netback/netback.c 1380 */;
	s8 cocci_id/* drivers/net/xen-netback/netback.c 1377 */;
	struct xen_netif_tx_request *cocci_id/* drivers/net/xen-netback/netback.c 1375 */;
	u16 cocci_id/* drivers/net/xen-netback/netback.c 137 */;
	skb_frag_t *cocci_id/* drivers/net/xen-netback/netback.c 137 */;
	u8 cocci_id/* drivers/net/xen-netback/netback.c 1348 */;
	struct xenvif_queue cocci_id/* drivers/net/xen-netback/netback.c 133 */;
	struct pending_tx_info cocci_id/* drivers/net/xen-netback/netback.c 131 */;
	struct pending_tx_info *cocci_id/* drivers/net/xen-netback/netback.c 130 */;
	const struct ubuf_info *cocci_id/* drivers/net/xen-netback/netback.c 127 */;
	struct gnttab_unmap_grant_ref *cocci_id/* drivers/net/xen-netback/netback.c 1254 */;
	unsigned long cocci_id/* drivers/net/xen-netback/netback.c 116 */;
	struct gnttab_copy *cocci_id/* drivers/net/xen-netback/netback.c 1097 */;
	skb_frag_t cocci_id/* drivers/net/xen-netback/netback.c 1087 */;
	int cocci_id/* drivers/net/xen-netback/netback.c 108 */(struct xenvif_queue *queue);
	void cocci_id/* drivers/net/xen-netback/netback.c 106 */(struct xenvif_queue *queue);
	struct ubuf_info *cocci_id/* drivers/net/xen-netback/netback.c 1037 */;
	skb_frag_t cocci_id/* drivers/net/xen-netback/netback.c 1035 */[MAX_SKB_FRAGS];
	void cocci_id/* drivers/net/xen-netback/netback.c 102 */(struct xenvif_queue *queue,
								 struct xen_netif_tx_request *txp,
								 unsigned int extra_count,
								 s8 st);
}
