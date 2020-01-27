cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 747 */;
	void __iomem *cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 656 */;
	struct dma_device *cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 653 */;
	const struct of_device_id *cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 650 */;
	struct platform_device *cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 648 */;
	const struct of_device_id cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 643 */[];
	struct hsdma_desc cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 597 */;
	u32 cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 584 */;
	struct mtk_hsdma_desc cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 498 */;
	struct dma_chan *cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 491 */;
	struct dma_tx_state *cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 486 */;
	dma_cookie_t cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 485 */;
	enum dma_status cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 484 */;
	unsigned long cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 463 */;
	size_t cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 463 */;
	dma_addr_t cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 462 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 461 */;
	irqreturn_t cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 425 */;
	void *cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 425 */;
	struct mtk_hsdma_desc *cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 404 */;
	struct virt_dma_desc *cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 388 */;
	struct mtk_hsdma_chan *cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 386 */;
	int cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 386 */;
	unsigned int cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 322 */;
	struct mtk_hsdma_sg *cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 321 */;
	struct hsdma_desc *cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 235 */;
	struct mtk_hsdam_engine *cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 232 */;
	void cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 232 */;
	struct mtk_hsdma_chan cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 174 */;
	struct mtk_hsdam_engine cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 168 */;
	struct mtk_hsdam_engine {
		struct dma_device ddev;
		struct device_dma_parameters dma_parms;
		void __iomem *base;
		struct tasklet_struct task;
		volatile unsigned long chan_issued;
		struct mtk_hsdma_chan chan[1];
	} cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 155 */;
	struct mtk_hsdma_chan {
		struct virt_dma_chan vchan;
		unsigned int id;
		dma_addr_t desc_addr;
		int tx_idx;
		int rx_idx;
		struct hsdma_desc *tx_ring;
		struct hsdma_desc *rx_ring;
		struct mtk_hsdma_desc *desc;
		unsigned int next_sg;
	} cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 143 */;
	struct mtk_hsdma_desc {
		struct virt_dma_desc vdesc;
		unsigned int num_sgs;
		struct mtk_hsdma_sg sg[1];
	} cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 137 */;
	struct mtk_hsdma_sg {
		dma_addr_t src_addr;
		dma_addr_t dst_addr;
		u32 len;
	} cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 131 */;
	struct hsdma_desc {
		u32 addr0;
		u32 flags;
		u32 addr1;
		u32 unused;
	} cocci_id/* drivers/staging/mt7621-dma/mtk-hsdma.c 124 */;
}
