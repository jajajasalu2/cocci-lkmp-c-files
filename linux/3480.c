cocci_test_suite() {
	struct owl_mmc_host {
		struct device *dev;
		struct reset_control *reset;
		void __iomem *base;
		struct clk *clk;
		struct completion sdc_complete;
		spinlock_t lock;
		int irq;
		u32 clock;
		bool ddr_50;
		enum dma_data_direction dma_dir;
		struct dma_chan *dma;
		struct dma_async_tx_descriptor *desc;
		struct dma_slave_config dma_cfg;
		struct completion dma_complete;
		struct mmc_host *mmc;
		struct mmc_request *mrq;
		struct mmc_command *cmd;
		struct mmc_data *data;
	} cocci_id/* drivers/mmc/host/owl-mmc.c 95 */;
	struct platform_driver cocci_id/* drivers/mmc/host/owl-mmc.c 683 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/owl-mmc.c 677 */[];
	struct owl_mmc_host cocci_id/* drivers/mmc/host/owl-mmc.c 564 */;
	struct resource *cocci_id/* drivers/mmc/host/owl-mmc.c 561 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/owl-mmc.c 560 */;
	struct platform_device *cocci_id/* drivers/mmc/host/owl-mmc.c 557 */;
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/owl-mmc.c 549 */;
	void cocci_id/* drivers/mmc/host/owl-mmc.c 451 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/owl-mmc.c 431 */;
	unsigned int cocci_id/* drivers/mmc/host/owl-mmc.c 383 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/owl-mmc.c 281 */;
	struct mmc_command *cocci_id/* drivers/mmc/host/owl-mmc.c 172 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/owl-mmc.c 155 */;
	u32 cocci_id/* drivers/mmc/host/owl-mmc.c 136 */;
	unsigned long cocci_id/* drivers/mmc/host/owl-mmc.c 135 */;
	struct owl_mmc_host *cocci_id/* drivers/mmc/host/owl-mmc.c 134 */;
	irqreturn_t cocci_id/* drivers/mmc/host/owl-mmc.c 132 */;
	void *cocci_id/* drivers/mmc/host/owl-mmc.c 132 */;
	int cocci_id/* drivers/mmc/host/owl-mmc.c 132 */;
	bool cocci_id/* drivers/mmc/host/owl-mmc.c 118 */;
	void __iomem *cocci_id/* drivers/mmc/host/owl-mmc.c 118 */;
}
