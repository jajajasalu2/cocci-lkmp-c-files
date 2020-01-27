cocci_test_suite() {
	struct knav_dma_device {
		bool loopback,enable_all;
		unsigned tx_priority,rx_priority,rx_timeout;
		unsigned logical_queue_managers;
		unsigned qm_base_address[DMA_MAX_QMS];
		struct reg_global __iomem *reg_global;
		struct reg_chan __iomem *reg_tx_chan;
		struct reg_rx_flow __iomem *reg_rx_flow;
		struct reg_chan __iomem *reg_rx_chan;
		struct reg_tx_sched __iomem *reg_tx_sched;
		unsigned max_rx_chan,max_tx_chan;
		unsigned max_rx_flow;
		char name[32];
		atomic_t ref_count;
		struct list_head list;
		struct list_head chan_list;
		spinlock_t lock;
	} cocci_id/* drivers/soc/ti/knav_dma.c 96 */;
	struct knav_dma_pool_device {
		struct device *dev;
		struct list_head list;
	} cocci_id/* drivers/soc/ti/knav_dma.c 91 */;
	struct reg_rx_flow {
		u32 control;
		u32 tags;
		u32 tag_sel;
		u32 fdq_sel[2];
		u32 thresh[3];
	} cocci_id/* drivers/soc/ti/knav_dma.c 83 */;
	struct platform_driver cocci_id/* drivers/soc/ti/knav_dma.c 809 */;
	struct of_device_id cocci_id/* drivers/soc/ti/knav_dma.c 802 */[];
	struct reg_tx_sched {
		u32 prio;
	} cocci_id/* drivers/soc/ti/knav_dma.c 79 */;
	struct knav_dma_pool_device cocci_id/* drivers/soc/ti/knav_dma.c 750 */;
	struct platform_device *cocci_id/* drivers/soc/ti/knav_dma.c 737 */;
	struct reg_chan {
		u32 control;
		u32 mode;
		u32 __rsvd[6];
	} cocci_id/* drivers/soc/ti/knav_dma.c 73 */;
	struct reg_rx_flow cocci_id/* drivers/soc/ti/knav_dma.c 685 */;
	struct reg_tx_sched cocci_id/* drivers/soc/ti/knav_dma.c 680 */;
	struct reg_chan cocci_id/* drivers/soc/ti/knav_dma.c 670 */;
	struct reg_global cocci_id/* drivers/soc/ti/knav_dma.c 661 */;
	struct reg_global {
		u32 revision;
		u32 perf_control;
		u32 emulation_control;
		u32 priority_control;
		u32 qm_base_address[DMA_MAX_QMS];
	} cocci_id/* drivers/soc/ti/knav_dma.c 65 */;
	resource_size_t cocci_id/* drivers/soc/ti/knav_dma.c 626 */;
	unsigned cocci_id/* drivers/soc/ti/knav_dma.c 622 */;
	struct device_node *cocci_id/* drivers/soc/ti/knav_dma.c 620 */;
	enum dma_transfer_direction cocci_id/* drivers/soc/ti/knav_dma.c 588 */;
	struct resource cocci_id/* drivers/soc/ti/knav_dma.c 541 */;
	resource_size_t *cocci_id/* drivers/soc/ti/knav_dma.c 538 */;
	void __iomem *cocci_id/* drivers/soc/ti/knav_dma.c 536 */;
	const char *cocci_id/* drivers/soc/ti/knav_dma.c 425 */;
	struct device *cocci_id/* drivers/soc/ti/knav_dma.c 425 */;
	struct of_phandle_args cocci_id/* drivers/soc/ti/knav_dma.c 388 */;
	const char **cocci_id/* drivers/soc/ti/knav_dma.c 386 */;
	const struct file_operations cocci_id/* drivers/soc/ti/knav_dma.c 378 */;
	struct inode *cocci_id/* drivers/soc/ti/knav_dma.c 373 */;
	struct file *cocci_id/* drivers/soc/ti/knav_dma.c 373 */;
	struct knav_dma_device *cocci_id/* drivers/soc/ti/knav_dma.c 360 */;
	struct seq_file *cocci_id/* drivers/soc/ti/knav_dma.c 358 */;
	void *cocci_id/* drivers/soc/ti/knav_dma.c 358 */;
	struct knav_dma_cfg cocci_id/* drivers/soc/ti/knav_dma.c 258 */;
	void cocci_id/* drivers/soc/ti/knav_dma.c 236 */;
	unsigned long cocci_id/* drivers/soc/ti/knav_dma.c 212 */;
	u32 cocci_id/* drivers/soc/ti/knav_dma.c 155 */;
	struct knav_dma_cfg *cocci_id/* drivers/soc/ti/knav_dma.c 153 */;
	struct knav_dma_chan *cocci_id/* drivers/soc/ti/knav_dma.c 152 */;
	int cocci_id/* drivers/soc/ti/knav_dma.c 152 */;
	bool cocci_id/* drivers/soc/ti/knav_dma.c 144 */;
	struct knav_dma_pool_device *cocci_id/* drivers/soc/ti/knav_dma.c 135 */;
	struct knav_dma_chan {
		enum dma_transfer_direction direction;
		struct knav_dma_device *dma;
		atomic_t ref_count;
		struct reg_chan __iomem *reg_chan;
		struct reg_tx_sched __iomem *reg_tx_sched;
		struct reg_rx_flow __iomem *reg_rx_flow;
		unsigned channel,flow;
		struct knav_dma_cfg cfg;
		struct list_head list;
		spinlock_t lock;
	} cocci_id/* drivers/soc/ti/knav_dma.c 115 */;
}
