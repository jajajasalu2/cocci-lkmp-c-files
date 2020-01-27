cocci_test_suite() {
	unsigned int cocci_id/* arch/sh/drivers/dma/dma-g2.c 85 */;
	struct dma_channel *cocci_id/* arch/sh/drivers/dma/dma-g2.c 83 */;
	int cocci_id/* arch/sh/drivers/dma/dma-g2.c 83 */;
	struct dma_info *cocci_id/* arch/sh/drivers/dma/dma-g2.c 60 */;
	irqreturn_t cocci_id/* arch/sh/drivers/dma/dma-g2.c 51 */;
	void *cocci_id/* arch/sh/drivers/dma/dma-g2.c 51 */;
	volatile struct g2_dma_info *cocci_id/* arch/sh/drivers/dma/dma-g2.c 45 */;
	struct g2_dma_info {
		struct g2_channel channel[G2_NR_DMA_CHANNELS];
		unsigned long pad1[G2_NR_DMA_CHANNELS];
		unsigned long wait_state;
		unsigned long pad2[10];
		unsigned long magic;
		struct g2_status status[G2_NR_DMA_CHANNELS];
	}__attribute__((aligned(256))) cocci_id/* arch/sh/drivers/dma/dma-g2.c 36 */;
	struct g2_status {
		unsigned long g2_addr;
		unsigned long root_addr;
		unsigned long size;
		unsigned long status;
	}__attribute__((aligned(16))) cocci_id/* arch/sh/drivers/dma/dma-g2.c 29 */;
	void __exit cocci_id/* arch/sh/drivers/dma/dma-g2.c 186 */;
	void cocci_id/* arch/sh/drivers/dma/dma-g2.c 186 */;
	struct g2_channel {
		unsigned long g2_addr;
		unsigned long root_addr;
		unsigned long size;
		unsigned long direction;
		unsigned long ctrl;
		unsigned long chan_enable;
		unsigned long xfer_enable;
		unsigned long xfer_stat;
	}__attribute__((aligned(32))) cocci_id/* arch/sh/drivers/dma/dma-g2.c 18 */;
	int __init cocci_id/* arch/sh/drivers/dma/dma-g2.c 166 */;
	struct dma_info cocci_id/* arch/sh/drivers/dma/dma-g2.c 159 */;
	struct dma_ops cocci_id/* arch/sh/drivers/dma/dma-g2.c 154 */;
	unsigned long cocci_id/* arch/sh/drivers/dma/dma-g2.c 117 */;
}
