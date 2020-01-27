cocci_test_suite() {
	u32 *cocci_id/* drivers/mailbox/platform_mhu.c 74 */;
	u32 cocci_id/* drivers/mailbox/platform_mhu.c 66 */;
	struct platform_mhu_link *cocci_id/* drivers/mailbox/platform_mhu.c 65 */;
	bool cocci_id/* drivers/mailbox/platform_mhu.c 63 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/platform_mhu.c 63 */;
	irqreturn_t cocci_id/* drivers/mailbox/platform_mhu.c 46 */;
	void *cocci_id/* drivers/mailbox/platform_mhu.c 46 */;
	struct platform_mhu {
		void __iomem *base;
		struct platform_mhu_link mlink[MHU_CHANS];
		struct mbox_chan chan[MHU_CHANS];
		struct mbox_controller mbox;
	} cocci_id/* drivers/mailbox/platform_mhu.c 39 */;
	struct platform_mhu_link {
		int irq;
		void __iomem *tx_reg;
		void __iomem *rx_reg;
	} cocci_id/* drivers/mailbox/platform_mhu.c 33 */;
	struct platform_driver cocci_id/* drivers/mailbox/platform_mhu.c 174 */;
	const struct of_device_id cocci_id/* drivers/mailbox/platform_mhu.c 168 */[];
	int cocci_id/* drivers/mailbox/platform_mhu.c 121 */[MHU_CHANS];
	struct resource *cocci_id/* drivers/mailbox/platform_mhu.c 120 */;
	struct device *cocci_id/* drivers/mailbox/platform_mhu.c 119 */;
	struct platform_mhu *cocci_id/* drivers/mailbox/platform_mhu.c 118 */;
	struct platform_device *cocci_id/* drivers/mailbox/platform_mhu.c 115 */;
	int cocci_id/* drivers/mailbox/platform_mhu.c 115 */;
	const struct mbox_chan_ops cocci_id/* drivers/mailbox/platform_mhu.c 108 */;
	void cocci_id/* drivers/mailbox/platform_mhu.c 101 */;
}
