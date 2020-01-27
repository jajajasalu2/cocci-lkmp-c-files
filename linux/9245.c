cocci_test_suite() {
	struct gve_tx_iovec cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 75 */[2];
	struct gve_tx_fifo *cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 74 */;
	__be32 cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 572 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 522 */;
	size_t cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 521 */;
	u64 cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 520 */;
	struct gve_tx_buffer_state *cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 519 */;
	u32 cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 517 */;
	struct gve_priv *cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 516 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 475 */;
	struct net_device *cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 475 */;
	union gve_tx_desc *cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 411 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 398 */;
	dma_addr_t *cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 393 */;
	struct device *cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 393 */;
	void cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 393 */;
	u16 cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 356 */;
	bool cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 313 */;
	struct gve_tx_ring *cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 313 */;
	int cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 313 */;
	unsigned long cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 224 */;
	struct gve_notify_block *cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 178 */;
	struct gve_queue_resources *cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 15 */;
	int cocci_id/* drivers/net/ethernet/google/gve/gve_tx.c 142 */(struct gve_priv *priv,
								       struct gve_tx_ring *tx,
								       u32 to_do,
								       bool try_to_wake);
}
