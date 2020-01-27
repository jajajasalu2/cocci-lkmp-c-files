cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/mmc/host/davinci_mmc.c 864 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/davinci_mmc.c 843 */;
	struct mmc_command *cocci_id/* drivers/mmc/host/davinci_mmc.c 801 */;
	bool cocci_id/* drivers/mmc/host/davinci_mmc.c 744 */;
	u32 cocci_id/* drivers/mmc/host/davinci_mmc.c 647 */;
	struct mmc_davinci_host *cocci_id/* drivers/mmc/host/davinci_mmc.c 644 */;
	unsigned int cocci_id/* drivers/mmc/host/davinci_mmc.c 642 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/davinci_mmc.c 640 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/davinci_mmc.c 640 */;
	void cocci_id/* drivers/mmc/host/davinci_mmc.c 640 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/davinci_mmc.c 516 */;
	int cocci_id/* drivers/mmc/host/davinci_mmc.c 495 */;
	struct dma_slave_config cocci_id/* drivers/mmc/host/davinci_mmc.c 408 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/mmc/host/davinci_mmc.c 404 */;
	struct dma_chan *cocci_id/* drivers/mmc/host/davinci_mmc.c 390 */;
	u32 *cocci_id/* drivers/mmc/host/davinci_mmc.c 248 */;
	u8 *cocci_id/* drivers/mmc/host/davinci_mmc.c 228 */;
	irqreturn_t cocci_id/* drivers/mmc/host/davinci_mmc.c 214 */(int irq,
								     void *dev_id);
	struct mmc_davinci_host {
		struct mmc_command *cmd;
		struct mmc_data *data;
		struct mmc_host *mmc;
		struct clk *clk;
		unsigned int mmc_input_clk;
		void __iomem *base;
		struct resource *mem_res;
		int mmc_irq,sdio_irq;
		unsigned char bus_mode;
#define DAVINCI_MMC_DATADIR_NONE 0
#define DAVINCI_MMC_DATADIR_READ 1
#define DAVINCI_MMC_DATADIR_WRITE 2
		unsigned char data_dir;
		u8 *buffer;
		u32 buffer_bytes_left;
		u32 bytes_left;
		struct dma_chan *dma_tx;
		struct dma_chan *dma_rx;
		bool use_dma;
		bool do_dma;
		bool sdio_int;
		bool active_request;
		unsigned int sg_len;
		struct scatterlist *sg;
		u8 version;
		unsigned ns_in_one_cycle;
		u8 nr_sg;
#ifdef CONFIG_CPU_FREQ
		struct notifier_block freq_transition;
#endif
	} cocci_id/* drivers/mmc/host/davinci_mmc.c 168 */;
	unsigned cocci_id/* drivers/mmc/host/davinci_mmc.c 159 */;
	struct platform_driver cocci_id/* drivers/mmc/host/davinci_mmc.c 1396 */;
	const struct dev_pm_ops cocci_id/* drivers/mmc/host/davinci_mmc.c 1386 */;
	struct device *cocci_id/* drivers/mmc/host/davinci_mmc.c 1376 */;
	int __exit cocci_id/* drivers/mmc/host/davinci_mmc.c 1351 */;
	struct mmc_davinci_host cocci_id/* drivers/mmc/host/davinci_mmc.c 1213 */;
	const struct platform_device_id *cocci_id/* drivers/mmc/host/davinci_mmc.c 1198 */;
	size_t cocci_id/* drivers/mmc/host/davinci_mmc.c 1197 */;
	struct resource *cocci_id/* drivers/mmc/host/davinci_mmc.c 1195 */;
	const struct of_device_id *cocci_id/* drivers/mmc/host/davinci_mmc.c 1192 */;
	struct platform_device *cocci_id/* drivers/mmc/host/davinci_mmc.c 1190 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/davinci_mmc.c 1133 */[];
	const struct platform_device_id cocci_id/* drivers/mmc/host/davinci_mmc.c 1121 */[];
	void *cocci_id/* drivers/mmc/host/davinci_mmc.c 1063 */;
	unsigned long cocci_id/* drivers/mmc/host/davinci_mmc.c 1063 */;
	struct notifier_block *cocci_id/* drivers/mmc/host/davinci_mmc.c 1062 */;
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/davinci_mmc.c 1051 */;
	struct davinci_mmc_config *cocci_id/* drivers/mmc/host/davinci_mmc.c 1012 */;
}
