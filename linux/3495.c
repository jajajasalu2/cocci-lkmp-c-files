cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/mmc/host/bcm2835.c 974 */;
	void cocci_id/* drivers/mmc/host/bcm2835.c 956 */;
	u32 cocci_id/* drivers/mmc/host/bcm2835.c 857 */;
	bool cocci_id/* drivers/mmc/host/bcm2835.c 857 */;
	struct delayed_work *cocci_id/* drivers/mmc/host/bcm2835.c 828 */;
	struct dma_chan *cocci_id/* drivers/mmc/host/bcm2835.c 597 */;
	struct scatterlist *cocci_id/* drivers/mmc/host/bcm2835.c 477 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/mmc/host/bcm2835.c 456 */;
	void *cocci_id/* drivers/mmc/host/bcm2835.c 321 */;
	void cocci_id/* drivers/mmc/host/bcm2835.c 281 */(struct bcm2835_host *host);
	struct mmc_request *cocci_id/* drivers/mmc/host/bcm2835.c 209 */;
	const char *cocci_id/* drivers/mmc/host/bcm2835.c 193 */;
	struct mmc_command *cocci_id/* drivers/mmc/host/bcm2835.c 192 */;
	struct platform_driver cocci_id/* drivers/mmc/host/bcm2835.c 1465 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/bcm2835.c 1459 */[];
	struct bcm2835_host {
		spinlock_t lock;
		struct mutex mutex;
		void __iomem *ioaddr;
		u32 phys_addr;
		struct platform_device *pdev;
		int clock;
		unsigned int max_clk;
		struct work_struct dma_work;
		struct delayed_work timeout_work;
		struct sg_mapping_iter sg_miter;
		unsigned int blocks;
		int irq;
		u32 ns_per_fifo_word;
		u32 hcfg;
		u32 cdiv;
		struct mmc_request *mrq;
		struct mmc_command *cmd;
		struct mmc_data *data;
		bool data_complete:1;
		bool use_busy:1;
		bool use_sbc:1;
		bool irq_block;
		bool irq_busy;
		bool irq_data;
		struct dma_chan *dma_chan_rxtx;
		struct dma_chan *dma_chan;
		struct dma_slave_config dma_cfg_rx;
		struct dma_slave_config dma_cfg_tx;
		struct dma_async_tx_descriptor *dma_desc;
		u32 dma_dir;
		u32 drain_words;
		struct page *drain_page;
		u32 drain_offset;
		bool use_dma;
	} cocci_id/* drivers/mmc/host/bcm2835.c 144 */;
	const __be32 *cocci_id/* drivers/mmc/host/bcm2835.c 1362 */;
	struct clk *cocci_id/* drivers/mmc/host/bcm2835.c 1359 */;
	struct platform_device *cocci_id/* drivers/mmc/host/bcm2835.c 1356 */;
	size_t cocci_id/* drivers/mmc/host/bcm2835.c 1317 */;
	char cocci_id/* drivers/mmc/host/bcm2835.c 1269 */[20];
	struct device *cocci_id/* drivers/mmc/host/bcm2835.c 1268 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/bcm2835.c 1267 */;
	struct bcm2835_host *cocci_id/* drivers/mmc/host/bcm2835.c 1265 */;
	int cocci_id/* drivers/mmc/host/bcm2835.c 1265 */;
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/bcm2835.c 1259 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/bcm2835.c 1233 */;
	unsigned int cocci_id/* drivers/mmc/host/bcm2835.c 1100 */;
	u32 *cocci_id/* drivers/mmc/host/bcm2835.c 1073 */;
	unsigned long cocci_id/* drivers/mmc/host/bcm2835.c 1071 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/bcm2835.c 1056 */;
	struct bcm2835_host cocci_id/* drivers/mmc/host/bcm2835.c 1055 */;
	struct work_struct *cocci_id/* drivers/mmc/host/bcm2835.c 1052 */;
}
