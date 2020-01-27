cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/dma/mv_xor_v2.c 908 */;
	const struct of_device_id cocci_id/* drivers/dma/mv_xor_v2.c 901 */[];
	struct mv_xor_v2_descriptor cocci_id/* drivers/dma/mv_xor_v2.c 718 */;
	struct msi_desc *cocci_id/* drivers/dma/mv_xor_v2.c 716 */;
	struct dma_device *cocci_id/* drivers/dma/mv_xor_v2.c 714 */;
	struct resource *cocci_id/* drivers/dma/mv_xor_v2.c 712 */;
	struct platform_device *cocci_id/* drivers/dma/mv_xor_v2.c 709 */;
	pm_message_t cocci_id/* drivers/dma/mv_xor_v2.c 688 */;
	u32 cocci_id/* drivers/dma/mv_xor_v2.c 627 */;
	struct msi_msg *cocci_id/* drivers/dma/mv_xor_v2.c 613 */;
	int *cocci_id/* drivers/dma/mv_xor_v2.c 534 */;
	struct mv_xor_v2_device cocci_id/* drivers/dma/mv_xor_v2.c 518 */;
	struct dma_chan *cocci_id/* drivers/dma/mv_xor_v2.c 515 */;
	struct mv_xor_v2_descriptor *cocci_id/* drivers/dma/mv_xor_v2.c 489 */;
	struct mv_xor_v2_sw_desc *cocci_id/* drivers/dma/mv_xor_v2.c 488 */;
	unsigned long cocci_id/* drivers/dma/mv_xor_v2.c 486 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/mv_xor_v2.c 485 */;
	dma_addr_t *cocci_id/* drivers/dma/mv_xor_v2.c 427 */;
	size_t cocci_id/* drivers/dma/mv_xor_v2.c 375 */;
	dma_addr_t cocci_id/* drivers/dma/mv_xor_v2.c 374 */;
	bool cocci_id/* drivers/dma/mv_xor_v2.c 338 */;
	struct mv_xor_v2_sw_desc cocci_id/* drivers/dma/mv_xor_v2.c 304 */;
	dma_cookie_t cocci_id/* drivers/dma/mv_xor_v2.c 298 */;
	unsigned int cocci_id/* drivers/dma/mv_xor_v2.c 277 */;
	irqreturn_t cocci_id/* drivers/dma/mv_xor_v2.c 274 */;
	void *cocci_id/* drivers/dma/mv_xor_v2.c 274 */;
	int cocci_id/* drivers/dma/mv_xor_v2.c 224 */;
	struct mv_xor_v2_device *cocci_id/* drivers/dma/mv_xor_v2.c 223 */;
	void cocci_id/* drivers/dma/mv_xor_v2.c 223 */;
	struct mv_xor_v2_sw_desc {
		int idx;
		struct dma_async_tx_descriptor async_tx;
		struct mv_xor_v2_descriptor hw_desc;
		struct list_head free_list;
	} cocci_id/* drivers/dma/mv_xor_v2.c 177 */;
	struct mv_xor_v2_device {
		spinlock_t lock;
		void __iomem *dma_base;
		void __iomem *glob_base;
		struct clk *clk;
		struct clk *reg_clk;
		struct tasklet_struct irq_tasklet;
		struct list_head free_sw_desc;
		struct dma_device dmadev;
		struct dma_chan dmachan;
		dma_addr_t hw_desq;
		struct mv_xor_v2_descriptor *hw_desq_virt;
		struct mv_xor_v2_sw_desc *sw_desq;
		int desc_size;
		unsigned int npendings;
		unsigned int hw_queue_idx;
		struct msi_desc *msi_desc;
	} cocci_id/* drivers/dma/mv_xor_v2.c 151 */;
	struct mv_xor_v2_descriptor {
		u16 desc_id;
		u16 flags;
		u32 crc32_result;
		u32 desc_ctrl;
#define DESC_NUM_ACTIVE_D_BUF_SHIFT 22
#define DESC_OP_MODE_SHIFT 28
#define DESC_OP_MODE_NOP 0
#define DESC_OP_MODE_MEMCPY 1
#define DESC_OP_MODE_MEMSET 2
#define DESC_OP_MODE_MEMINIT 3
#define DESC_OP_MODE_MEM_COMPARE 4
#define DESC_OP_MODE_CRC32 5
#define DESC_OP_MODE_XOR 6
#define DESC_OP_MODE_RAID6 7
#define DESC_OP_MODE_RAID6_REC 8
#define DESC_Q_BUFFER_ENABLE BIT(16)
#define DESC_P_BUFFER_ENABLE BIT(17)
#define DESC_IOD BIT(27)
					u32 buff_size;
		u32 fill_pattern_src_addr[4];
		u32 data_buff_addr[MV_XOR_V2_DESC_BUFF_D_ADDR_SIZE];
		u32 reserved[MV_XOR_V2_DESC_RESERVED_SIZE];
	} cocci_id/* drivers/dma/mv_xor_v2.c 107 */;
}
