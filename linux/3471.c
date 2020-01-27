cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/mmc/host/mxs-mmc.c 724 */;
	struct device *cocci_id/* drivers/mmc/host/mxs-mmc.c 712 */;
	enum mxs_ssp_id cocci_id/* drivers/mmc/host/mxs-mmc.c 596 */;
	struct mxs_mmc_host cocci_id/* drivers/mmc/host/mxs-mmc.c 583 */;
	struct regulator *cocci_id/* drivers/mmc/host/mxs-mmc.c 576 */;
	struct device_node *cocci_id/* drivers/mmc/host/mxs-mmc.c 572 */;
	const struct of_device_id *cocci_id/* drivers/mmc/host/mxs-mmc.c 570 */;
	struct platform_device *cocci_id/* drivers/mmc/host/mxs-mmc.c 568 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/mxs-mmc.c 561 */[];
	const struct platform_device_id cocci_id/* drivers/mmc/host/mxs-mmc.c 548 */[];
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/mxs-mmc.c 540 */;
	unsigned long cocci_id/* drivers/mmc/host/mxs-mmc.c 514 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/mxs-mmc.c 510 */;
	int cocci_id/* drivers/mmc/host/mxs-mmc.c 510 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/mxs-mmc.c 495 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/mxs-mmc.c 482 */;
	struct mxs_mmc_host {
		struct mxs_ssp ssp;
		struct mmc_host *mmc;
		struct mmc_request *mrq;
		struct mmc_command *cmd;
		struct mmc_data *data;
		unsigned char bus_width;
		spinlock_t lock;
		int sdio_irq_en;
		bool broken_cd;
	} cocci_id/* drivers/mmc/host/mxs-mmc.c 48 */;
	enum dma_transfer_direction cocci_id/* drivers/mmc/host/mxs-mmc.c 354 */;
	unsigned short cocci_id/* drivers/mmc/host/mxs-mmc.c 353 */;
	unsigned int cocci_id/* drivers/mmc/host/mxs-mmc.c 350 */;
	struct scatterlist *cocci_id/* drivers/mmc/host/mxs-mmc.c 349 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/mxs-mmc.c 347 */;
	const unsigned int cocci_id/* drivers/mmc/host/mxs-mmc.c 330 */;
	unsigned cocci_id/* drivers/mmc/host/mxs-mmc.c 328 */;
	u32 cocci_id/* drivers/mmc/host/mxs-mmc.c 288 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/mmc/host/mxs-mmc.c 287 */;
	struct mmc_command *cocci_id/* drivers/mmc/host/mxs-mmc.c 286 */;
	struct mxs_ssp *cocci_id/* drivers/mmc/host/mxs-mmc.c 285 */;
	struct mxs_mmc_host *cocci_id/* drivers/mmc/host/mxs-mmc.c 283 */;
	void cocci_id/* drivers/mmc/host/mxs-mmc.c 283 */;
	irqreturn_t cocci_id/* drivers/mmc/host/mxs-mmc.c 176 */;
	void *cocci_id/* drivers/mmc/host/mxs-mmc.c 169 */;
	void cocci_id/* drivers/mmc/host/mxs-mmc.c 121 */(struct mxs_mmc_host *host,
							  struct mmc_command *cmd);
}
