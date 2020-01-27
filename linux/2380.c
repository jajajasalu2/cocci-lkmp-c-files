cocci_test_suite() {
	enum mmp_tdma_type{MMP_AUD_TDMA=0, PXA910_SQU,} cocci_id/* drivers/dma/mmp_tdma.c 94 */;
	struct mmp_tdma_desc {
		u32 byte_cnt;
		u32 src_addr;
		u32 dst_addr;
		u32 nxt_desc;
	} cocci_id/* drivers/dma/mmp_tdma.c 87 */;
	struct platform_driver cocci_id/* drivers/dma/mmp_tdma.c 733 */;
	const struct platform_device_id cocci_id/* drivers/dma/mmp_tdma.c 727 */[];
	struct resource *cocci_id/* drivers/dma/mmp_tdma.c 632 */;
	const struct of_device_id *cocci_id/* drivers/dma/mmp_tdma.c 630 */;
	enum mmp_tdma_type cocci_id/* drivers/dma/mmp_tdma.c 629 */;
	struct platform_device *cocci_id/* drivers/dma/mmp_tdma.c 627 */;
	const struct of_device_id cocci_id/* drivers/dma/mmp_tdma.c 620 */[];
	struct mmp_tdma_filter_param cocci_id/* drivers/dma/mmp_tdma.c 606 */;
	dma_cap_mask_t cocci_id/* drivers/dma/mmp_tdma.c 605 */;
	struct of_dma *cocci_id/* drivers/dma/mmp_tdma.c 602 */;
	struct of_phandle_args *cocci_id/* drivers/dma/mmp_tdma.c 601 */;
	struct mmp_tdma_filter_param *cocci_id/* drivers/dma/mmp_tdma.c 593 */;
	struct mmp_tdma_filter_param {
		unsigned int chan_id;
	} cocci_id/* drivers/dma/mmp_tdma.c 587 */;
	struct mmp_tdma_device *cocci_id/* drivers/dma/mmp_tdma.c 553 */;
	dma_cookie_t cocci_id/* drivers/dma/mmp_tdma.c 527 */;
	struct dma_tx_state *cocci_id/* drivers/dma/mmp_tdma.c 527 */;
	enum dma_status cocci_id/* drivers/dma/mmp_tdma.c 526 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/mmp_tdma.c 507 */;
	struct dma_slave_config *cocci_id/* drivers/dma/mmp_tdma.c 497 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/mmp_tdma.c 420 */;
	struct mmp_tdma_desc cocci_id/* drivers/dma/mmp_tdma.c 409 */;
	struct gen_pool *cocci_id/* drivers/dma/mmp_tdma.c 408 */;
	struct mmp_tdma_desc *cocci_id/* drivers/dma/mmp_tdma.c 406 */;
	struct dma_chan *cocci_id/* drivers/dma/mmp_tdma.c 379 */;
	int cocci_id/* drivers/dma/mmp_tdma.c 379 */;
	struct mmp_tdma_chan *cocci_id/* drivers/dma/mmp_tdma.c 351 */;
	unsigned long cocci_id/* drivers/dma/mmp_tdma.c 349 */;
	void cocci_id/* drivers/dma/mmp_tdma.c 349 */;
	irqreturn_t cocci_id/* drivers/dma/mmp_tdma.c 318 */;
	void *cocci_id/* drivers/dma/mmp_tdma.c 318 */;
	size_t cocci_id/* drivers/dma/mmp_tdma.c 302 */;
	u32 cocci_id/* drivers/dma/mmp_tdma.c 290 */;
	unsigned int cocci_id/* drivers/dma/mmp_tdma.c 206 */;
	bool cocci_id/* drivers/dma/mmp_tdma.c 150 */;
	dma_addr_t cocci_id/* drivers/dma/mmp_tdma.c 143 */;
	int cocci_id/* drivers/dma/mmp_tdma.c 139 */(struct dma_chan *chan,
						     enum dma_transfer_direction dir,
						     struct dma_slave_config *dmaengine_cfg);
	struct mmp_tdma_chan cocci_id/* drivers/dma/mmp_tdma.c 137 */;
	struct mmp_tdma_device {
		struct device *dev;
		void __iomem *base;
		struct dma_device device;
		struct mmp_tdma_chan *tdmac[TDMA_CHANNEL_NUM];
	} cocci_id/* drivers/dma/mmp_tdma.c 130 */;
	struct mmp_tdma_chan {
		struct device *dev;
		struct dma_chan chan;
		struct dma_async_tx_descriptor desc;
		struct tasklet_struct tasklet;
		struct mmp_tdma_desc *desc_arr;
		dma_addr_t desc_arr_phys;
		int desc_num;
		enum dma_transfer_direction dir;
		dma_addr_t dev_addr;
		u32 burst_sz;
		enum dma_slave_buswidth buswidth;
		enum dma_status status;
		struct dma_slave_config slave_config;
		int idx;
		enum mmp_tdma_type type;
		int irq;
		void __iomem *reg_base;
		size_t buf_len;
		size_t period_len;
		size_t pos;
		struct gen_pool *pool;
	} cocci_id/* drivers/dma/mmp_tdma.c 101 */;
}
