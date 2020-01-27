cocci_test_suite() {
	const char *cocci_id/* drivers/dma/ep93xx_dma.c 869 */;
	struct ep93xx_dma_data *cocci_id/* drivers/dma/ep93xx_dma.c 868 */;
	struct dma_chan *cocci_id/* drivers/dma/ep93xx_dma.c 865 */;
	int cocci_id/* drivers/dma/ep93xx_dma.c 865 */;
	irqreturn_t cocci_id/* drivers/dma/ep93xx_dma.c 784 */;
	void *cocci_id/* drivers/dma/ep93xx_dma.c 784 */;
	struct dmaengine_desc_callback cocci_id/* drivers/dma/ep93xx_dma.c 750 */;
	struct ep93xx_dma_desc cocci_id/* drivers/dma/ep93xx_dma.c 736 */;
	unsigned long cocci_id/* drivers/dma/ep93xx_dma.c 727 */;
	void cocci_id/* drivers/dma/ep93xx_dma.c 724 */;
	const struct ep93xx_dma_data *cocci_id/* drivers/dma/ep93xx_dma.c 459 */;
	struct ep93xx_dma_desc *cocci_id/* drivers/dma/ep93xx_dma.c 285 */;
	bool cocci_id/* drivers/dma/ep93xx_dma.c 283 */;
	struct ep93xx_dma_chan *cocci_id/* drivers/dma/ep93xx_dma.c 217 */;
	struct device *cocci_id/* drivers/dma/ep93xx_dma.c 217 */;
	struct ep93xx_dma_engine {
		struct dma_device dma_dev;
		bool m2m;
		int (*hw_setup)(struct ep93xx_dma_chan *);
		void (*hw_synchronize)(struct ep93xx_dma_chan *);
		void (*hw_shutdown)(struct ep93xx_dma_chan *);
		void (*hw_submit)(struct ep93xx_dma_chan *);
		int (*hw_interrupt)(struct ep93xx_dma_chan *);
#define INTERRUPT_UNKNOWN 0
#define INTERRUPT_DONE 1
#define INTERRUPT_NEXT_BUFFER 2
		size_t num_channels;
		struct ep93xx_dma_chan channels[];
	} cocci_id/* drivers/dma/ep93xx_dma.c 201 */;
	struct ep93xx_dma_chan {
		struct dma_chan chan;
		const struct ep93xx_dma_engine *edma;
		void __iomem *regs;
		int irq;
		struct clk *clk;
		struct tasklet_struct tasklet;
		spinlock_t lock;
		unsigned long flags;
#define EP93XX_DMA_IS_CYCLIC 0
		int buffer;
		struct list_head active;
		struct list_head queue;
		struct list_head free_list;
		u32 runtime_addr;
		u32 runtime_ctrl;
		struct dma_slave_config slave_config;
	} cocci_id/* drivers/dma/ep93xx_dma.c 163 */;
	int __init cocci_id/* drivers/dma/ep93xx_dma.c 1425 */;
	struct platform_driver cocci_id/* drivers/dma/ep93xx_dma.c 1418 */;
	const struct platform_device_id cocci_id/* drivers/dma/ep93xx_dma.c 1412 */[];
	const struct ep93xx_dma_chan_data *cocci_id/* drivers/dma/ep93xx_dma.c 1335 */;
	struct ep93xx_dma_chan cocci_id/* drivers/dma/ep93xx_dma.c 1324 */;
	struct dma_device *cocci_id/* drivers/dma/ep93xx_dma.c 1320 */;
	struct ep93xx_dma_engine *cocci_id/* drivers/dma/ep93xx_dma.c 1319 */;
	struct ep93xx_dma_platform_data *cocci_id/* drivers/dma/ep93xx_dma.c 1318 */;
	struct platform_device *cocci_id/* drivers/dma/ep93xx_dma.c 1316 */;
	struct dma_tx_state *cocci_id/* drivers/dma/ep93xx_dma.c 1299 */;
	dma_cookie_t cocci_id/* drivers/dma/ep93xx_dma.c 1298 */;
	enum dma_status cocci_id/* drivers/dma/ep93xx_dma.c 1297 */;
	u32 cocci_id/* drivers/dma/ep93xx_dma.c 1247 */;
	enum dma_slave_buswidth cocci_id/* drivers/dma/ep93xx_dma.c 1245 */;
	struct dma_slave_config *cocci_id/* drivers/dma/ep93xx_dma.c 1231 */;
	struct ep93xx_dma_desc {
		u32 src_addr;
		u32 dst_addr;
		size_t size;
		bool complete;
		struct dma_async_tx_descriptor txd;
		struct list_head tx_list;
		struct list_head node;
	} cocci_id/* drivers/dma/ep93xx_dma.c 122 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/ep93xx_dma.c 1117 */;
	size_t cocci_id/* drivers/dma/ep93xx_dma.c 1116 */;
	dma_addr_t cocci_id/* drivers/dma/ep93xx_dma.c 1115 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/ep93xx_dma.c 1114 */;
	int cocci_id/* drivers/dma/ep93xx_dma.c 108 */(struct dma_chan *chan, enum dma_transfer_direction dir, struct dma_slave_config *config);
	struct ep93xx_dma_engine cocci_id/* drivers/dma/ep93xx_dma.c 107 */;
	unsigned int cocci_id/* drivers/dma/ep93xx_dma.c 1034 */;
	struct scatterlist *cocci_id/* drivers/dma/ep93xx_dma.c 1033 */;
}
