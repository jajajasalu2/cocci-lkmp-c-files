cocci_test_suite() {
	struct dma_chan *cocci_id/* drivers/dma/timb_dma.c 94 */;
	struct device *cocci_id/* drivers/dma/timb_dma.c 94 */;
	struct timb_dma {
		struct dma_device dma;
		void __iomem *membase;
		struct tasklet_struct tasklet;
		struct timb_dma_chan channels[0];
	} cocci_id/* drivers/dma/timb_dma.c 87 */;
	struct platform_driver cocci_id/* drivers/dma/timb_dma.c 760 */;
	struct timb_dma_chan {
		struct dma_chan chan;
		void __iomem *membase;
		spinlock_t lock;
		bool ongoing;
		struct list_head active_list;
		struct list_head queue;
		struct list_head free_list;
		unsigned int bytes_per_line;
		enum dma_transfer_direction direction;
		unsigned int descs;
		unsigned int desc_elems;
	} cocci_id/* drivers/dma/timb_dma.c 70 */;
	struct timb_dma_platform_data_channel *cocci_id/* drivers/dma/timb_dma.c 685 */;
	struct timb_dma_desc {
		struct list_head desc_node;
		struct dma_async_tx_descriptor txd;
		u8 *desc_list;
		unsigned int desc_list_len;
		bool interrupt;
	} cocci_id/* drivers/dma/timb_dma.c 62 */;
	struct resource *cocci_id/* drivers/dma/timb_dma.c 616 */;
	struct timb_dma_platform_data *cocci_id/* drivers/dma/timb_dma.c 614 */;
	struct platform_device *cocci_id/* drivers/dma/timb_dma.c 612 */;
	irqreturn_t cocci_id/* drivers/dma/timb_dma.c 595 */;
	void *cocci_id/* drivers/dma/timb_dma.c 595 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/timb_dma.c 491 */;
	unsigned long cocci_id/* drivers/dma/timb_dma.c 491 */;
	unsigned int cocci_id/* drivers/dma/timb_dma.c 490 */;
	struct dma_tx_state *cocci_id/* drivers/dma/timb_dma.c 457 */;
	dma_cookie_t cocci_id/* drivers/dma/timb_dma.c 456 */;
	enum dma_status cocci_id/* drivers/dma/timb_dma.c 456 */;
	struct timb_dma_desc cocci_id/* drivers/dma/timb_dma.c 229 */;
	struct timb_dma_desc *cocci_id/* drivers/dma/timb_dma.c 223 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/timb_dma.c 222 */;
	struct dmaengine_desc_callback cocci_id/* drivers/dma/timb_dma.c 221 */;
	unsigned long long cocci_id/* drivers/dma/timb_dma.c 161 */;
	struct scatterlist *cocci_id/* drivers/dma/timb_dma.c 146 */;
	u32 cocci_id/* drivers/dma/timb_dma.c 131 */;
	struct timb_dma_chan cocci_id/* drivers/dma/timb_dma.c 130 */;
	struct timb_dma cocci_id/* drivers/dma/timb_dma.c 130 */;
	u8 *cocci_id/* drivers/dma/timb_dma.c 129 */;
	struct timb_dma *cocci_id/* drivers/dma/timb_dma.c 129 */;
	int cocci_id/* drivers/dma/timb_dma.c 128 */;
	bool cocci_id/* drivers/dma/timb_dma.c 126 */;
	struct timb_dma_chan *cocci_id/* drivers/dma/timb_dma.c 126 */;
	void cocci_id/* drivers/dma/timb_dma.c 111 */;
}
