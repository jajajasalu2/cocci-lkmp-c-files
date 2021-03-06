cocci_test_suite() {
	struct scatterlist *cocci_id/* drivers/dma/s3c24xx-dma.c 975 */;
	unsigned cocci_id/* drivers/dma/s3c24xx-dma.c 887 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/s3c24xx-dma.c 879 */;
	dma_addr_t cocci_id/* drivers/dma/s3c24xx-dma.c 878 */;
	size_t cocci_id/* drivers/dma/s3c24xx-dma.c 878 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/s3c24xx-dma.c 877 */;
	dma_cookie_t cocci_id/* drivers/dma/s3c24xx-dma.c 758 */;
	struct dma_tx_state *cocci_id/* drivers/dma/s3c24xx-dma.c 758 */;
	enum dma_status cocci_id/* drivers/dma/s3c24xx-dma.c 757 */;
	irqreturn_t cocci_id/* drivers/dma/s3c24xx-dma.c 646 */;
	struct s3c24xx_dma_chan *cocci_id/* drivers/dma/s3c24xx-dma.c 638 */;
	struct s3c24xx_txd *cocci_id/* drivers/dma/s3c24xx-dma.c 637 */;
	struct virt_dma_desc *cocci_id/* drivers/dma/s3c24xx-dma.c 635 */;
	void cocci_id/* drivers/dma/s3c24xx-dma.c 635 */;
	struct s3c24xx_sg cocci_id/* drivers/dma/s3c24xx-dma.c 445 */;
	struct s3c24xx_sg *cocci_id/* drivers/dma/s3c24xx-dma.c 429 */;
	struct s3c24xx_txd cocci_id/* drivers/dma/s3c24xx-dma.c 412 */;
	struct dma_slave_config *cocci_id/* drivers/dma/s3c24xx-dma.c 380 */;
	u32 cocci_id/* drivers/dma/s3c24xx-dma.c 370 */;
	unsigned long cocci_id/* drivers/dma/s3c24xx-dma.c 290 */;
	struct s3c24xx_dma_channel *cocci_id/* drivers/dma/s3c24xx-dma.c 263 */;
	const struct s3c24xx_dma_platdata *cocci_id/* drivers/dma/s3c24xx-dma.c 262 */;
	struct s3c24xx_dma_engine {
		struct platform_device *pdev;
		const struct s3c24xx_dma_platdata *pdata;
		struct soc_data *sdata;
		void __iomem *base;
		struct dma_device slave;
		struct dma_device memcpy;
		struct s3c24xx_dma_phy *phy_chans;
	} cocci_id/* drivers/dma/s3c24xx-dma.c 235 */;
	struct s3c24xx_dma_chan {
		int id;
		const char *name;
		struct virt_dma_chan vc;
		struct s3c24xx_dma_phy *phy;
		struct dma_slave_config cfg;
		struct s3c24xx_txd *at;
		struct s3c24xx_dma_engine *host;
		enum s3c24xx_dma_chan_state state;
		bool slave;
	} cocci_id/* drivers/dma/s3c24xx-dma.c 214 */;
	struct s3c24xx_dma_phy {
		unsigned int id;
		bool valid;
		void __iomem *base;
		int irq;
		struct clk *clk;
		spinlock_t lock;
		struct s3c24xx_dma_chan *serving;
		struct s3c24xx_dma_engine *host;
	} cocci_id/* drivers/dma/s3c24xx-dma.c 190 */;
	struct s3c24xx_dma_chan cocci_id/* drivers/dma/s3c24xx-dma.c 177 */;
	struct s3c24xx_txd {
		struct virt_dma_desc vd;
		struct list_head dsg_list;
		struct list_head *at;
		u8 width;
		u32 disrcc;
		u32 didstc;
		u32 dcon;
		bool cyclic;
	} cocci_id/* drivers/dma/s3c24xx-dma.c 166 */;
	struct s3c24xx_sg {
		dma_addr_t src_addr;
		dma_addr_t dst_addr;
		size_t len;
		struct list_head node;
	} cocci_id/* drivers/dma/s3c24xx-dma.c 148 */;
	uintptr_t cocci_id/* drivers/dma/s3c24xx-dma.c 1422 */;
	bool cocci_id/* drivers/dma/s3c24xx-dma.c 1413 */;
	struct dma_chan *cocci_id/* drivers/dma/s3c24xx-dma.c 1413 */;
	void *cocci_id/* drivers/dma/s3c24xx-dma.c 1413 */;
	struct platform_driver cocci_id/* drivers/dma/s3c24xx-dma.c 1402 */;
	struct s3c24xx_dma_phy *cocci_id/* drivers/dma/s3c24xx-dma.c 1371 */;
	int cocci_id/* drivers/dma/s3c24xx-dma.c 1368 */;
	struct s3c24xx_dma_engine *cocci_id/* drivers/dma/s3c24xx-dma.c 1366 */;
	struct platform_device *cocci_id/* drivers/dma/s3c24xx-dma.c 1365 */;
	enum s3c24xx_dma_chan_state{S3C24XX_DMA_CHAN_IDLE, S3C24XX_DMA_CHAN_RUNNING, S3C24XX_DMA_CHAN_WAITING,} cocci_id/* drivers/dma/s3c24xx-dma.c 135 */;
	char cocci_id/* drivers/dma/s3c24xx-dma.c 1233 */[6];
	struct s3c24xx_dma_phy cocci_id/* drivers/dma/s3c24xx-dma.c 1225 */;
	struct soc_data {
		int stride;
		bool has_reqsel;
		bool has_clocks;
	} cocci_id/* drivers/dma/s3c24xx-dma.c 121 */;
	struct resource *cocci_id/* drivers/dma/s3c24xx-dma.c 1190 */;
	struct soc_data *cocci_id/* drivers/dma/s3c24xx-dma.c 1179 */;
	const struct platform_device_id cocci_id/* drivers/dma/s3c24xx-dma.c 1165 */[];
	struct soc_data cocci_id/* drivers/dma/s3c24xx-dma.c 1145 */;
	struct dma_device *cocci_id/* drivers/dma/s3c24xx-dma.c 1132 */;
	unsigned int cocci_id/* drivers/dma/s3c24xx-dma.c 1089 */;
}
