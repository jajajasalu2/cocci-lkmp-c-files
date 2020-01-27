cocci_test_suite() {
	struct dma_tx_state *cocci_id/* drivers/dma/sun4i-dma.c 939 */;
	dma_cookie_t cocci_id/* drivers/dma/sun4i-dma.c 938 */;
	enum dma_status cocci_id/* drivers/dma/sun4i-dma.c 937 */;
	u8 cocci_id/* drivers/dma/sun4i-dma.c 913 */;
	struct of_dma *cocci_id/* drivers/dma/sun4i-dma.c 908 */;
	struct of_phandle_args *cocci_id/* drivers/dma/sun4i-dma.c 907 */;
	unsigned int cocci_id/* drivers/dma/sun4i-dma.c 768 */;
	struct scatterlist *cocci_id/* drivers/dma/sun4i-dma.c 767 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/sun4i-dma.c 660 */;
	struct dma_slave_config *cocci_id/* drivers/dma/sun4i-dma.c 500 */;
	size_t cocci_id/* drivers/dma/sun4i-dma.c 500 */;
	dma_addr_t cocci_id/* drivers/dma/sun4i-dma.c 499 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/sun4i-dma.c 434 */;
	struct sun4i_dma_promise cocci_id/* drivers/dma/sun4i-dma.c 368 */;
	struct virt_dma_desc *cocci_id/* drivers/dma/sun4i-dma.c 325 */;
	struct sun4i_dma_pchan *cocci_id/* drivers/dma/sun4i-dma.c 324 */;
	struct sun4i_dma_contract *cocci_id/* drivers/dma/sun4i-dma.c 323 */;
	struct sun4i_dma_promise *cocci_id/* drivers/dma/sun4i-dma.c 322 */;
	struct sun4i_dma_vchan *cocci_id/* drivers/dma/sun4i-dma.c 320 */;
	struct sun4i_dma_dev *cocci_id/* drivers/dma/sun4i-dma.c 319 */;
	int cocci_id/* drivers/dma/sun4i-dma.c 319 */;
	void cocci_id/* drivers/dma/sun4i-dma.c 262 */;
	unsigned long cocci_id/* drivers/dma/sun4i-dma.c 221 */;
	enum dma_slave_buswidth cocci_id/* drivers/dma/sun4i-dma.c 201 */;
	u32 cocci_id/* drivers/dma/sun4i-dma.c 192 */;
	struct dma_chan *cocci_id/* drivers/dma/sun4i-dma.c 187 */;
	struct device *cocci_id/* drivers/dma/sun4i-dma.c 187 */;
	struct sun4i_dma_contract cocci_id/* drivers/dma/sun4i-dma.c 184 */;
	struct sun4i_dma_dev cocci_id/* drivers/dma/sun4i-dma.c 174 */;
	struct dma_device *cocci_id/* drivers/dma/sun4i-dma.c 172 */;
	struct sun4i_dma_dev {
	DECLARE_BITMAP(pchans_used,SUN4I_DMA_NR_MAX_CHANNELS)
		;
		struct dma_device slave;
		struct sun4i_dma_pchan *pchans;
		struct sun4i_dma_vchan *vchans;
		void __iomem *base;
		struct clk *clk;
		int irq;
		spinlock_t lock;
	} cocci_id/* drivers/dma/sun4i-dma.c 161 */;
	struct sun4i_dma_contract {
		struct virt_dma_desc vd;
		struct list_head demands;
		struct list_head completed_demands;
		int is_cyclic;
	} cocci_id/* drivers/dma/sun4i-dma.c 154 */;
	struct sun4i_dma_promise {
		u32 cfg;
		u32 para;
		dma_addr_t src;
		dma_addr_t dst;
		size_t len;
		struct list_head list;
	} cocci_id/* drivers/dma/sun4i-dma.c 144 */;
	struct sun4i_dma_vchan {
		struct virt_dma_chan vc;
		struct dma_slave_config cfg;
		struct sun4i_dma_pchan *pchan;
		struct sun4i_dma_promise *processing;
		struct sun4i_dma_contract *contract;
		u8 endpoint;
		int is_dedicated;
	} cocci_id/* drivers/dma/sun4i-dma.c 134 */;
	struct platform_driver cocci_id/* drivers/dma/sun4i-dma.c 1270 */;
	const struct of_device_id cocci_id/* drivers/dma/sun4i-dma.c 1264 */[];
	struct sun4i_dma_pchan {
		void __iomem *base;
		struct sun4i_dma_vchan *vchan;
		int is_dedicated;
	} cocci_id/* drivers/dma/sun4i-dma.c 125 */;
	struct sun4i_dma_vchan cocci_id/* drivers/dma/sun4i-dma.c 1178 */;
	struct sun4i_dma_pchan cocci_id/* drivers/dma/sun4i-dma.c 1176 */;
	struct resource *cocci_id/* drivers/dma/sun4i-dma.c 1122 */;
	struct platform_device *cocci_id/* drivers/dma/sun4i-dma.c 1119 */;
	irqreturn_t cocci_id/* drivers/dma/sun4i-dma.c 1004 */;
	void *cocci_id/* drivers/dma/sun4i-dma.c 1004 */;
}
