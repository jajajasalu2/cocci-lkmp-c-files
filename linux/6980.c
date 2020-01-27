cocci_test_suite() {
	unsigned long cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 990 */;
	unsigned long long cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 950 */;
	const char *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 933 */;
	void cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 889 */;
	struct device *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 874 */;
	struct brcm_message *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 874 */;
	struct brcm_sba_command *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 772 */;
	struct scatterlist *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 606 */;
	dma_addr_t cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 510 */;
	unsigned int cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 510 */;
	u32 *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 405 */;
	void **cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 405 */;
	bool cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 337 */;
	u32 cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 321 */;
	u64 cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 319 */;
	int cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 319 */;
	struct flexrm_mbox {
		struct device *dev;
		void __iomem *regs;
		u32 num_rings;
		struct flexrm_ring *rings;
		struct dma_pool *bd_pool;
		struct dma_pool *cmpl_pool;
		struct dentry *root;
		struct mbox_controller controller;
	} cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 291 */;
	struct flexrm_ring {
		int num;
		struct flexrm_mbox *mbox;
		void __iomem *regs;
		bool irq_requested;
		unsigned int irq;
		cpumask_t irq_aff_hint;
		unsigned int msi_timer_val;
		unsigned int msi_count_threshold;
		struct brcm_message *requests[RING_MAX_REQ_COUNT];
		void *bd_base;
		dma_addr_t bd_dma_base;
		u32 bd_write_offset;
		void *cmpl_base;
		dma_addr_t cmpl_dma_base;
		atomic_t msg_send_count;
		atomic_t msg_cmpl_count;
		spinlock_t lock;
	DECLARE_BITMAP(requests_bmap,RING_MAX_REQ_COUNT)
		;
		u32 cmpl_read_offset;
	} cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 266 */;
	struct platform_driver cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1690 */;
	const struct of_device_id cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1684 */[];
	struct resource *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1501 */;
	void __iomem *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1498 */;
	struct platform_device *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1495 */;
	struct flexrm_ring *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1487 */;
	struct msi_msg *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1483 */;
	struct msi_desc *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1483 */;
	const struct of_phandle_args *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1456 */;
	struct mbox_controller *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1455 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1455 */;
	const struct mbox_chan_ops cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1448 */;
	irqreturn_t cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1186 */;
	struct flexrm_mbox *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1166 */;
	struct seq_file *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1164 */;
	void *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1164 */;
	u64 *cocci_id/* drivers/mailbox/bcm-flexrm-mailbox.c 1114 */;
}
