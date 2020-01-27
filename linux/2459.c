cocci_test_suite() {
	struct scatterlist *cocci_id/* drivers/dma/owl-dma.c 878 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/owl-dma.c 827 */;
	struct dma_tx_state *cocci_id/* drivers/dma/owl-dma.c 767 */;
	dma_cookie_t cocci_id/* drivers/dma/owl-dma.c 766 */;
	enum dma_status cocci_id/* drivers/dma/owl-dma.c 765 */;
	size_t cocci_id/* drivers/dma/owl-dma.c 738 */;
	unsigned int cocci_id/* drivers/dma/owl-dma.c 737 */;
	struct dma_slave_config cocci_id/* drivers/dma/owl-dma.c 694 */;
	struct virt_dma_desc *cocci_id/* drivers/dma/owl-dma.c 651 */;
	irqreturn_t cocci_id/* drivers/dma/owl-dma.c 554 */;
	void *cocci_id/* drivers/dma/owl-dma.c 554 */;
	unsigned long cocci_id/* drivers/dma/owl-dma.c 434 */;
	struct owl_dma_pchan *cocci_id/* drivers/dma/owl-dma.c 430 */;
	struct owl_dma_lli_hw *cocci_id/* drivers/dma/owl-dma.c 368 */;
	struct dma_slave_config *cocci_id/* drivers/dma/owl-dma.c 365 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/owl-dma.c 364 */;
	struct owl_dma_vchan *cocci_id/* drivers/dma/owl-dma.c 361 */;
	int cocci_id/* drivers/dma/owl-dma.c 361 */;
	struct owl_dma_txd *cocci_id/* drivers/dma/owl-dma.c 345 */;
	struct owl_dma_lli *cocci_id/* drivers/dma/owl-dma.c 345 */;
	dma_addr_t cocci_id/* drivers/dma/owl-dma.c 333 */;
	struct owl_dma_txd cocci_id/* drivers/dma/owl-dma.c 297 */;
	struct dma_chan *cocci_id/* drivers/dma/owl-dma.c 285 */;
	struct device *cocci_id/* drivers/dma/owl-dma.c 285 */;
	struct owl_dma cocci_id/* drivers/dma/owl-dma.c 282 */;
	struct dma_device *cocci_id/* drivers/dma/owl-dma.c 280 */;
	u32 cocci_id/* drivers/dma/owl-dma.c 275 */;
	struct owl_dma *cocci_id/* drivers/dma/owl-dma.c 275 */;
	bool cocci_id/* drivers/dma/owl-dma.c 256 */;
	void cocci_id/* drivers/dma/owl-dma.c 256 */;
	struct owl_dma {
		struct dma_device dma;
		void __iomem *base;
		struct clk *clk;
		spinlock_t lock;
		struct dma_pool *lli_pool;
		int irq;
		unsigned int nr_pchans;
		struct owl_dma_pchan *pchans;
		unsigned int nr_vchans;
		struct owl_dma_vchan *vchans;
	} cocci_id/* drivers/dma/owl-dma.c 216 */;
	struct owl_dma_vchan {
		struct virt_dma_chan vc;
		struct owl_dma_pchan *pchan;
		struct owl_dma_txd *txd;
		struct dma_slave_config cfg;
		u8 drq;
	} cocci_id/* drivers/dma/owl-dma.c 195 */;
	struct owl_dma_pchan {
		u32 id;
		void __iomem *base;
		struct owl_dma_vchan *vchan;
		spinlock_t lock;
	} cocci_id/* drivers/dma/owl-dma.c 180 */;
	struct owl_dma_txd {
		struct virt_dma_desc vd;
		struct list_head lli_list;
		bool cyclic;
	} cocci_id/* drivers/dma/owl-dma.c 167 */;
	struct owl_dma_lli {
		struct owl_dma_lli_hw hw;
		dma_addr_t phys;
		struct list_head node;
	} cocci_id/* drivers/dma/owl-dma.c 155 */;
	struct owl_dma_lli_hw {
		u32 next_lli;
		u32 saddr;
		u32 daddr;
		u32 flen:20;
		u32 fcnt:12;
		u32 src_stride;
		u32 dst_stride;
		u32 ctrla;
		u32 ctrlb;
		u32 const_num;
	} cocci_id/* drivers/dma/owl-dma.c 136 */;
	void __exit cocci_id/* drivers/dma/owl-dma.c 1226 */;
	struct platform_driver cocci_id/* drivers/dma/owl-dma.c 1211 */;
	const struct of_device_id cocci_id/* drivers/dma/owl-dma.c 1205 */[];
	struct owl_dma_lli cocci_id/* drivers/dma/owl-dma.c 1150 */;
	struct owl_dma_vchan cocci_id/* drivers/dma/owl-dma.c 1137 */;
	struct owl_dma_pchan cocci_id/* drivers/dma/owl-dma.c 1124 */;
	struct device_node *cocci_id/* drivers/dma/owl-dma.c 1046 */;
	struct platform_device *cocci_id/* drivers/dma/owl-dma.c 1044 */;
	u8 cocci_id/* drivers/dma/owl-dma.c 1029 */;
	struct of_dma *cocci_id/* drivers/dma/owl-dma.c 1024 */;
	struct of_phandle_args *cocci_id/* drivers/dma/owl-dma.c 1023 */;
}
