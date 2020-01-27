cocci_test_suite() {
	struct sgiseeq_private {
		struct sgiseeq_init_block *srings;
		dma_addr_t srings_dma;
		struct sgiseeq_rx_desc *rx_desc;
		struct sgiseeq_tx_desc *tx_desc;
		char *name;
		struct hpc3_ethregs *hregs;
		struct sgiseeq_regs *sregs;
		unsigned int rx_new,tx_new;
		unsigned int rx_old,tx_old;
		int is_edlc;
		unsigned char control;
		unsigned char mode;
		spinlock_t tx_lock;
	} cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 90 */;
	struct sgiseeq_init_block {
		struct sgiseeq_rx_desc rxvector[SEEQ_RX_BUFFERS];
		struct sgiseeq_tx_desc txvector[SEEQ_TX_BUFFERS];
	} cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 85 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 827 */;
	struct sgiseeq_tx_desc {
		volatile struct hpc_dma_desc tdma;
		u8 padding[PAD_SIZE];
		struct sk_buff *skb;
	} cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 74 */;
	struct sgiseeq_private cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 732 */;
	struct sgiseeq_init_block *cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 726 */;
	struct hpc3_regs *cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 725 */;
	struct sgiseeq_platform_data *cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 724 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 722 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 712 */;
	struct sgiseeq_rx_desc *cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 695 */;
	struct sgiseeq_rx_desc {
		volatile struct hpc_dma_desc rdma;
		u8 padding[PAD_SIZE];
		struct sk_buff *skb;
	} cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 68 */;
	struct hpc_dma_desc cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 66 */;
	unsigned long cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 587 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 582 */;
	unsigned int cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 554 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 497 */;
	struct sgiseeq_tx_desc *cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 428 */;
	unsigned char cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 314 */;
	char *cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 30 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 200 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 199 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 164 */;
	int cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 154 */;
	struct sgiseeq_regs *cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 153 */;
	struct sgiseeq_private *cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 152 */;
	struct net_device *cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 150 */;
	void cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 150 */;
	struct hpc3_ethregs *cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 125 */;
	struct sgiseeq_rx_desc cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 115 */;
	void *cocci_id/* drivers/net/ethernet/seeq/sgiseeq.c 113 */;
}
