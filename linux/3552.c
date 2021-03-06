cocci_test_suite() {
	struct platform_device *cocci_id/* drivers/mmc/host/mxcmmc.c 996 */;
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/mxcmmc.c 988 */;
	struct timer_list *cocci_id/* drivers/mmc/host/mxcmmc.c 960 */;
	struct mxcmci_host *cocci_id/* drivers/mmc/host/mxcmmc.c 950 */;
	bool cocci_id/* drivers/mmc/host/mxcmmc.c 948 */;
	struct dma_chan *cocci_id/* drivers/mmc/host/mxcmmc.c 948 */;
	void *cocci_id/* drivers/mmc/host/mxcmmc.c 948 */;
	struct mmc_card *cocci_id/* drivers/mmc/host/mxcmmc.c 931 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/mxcmmc.c 890 */;
	irqreturn_t cocci_id/* drivers/mmc/host/mxcmmc.c 888 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/mxcmmc.c 839 */;
	struct dma_slave_config *cocci_id/* drivers/mmc/host/mxcmmc.c 826 */;
	unsigned int cocci_id/* drivers/mmc/host/mxcmmc.c 695 */;
	unsigned long cocci_id/* drivers/mmc/host/mxcmmc.c 657 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/mxcmmc.c 655 */;
	struct mxcmci_host cocci_id/* drivers/mmc/host/mxcmmc.c 635 */;
	struct work_struct *cocci_id/* drivers/mmc/host/mxcmmc.c 633 */;
	u8 *cocci_id/* drivers/mmc/host/mxcmmc.c 561 */;
	struct mmc_command *cocci_id/* drivers/mmc/host/mxcmmc.c 495 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/mxcmmc.c 448 */;
	u32 cocci_id/* drivers/mmc/host/mxcmmc.c 363 */;
	void cocci_id/* drivers/mmc/host/mxcmmc.c 357 */(struct mxcmci_host *host,
							 unsigned int stat);
	enum dma_transfer_direction cocci_id/* drivers/mmc/host/mxcmmc.c 302 */;
	struct scatterlist *cocci_id/* drivers/mmc/host/mxcmmc.c 301 */;
	u32 *cocci_id/* drivers/mmc/host/mxcmmc.c 274 */;
	int cocci_id/* drivers/mmc/host/mxcmmc.c 274 */;
	void cocci_id/* drivers/mmc/host/mxcmmc.c 274 */;
	void cocci_id/* drivers/mmc/host/mxcmmc.c 234 */(struct mxcmci_host *host,
							 unsigned int clk_ios);
	u16 cocci_id/* drivers/mmc/host/mxcmmc.c 218 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/mxcmmc.c 176 */[];
	const struct platform_device_id cocci_id/* drivers/mmc/host/mxcmmc.c 160 */[];
	struct platform_driver cocci_id/* drivers/mmc/host/mxcmmc.c 1232 */;
	struct device *cocci_id/* drivers/mmc/host/mxcmmc.c 1212 */;
	struct mxcmci_host {
		struct mmc_host *mmc;
		void __iomem *base;
		dma_addr_t phys_base;
		int detect_irq;
		struct dma_chan *dma;
		struct dma_async_tx_descriptor *desc;
		int do_dma;
		int default_irq_mask;
		int use_sdio;
		unsigned int power_mode;
		struct imxmmc_platform_data *pdata;
		struct mmc_request *req;
		struct mmc_command *cmd;
		struct mmc_data *data;
		unsigned int datasize;
		unsigned int dma_dir;
		u16 rev_no;
		unsigned int cmdat;
		struct clk *clk_ipg;
		struct clk *clk_per;
		int clock;
		struct work_struct datawork;
		spinlock_t lock;
		int burstlen;
		int dmareq;
		struct dma_slave_config dma_slave_config;
		struct imx_dma_data dma_data;
		struct timer_list watchdog;
		enum mxcmci_type devtype;
	} cocci_id/* drivers/mmc/host/mxcmmc.c 120 */;
	enum mxcmci_type{IMX21_MMC, IMX31_MMC, MPC512X_MMC,} cocci_id/* drivers/mmc/host/mxcmmc.c 114 */;
	const struct platform_device_id *cocci_id/* drivers/mmc/host/mxcmmc.c 1048 */;
	struct imxmmc_platform_data *cocci_id/* drivers/mmc/host/mxcmmc.c 1005 */;
	const struct of_device_id *cocci_id/* drivers/mmc/host/mxcmmc.c 1004 */;
	dma_cap_mask_t cocci_id/* drivers/mmc/host/mxcmmc.c 1003 */;
	struct resource *cocci_id/* drivers/mmc/host/mxcmmc.c 1000 */;
}
