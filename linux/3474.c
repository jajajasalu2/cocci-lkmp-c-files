cocci_test_suite() {
	struct mmc_data *cocci_id/* drivers/mmc/host/atmel-mci.c 934 */;
	enum atmci_xfer_dir cocci_id/* drivers/mmc/host/atmel-mci.c 834 */;
	enum atmci_pdc_buf cocci_id/* drivers/mmc/host/atmel-mci.c 834 */;
	unsigned cocci_id/* drivers/mmc/host/atmel-mci.c 734 */;
	unsigned cocci_id/* drivers/mmc/host/atmel-mci.c 731 */[];
	struct device_node *cocci_id/* drivers/mmc/host/atmel-mci.c 604 */;
	struct platform_device *cocci_id/* drivers/mmc/host/atmel-mci.c 602 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/atmel-mci.c 594 */[];
	struct dentry *cocci_id/* drivers/mmc/host/atmel-mci.c 578 */;
	u32 *cocci_id/* drivers/mmc/host/atmel-mci.c 497 */;
	struct seq_file *cocci_id/* drivers/mmc/host/atmel-mci.c 494 */;
	const char *cocci_id/* drivers/mmc/host/atmel-mci.c 451 */[];
	const char *cocci_id/* drivers/mmc/host/atmel-mci.c 449 */;
	struct atmel_mci_slot {
		struct mmc_host *mmc;
		struct atmel_mci *host;
		u32 sdc_reg;
		u32 sdio_irq;
		struct mmc_request *mrq;
		struct list_head queue_node;
		unsigned int clock;
		unsigned long flags;
#define ATMCI_CARD_PRESENT 0
#define ATMCI_CARD_NEED_INIT 1
#define ATMCI_SHUTDOWN 2
		int detect_pin;
		int wp_pin;
		bool detect_is_active_high;
		struct timer_list detect_timer;
	} cocci_id/* drivers/mmc/host/atmel-mci.c 372 */;
	struct atmel_mci {
		spinlock_t lock;
		void __iomem *regs;
		struct scatterlist *sg;
		unsigned int sg_len;
		unsigned int pio_offset;
		unsigned int *buffer;
		unsigned int buf_size;
		dma_addr_t buf_phys_addr;
		struct atmel_mci_slot *cur_slot;
		struct mmc_request *mrq;
		struct mmc_command *cmd;
		struct mmc_data *data;
		unsigned int data_size;
		struct atmel_mci_dma dma;
		struct dma_chan *data_chan;
		struct dma_slave_config dma_conf;
		u32 cmd_status;
		u32 data_status;
		u32 stop_cmdr;
		struct tasklet_struct tasklet;
		unsigned long pending_events;
		unsigned long completed_events;
		enum atmel_mci_state state;
		struct list_head queue;
		bool need_clock_update;
		bool need_reset;
		struct timer_list timer;
		u32 mode_reg;
		u32 cfg_reg;
		unsigned long bus_hz;
		unsigned long mapbase;
		struct clk *mck;
		struct platform_device *pdev;
		struct atmel_mci_slot *slot[ATMCI_MAX_NR_SLOTS];
		struct atmel_mci_caps caps;
		u32 (*prepare_data)(struct atmel_mci *host, struct mmc_data *data);
		void (*submit_data)(struct atmel_mci *host, struct mmc_data *data);
		void (*stop_transfer)(struct atmel_mci *host);
	} cocci_id/* drivers/mmc/host/atmel-mci.c 303 */;
	struct platform_driver cocci_id/* drivers/mmc/host/atmel-mci.c 2660 */;
	struct device *cocci_id/* drivers/mmc/host/atmel-mci.c 2644 */;
	unsigned long cocci_id/* drivers/mmc/host/atmel-mci.c 2493 */;
	struct resource *cocci_id/* drivers/mmc/host/atmel-mci.c 2447 */;
	dma_cap_mask_t cocci_id/* drivers/mmc/host/atmel-mci.c 2354 */;
	struct mci_platform_data *cocci_id/* drivers/mmc/host/atmel-mci.c 2353 */;
	int cocci_id/* drivers/mmc/host/atmel-mci.c 2338 */;
	unsigned int cocci_id/* drivers/mmc/host/atmel-mci.c 2328 */;
	struct atmel_mci_slot *cocci_id/* drivers/mmc/host/atmel-mci.c 2327 */;
	void cocci_id/* drivers/mmc/host/atmel-mci.c 2327 */;
	struct atmel_mci_slot cocci_id/* drivers/mmc/host/atmel-mci.c 2221 */;
	struct mci_slot_pdata *cocci_id/* drivers/mmc/host/atmel-mci.c 2215 */;
	irqreturn_t cocci_id/* drivers/mmc/host/atmel-mci.c 2199 */;
	void *cocci_id/* drivers/mmc/host/atmel-mci.c 2199 */;
	struct atmel_mci_dma {
		struct dma_chan *chan;
		struct dma_async_tx_descriptor *data_desc;
	} cocci_id/* drivers/mmc/host/atmel-mci.c 217 */;
	struct atmel_mci_caps {
		bool has_dma_conf_reg;
		bool has_pdc;
		bool has_cfg_reg;
		bool has_cstor_reg;
		bool has_highspeed;
		bool has_rwproof;
		bool has_odd_clk_div;
		bool has_bad_data_ordering;
		bool need_reset_after_xfer;
		bool need_blksz_mul_4;
		bool need_notbusy_for_read_ops;
	} cocci_id/* drivers/mmc/host/atmel-mci.c 203 */;
	enum atmci_pdc_buf{PDC_FIRST_BUF=0, PDC_SECOND_BUF,} cocci_id/* drivers/mmc/host/atmel-mci.c 198 */;
	u8 *cocci_id/* drivers/mmc/host/atmel-mci.c 1962 */;
	enum atmci_xfer_dir{XFER_RECEIVE=0, XFER_TRANSMIT,} cocci_id/* drivers/mmc/host/atmel-mci.c 193 */;
	enum atmel_mci_state{STATE_IDLE=0, STATE_SENDING_CMD, STATE_DATA_XFER, STATE_WAITING_NOTBUSY, STATE_SENDING_STOP, STATE_END_REQUEST,} cocci_id/* drivers/mmc/host/atmel-mci.c 184 */;
	enum{EVENT_CMD_RDY=0, EVENT_XFER_COMPLETE, EVENT_NOTBUSY, EVENT_DATA_ERROR,} cocci_id/* drivers/mmc/host/atmel-mci.c 177 */;
	enum atmel_mci_state cocci_id/* drivers/mmc/host/atmel-mci.c 1721 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/atmel-mci.c 1645 */;
	bool cocci_id/* drivers/mmc/host/atmel-mci.c 1622 */;
	struct timer_list *cocci_id/* drivers/mmc/host/atmel-mci.c 1619 */;
	u32 cocci_id/* drivers/mmc/host/atmel-mci.c 1596 */;
	struct mmc_command *cocci_id/* drivers/mmc/host/atmel-mci.c 1594 */;
	struct atmel_mci *cocci_id/* drivers/mmc/host/atmel-mci.c 1593 */;
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/atmel-mci.c 1542 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/atmel-mci.c 1531 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/atmel-mci.c 1372 */;
	enum dma_transfer_direction cocci_id/* drivers/mmc/host/atmel-mci.c 1088 */;
	struct scatterlist *cocci_id/* drivers/mmc/host/atmel-mci.c 1086 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/mmc/host/atmel-mci.c 1085 */;
	struct dma_chan *cocci_id/* drivers/mmc/host/atmel-mci.c 1084 */;
}
