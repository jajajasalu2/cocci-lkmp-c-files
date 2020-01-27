cocci_test_suite() {
	void cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 98 */;
	u32 cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 87 */;
	struct xrx200_priv {
		struct clk *clk;
		struct xrx200_chan chan_tx;
		struct xrx200_chan chan_rx;
		struct net_device *net_dev;
		struct device *dev;
	__iomem
		void *pmac_reg;
	} cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 65 */;
	struct xrx200_chan {
		int tx_free;
		struct napi_struct napi;
		struct ltq_dma_channel dma;
		struct sk_buff *skb[LTQ_DESC_NUM];
		struct xrx200_priv *priv;
	} cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 55 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 548 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 542 */[];
	struct xrx200_priv cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 434 */;
	const u8 *cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 430 */;
	struct resource *cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 427 */;
	struct device_node *cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 426 */;
	struct device *cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 425 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 423 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 340 */;
	void *cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 340 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 332 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 285 */;
	struct ltq_dma_desc cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 259 */;
	struct xrx200_chan cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 215 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 212 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 188 */;
	struct xrx200_chan *cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 155 */;
	int cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 155 */;
	struct xrx200_priv *cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 142 */;
	struct net_device *cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 140 */;
	struct ltq_dma_desc *cocci_id/* drivers/net/ethernet/lantiq_xrx200.c 103 */;
}
