cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 931 */;
	struct mtk_cqdma_vdesc {
		struct virt_dma_desc vd;
		size_t len;
		size_t residue;
		dma_addr_t dest;
		dma_addr_t src;
		struct dma_chan *ch;
		struct list_head node;
		struct mtk_cqdma_vdesc *parent;
	} cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 79 */;
	struct resource *cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 754 */;
	struct dma_device *cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 753 */;
	struct platform_device *cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 749 */;
	const struct of_device_id cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 743 */[];
	unsigned long cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 619 */;
	u32 cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 618 */;
	struct mtk_cqdma_pchan *cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 617 */;
	struct mtk_cqdma_vchan *cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 616 */;
	struct dma_chan *cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 613 */;
	int cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 613 */;
	bool cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 574 */;
	void cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 571 */;
	struct virt_dma_chan *cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 553 */;
	struct mtk_cqdma_vdesc **cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 491 */;
	size_t cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 489 */;
	dma_addr_t cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 488 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 487 */;
	struct dma_tx_state *cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 443 */;
	enum dma_status cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 441 */;
	dma_cookie_t cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 420 */;
	struct virt_dma_desc *cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 419 */;
	irqreturn_t cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 386 */;
	void *cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 386 */;
	struct mtk_cqdma_vdesc cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 321 */;
	struct mtk_cqdma_vdesc *cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 313 */;
	struct mtk_cqdma_device *cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 164 */;
	struct device *cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 164 */;
	struct mtk_cqdma_vchan cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 156 */;
	struct mtk_cqdma_device cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 151 */;
	struct mtk_cqdma_device {
		struct dma_device ddev;
		struct clk *clk;
		u32 dma_requests;
		u32 dma_channels;
		struct mtk_cqdma_vchan *vc;
		struct mtk_cqdma_pchan **pc;
	} cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 139 */;
	struct mtk_cqdma_vchan {
		struct virt_dma_chan vc;
		struct mtk_cqdma_pchan *pc;
		struct completion issue_completion;
		bool issue_synchronize;
	} cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 122 */;
	struct mtk_cqdma_pchan {
		struct list_head queue;
		void __iomem *base;
		u32 irq;
		refcount_t refcnt;
		struct tasklet_struct tasklet;
		spinlock_t lock;
	} cocci_id/* drivers/dma/mediatek/mtk-cqdma.c 101 */;
}
