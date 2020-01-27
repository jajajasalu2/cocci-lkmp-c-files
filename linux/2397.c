cocci_test_suite() {
	const struct cppi_glue_infos cocci_id/* drivers/dma/ti/cppi41.c 999 */;
	struct of_dma_filter_info *cocci_id/* drivers/dma/ti/cppi41.c 987 */;
	struct of_dma *cocci_id/* drivers/dma/ti/cppi41.c 984 */;
	struct of_phandle_args *cocci_id/* drivers/dma/ti/cppi41.c 983 */;
	struct of_dma_filter_info cocci_id/* drivers/dma/ti/cppi41.c 979 */;
	u32 *cocci_id/* drivers/dma/ti/cppi41.c 951 */;
	const struct chan_queues *cocci_id/* drivers/dma/ti/cppi41.c 950 */;
	struct cppi41_dd *cocci_id/* drivers/dma/ti/cppi41.c 949 */;
	struct cppi41_channel *cocci_id/* drivers/dma/ti/cppi41.c 948 */;
	bool cocci_id/* drivers/dma/ti/cppi41.c 946 */;
	struct dma_chan *cocci_id/* drivers/dma/ti/cppi41.c 946 */;
	void *cocci_id/* drivers/dma/ti/cppi41.c 946 */;
	struct platform_driver cocci_id/* drivers/dma/ti/cppi41.c 936 */;
	struct cppi41_channel {
		struct dma_chan chan;
		struct dma_async_tx_descriptor txd;
		struct cppi41_dd *cdd;
		struct cppi41_desc *desc;
		dma_addr_t desc_phys;
		void __iomem *gcr_reg;
		int is_tx;
		u32 residue;
		unsigned int q_num;
		unsigned int q_comp_num;
		unsigned int port_num;
		unsigned td_retry;
		unsigned td_queued:1;
		unsigned td_seen:1;
		unsigned td_desc_seen:1;
		struct list_head node;
	} cocci_id/* drivers/dma/ti/cppi41.c 85 */;
	struct cppi41_desc cocci_id/* drivers/dma/ti/cppi41.c 806 */;
	u32 cocci_id/* drivers/dma/ti/cppi41.c 780 */;
	struct device *cocci_id/* drivers/dma/ti/cppi41.c 776 */;
	int cocci_id/* drivers/dma/ti/cppi41.c 776 */;
	struct dmaengine_result cocci_id/* drivers/dma/ti/cppi41.c 643 */;
	struct cppi41_desc *cocci_id/* drivers/dma/ti/cppi41.c 636 */;
	void cocci_id/* drivers/dma/ti/cppi41.c 636 */;
	unsigned int cocci_id/* drivers/dma/ti/cppi41.c 593 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/ti/cppi41.c 586 */;
	struct scatterlist *cocci_id/* drivers/dma/ti/cppi41.c 585 */;
	unsigned cocci_id/* drivers/dma/ti/cppi41.c 585 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/ti/cppi41.c 584 */;
	unsigned long cocci_id/* drivers/dma/ti/cppi41.c 494 */;
	dma_cookie_t cocci_id/* drivers/dma/ti/cppi41.c 419 */;
	struct dma_tx_state *cocci_id/* drivers/dma/ti/cppi41.c 419 */;
	enum dma_status cocci_id/* drivers/dma/ti/cppi41.c 418 */;
	u16 cocci_id/* drivers/dma/ti/cppi41.c 305 */;
	irqreturn_t cocci_id/* drivers/dma/ti/cppi41.c 302 */;
	void *__iomem*cocci_id/* drivers/dma/ti/cppi41.c 283 */;
	struct cppi41_channel cocci_id/* drivers/dma/ti/cppi41.c 251 */;
	struct cppi_glue_infos {
		const struct chan_queues *queues_rx;
		const struct chan_queues *queues_tx;
		struct chan_queues td_queue;
		u16 first_completion_queue;
		u16 qmgr_num_pend;
	} cocci_id/* drivers/dma/ti/cppi41.c 241 */;
	const struct chan_queues cocci_id/* drivers/dma/ti/cppi41.c 191 */[];
	struct chan_queues cocci_id/* drivers/dma/ti/cppi41.c 155 */[];
	struct cppi41_dd {
		struct dma_device ddev;
		void *qmgr_scratch;
		dma_addr_t scratch_phys;
		struct cppi41_desc *cd;
		dma_addr_t descs_phys;
		u32 first_td_desc;
		struct cppi41_channel *chan_busy[ALLOC_DECS_NUM];
		void __iomem *ctrl_mem;
		void __iomem *sched_mem;
		void __iomem *qmgr_mem;
		unsigned int irq;
		const struct chan_queues *queues_rx;
		const struct chan_queues *queues_tx;
		struct chan_queues td_queue;
		u16 first_completion_queue;
		u16 qmgr_num_pend;
		u32 n_chans;
		u8 platform;
		struct list_head pending;
		spinlock_t lock;
		unsigned int dma_tdfdq;
		bool is_suspended;
	} cocci_id/* drivers/dma/ti/cppi41.c 123 */;
	int __maybe_unused cocci_id/* drivers/dma/ti/cppi41.c 1189 */;
	struct chan_queues {
		u16 submit;
		u16 complete;
	} cocci_id/* drivers/dma/ti/cppi41.c 118 */;
	struct cppi41_desc {
		u32 pd0;
		u32 pd1;
		u32 pd2;
		u32 pd3;
		u32 pd4;
		u32 pd5;
		u32 pd6;
		u32 pd7;
	}__aligned(32) cocci_id/* drivers/dma/ti/cppi41.c 107 */;
	struct resource *cocci_id/* drivers/dma/ti/cppi41.c 1042 */;
	const struct cppi_glue_infos *cocci_id/* drivers/dma/ti/cppi41.c 1041 */;
	struct platform_device *cocci_id/* drivers/dma/ti/cppi41.c 1037 */;
	const struct of_device_id *cocci_id/* drivers/dma/ti/cppi41.c 1024 */;
	const struct of_device_id cocci_id/* drivers/dma/ti/cppi41.c 1015 */[];
}
