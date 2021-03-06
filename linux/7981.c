cocci_test_suite() {
	struct netdev_queue *cocci_id/* drivers/net/xen-netback/rx.c 98 */;
	struct net_device *cocci_id/* drivers/net/xen-netback/rx.c 80 */;
	unsigned long cocci_id/* drivers/net/xen-netback/rx.c 72 */;
	struct xenvif *cocci_id/* drivers/net/xen-netback/rx.c 580 */;
	void *cocci_id/* drivers/net/xen-netback/rx.c 577 */;
	int cocci_id/* drivers/net/xen-netback/rx.c 577 */;
	void cocci_id/* drivers/net/xen-netback/rx.c 546 */;
	long cocci_id/* drivers/net/xen-netback/rx.c 503 */;
	bool cocci_id/* drivers/net/xen-netback/rx.c 493 */;
	struct xenvif_queue *cocci_id/* drivers/net/xen-netback/rx.c 493 */;
	RING_IDX cocci_id/* drivers/net/xen-netback/rx.c 485 */;
	struct sk_buff_head cocci_id/* drivers/net/xen-netback/rx.c 454 */;
	struct xen_netif_extra_info *cocci_id/* drivers/net/xen-netback/rx.c 403 */;
	s16 cocci_id/* drivers/net/xen-netback/rx.c 395 */;
	skb_frag_t *cocci_id/* drivers/net/xen-netback/rx.c 331 */;
	size_t *cocci_id/* drivers/net/xen-netback/rx.c 319 */;
	void **cocci_id/* drivers/net/xen-netback/rx.c 318 */;
	struct xenvif_pkt_state *cocci_id/* drivers/net/xen-netback/rx.c 290 */;
	uint32_t *cocci_id/* drivers/net/xen-netback/rx.c 280 */;
	struct xenvif_pkt_state cocci_id/* drivers/net/xen-netback/rx.c 238 */;
	struct xenvif_pkt_state {
		struct sk_buff *skb;
		size_t remaining_len;
		struct sk_buff *frag_iter;
		int frag;
		unsigned int frag_offset;
		struct xen_netif_extra_info extras[XEN_NETIF_EXTRA_TYPE_MAX - 1];
		unsigned int extra_count;
		unsigned int slot;
	} cocci_id/* drivers/net/xen-netback/rx.c 215 */;
	struct sk_buff *cocci_id/* drivers/net/xen-netback/rx.c 204 */;
	unsigned int cocci_id/* drivers/net/xen-netback/rx.c 204 */;
	struct xen_page_foreign *cocci_id/* drivers/net/xen-netback/rx.c 173 */;
	struct page *cocci_id/* drivers/net/xen-netback/rx.c 172 */;
	struct gnttab_copy *cocci_id/* drivers/net/xen-netback/rx.c 171 */;
	size_t cocci_id/* drivers/net/xen-netback/rx.c 169 */;
	struct xen_netif_rx_request *cocci_id/* drivers/net/xen-netback/rx.c 168 */;
	struct xen_netif_rx_response *cocci_id/* drivers/net/xen-netback/rx.c 149 */;
}
