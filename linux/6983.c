cocci_test_suite() {
	struct hi6220_mbox {
		struct device *dev;
		int irq;
		bool tx_irq_mode;
		void __iomem *ipc;
		void __iomem *base;
		unsigned int chan_num;
		struct hi6220_mbox_chan *mchan;
		void *irq_map_chan[MBOX_CHAN_MAX];
		struct mbox_chan *chan;
		struct mbox_controller controller;
	} cocci_id/* drivers/mailbox/hi6220-mailbox.c 67 */;
	struct hi6220_mbox_chan {
		unsigned int dir,dst_irq,ack_irq;
		unsigned int slot;
		struct hi6220_mbox *parent;
	} cocci_id/* drivers/mailbox/hi6220-mailbox.c 52 */;
	void __exit cocci_id/* drivers/mailbox/hi6220-mailbox.c 368 */;
	void cocci_id/* drivers/mailbox/hi6220-mailbox.c 368 */;
	int __init cocci_id/* drivers/mailbox/hi6220-mailbox.c 362 */;
	struct platform_driver cocci_id/* drivers/mailbox/hi6220-mailbox.c 354 */;
	struct resource *cocci_id/* drivers/mailbox/hi6220-mailbox.c 267 */;
	struct device *cocci_id/* drivers/mailbox/hi6220-mailbox.c 265 */;
	struct device_node *cocci_id/* drivers/mailbox/hi6220-mailbox.c 264 */;
	struct platform_device *cocci_id/* drivers/mailbox/hi6220-mailbox.c 262 */;
	const struct of_device_id cocci_id/* drivers/mailbox/hi6220-mailbox.c 256 */[];
	const struct of_phandle_args *cocci_id/* drivers/mailbox/hi6220-mailbox.c 223 */;
	struct mbox_controller *cocci_id/* drivers/mailbox/hi6220-mailbox.c 222 */;
	const struct mbox_chan_ops cocci_id/* drivers/mailbox/hi6220-mailbox.c 215 */;
	u32 cocci_id/* drivers/mailbox/hi6220-mailbox.c 154 */[MBOX_MSG_LEN];
	unsigned int cocci_id/* drivers/mailbox/hi6220-mailbox.c 153 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/hi6220-mailbox.c 152 */;
	struct hi6220_mbox_chan *cocci_id/* drivers/mailbox/hi6220-mailbox.c 151 */;
	struct hi6220_mbox *cocci_id/* drivers/mailbox/hi6220-mailbox.c 150 */;
	irqreturn_t cocci_id/* drivers/mailbox/hi6220-mailbox.c 148 */;
	void *cocci_id/* drivers/mailbox/hi6220-mailbox.c 148 */;
	int cocci_id/* drivers/mailbox/hi6220-mailbox.c 148 */;
	u32 *cocci_id/* drivers/mailbox/hi6220-mailbox.c 127 */;
	u32 cocci_id/* drivers/mailbox/hi6220-mailbox.c 113 */;
	bool cocci_id/* drivers/mailbox/hi6220-mailbox.c 109 */;
}
