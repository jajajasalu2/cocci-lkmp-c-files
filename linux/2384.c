cocci_test_suite() {
	const struct stedma40_chan_cfg cocci_id/* drivers/dma/ste_dma40.c 96 */;
	struct d40_desc cocci_id/* drivers/dma/ste_dma40.c 951 */;
	struct d40_log_lli cocci_id/* drivers/dma/ste_dma40.c 926 */;
	struct d40_log_lli *cocci_id/* drivers/dma/ste_dma40.c 890 */;
	unsigned int cocci_id/* drivers/dma/ste_dma40.c 871 */;
	struct d40_log_lli_bidir *cocci_id/* drivers/dma/ste_dma40.c 831 */;
	struct d40_desc *cocci_id/* drivers/dma/ste_dma40.c 823 */;
	struct d40_phy_lli *cocci_id/* drivers/dma/ste_dma40.c 808 */;
	int cocci_id/* drivers/dma/ste_dma40.c 72 */[];
	struct d40_phy_lli cocci_id/* drivers/dma/ste_dma40.c 644 */;
	int cocci_id/* drivers/dma/ste_dma40.c 630 */(struct dma_chan *chan,
						      struct dma_slave_config *config,
						      enum dma_transfer_direction direction);
	struct device *cocci_id/* drivers/dma/ste_dma40.c 603 */;
	struct d40_base {
		spinlock_t interrupt_lock;
		spinlock_t execmd_lock;
		struct device *dev;
		void __iomem *virtbase;
		u8 rev:4;
		struct clk *clk;
		phys_addr_t phy_start;
		resource_size_t phy_size;
		int irq;
		int num_memcpy_chans;
		int num_phy_chans;
		int num_log_chans;
		struct device_dma_parameters dma_parms;
		struct dma_device dma_both;
		struct dma_device dma_slave;
		struct dma_device dma_memcpy;
		struct d40_chan *phy_chans;
		struct d40_chan *log_chans;
		struct d40_chan **lookup_log_chans;
		struct d40_chan **lookup_phy_chans;
		struct stedma40_platform_data *plat_data;
		struct regulator *lcpa_regulator;
		struct d40_phy_res *phy_res;
		struct d40_lcla_pool lcla_pool;
		void *lcpa_base;
		dma_addr_t phy_lcpa;
		resource_size_t lcpa_size;
		struct kmem_cache *desc_slab;
		u32 reg_val_backup[BACKUP_REGS_SZ];
		u32 reg_val_backup_v4[BACKUP_REGS_SZ_MAX];
		u32 *reg_val_backup_chan;
		u32 *regs_interrupt;
		u16 gcc_pwr_off_mask;
		struct d40_gen_dmac gen_dmac;
	} cocci_id/* drivers/dma/ste_dma40.c 565 */;
	struct d40_gen_dmac {
		u32 *backup;
		u32 backup_size;
		u32 realtime_en;
		u32 realtime_clear;
		u32 high_prio_en;
		u32 high_prio_clear;
		u32 interrupt_en;
		u32 interrupt_clear;
		struct d40_interrupt_lookup *il;
		u32 il_size;
		struct d40_reg_val *init_reg;
		u32 init_reg_size;
	} cocci_id/* drivers/dma/ste_dma40.c 502 */;
	struct d40_chan {
		spinlock_t lock;
		int log_num;
		int pending_tx;
		bool busy;
		struct d40_phy_res *phy_chan;
		struct dma_chan chan;
		struct tasklet_struct tasklet;
		struct list_head client;
		struct list_head pending_queue;
		struct list_head active;
		struct list_head done;
		struct list_head queue;
		struct list_head prepare_queue;
		struct stedma40_chan_cfg dma_cfg;
		struct dma_slave_config slave_config;
		bool configured;
		struct d40_base *base;
		u32 src_def_cfg;
		u32 dst_def_cfg;
		struct d40_def_lcsp log_def;
		struct d40_log_lli_full *lcpa;
		dma_addr_t runtime_addr;
		enum dma_transfer_direction runtime_direction;
	} cocci_id/* drivers/dma/ste_dma40.c 457 */;
	struct d40_phy_res {
		spinlock_t lock;
		bool reserved;
		int num;
		u32 allocated_src;
		u32 allocated_dst;
		bool use_soft_lli;
	} cocci_id/* drivers/dma/ste_dma40.c 414 */;
	struct d40_lcla_pool {
		void *base;
		dma_addr_t dma_addr;
		void *base_unaligned;
		int pages;
		spinlock_t lock;
		struct d40_desc **alloc_map;
	} cocci_id/* drivers/dma/ste_dma40.c 391 */;
	struct platform_driver cocci_id/* drivers/dma/ste_dma40.c 3712 */;
	const struct of_device_id cocci_id/* drivers/dma/ste_dma40.c 3707 */[];
	struct d40_desc {
		struct d40_phy_lli_bidir lli_phy;
		struct d40_log_lli_bidir lli_log;
		struct d40_lli_pool lli_pool;
		int lli_len;
		int lli_current;
		int lcla_alloc;
		struct dma_async_tx_descriptor txd;
		struct list_head node;
		bool is_in_client_list;
		bool cyclic;
	} cocci_id/* drivers/dma/ste_dma40.c 362 */;
	const __be32 *cocci_id/* drivers/dma/ste_dma40.c 3461 */;
	struct device_node *cocci_id/* drivers/dma/ste_dma40.c 3457 */;
	struct d40_lcla_pool *cocci_id/* drivers/dma/ste_dma40.c 3375 */;
	struct d40_lli_pool {
		void *base;
		int size;
		dma_addr_t dma_addr;
		u8 pre_alloc_lli[3 * sizeof(struct d40_phy_lli)];
	} cocci_id/* drivers/dma/ste_dma40.c 335 */;
	struct d40_reg_val *cocci_id/* drivers/dma/ste_dma40.c 3327 */;
	u32 cocci_id/* drivers/dma/ste_dma40.c 3323 */[2];
	struct d40_base cocci_id/* drivers/dma/ste_dma40.c 3197 */;
	u8 cocci_id/* drivers/dma/ste_dma40.c 3119 */;
	struct resource *cocci_id/* drivers/dma/ste_dma40.c 3110 */;
	struct clk *cocci_id/* drivers/dma/ste_dma40.c 3108 */;
	struct stedma40_platform_data *cocci_id/* drivers/dma/ste_dma40.c 3107 */;
	struct platform_device *cocci_id/* drivers/dma/ste_dma40.c 3105 */;
	struct d40_base *__initcocci_id/* drivers/dma/ste_dma40.c 3105 */;
	int __init cocci_id/* drivers/dma/ste_dma40.c 2847 */;
	struct d40_reg_val cocci_id/* drivers/dma/ste_dma40.c 284 */[];
	struct d40_reg_val {
		unsigned int reg;
		unsigned int val;
	} cocci_id/* drivers/dma/ste_dma40.c 279 */;
	struct dma_device *cocci_id/* drivers/dma/ste_dma40.c 2782 */;
	struct d40_base *cocci_id/* drivers/dma/ste_dma40.c 2782 */;
	void __init cocci_id/* drivers/dma/ste_dma40.c 2782 */;
	enum dma_slave_buswidth cocci_id/* drivers/dma/ste_dma40.c 2662 */;
	struct dma_slave_config *cocci_id/* drivers/dma/ste_dma40.c 2646 */;
	struct dma_tx_state *cocci_id/* drivers/dma/ste_dma40.c 2540 */;
	dma_cookie_t cocci_id/* drivers/dma/ste_dma40.c 2539 */;
	enum dma_status cocci_id/* drivers/dma/ste_dma40.c 2538 */;
	struct scatterlist cocci_id/* drivers/dma/ste_dma40.c 2481 */;
	size_t cocci_id/* drivers/dma/ste_dma40.c 2478 */;
	dma_addr_t cocci_id/* drivers/dma/ste_dma40.c 2476 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/ste_dma40.c 2475 */;
	struct d40_interrupt_lookup cocci_id/* drivers/dma/ste_dma40.c 245 */[];
	struct d40_chan cocci_id/* drivers/dma/ste_dma40.c 2394 */;
	struct dma_chan *cocci_id/* drivers/dma/ste_dma40.c 2389 */;
	struct d40_interrupt_lookup {
		u32 src;
		u32 clr;
		bool is_error;
		int offset;
	} cocci_id/* drivers/dma/ste_dma40.c 237 */;
	struct stedma40_chan_cfg cocci_id/* drivers/dma/ste_dma40.c 2349 */;
	struct of_dma *cocci_id/* drivers/dma/ste_dma40.c 2347 */;
	struct of_phandle_args *cocci_id/* drivers/dma/ste_dma40.c 2346 */;
	struct d40_gen_dmac *cocci_id/* drivers/dma/ste_dma40.c 2302 */;
	bool cocci_id/* drivers/dma/ste_dma40.c 2293 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/ste_dma40.c 2211 */;
	struct stedma40_chan_cfg *cocci_id/* drivers/dma/ste_dma40.c 2174 */;
	struct scatterlist *cocci_id/* drivers/dma/ste_dma40.c 2171 */;
	struct stedma40_half_channel_info *cocci_id/* drivers/dma/ste_dma40.c 2116 */;
	dma_cap_mask_t cocci_id/* drivers/dma/ste_dma40.c 1961 */;
	struct d40_phy_res *cocci_id/* drivers/dma/ste_dma40.c 1799 */;
	bool *cocci_id/* drivers/dma/ste_dma40.c 1747 */;
	unsigned long *cocci_id/* drivers/dma/ste_dma40.c 1660 */;
	struct d40_interrupt_lookup *cocci_id/* drivers/dma/ste_dma40.c 1649 */;
	u32 *cocci_id/* drivers/dma/ste_dma40.c 1648 */;
	long cocci_id/* drivers/dma/ste_dma40.c 1644 */;
	irqreturn_t cocci_id/* drivers/dma/ste_dma40.c 1639 */;
	void *cocci_id/* drivers/dma/ste_dma40.c 1639 */;
	struct dmaengine_desc_callback cocci_id/* drivers/dma/ste_dma40.c 1580 */;
	u32 cocci_id/* drivers/dma/ste_dma40.c 145 */[];
	enum d40_events{D40_DEACTIVATE_EVENTLINE=0, D40_ACTIVATE_EVENTLINE=1, D40_SUSPEND_REQ_EVENTLINE=2, D40_ROUND_EVENTLINE=3,} cocci_id/* drivers/dma/ste_dma40.c 133 */;
	const unsigned int cocci_id/* drivers/dma/ste_dma40.c 1325 */[];
	unsigned long cocci_id/* drivers/dma/ste_dma40.c 1268 */;
	enum d40_command cocci_id/* drivers/dma/ste_dma40.c 1266 */;
	enum d40_command{D40_DMA_STOP=0, D40_DMA_RUN=1, D40_DMA_SUSPEND_REQ=2, D40_DMA_SUSPENDED=3,} cocci_id/* drivers/dma/ste_dma40.c 117 */;
	void __iomem *cocci_id/* drivers/dma/ste_dma40.c 1159 */;
	int cocci_id/* drivers/dma/ste_dma40.c 1157 */;
	u32 cocci_id/* drivers/dma/ste_dma40.c 1156 */;
	enum d40_events cocci_id/* drivers/dma/ste_dma40.c 1156 */;
	struct d40_chan *cocci_id/* drivers/dma/ste_dma40.c 1155 */;
	void cocci_id/* drivers/dma/ste_dma40.c 1155 */;
}
