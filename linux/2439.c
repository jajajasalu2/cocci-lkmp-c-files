cocci_test_suite() {
	struct sirfsoc_dma_chan {
		struct dma_chan chan;
		struct list_head free;
		struct list_head prepared;
		struct list_head queued;
		struct list_head active;
		struct list_head completed;
		unsigned long happened_cyclic;
		unsigned long completed_cyclic;
		spinlock_t lock;
		int mode;
	} cocci_id/* drivers/dma/sirf-dma.c 97 */;
	ulong cocci_id/* drivers/dma/sirf-dma.c 848 */;
	struct resource cocci_id/* drivers/dma/sirf-dma.c 847 */;
	struct sirfsoc_dmadata *cocci_id/* drivers/dma/sirf-dma.c 846 */;
	struct dma_device *cocci_id/* drivers/dma/sirf-dma.c 843 */;
	struct device_node *cocci_id/* drivers/dma/sirf-dma.c 841 */;
	struct platform_device *cocci_id/* drivers/dma/sirf-dma.c 839 */;
	unsigned int cocci_id/* drivers/dma/sirf-dma.c 831 */;
	struct of_dma *cocci_id/* drivers/dma/sirf-dma.c 828 */;
	struct of_phandle_args *cocci_id/* drivers/dma/sirf-dma.c 827 */;
	struct sirfsoc_dma_desc {
		struct dma_async_tx_descriptor desc;
		struct list_head node;
		int xlen;
		int ylen;
		int width;
		int dir;
		bool cyclic;
		bool chain;
		u32 addr;
		u64 chain_table[SIRFSOC_DMA_TABLE_NUM];
	} cocci_id/* drivers/dma/sirf-dma.c 81 */;
	bool cocci_id/* drivers/dma/sirf-dma.c 808 */;
	void *cocci_id/* drivers/dma/sirf-dma.c 808 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/sirf-dma.c 759 */;
	size_t cocci_id/* drivers/dma/sirf-dma.c 758 */;
	dma_addr_t cocci_id/* drivers/dma/sirf-dma.c 757 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/sirf-dma.c 756 */;
	struct dma_interleaved_template *cocci_id/* drivers/dma/sirf-dma.c 689 */;
	struct dma_tx_state *cocci_id/* drivers/dma/sirf-dma.c 641 */;
	enum dma_status cocci_id/* drivers/dma/sirf-dma.c 639 */;
	unsigned long cocci_id/* drivers/dma/sirf-dma.c 561 */;
	struct sirfsoc_dma_desc *cocci_id/* drivers/dma/sirf-dma.c 560 */;
	int cocci_id/* drivers/dma/sirf-dma.c 556 */;
	struct dma_slave_config *cocci_id/* drivers/dma/sirf-dma.c 426 */;
	dma_cookie_t cocci_id/* drivers/dma/sirf-dma.c 340 */;
	u32 cocci_id/* drivers/dma/sirf-dma.c 269 */;
	irqreturn_t cocci_id/* drivers/dma/sirf-dma.c 264 */;
	struct sirfsoc_dma_desc cocci_id/* drivers/dma/sirf-dma.c 248 */;
	void __iomem *cocci_id/* drivers/dma/sirf-dma.c 241 */;
	void cocci_id/* drivers/dma/sirf-dma.c 236 */;
	struct sirfsoc_dma cocci_id/* drivers/dma/sirf-dma.c 159 */;
	struct sirfsoc_dma_chan *cocci_id/* drivers/dma/sirf-dma.c 158 */;
	struct sirfsoc_dma *cocci_id/* drivers/dma/sirf-dma.c 156 */;
	struct dma_chan *cocci_id/* drivers/dma/sirf-dma.c 156 */;
	struct sirfsoc_dma_chan cocci_id/* drivers/dma/sirf-dma.c 152 */;
	int cocci_id/* drivers/dma/sirf-dma.c 146 */(struct device *dev);
	enum sirfsoc_dma_chain_flag{SIRFSOC_DMA_CHAIN_NORMAL=0x01, SIRFSOC_DMA_CHAIN_PAUSE=0x02, SIRFSOC_DMA_CHAIN_LOOP=0x03, SIRFSOC_DMA_CHAIN_END=0x04,} cocci_id/* drivers/dma/sirf-dma.c 137 */;
	struct sirfsoc_dmadata {
		void (*exec)(struct sirfsoc_dma_desc *sdesc, int cid,
			     int burst_mode, void __iomem *base);
		int type;
	} cocci_id/* drivers/dma/sirf-dma.c 131 */;
	struct sirfsoc_dma {
		struct dma_device dma;
		struct tasklet_struct tasklet;
		struct sirfsoc_dma_chan channels[SIRFSOC_DMA_CHANNELS];
		void __iomem *base;
		int irq;
		struct clk *clk;
		int type;
		void (*exec_desc)(struct sirfsoc_dma_desc *sdesc, int cid,
				  int burst_mode, void __iomem *base);
		struct sirfsoc_dma_regs regs_save;
	} cocci_id/* drivers/dma/sirf-dma.c 118 */;
	void __exit cocci_id/* drivers/dma/sirf-dma.c 1159 */;
	struct platform_driver cocci_id/* drivers/dma/sirf-dma.c 1144 */;
	const struct of_device_id cocci_id/* drivers/dma/sirf-dma.c 1136 */[];
	struct sirfsoc_dma_regs {
		u32 ctrl[SIRFSOC_DMA_CHANNELS];
		u32 interrupt_en;
	} cocci_id/* drivers/dma/sirf-dma.c 113 */;
	struct sirfsoc_dmadata cocci_id/* drivers/dma/sirf-dma.c 1121 */;
	struct sirfsoc_dma_regs *cocci_id/* drivers/dma/sirf-dma.c 1059 */;
	struct device *cocci_id/* drivers/dma/sirf-dma.c 1056 */;
	int __maybe_unused cocci_id/* drivers/dma/sirf-dma.c 1056 */;
}
