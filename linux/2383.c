cocci_test_suite() {
	struct k3_dma_dev {
		struct dma_device slave;
		void __iomem *base;
		struct tasklet_struct task;
		spinlock_t lock;
		struct list_head chan_pending;
		struct k3_dma_phy *phy;
		struct k3_dma_chan *chans;
		struct clk *clk;
		struct dma_pool *pool;
		u32 dma_channels;
		u32 dma_requests;
		u32 dma_channel_mask;
		unsigned int irq;
	} cocci_id/* drivers/dma/k3dma.c 99 */;
	struct k3_dma_chan cocci_id/* drivers/dma/k3dma.c 926 */;
	struct k3_dma_phy {
		u32 idx;
		void __iomem *base;
		struct k3_dma_chan *vchan;
		struct k3_dma_desc_sw *ds_run;
		struct k3_dma_desc_sw *ds_done;
	} cocci_id/* drivers/dma/k3dma.c 91 */;
	struct k3_dma_phy cocci_id/* drivers/dma/k3dma.c 891 */;
	const struct of_device_id *cocci_id/* drivers/dma/k3dma.c 837 */;
	const struct k3dma_soc_data *cocci_id/* drivers/dma/k3dma.c 835 */;
	struct platform_device *cocci_id/* drivers/dma/k3dma.c 833 */;
	struct of_dma *cocci_id/* drivers/dma/k3dma.c 822 */;
	struct of_phandle_args *cocci_id/* drivers/dma/k3dma.c 821 */;
	const struct of_device_id cocci_id/* drivers/dma/k3dma.c 810 */[];
	const struct k3dma_soc_data cocci_id/* drivers/dma/k3dma.c 806 */;
	struct k3_dma_chan {
		u32 ccfg;
		struct virt_dma_chan vc;
		struct k3_dma_phy *phy;
		struct list_head node;
		dma_addr_t dev_addr;
		enum dma_status status;
		bool cyclic;
		struct dma_slave_config slave_config;
	} cocci_id/* drivers/dma/k3dma.c 80 */;
	struct k3_dma_desc_sw cocci_id/* drivers/dma/k3dma.c 708 */;
	struct virt_dma_desc *cocci_id/* drivers/dma/k3dma.c 705 */;
	struct k3_dma_desc_sw {
		struct virt_dma_desc vd;
		dma_addr_t desc_hw_lli;
		size_t desc_num;
		size_t size;
		struct k3_desc_hw *desc_hw;
	} cocci_id/* drivers/dma/k3dma.c 70 */;
	enum dma_slave_buswidth cocci_id/* drivers/dma/k3dma.c 666 */;
	u32 cocci_id/* drivers/dma/k3dma.c 665 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/k3dma.c 661 */;
	struct dma_slave_config *cocci_id/* drivers/dma/k3dma.c 651 */;
	struct k3_desc_hw {
		u32 lli;
		u32 reserved[3];
		u32 count;
		u32 saddr;
		u32 daddr;
		u32 config;
	}__aligned(32) cocci_id/* drivers/dma/k3dma.c 61 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/k3dma.c 582 */;
	struct scatterlist *cocci_id/* drivers/dma/k3dma.c 527 */;
	unsigned int cocci_id/* drivers/dma/k3dma.c 527 */;
	struct k3_desc_hw cocci_id/* drivers/dma/k3dma.c 462 */;
	struct k3_dma_dev *cocci_id/* drivers/dma/k3dma.c 461 */;
	struct k3_dma_chan *cocci_id/* drivers/dma/k3dma.c 459 */;
	struct dma_chan *cocci_id/* drivers/dma/k3dma.c 457 */;
	struct k3_dma_desc_sw *cocci_id/* drivers/dma/k3dma.c 456 */;
	int cocci_id/* drivers/dma/k3dma.c 456 */;
	size_t cocci_id/* drivers/dma/k3dma.c 443 */;
	dma_addr_t cocci_id/* drivers/dma/k3dma.c 442 */;
	dma_cookie_t cocci_id/* drivers/dma/k3dma.c 370 */;
	struct dma_tx_state *cocci_id/* drivers/dma/k3dma.c 370 */;
	enum dma_status cocci_id/* drivers/dma/k3dma.c 369 */;
	unsigned long cocci_id/* drivers/dma/k3dma.c 359 */;
	unsigned cocci_id/* drivers/dma/k3dma.c 299 */;
	irqreturn_t cocci_id/* drivers/dma/k3dma.c 210 */;
	void *cocci_id/* drivers/dma/k3dma.c 210 */;
	bool cocci_id/* drivers/dma/k3dma.c 190 */;
	void cocci_id/* drivers/dma/k3dma.c 190 */;
	struct k3_dma_phy *cocci_id/* drivers/dma/k3dma.c 171 */;
	struct k3_desc_hw *cocci_id/* drivers/dma/k3dma.c 162 */;
	int cocci_id/* drivers/dma/k3dma.c 125 */(struct dma_chan *chan,
						  enum dma_transfer_direction dir,
						  struct dma_slave_config *cfg);
	struct k3_dma_dev cocci_id/* drivers/dma/k3dma.c 123 */;
	struct k3dma_soc_data {
		unsigned long flags;
	} cocci_id/* drivers/dma/k3dma.c 118 */;
	struct platform_driver cocci_id/* drivers/dma/k3dma.c 1025 */;
	struct device *cocci_id/* drivers/dma/k3dma.c 1008 */;
}
