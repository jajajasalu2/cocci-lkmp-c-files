cocci_test_suite() {
	void cocci_id/* drivers/mailbox/arm_mhu.c 95 */;
	u32 *cocci_id/* drivers/mailbox/arm_mhu.c 68 */;
	u32 cocci_id/* drivers/mailbox/arm_mhu.c 60 */;
	struct mhu_link *cocci_id/* drivers/mailbox/arm_mhu.c 59 */;
	bool cocci_id/* drivers/mailbox/arm_mhu.c 57 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/arm_mhu.c 57 */;
	irqreturn_t cocci_id/* drivers/mailbox/arm_mhu.c 40 */;
	void *cocci_id/* drivers/mailbox/arm_mhu.c 40 */;
	struct arm_mhu {
		void __iomem *base;
		struct mhu_link mlink[MHU_CHANS];
		struct mbox_chan chan[MHU_CHANS];
		struct mbox_controller mbox;
	} cocci_id/* drivers/mailbox/arm_mhu.c 33 */;
	struct mhu_link {
		unsigned irq;
		void __iomem *tx_reg;
		void __iomem *rx_reg;
	} cocci_id/* drivers/mailbox/arm_mhu.c 27 */;
	struct amba_driver cocci_id/* drivers/mailbox/arm_mhu.c 163 */;
	struct amba_id cocci_id/* drivers/mailbox/arm_mhu.c 154 */[];
	int cocci_id/* drivers/mailbox/arm_mhu.c 114 */[MHU_CHANS];
	struct device *cocci_id/* drivers/mailbox/arm_mhu.c 113 */;
	struct arm_mhu *cocci_id/* drivers/mailbox/arm_mhu.c 112 */;
	const struct amba_id *cocci_id/* drivers/mailbox/arm_mhu.c 109 */;
	struct amba_device *cocci_id/* drivers/mailbox/arm_mhu.c 109 */;
	int cocci_id/* drivers/mailbox/arm_mhu.c 109 */;
	const struct mbox_chan_ops cocci_id/* drivers/mailbox/arm_mhu.c 102 */;
}
