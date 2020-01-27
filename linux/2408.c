cocci_test_suite() {
	struct mtk_chan {
		struct virt_dma_chan vc;
		struct dma_slave_config cfg;
		struct mtk_uart_apdma_desc *desc;
		enum dma_transfer_direction dir;
		void __iomem *base;
		unsigned int irq;
		unsigned int rx_status;
	} cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 92 */;
	struct mtk_uart_apdma_desc {
		struct virt_dma_desc vd;
		dma_addr_t addr;
		unsigned int avail_len;
	} cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 85 */;
	struct mtk_uart_apdmadev {
		struct dma_device ddev;
		struct clk *clk;
		bool support_33bits;
		unsigned int dma_requests;
	} cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 78 */;
	struct platform_driver cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 643 */;
	struct device *cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 599 */;
	struct device_node *cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 475 */;
	struct platform_device *cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 473 */;
	const struct of_device_id cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 467 */[];
	struct mtk_chan cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 460 */;
	unsigned long cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 442 */;
	struct dma_slave_config *cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 383 */;
	struct mtk_uart_apdma_desc *cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 345 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 341 */;
	struct scatterlist *cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 340 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 339 */;
	struct dma_tx_state *cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 321 */;
	dma_cookie_t cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 320 */;
	enum dma_status cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 319 */;
	unsigned int cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 273 */;
	struct mtk_chan *cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 272 */;
	struct mtk_uart_apdmadev *cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 271 */;
	struct dma_chan *cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 269 */;
	int cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 269 */;
	irqreturn_t cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 253 */;
	void *cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 253 */;
	struct virt_dma_desc *cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 132 */;
	void cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 132 */;
	struct mtk_uart_apdma_desc cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 118 */;
	struct mtk_uart_apdmadev cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 107 */;
	struct dma_device *cocci_id/* drivers/dma/mediatek/mtk-uart-apdma.c 105 */;
}
