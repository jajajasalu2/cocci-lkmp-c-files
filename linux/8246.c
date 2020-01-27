cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 987 */;
	struct cpdma_chan_stats *cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 969 */;
	struct cpdma_ctlr {
		enum cpdma_state state;
		struct cpdma_params params;
		struct device *dev;
		struct cpdma_desc_pool *pool;
		spinlock_t lock;
		struct cpdma_chan *channels[2 * CPDMA_MAX_CHANNELS];
		int chan_num;
		int num_rx_desc;
		int num_tx_desc;
	} cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 96 */;
	enum cpdma_state{CPDMA_STATE_IDLE, CPDMA_STATE_ACTIVE, CPDMA_STATE_TEARDOWN,} cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 90 */;
	cpdma_handler_fn cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 877 */;
	unsigned int cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 812 */;
	struct cpdma_desc_pool {
		phys_addr_t phys;
		dma_addr_t hw_addr;
		void __iomem *iomap;
		void *cpumap;
		int desc_size,mem_size;
		int num_desc;
		struct device *dev;
		struct gen_pool *gen_pool;
	} cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 79 */;
	struct cpdma_desc {
		u32 hw_next;
		u32 hw_buffer;
		u32 hw_len;
		u32 hw_mode;
		void *sw_token;
		u32 sw_buffer;
		u32 sw_len;
	} cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 67 */;
	struct cpdma_params *cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 510 */;
	u64 cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 451 */;
	u32 *cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 407 */;
	int *cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 407 */;
	struct cpdma_control_info *cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 333 */;
	long cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 284 */;
	void __iomem __force *cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 256 */;
	struct cpdma_desc cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 224 */;
	struct cpdma_control_info cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 146 */[];
	bool cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 1374 */;
	struct submit_info {
		struct cpdma_chan *chan;
		int directed;
		void *token;
		void *data_virt;
		dma_addr_t data_dma;
		int len;
	} cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 137 */;
	unsigned cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 1318 */;
	struct cpdma_control_info {
		u32 reg;
		u32 shift,mask;
		int access;
#define ACCESS_RO BIT(0)
#define ACCESS_WO BIT(1)
#define ACCESS_RW (ACCESS_RO | ACCESS_WO)
				} cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 128 */;
	unsigned long cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 1227 */;
	void *cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 1216 */;
	uintptr_t cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 1201 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 1199 */;
	struct cpdma_desc_pool *cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 1198 */;
	struct cpdma_ctlr *cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 1197 */;
	int cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 1195 */;
	struct cpdma_desc __iomem *cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 1194 */;
	struct cpdma_chan *cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 1193 */;
	void cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 1193 */;
	struct submit_info cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 1082 */;
	struct cpdma_chan {
		struct cpdma_desc __iomem *head,*tail;
		void __iomem *hdp,*cp,*rxfree;
		enum cpdma_state state;
		struct cpdma_ctlr *ctlr;
		int chan_num;
		spinlock_t lock;
		int count;
		u32 desc_num;
		u32 mask;
		cpdma_handler_fn handler;
		enum dma_data_direction dir;
		struct cpdma_chan_stats stats;
		int int_set,int_clear,td;
		int weight;
		u32 rate_factor;
		u32 rate;
	} cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 108 */;
	struct submit_info *cocci_id/* drivers/net/ethernet/ti/davinci_cpdma.c 1016 */;
}
