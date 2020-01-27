cocci_test_suite() {
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/mmp_pdma.c 930 */;
	dma_cookie_t cocci_id/* drivers/dma/mmp_pdma.c 911 */;
	struct mmp_pdma_chan {
		struct device *dev;
		struct dma_chan chan;
		struct dma_async_tx_descriptor desc;
		struct mmp_pdma_phy *phy;
		enum dma_transfer_direction dir;
		struct dma_slave_config slave_config;
		struct mmp_pdma_desc_sw *cyclic_first;
		struct tasklet_struct tasklet;
		u32 dcmd;
		u32 drcmr;
		u32 dev_addr;
		spinlock_t desc_lock;
		struct list_head chain_pending;
		struct list_head chain_running;
		bool idle;
		bool byte_align;
		struct dma_pool *desc_pool;
	} cocci_id/* drivers/dma/mmp_pdma.c 90 */;
	struct dmaengine_desc_callback cocci_id/* drivers/dma/mmp_pdma.c 882 */;
	struct mmp_pdma_phy cocci_id/* drivers/dma/mmp_pdma.c 88 */;
	struct mmp_pdma_desc_sw *cocci_id/* drivers/dma/mmp_pdma.c 879 */;
	struct mmp_pdma_chan *cocci_id/* drivers/dma/mmp_pdma.c 878 */;
	unsigned long cocci_id/* drivers/dma/mmp_pdma.c 876 */;
	struct dma_tx_state *cocci_id/* drivers/dma/mmp_pdma.c 845 */;
	enum dma_status cocci_id/* drivers/dma/mmp_pdma.c 843 */;
	struct mmp_pdma_desc_sw {
		struct mmp_pdma_desc_hw desc;
		struct list_head node;
		struct list_head tx_list;
		struct dma_async_tx_descriptor async_tx;
	} cocci_id/* drivers/dma/mmp_pdma.c 81 */;
	struct dma_slave_config *cocci_id/* drivers/dma/mmp_pdma.c 742 */;
	struct mmp_pdma_desc_hw {
		u32 ddadr;
		u32 dsadr;
		u32 dtadr;
		u32 dcmd;
	}__aligned(32) cocci_id/* drivers/dma/mmp_pdma.c 74 */;
	enum dma_slave_buswidth cocci_id/* drivers/dma/mmp_pdma.c 698 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/mmp_pdma.c 694 */;
	size_t cocci_id/* drivers/dma/mmp_pdma.c 607 */;
	unsigned int cocci_id/* drivers/dma/mmp_pdma.c 527 */;
	struct scatterlist *cocci_id/* drivers/dma/mmp_pdma.c 526 */;
	struct list_head *cocci_id/* drivers/dma/mmp_pdma.c 416 */;
	struct mmp_pdma_desc_sw cocci_id/* drivers/dma/mmp_pdma.c 401 */;
	struct dma_chan *cocci_id/* drivers/dma/mmp_pdma.c 392 */;
	dma_addr_t cocci_id/* drivers/dma/mmp_pdma.c 367 */;
	struct mmp_pdma_device *cocci_id/* drivers/dma/mmp_pdma.c 243 */;
	irqreturn_t cocci_id/* drivers/dma/mmp_pdma.c 202 */;
	void *cocci_id/* drivers/dma/mmp_pdma.c 202 */;
	u32 cocci_id/* drivers/dma/mmp_pdma.c 186 */;
	struct mmp_pdma_phy *cocci_id/* drivers/dma/mmp_pdma.c 184 */;
	int cocci_id/* drivers/dma/mmp_pdma.c 184 */;
	void cocci_id/* drivers/dma/mmp_pdma.c 173 */;
	int cocci_id/* drivers/dma/mmp_pdma.c 141 */(struct dma_chan *dchan,
						     struct dma_slave_config *cfg,
						     enum dma_transfer_direction direction);
	struct mmp_pdma_device cocci_id/* drivers/dma/mmp_pdma.c 139 */;
	struct mmp_pdma_chan cocci_id/* drivers/dma/mmp_pdma.c 137 */;
	struct mmp_pdma_device {
		int dma_channels;
		void __iomem *base;
		struct device *dev;
		struct dma_device device;
		struct mmp_pdma_phy *phy;
		spinlock_t phy_lock;
	} cocci_id/* drivers/dma/mmp_pdma.c 123 */;
	struct mmp_pdma_phy {
		int idx;
		void __iomem *base;
		struct mmp_pdma_chan *vchan;
	} cocci_id/* drivers/dma/mmp_pdma.c 117 */;
	unsigned int *cocci_id/* drivers/dma/mmp_pdma.c 1158 */;
	bool cocci_id/* drivers/dma/mmp_pdma.c 1151 */;
	struct platform_driver cocci_id/* drivers/dma/mmp_pdma.c 1141 */;
	const struct platform_device_id cocci_id/* drivers/dma/mmp_pdma.c 1136 */[];
	const enum dma_slave_buswidth cocci_id/* drivers/dma/mmp_pdma.c 1035 */;
	struct resource *cocci_id/* drivers/dma/mmp_pdma.c 1032 */;
	struct mmp_dma_platdata *cocci_id/* drivers/dma/mmp_pdma.c 1031 */;
	const struct of_device_id *cocci_id/* drivers/dma/mmp_pdma.c 1030 */;
	struct platform_device *cocci_id/* drivers/dma/mmp_pdma.c 1027 */;
	struct of_dma *cocci_id/* drivers/dma/mmp_pdma.c 1013 */;
	struct of_phandle_args *cocci_id/* drivers/dma/mmp_pdma.c 1012 */;
	const struct of_device_id cocci_id/* drivers/dma/mmp_pdma.c 1006 */[];
}
