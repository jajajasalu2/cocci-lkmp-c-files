cocci_test_suite() {
	u32 cocci_id/* drivers/mailbox/mailbox-altera.c 62 */;
	struct altera_mbox *cocci_id/* drivers/mailbox/mailbox-altera.c 60 */;
	int cocci_id/* drivers/mailbox/mailbox-altera.c 60 */;
	struct altera_mbox {
		bool is_sender;
		bool intr_mode;
		int irq;
		void __iomem *mbox_base;
		struct device *dev;
		struct mbox_controller controller;
		struct timer_list rxpoll_timer;
		struct mbox_chan *chan;
	} cocci_id/* drivers/mailbox/mailbox-altera.c 39 */;
	struct platform_driver cocci_id/* drivers/mailbox/mailbox-altera.c 351 */;
	const struct of_device_id cocci_id/* drivers/mailbox/mailbox-altera.c 344 */[];
	enum altera_mbox_msg{MBOX_CMD=0, MBOX_PTR,} cocci_id/* drivers/mailbox/mailbox-altera.c 32 */;
	struct resource *cocci_id/* drivers/mailbox/mailbox-altera.c 288 */;
	struct platform_device *cocci_id/* drivers/mailbox/mailbox-altera.c 285 */;
	const struct mbox_chan_ops cocci_id/* drivers/mailbox/mailbox-altera.c 277 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/mailbox-altera.c 233 */;
	u32 *cocci_id/* drivers/mailbox/mailbox-altera.c 209 */;
	irqreturn_t cocci_id/* drivers/mailbox/mailbox-altera.c 152 */;
	struct timer_list *cocci_id/* drivers/mailbox/mailbox-altera.c 131 */;
	void cocci_id/* drivers/mailbox/mailbox-altera.c 131 */;
	void *cocci_id/* drivers/mailbox/mailbox-altera.c 127 */;
	u32 cocci_id/* drivers/mailbox/mailbox-altera.c 120 */[2];
	bool cocci_id/* drivers/mailbox/mailbox-altera.c 100 */;
}
