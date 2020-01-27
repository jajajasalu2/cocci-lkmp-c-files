cocci_test_suite() {
	struct device *cocci_id/* drivers/mmc/host/sh_mmcif.c 990 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/sh_mmcif.c 880 */;
	u32 *cocci_id/* drivers/mmc/host/sh_mmcif.c 676 */;
	int cocci_id/* drivers/mmc/host/sh_mmcif.c 490 */;
	bool cocci_id/* drivers/mmc/host/sh_mmcif.c 478 */;
	struct sh_mmcif_plat_data *cocci_id/* drivers/mmc/host/sh_mmcif.c 477 */;
	struct dma_slave_config cocci_id/* drivers/mmc/host/sh_mmcif.c 405 */;
	struct resource *cocci_id/* drivers/mmc/host/sh_mmcif.c 404 */;
	enum dma_transfer_direction cocci_id/* drivers/mmc/host/sh_mmcif.c 402 */;
	struct dma_chan *cocci_id/* drivers/mmc/host/sh_mmcif.c 401 */;
	dma_cap_mask_t cocci_id/* drivers/mmc/host/sh_mmcif.c 390 */;
	uintptr_t cocci_id/* drivers/mmc/host/sh_mmcif.c 388 */;
	dma_cookie_t cocci_id/* drivers/mmc/host/sh_mmcif.c 294 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/mmc/host/sh_mmcif.c 291 */;
	struct scatterlist *cocci_id/* drivers/mmc/host/sh_mmcif.c 290 */;
	void *cocci_id/* drivers/mmc/host/sh_mmcif.c 272 */;
	u32 cocci_id/* drivers/mmc/host/sh_mmcif.c 267 */;
	unsigned int cocci_id/* drivers/mmc/host/sh_mmcif.c 267 */;
	struct sh_mmcif_host *cocci_id/* drivers/mmc/host/sh_mmcif.c 266 */;
	void cocci_id/* drivers/mmc/host/sh_mmcif.c 266 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/sh_mmcif.c 252 */[];
	struct sh_mmcif_host {
		struct mmc_host *mmc;
		struct mmc_request *mrq;
		struct platform_device *pd;
		struct clk *clk;
		int bus_width;
		unsigned char timing;
		bool sd_error;
		bool dying;
		long timeout;
		void __iomem *addr;
		u32 *pio_ptr;
		spinlock_t lock;
		enum sh_mmcif_state state;
		enum sh_mmcif_wait_for wait_for;
		struct delayed_work timeout_work;
		size_t blocksize;
		int sg_idx;
		int sg_blkidx;
		bool power;
		bool ccs_enable;
		bool clk_ctrl2_enable;
		struct mutex thread_lock;
		u32 clkdiv_map;
		struct dma_chan *chan_rx;
		struct dma_chan *chan_tx;
		struct completion dma_complete;
		bool dma_active;
	} cocci_id/* drivers/mmc/host/sh_mmcif.c 220 */;
	enum sh_mmcif_wait_for{MMCIF_WAIT_FOR_REQUEST, MMCIF_WAIT_FOR_CMD, MMCIF_WAIT_FOR_MREAD, MMCIF_WAIT_FOR_MWRITE, MMCIF_WAIT_FOR_READ, MMCIF_WAIT_FOR_WRITE, MMCIF_WAIT_FOR_READ_END, MMCIF_WAIT_FOR_WRITE_END, MMCIF_WAIT_FOR_STOP,} cocci_id/* drivers/mmc/host/sh_mmcif.c 205 */;
	enum sh_mmcif_state{STATE_IDLE, STATE_REQUEST, STATE_IOS, STATE_TIMEOUT,} cocci_id/* drivers/mmc/host/sh_mmcif.c 198 */;
	struct platform_driver cocci_id/* drivers/mmc/host/sh_mmcif.c 1558 */;
	const struct dev_pm_ops cocci_id/* drivers/mmc/host/sh_mmcif.c 1554 */;
	struct sh_mmcif_host cocci_id/* drivers/mmc/host/sh_mmcif.c 1405 */;
	const char *cocci_id/* drivers/mmc/host/sh_mmcif.c 1393 */;
	void __iomem *cocci_id/* drivers/mmc/host/sh_mmcif.c 1392 */;
	struct platform_device *cocci_id/* drivers/mmc/host/sh_mmcif.c 1384 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/sh_mmcif.c 1371 */;
	struct delayed_work *cocci_id/* drivers/mmc/host/sh_mmcif.c 1316 */;
	struct work_struct *cocci_id/* drivers/mmc/host/sh_mmcif.c 1314 */;
	irqreturn_t cocci_id/* drivers/mmc/host/sh_mmcif.c 1278 */;
	unsigned long cocci_id/* drivers/mmc/host/sh_mmcif.c 1177 */;
	long cocci_id/* drivers/mmc/host/sh_mmcif.c 1082 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/sh_mmcif.c 1080 */;
	struct mmc_command *cocci_id/* drivers/mmc/host/sh_mmcif.c 1079 */;
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/sh_mmcif.c 1071 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/sh_mmcif.c 1021 */;
}
