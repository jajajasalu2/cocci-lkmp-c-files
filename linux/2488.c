cocci_test_suite() {
	void __exit cocci_id/* drivers/dma/coh901318.c 2806 */;
	int __init cocci_id/* drivers/dma/coh901318.c 2800 */;
	struct platform_driver cocci_id/* drivers/dma/coh901318.c 2792 */;
	const struct of_device_id cocci_id/* drivers/dma/coh901318.c 2787 */[];
	const struct coh_dma_channel cocci_id/* drivers/dma/coh901318.c 269 */[U300_DMA_CHANNELS];
	struct coh901318_lli cocci_id/* drivers/dma/coh901318.c 2681 */;
	struct coh901318_chan cocci_id/* drivers/dma/coh901318.c 2652 */;
	struct coh901318_base cocci_id/* drivers/dma/coh901318.c 2650 */;
	struct resource *cocci_id/* drivers/dma/coh901318.c 2636 */;
	struct platform_device *cocci_id/* drivers/dma/coh901318.c 2631 */;
	struct coh901318_base *cocci_id/* drivers/dma/coh901318.c 2594 */;
	const int *cocci_id/* drivers/dma/coh901318.c 2593 */;
	struct dma_device *cocci_id/* drivers/dma/coh901318.c 2593 */;
	void cocci_id/* drivers/dma/coh901318.c 2593 */;
	u32 cocci_id/* drivers/dma/coh901318.c 2508 */;
	enum dma_slave_buswidth cocci_id/* drivers/dma/coh901318.c 2507 */;
	dma_addr_t cocci_id/* drivers/dma/coh901318.c 2506 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/coh901318.c 2503 */;
	struct dma_slave_config *cocci_id/* drivers/dma/coh901318.c 2502 */;
	const struct burst_table cocci_id/* drivers/dma/coh901318.c 2450 */[];
	struct burst_table {
		int burst_8bit;
		int burst_16bit;
		int burst_32bit;
		u32 reg;
	} cocci_id/* drivers/dma/coh901318.c 2443 */;
	struct dma_tx_state *cocci_id/* drivers/dma/coh901318.c 2403 */;
	dma_cookie_t cocci_id/* drivers/dma/coh901318.c 2402 */;
	enum dma_status cocci_id/* drivers/dma/coh901318.c 2401 */;
	unsigned int cocci_id/* drivers/dma/coh901318.c 2273 */;
	struct scatterlist *cocci_id/* drivers/dma/coh901318.c 2272 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/coh901318.c 2217 */;
	int cocci_id/* drivers/dma/coh901318.c 221 */[];
	unsigned long cocci_id/* drivers/dma/coh901318.c 2155 */;
	struct coh901318_chan *cocci_id/* drivers/dma/coh901318.c 2154 */;
	struct dma_chan *cocci_id/* drivers/dma/coh901318.c 2152 */;
	int cocci_id/* drivers/dma/coh901318.c 2152 */;
	struct powersave {
		spinlock_t lock;
		u64 started_channels;
	} cocci_id/* drivers/dma/coh901318.c 207 */;
	irqreturn_t cocci_id/* drivers/dma/coh901318.c 1985 */;
	struct coh_dma_channel {
		const char name[32];
		const int number;
		const int desc_nbr_max;
		const int priority_high;
		const struct coh901318_params param;
	} cocci_id/* drivers/dma/coh901318.c 194 */;
	struct dmaengine_desc_callback cocci_id/* drivers/dma/coh901318.c 1876 */;
	void __iomem *cocci_id/* drivers/dma/coh901318.c 1805 */;
	const struct coh901318_params *cocci_id/* drivers/dma/coh901318.c 1803 */;
	struct coh901318_params *cocci_id/* drivers/dma/coh901318.c 1801 */;
	dma_cap_mask_t cocci_id/* drivers/dma/coh901318.c 1791 */;
	struct coh901318_params {
		u32 config;
		u32 ctrl_lli_last;
		u32 ctrl_lli;
		u32 ctrl_lli_chained;
	} cocci_id/* drivers/dma/coh901318.c 179 */;
	struct coh901318_filter_args cocci_id/* drivers/dma/coh901318.c 1787 */;
	struct of_dma *cocci_id/* drivers/dma/coh901318.c 1785 */;
	struct of_phandle_args *cocci_id/* drivers/dma/coh901318.c 1784 */;
	struct coh901318_filter_args *cocci_id/* drivers/dma/coh901318.c 1775 */;
	bool cocci_id/* drivers/dma/coh901318.c 1773 */;
	void *cocci_id/* drivers/dma/coh901318.c 1773 */;
	struct coh901318_filter_args {
		struct coh901318_base *base;
		unsigned int ch_nr;
	} cocci_id/* drivers/dma/coh901318.c 1768 */;
	struct list_head *cocci_id/* drivers/dma/coh901318.c 1605 */;
	struct coh901318_lli *cocci_id/* drivers/dma/coh901318.c 1583 */;
	struct coh901318_desc *cocci_id/* drivers/dma/coh901318.c 1545 */;
	struct coh901318_desc cocci_id/* drivers/dma/coh901318.c 1522 */;
	struct powersave *cocci_id/* drivers/dma/coh901318.c 1434 */;
	const struct coh_dma_channel *cocci_id/* drivers/dma/coh901318.c 1414 */;
	int cocci_id/* drivers/dma/coh901318.c 1404 */(struct dma_chan *chan,
						       struct dma_slave_config *config,
						       enum dma_transfer_direction direction);
	const struct file_operations cocci_id/* drivers/dma/coh901318.c 1369 */;
	char *cocci_id/* drivers/dma/coh901318.c 1344 */;
	u64 cocci_id/* drivers/dma/coh901318.c 1342 */;
	loff_t *cocci_id/* drivers/dma/coh901318.c 1340 */;
	size_t cocci_id/* drivers/dma/coh901318.c 1340 */;
	struct file *cocci_id/* drivers/dma/coh901318.c 1339 */;
	char __user *cocci_id/* drivers/dma/coh901318.c 1339 */;
	ssize_t cocci_id/* drivers/dma/coh901318.c 1339 */;
	struct dentry *cocci_id/* drivers/dma/coh901318.c 1337 */;
	struct coh901318_chan {
		spinlock_t lock;
		int allocated;
		int id;
		int stopped;
		struct work_struct free_work;
		struct dma_chan chan;
		struct tasklet_struct tasklet;
		struct list_head active;
		struct list_head queue;
		struct list_head free;
		unsigned long nbr_active_done;
		unsigned long busy;
		struct dma_slave_config config;
		u32 addr;
		u32 ctrl;
		struct coh901318_base *base;
	} cocci_id/* drivers/dma/coh901318.c 1291 */;
	struct coh901318_base {
		struct device *dev;
		void __iomem *virtbase;
		unsigned int irq;
		struct coh901318_pool pool;
		struct powersave pm;
		struct dma_device dma_slave;
		struct dma_device dma_memcpy;
		struct coh901318_chan *chans;
	} cocci_id/* drivers/dma/coh901318.c 1280 */;
	struct coh901318_desc {
		struct dma_async_tx_descriptor desc;
		struct list_head node;
		struct scatterlist *sg;
		unsigned int sg_len;
		struct coh901318_lli *lli;
		enum dma_transfer_direction dir;
		unsigned long flags;
		u32 head_config;
		u32 head_ctrl;
	} cocci_id/* drivers/dma/coh901318.c 1268 */;
}
