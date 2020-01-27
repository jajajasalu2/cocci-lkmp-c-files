cocci_test_suite() {
	struct pci_driver cocci_id/* drivers/dma/pch_dma.c 996 */;
	const struct pci_device_id cocci_id/* drivers/dma/pch_dma.c 980 */[];
	void cocci_id/* drivers/dma/pch_dma.c 940 */;
	unsigned long cocci_id/* drivers/dma/pch_dma.c 902 */;
	struct pch_dma_chan {
		struct dma_chan chan;
		void __iomem *membase;
		enum dma_transfer_direction dir;
		struct tasklet_struct tasklet;
		unsigned long err_status;
		spinlock_t lock;
		struct list_head active_list;
		struct list_head queue;
		struct list_head free_list;
		unsigned int descs_allocated;
	} cocci_id/* drivers/dma/pch_dma.c 90 */;
	struct pch_dma_chan *cocci_id/* drivers/dma/pch_dma.c 888 */;
	struct pch_dma_desc cocci_id/* drivers/dma/pch_dma.c 876 */;
	struct pch_dma_desc {
		struct pch_dma_desc_regs regs;
		struct dma_async_tx_descriptor txd;
		struct list_head desc_node;
		struct list_head tx_list;
	} cocci_id/* drivers/dma/pch_dma.c 83 */;
	struct pch_dma_regs *cocci_id/* drivers/dma/pch_dma.c 824 */;
	struct pch_dma *cocci_id/* drivers/dma/pch_dma.c 823 */;
	const struct pci_device_id *cocci_id/* drivers/dma/pch_dma.c 821 */;
	struct pci_dev *cocci_id/* drivers/dma/pch_dma.c 820 */;
	int cocci_id/* drivers/dma/pch_dma.c 820 */;
	pm_message_t cocci_id/* drivers/dma/pch_dma.c 785 */;
	struct pch_dma_regs {
		u32 dma_ctl0;
		u32 dma_ctl1;
		u32 dma_ctl2;
		u32 dma_ctl3;
		u32 dma_sts0;
		u32 dma_sts1;
		u32 dma_sts2;
		u32 reserved3;
		struct pch_dma_desc_regs desc[MAX_CHAN_NR];
	} cocci_id/* drivers/dma/pch_dma.c 71 */;
	u32 cocci_id/* drivers/dma/pch_dma.c 696 */;
	irqreturn_t cocci_id/* drivers/dma/pch_dma.c 692 */;
	void *cocci_id/* drivers/dma/pch_dma.c 692 */;
	struct pch_dma_desc_regs {
		u32 dev_addr;
		u32 mem_addr;
		u32 size;
		u32 next;
	} cocci_id/* drivers/dma/pch_dma.c 64 */;
	unsigned int cocci_id/* drivers/dma/pch_dma.c 59 */;
	dma_addr_t cocci_id/* drivers/dma/pch_dma.c 577 */;
	struct pch_dma_slave *cocci_id/* drivers/dma/pch_dma.c 572 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/pch_dma.c 568 */;
	struct scatterlist *cocci_id/* drivers/dma/pch_dma.c 567 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/pch_dma.c 566 */;
	struct dma_tx_state *cocci_id/* drivers/dma/pch_dma.c 550 */;
	dma_cookie_t cocci_id/* drivers/dma/pch_dma.c 549 */;
	enum dma_status cocci_id/* drivers/dma/pch_dma.c 549 */;
	struct pch_dma_desc *cocci_id/* drivers/dma/pch_dma.c 492 */;
	gfp_t cocci_id/* drivers/dma/pch_dma.c 426 */;
	struct dmaengine_desc_callback cocci_id/* drivers/dma/pch_dma.c 352 */;
	bool cocci_id/* drivers/dma/pch_dma.c 303 */;
	struct dma_chan *cocci_id/* drivers/dma/pch_dma.c 153 */;
	struct device *cocci_id/* drivers/dma/pch_dma.c 153 */;
	struct pch_dma cocci_id/* drivers/dma/pch_dma.c 150 */;
	struct dma_device *cocci_id/* drivers/dma/pch_dma.c 148 */;
	struct pch_dma_chan cocci_id/* drivers/dma/pch_dma.c 145 */;
	struct pch_dma {
		struct dma_device dma;
		void __iomem *membase;
		struct dma_pool *pool;
		struct pch_dma_regs regs;
		struct pch_dma_desc_regs ch_regs[MAX_CHAN_NR];
		struct pch_dma_chan channels[MAX_CHAN_NR];
	} cocci_id/* drivers/dma/pch_dma.c 115 */;
}
