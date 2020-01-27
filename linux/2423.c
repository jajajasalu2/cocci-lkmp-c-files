cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/dma/xgene-dma.c 987 */;
	void *cocci_id/* drivers/dma/xgene-dma.c 987 */;
	struct dma_tx_state *cocci_id/* drivers/dma/xgene-dma.c 971 */;
	dma_cookie_t cocci_id/* drivers/dma/xgene-dma.c 970 */;
	enum dma_status cocci_id/* drivers/dma/xgene-dma.c 969 */;
	u8 cocci_id/* drivers/dma/xgene-dma.c 891 */[XGENE_DMA_MAX_XOR_SRC];
	dma_addr_t cocci_id/* drivers/dma/xgene-dma.c 890 */[XGENE_DMA_MAX_XOR_SRC];
	const u8 *cocci_id/* drivers/dma/xgene-dma.c 885 */;
	dma_addr_t *cocci_id/* drivers/dma/xgene-dma.c 884 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/xgene-dma.c 883 */;
	struct list_head *cocci_id/* drivers/dma/xgene-dma.c 801 */;
	struct dma_chan *cocci_id/* drivers/dma/xgene-dma.c 772 */;
	int cocci_id/* drivers/dma/xgene-dma.c 772 */;
	u8 cocci_id/* drivers/dma/xgene-dma.c 690 */;
	struct list_head cocci_id/* drivers/dma/xgene-dma.c 689 */;
	struct xgene_dma_desc_sw *cocci_id/* drivers/dma/xgene-dma.c 640 */;
	struct xgene_dma_chan *cocci_id/* drivers/dma/xgene-dma.c 638 */;
	void cocci_id/* drivers/dma/xgene-dma.c 638 */;
	struct xgene_dma_desc_hw *cocci_id/* drivers/dma/xgene-dma.c 595 */;
	struct xgene_dma_ring *cocci_id/* drivers/dma/xgene-dma.c 594 */;
	u32 *cocci_id/* drivers/dma/xgene-dma.c 56 */;
	dma_addr_t cocci_id/* drivers/dma/xgene-dma.c 490 */;
	size_t *cocci_id/* drivers/dma/xgene-dma.c 414 */;
	u16 cocci_id/* drivers/dma/xgene-dma.c 401 */;
	__le64 *cocci_id/* drivers/dma/xgene-dma.c 382 */;
	u8 cocci_id/* drivers/dma/xgene-dma.c 358 */[];
	u64 cocci_id/* drivers/dma/xgene-dma.c 349 */;
	size_t cocci_id/* drivers/dma/xgene-dma.c 349 */;
	u32 cocci_id/* drivers/dma/xgene-dma.c 343 */;
	bool cocci_id/* drivers/dma/xgene-dma.c 341 */;
	struct xgene_dma *cocci_id/* drivers/dma/xgene-dma.c 341 */;
	const char *constcocci_id/* drivers/dma/xgene-dma.c 312 */[];
	struct xgene_dma {
		struct device *dev;
		struct clk *clk;
		int err_irq;
		int ring_num;
		void __iomem *csr_dma;
		void __iomem *csr_ring;
		void __iomem *csr_ring_cmd;
		void __iomem *csr_efuse;
		struct dma_device dma_dev[XGENE_DMA_MAX_CHANNEL];
		struct xgene_dma_chan chan[XGENE_DMA_MAX_CHANNEL];
	} cocci_id/* drivers/dma/xgene-dma.c 299 */;
	struct xgene_dma_chan {
		struct dma_chan dma_chan;
		struct xgene_dma *pdma;
		struct device *dev;
		int id;
		int rx_irq;
		char name[10];
		spinlock_t lock;
		int pending;
		int max_outstanding;
		struct list_head ld_pending;
		struct list_head ld_running;
		struct list_head ld_completed;
		struct dma_pool *desc_pool;
		struct tasklet_struct tasklet;
		struct xgene_dma_ring tx_ring;
		struct xgene_dma_ring rx_ring;
	} cocci_id/* drivers/dma/xgene-dma.c 269 */;
	struct xgene_dma_desc_sw {
		struct xgene_dma_desc_hw desc1;
		struct xgene_dma_desc_hw desc2;
		u32 flags;
		struct list_head node;
		struct list_head tx_list;
		struct dma_async_tx_descriptor tx;
	} cocci_id/* drivers/dma/xgene-dma.c 235 */;
	struct xgene_dma_ring {
		struct xgene_dma *pdma;
		u8 buf_num;
		u16 id;
		u16 num;
		u16 head;
		u16 owner;
		u16 slots;
		u16 dst_ring_num;
		u32 size;
		void __iomem *cmd;
		void __iomem *cmd_base;
		dma_addr_t desc_paddr;
		u32 state[XGENE_DMA_RING_NUM_CONFIG];
		enum xgene_dma_ring_cfgsize cfgsize;
		union {
			void *desc_vaddr;
			struct xgene_dma_desc_hw *desc_hw;
		};
	} cocci_id/* drivers/dma/xgene-dma.c 214 */;
	enum xgene_dma_ring_cfgsize{XGENE_DMA_RING_CFG_SIZE_512B, XGENE_DMA_RING_CFG_SIZE_2KB, XGENE_DMA_RING_CFG_SIZE_16KB, XGENE_DMA_RING_CFG_SIZE_64KB, XGENE_DMA_RING_CFG_SIZE_512KB, XGENE_DMA_RING_CFG_SIZE_INVALID,} cocci_id/* drivers/dma/xgene-dma.c 205 */;
	struct xgene_dma_desc_hw {
		__le64 m0;
		__le64 m1;
		__le64 m2;
		__le64 m3;
	} cocci_id/* drivers/dma/xgene-dma.c 198 */;
	struct xgene_dma_chan cocci_id/* drivers/dma/xgene-dma.c 191 */;
	struct xgene_dma_desc_sw cocci_id/* drivers/dma/xgene-dma.c 189 */;
	struct platform_driver cocci_id/* drivers/dma/xgene-dma.c 1816 */;
	const struct of_device_id cocci_id/* drivers/dma/xgene-dma.c 1810 */[];
	const struct acpi_device_id cocci_id/* drivers/dma/xgene-dma.c 1803 */[];
	struct resource *cocci_id/* drivers/dma/xgene-dma.c 1618 */;
	struct platform_device *cocci_id/* drivers/dma/xgene-dma.c 1615 */;
	unsigned long cocci_id/* drivers/dma/xgene-dma.c 1541 */;
	struct dma_device *cocci_id/* drivers/dma/xgene-dma.c 1531 */;
	enum xgene_dma_ring_cfgsize cocci_id/* drivers/dma/xgene-dma.c 1183 */;
}
