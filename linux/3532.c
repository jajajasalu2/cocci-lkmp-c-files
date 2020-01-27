cocci_test_suite() {
	struct mmc_omap_slot {
		int id;
		unsigned int vdd;
		u16 saved_con;
		u16 bus_mode;
		u16 power_mode;
		unsigned int fclk_freq;
		struct tasklet_struct cover_tasklet;
		struct timer_list cover_timer;
		unsigned cover_open;
		struct mmc_request *mrq;
		struct mmc_omap_host *host;
		struct mmc_host *mmc;
		struct omap_mmc_slot_data *pdata;
	} cocci_id/* drivers/mmc/host/omap.c 99 */;
	u32 cocci_id/* drivers/mmc/host/omap.c 985 */;
	struct dma_chan *cocci_id/* drivers/mmc/host/omap.c 984 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/mmc/host/omap.c 983 */;
	enum dma_data_direction cocci_id/* drivers/mmc/host/omap.c 982 */;
	unsigned cocci_id/* drivers/mmc/host/omap.c 949 */;
	struct scatterlist *cocci_id/* drivers/mmc/host/omap.c 948 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/omap.c 944 */;
	void *cocci_id/* drivers/mmc/host/omap.c 901 */;
	u16 cocci_id/* drivers/mmc/host/omap.c 722 */;
	irqreturn_t cocci_id/* drivers/mmc/host/omap.c 719 */;
	char cocci_id/* drivers/mmc/host/omap.c 703 */[64];
	const char *cocci_id/* drivers/mmc/host/omap.c 698 */[];
	struct timer_list *cocci_id/* drivers/mmc/host/omap.c 655 */;
	unsigned long cocci_id/* drivers/mmc/host/omap.c 629 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/omap.c 608 */;
	struct mmc_command *cocci_id/* drivers/mmc/host/omap.c 607 */;
	struct mmc_omap_host cocci_id/* drivers/mmc/host/omap.c 596 */;
	struct mmc_omap_host *cocci_id/* drivers/mmc/host/omap.c 596 */;
	struct work_struct *cocci_id/* drivers/mmc/host/omap.c 594 */;
	void cocci_id/* drivers/mmc/host/omap.c 594 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/omap.c 499 */;
	struct device *cocci_id/* drivers/mmc/host/omap.c 406 */;
	struct mmc_host cocci_id/* drivers/mmc/host/omap.c 310 */;
	char *cocci_id/* drivers/mmc/host/omap.c 308 */;
	struct device_attribute *cocci_id/* drivers/mmc/host/omap.c 307 */;
	ssize_t cocci_id/* drivers/mmc/host/omap.c 306 */;
	void cocci_id/* drivers/mmc/host/omap.c 237 */(struct mmc_omap_host *host,
						       struct mmc_request *req);
	unsigned int cocci_id/* drivers/mmc/host/omap.c 182 */;
	struct platform_driver cocci_id/* drivers/mmc/host/omap.c 1502 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/omap.c 1495 */[];
	struct resource *cocci_id/* drivers/mmc/host/omap.c 1327 */;
	struct omap_mmc_platform_data *cocci_id/* drivers/mmc/host/omap.c 1325 */;
	struct platform_device *cocci_id/* drivers/mmc/host/omap.c 1323 */;
	struct mmc_omap_slot cocci_id/* drivers/mmc/host/omap.c 1232 */;
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/omap.c 1221 */;
	struct mmc_omap_host {
		int initialized;
		struct mmc_request *mrq;
		struct mmc_command *cmd;
		struct mmc_data *data;
		struct mmc_host *mmc;
		struct device *dev;
		unsigned char id;
		struct clk *iclk;
		struct clk *fclk;
		struct dma_chan *dma_rx;
		u32 dma_rx_burst;
		struct dma_chan *dma_tx;
		u32 dma_tx_burst;
		void __iomem *virt_base;
		unsigned int phys_base;
		int irq;
		unsigned char bus_mode;
		unsigned int reg_shift;
		struct work_struct cmd_abort_work;
		unsigned abort:1;
		struct timer_list cmd_abort_timer;
		struct work_struct slot_release_work;
		struct mmc_omap_slot *next_slot;
		struct work_struct send_stop_work;
		struct mmc_data *stop_data;
		unsigned int sg_len;
		int sg_idx;
		u16 *buffer;
		u32 buffer_bytes_left;
		u32 total_bytes_left;
		unsigned features;
		unsigned brs_received:1,dma_done:1;
		unsigned dma_in_use:1;
		spinlock_t dma_lock;
		struct mmc_omap_slot *slots[OMAP_MMC_MAX_SLOTS];
		struct mmc_omap_slot *current_slot;
		spinlock_t slot_lock;
		wait_queue_head_t slot_wq;
		int nr_slots;
		struct timer_list clk_timer;
		spinlock_t clk_lock;
		unsigned int fclk_enabled:1;
		struct workqueue_struct *mmc_omap_wq;
		struct omap_mmc_platform_data *pdata;
	} cocci_id/* drivers/mmc/host/omap.c 117 */;
	struct mmc_omap_slot *cocci_id/* drivers/mmc/host/omap.c 1127 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/omap.c 1125 */;
	int cocci_id/* drivers/mmc/host/omap.c 1125 */;
	struct dma_slave_config cocci_id/* drivers/mmc/host/omap.c 1017 */;
}
