cocci_test_suite() {
	struct resource *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 899 */;
	struct dma_device *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 898 */;
	struct platform_device *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 894 */;
	const struct of_device_id cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 887 */[];
	const struct mtk_hsdma_soc cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 882 */;
	struct dma_chan *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 808 */;
	int cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 808 */;
	bool cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 759 */;
	unsigned long cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 741 */;
	struct virt_dma_chan *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 740 */;
	size_t cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 722 */;
	dma_addr_t cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 721 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 720 */;
	struct dma_tx_state *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 679 */;
	enum dma_status cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 677 */;
	struct mtk_hsdma_vchan *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 663 */;
	dma_cookie_t cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 661 */;
	struct virt_dma_desc *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 660 */;
	irqreturn_t cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 645 */;
	void *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 645 */;
	u16 cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 543 */;
	__le32 cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 541 */;
	struct mtk_hsdma_cb *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 539 */;
	struct mtk_hsdma_vdesc *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 537 */;
	struct mtk_hsdma_pdesc *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 536 */;
	struct mtk_hsdma_ring *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 318 */;
	struct mtk_hsdma_pchan *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 316 */;
	struct mtk_hsdma_vdesc cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 302 */;
	u32 cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 295 */;
	void cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 295 */;
	struct mtk_hsdma_device *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 264 */;
	struct device *cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 264 */;
	struct mtk_hsdma_vchan cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 256 */;
	struct mtk_hsdma_device cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 251 */;
	struct mtk_hsdma_device {
		struct dma_device ddev;
		void __iomem *base;
		struct clk *clk;
		u32 irq;
		u32 dma_requests;
		struct mtk_hsdma_vchan *vc;
		struct mtk_hsdma_pchan *pc;
		refcount_t pc_refcnt;
		spinlock_t lock;
		const struct mtk_hsdma_soc *soc;
	} cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 232 */;
	struct mtk_hsdma_soc {
		__le32 ddone;
		__le32 ls0;
	} cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 212 */;
	struct mtk_hsdma_vchan {
		struct virt_dma_chan vc;
		struct completion issue_completion;
		bool issue_synchronize;
		struct list_head desc_hw_processing;
	} cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 200 */;
	struct mtk_hsdma_pchan {
		struct mtk_hsdma_ring ring;
		size_t sz_ring;
		atomic_t nr_free;
	} cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 185 */;
	struct mtk_hsdma_ring {
		struct mtk_hsdma_pdesc *txd;
		struct mtk_hsdma_pdesc *rxd;
		struct mtk_hsdma_cb *cb;
		dma_addr_t tphys;
		dma_addr_t rphys;
		u16 cur_tptr;
		u16 cur_rptr;
	} cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 165 */;
	struct mtk_hsdma_cb {
		struct virt_dma_desc *vd;
		enum mtk_hsdma_vdesc_flag flag;
	} cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 147 */;
	struct mtk_hsdma_vdesc {
		struct virt_dma_desc vd;
		size_t len;
		size_t residue;
		dma_addr_t dest;
		dma_addr_t src;
	} cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 131 */;
	struct mtk_hsdma_pdesc {
		__le32 desc1;
		__le32 desc2;
		__le32 desc3;
		__le32 desc4;
	}__packed __aligned(4) cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 115 */;
	struct platform_driver cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 1046 */;
	enum mtk_hsdma_vdesc_flag{MTK_HSDMA_VDESC_FINISHED=0x01,} cocci_id/* drivers/dma/mediatek/mtk-hsdma.c 100 */;
}
