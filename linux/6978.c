cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/mailbox/stm32-ipcc.c 81 */;
	unsigned long cocci_id/* drivers/mailbox/stm32-ipcc.c 74 */;
	u32 cocci_id/* drivers/mailbox/stm32-ipcc.c 72 */;
	spinlock_t *cocci_id/* drivers/mailbox/stm32-ipcc.c 71 */;
	void __iomem *cocci_id/* drivers/mailbox/stm32-ipcc.c 71 */;
	void cocci_id/* drivers/mailbox/stm32-ipcc.c 71 */;
	struct stm32_ipcc {
		struct mbox_controller controller;
		void __iomem *reg_base;
		void __iomem *reg_proc;
		struct clk *clk;
		spinlock_t lock;
		int irqs[IPCC_IRQ_NUM];
		u32 proc_id;
		u32 n_chans;
		u32 xcr;
		u32 xmr;
	} cocci_id/* drivers/mailbox/stm32-ipcc.c 48 */;
	enum{IPCC_IRQ_RX, IPCC_IRQ_TX, IPCC_IRQ_NUM,} cocci_id/* drivers/mailbox/stm32-ipcc.c 42 */;
	struct platform_driver cocci_id/* drivers/mailbox/stm32-ipcc.c 381 */;
	const struct of_device_id cocci_id/* drivers/mailbox/stm32-ipcc.c 375 */[];
	void *cocci_id/* drivers/mailbox/stm32-ipcc.c 310 */;
	irq_handler_t cocci_id/* drivers/mailbox/stm32-ipcc.c 213 */[];
	const char *constcocci_id/* drivers/mailbox/stm32-ipcc.c 212 */[];
	unsigned int cocci_id/* drivers/mailbox/stm32-ipcc.c 209 */;
	struct resource *cocci_id/* drivers/mailbox/stm32-ipcc.c 208 */;
	struct stm32_ipcc *cocci_id/* drivers/mailbox/stm32-ipcc.c 207 */;
	struct device_node *cocci_id/* drivers/mailbox/stm32-ipcc.c 206 */;
	struct device *cocci_id/* drivers/mailbox/stm32-ipcc.c 205 */;
	struct platform_device *cocci_id/* drivers/mailbox/stm32-ipcc.c 203 */;
	int cocci_id/* drivers/mailbox/stm32-ipcc.c 203 */;
	const struct mbox_chan_ops cocci_id/* drivers/mailbox/stm32-ipcc.c 197 */;
	struct stm32_ipcc cocci_id/* drivers/mailbox/stm32-ipcc.c 148 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/stm32-ipcc.c 145 */;
}
