cocci_test_suite() {
	void __exit cocci_id/* drivers/dma/moxart-dma.c 674 */;
	struct platform_driver cocci_id/* drivers/dma/moxart-dma.c 659 */;
	const struct of_device_id cocci_id/* drivers/dma/moxart-dma.c 653 */[];
	void __iomem *cocci_id/* drivers/dma/moxart-dma.c 571 */;
	struct resource *cocci_id/* drivers/dma/moxart-dma.c 570 */;
	struct device_node *cocci_id/* drivers/dma/moxart-dma.c 569 */;
	struct platform_device *cocci_id/* drivers/dma/moxart-dma.c 566 */;
	u32 cocci_id/* drivers/dma/moxart-dma.c 528 */;
	unsigned long cocci_id/* drivers/dma/moxart-dma.c 527 */;
	struct moxart_dmadev *cocci_id/* drivers/dma/moxart-dma.c 524 */;
	irqreturn_t cocci_id/* drivers/dma/moxart-dma.c 522 */;
	void *cocci_id/* drivers/dma/moxart-dma.c 522 */;
	struct dma_device *cocci_id/* drivers/dma/moxart-dma.c 508 */;
	struct dma_tx_state *cocci_id/* drivers/dma/moxart-dma.c 479 */;
	dma_cookie_t cocci_id/* drivers/dma/moxart-dma.c 478 */;
	enum dma_status cocci_id/* drivers/dma/moxart-dma.c 477 */;
	unsigned int cocci_id/* drivers/dma/moxart-dma.c 451 */;
	struct moxart_desc *cocci_id/* drivers/dma/moxart-dma.c 450 */;
	size_t cocci_id/* drivers/dma/moxart-dma.c 450 */;
	struct moxart_sg *cocci_id/* drivers/dma/moxart-dma.c 407 */;
	dma_addr_t cocci_id/* drivers/dma/moxart-dma.c 371 */;
	struct moxart_chan *cocci_id/* drivers/dma/moxart-dma.c 351 */;
	int cocci_id/* drivers/dma/moxart-dma.c 349 */;
	struct of_dma *cocci_id/* drivers/dma/moxart-dma.c 333 */;
	struct of_phandle_args *cocci_id/* drivers/dma/moxart-dma.c 332 */;
	enum dma_slave_buswidth cocci_id/* drivers/dma/moxart-dma.c 276 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/moxart-dma.c 271 */;
	struct scatterlist *cocci_id/* drivers/dma/moxart-dma.c 270 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/moxart-dma.c 269 */;
	struct dma_slave_config *cocci_id/* drivers/dma/moxart-dma.c 214 */;
	struct moxart_desc cocci_id/* drivers/dma/moxart-dma.c 183 */;
	struct virt_dma_desc *cocci_id/* drivers/dma/moxart-dma.c 181 */;
	void cocci_id/* drivers/dma/moxart-dma.c 181 */;
	struct moxart_chan cocci_id/* drivers/dma/moxart-dma.c 172 */;
	struct dma_chan *cocci_id/* drivers/dma/moxart-dma.c 165 */;
	struct device *cocci_id/* drivers/dma/moxart-dma.c 165 */;
	const unsigned int cocci_id/* drivers/dma/moxart-dma.c 159 */[];
	struct moxart_filter_data {
		struct moxart_dmadev *mdc;
		struct of_phandle_args *dma_spec;
	} cocci_id/* drivers/dma/moxart-dma.c 154 */;
	struct moxart_dmadev {
		struct dma_device dma_slave;
		struct moxart_chan slave_chans[APB_DMA_MAX_CHANNEL];
		unsigned int irq;
	} cocci_id/* drivers/dma/moxart-dma.c 148 */;
	struct moxart_chan {
		struct virt_dma_chan vc;
		void __iomem *base;
		struct moxart_desc *desc;
		struct dma_slave_config cfg;
		bool allocated;
		bool error;
		int ch_num;
		unsigned int line_reqno;
		unsigned int sgidx;
	} cocci_id/* drivers/dma/moxart-dma.c 133 */;
	struct moxart_desc {
		enum dma_transfer_direction dma_dir;
		dma_addr_t dev_addr;
		unsigned int sglen;
		unsigned int dma_cycles;
		struct virt_dma_desc vd;
		uint8_t es;
		struct moxart_sg sg[0];
	} cocci_id/* drivers/dma/moxart-dma.c 123 */;
	struct moxart_sg {
		dma_addr_t addr;
		uint32_t len;
	} cocci_id/* drivers/dma/moxart-dma.c 118 */;
}
