cocci_test_suite() {
	struct scatterlist cocci_id/* drivers/dma/nbpfaxi.c 987 */;
	dma_addr_t cocci_id/* drivers/dma/nbpfaxi.c 983 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/nbpfaxi.c 982 */;
	struct nbpf_config {
		int num_channels;
		int buffer_size;
	} cocci_id/* drivers/dma/nbpfaxi.c 98 */;
	struct scatterlist *cocci_id/* drivers/dma/nbpfaxi.c 914 */;
	struct dma_slave_config *cocci_id/* drivers/dma/nbpfaxi.c 885 */;
	unsigned long cocci_id/* drivers/dma/nbpfaxi.c 836 */;
	struct nbpf_desc *cocci_id/* drivers/dma/nbpfaxi.c 835 */;
	struct nbpf_link_desc cocci_id/* drivers/dma/nbpfaxi.c 814 */;
	struct nbpf_link_desc *cocci_id/* drivers/dma/nbpfaxi.c 779 */;
	struct device *cocci_id/* drivers/dma/nbpfaxi.c 693 */;
	struct nbpf_link_reg *cocci_id/* drivers/dma/nbpfaxi.c 688 */;
	struct nbpf_desc_page *cocci_id/* drivers/dma/nbpfaxi.c 686 */;
	dma_cookie_t cocci_id/* drivers/dma/nbpfaxi.c 620 */;
	struct dma_tx_state *cocci_id/* drivers/dma/nbpfaxi.c 620 */;
	enum dma_status cocci_id/* drivers/dma/nbpfaxi.c 619 */;
	size_t cocci_id/* drivers/dma/nbpfaxi.c 582 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/nbpfaxi.c 500 */;
	enum dma_slave_buswidth cocci_id/* drivers/dma/nbpfaxi.c 457 */;
	void cocci_id/* drivers/dma/nbpfaxi.c 417 */;
	unsigned int cocci_id/* drivers/dma/nbpfaxi.c 299 */;
	u32 cocci_id/* drivers/dma/nbpfaxi.c 298 */;
	struct nbpf_config cocci_id/* drivers/dma/nbpfaxi.c 245 */[];
	enum nbpf_model{NBPF1B4, NBPF1B8, NBPF1B16, NBPF4B4, NBPF4B8, NBPF4B16, NBPF8B4, NBPF8B8, NBPF8B16,} cocci_id/* drivers/dma/nbpfaxi.c 233 */;
	struct nbpf_device {
		struct dma_device dma_dev;
		void __iomem *base;
		u32 max_burst_mem_read;
		u32 max_burst_mem_write;
		struct clk *clk;
		const struct nbpf_config *config;
		unsigned int eirq;
		struct nbpf_channel chan[];
	} cocci_id/* drivers/dma/nbpfaxi.c 222 */;
	struct nbpf_channel {
		struct dma_chan dma_chan;
		struct tasklet_struct tasklet;
		void __iomem *base;
		struct nbpf_device *nbpf;
		char name[16];
		int irq;
		dma_addr_t slave_src_addr;
		size_t slave_src_width;
		size_t slave_src_burst;
		dma_addr_t slave_dst_addr;
		size_t slave_dst_width;
		size_t slave_dst_burst;
		unsigned int terminal;
		u32 dmarq_cfg;
		unsigned long flags;
		spinlock_t lock;
		struct list_head free_links;
		struct list_head free;
		struct list_head queued;
		struct list_head active;
		struct list_head done;
		struct list_head desc_page;
		struct nbpf_desc *running;
		bool paused;
	} cocci_id/* drivers/dma/nbpfaxi.c 195 */;
	struct nbpf_desc_page {
		struct list_head node;
		struct nbpf_desc desc[NBPF_DESCS_PER_PAGE];
		struct nbpf_link_desc ldesc[NBPF_SEGMENTS_PER_PAGE];
		struct nbpf_link_reg hwdesc[NBPF_SEGMENTS_PER_PAGE];
	} cocci_id/* drivers/dma/nbpfaxi.c 167 */;
	struct nbpf_link_reg cocci_id/* drivers/dma/nbpfaxi.c 164 */;
	struct list_head cocci_id/* drivers/dma/nbpfaxi.c 161 */;
	struct platform_driver cocci_id/* drivers/dma/nbpfaxi.c 1510 */;
	const struct dev_pm_ops cocci_id/* drivers/dma/nbpfaxi.c 1506 */;
	struct nbpf_desc {
		struct dma_async_tx_descriptor async_tx;
		bool user_wait;
		size_t length;
		struct nbpf_channel *chan;
		struct list_head sg;
		struct list_head node;
	} cocci_id/* drivers/dma/nbpfaxi.c 150 */;
	const struct platform_device_id cocci_id/* drivers/dma/nbpfaxi.c 1477 */[];
	struct nbpf_link_desc {
		struct nbpf_link_reg *hwdesc;
		dma_addr_t hwdesc_dma_addr;
		struct nbpf_desc *desc;
		struct list_head node;
	} cocci_id/* drivers/dma/nbpfaxi.c 135 */;
	struct nbpf_channel cocci_id/* drivers/dma/nbpfaxi.c 132 */;
	struct nbpf_device cocci_id/* drivers/dma/nbpfaxi.c 131 */;
	struct nbpf_desc_page cocci_id/* drivers/dma/nbpfaxi.c 1297 */;
	int cocci_id/* drivers/dma/nbpfaxi.c 1294 */[9];
	const struct nbpf_config *cocci_id/* drivers/dma/nbpfaxi.c 1291 */;
	struct resource *cocci_id/* drivers/dma/nbpfaxi.c 1290 */;
	struct device_node *cocci_id/* drivers/dma/nbpfaxi.c 1287 */;
	struct platform_device *cocci_id/* drivers/dma/nbpfaxi.c 1284 */;
	const struct of_device_id cocci_id/* drivers/dma/nbpfaxi.c 1270 */[];
	struct dma_device *cocci_id/* drivers/dma/nbpfaxi.c 1240 */;
	struct nbpf_device *cocci_id/* drivers/dma/nbpfaxi.c 1238 */;
	struct nbpf_desc cocci_id/* drivers/dma/nbpfaxi.c 1203 */;
	struct nbpf_link_reg {
		u32 header;
		u32 src_addr;
		u32 dst_addr;
		u32 transaction_size;
		u32 config;
		u32 interval;
		u32 extension;
		u32 next;
	}__packed cocci_id/* drivers/dma/nbpfaxi.c 120 */;
	bool cocci_id/* drivers/dma/nbpfaxi.c 1176 */;
	irqreturn_t cocci_id/* drivers/dma/nbpfaxi.c 1173 */;
	void *cocci_id/* drivers/dma/nbpfaxi.c 1173 */;
	struct dmaengine_desc_callback cocci_id/* drivers/dma/nbpfaxi.c 1113 */;
	struct of_dma *cocci_id/* drivers/dma/nbpfaxi.c 1082 */;
	struct of_phandle_args *cocci_id/* drivers/dma/nbpfaxi.c 1081 */;
	struct nbpf_channel *cocci_id/* drivers/dma/nbpfaxi.c 1035 */;
	struct dma_chan *cocci_id/* drivers/dma/nbpfaxi.c 1033 */;
	int cocci_id/* drivers/dma/nbpfaxi.c 1033 */;
}
