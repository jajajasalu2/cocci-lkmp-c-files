cocci_test_suite() {
	u32 cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 84 */;
	int cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 82 */;
	struct slimpro_mbox_chan *cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 75 */;
	void cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 75 */;
	u32 *cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 68 */;
	struct slimpro_mbox {
		struct mbox_controller mb_ctrl;
		struct slimpro_mbox_chan mc[MBOX_CNT];
		struct mbox_chan chans[MBOX_CNT];
	} cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 62 */;
	struct slimpro_mbox_chan {
		struct device *dev;
		struct mbox_chan *chan;
		void __iomem *reg;
		int irq;
		u32 rx_msg[3];
	} cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 43 */;
	void __exit cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 253 */;
	int __init cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 248 */;
	struct platform_driver cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 239 */;
	const struct acpi_device_id cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 232 */[];
	const struct of_device_id cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 225 */[];
	struct slimpro_mbox cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 178 */;
	void __iomem *cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 174 */;
	struct resource *cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 173 */;
	struct slimpro_mbox *cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 172 */;
	struct platform_device *cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 170 */;
	const struct mbox_chan_ops cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 164 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 118 */;
	irqreturn_t cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 105 */;
	void *cocci_id/* drivers/mailbox/mailbox-xgene-slimpro.c 105 */;
}
