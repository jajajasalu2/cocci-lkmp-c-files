cocci_test_suite() {
	unsigned int cocci_id/* drivers/mailbox/mailbox-sti.c 90 */;
	struct sti_mbox_device *cocci_id/* drivers/mailbox/mailbox-sti.c 89 */;
	struct sti_channel *cocci_id/* drivers/mailbox/mailbox-sti.c 88 */;
	bool cocci_id/* drivers/mailbox/mailbox-sti.c 86 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/mailbox-sti.c 86 */;
	struct sti_channel {
		struct sti_mbox_device *mdev;
		unsigned int instance;
		unsigned int channel;
	} cocci_id/* drivers/mailbox/mailbox-sti.c 80 */;
	struct sti_mbox_pdata {
		unsigned int num_inst;
		unsigned int num_chan;
	} cocci_id/* drivers/mailbox/mailbox-sti.c 68 */;
	struct sti_mbox_device {
		struct device *dev;
		struct mbox_controller *mbox;
		void __iomem *base;
		const char *name;
		u32 enabled[STI_MBOX_INST_MAX];
		spinlock_t lock;
	} cocci_id/* drivers/mailbox/mailbox-sti.c 53 */;
	struct platform_driver cocci_id/* drivers/mailbox/mailbox-sti.c 487 */;
	struct resource *cocci_id/* drivers/mailbox/mailbox-sti.c 411 */;
	struct device_node *cocci_id/* drivers/mailbox/mailbox-sti.c 409 */;
	const struct of_device_id *cocci_id/* drivers/mailbox/mailbox-sti.c 406 */;
	struct platform_device *cocci_id/* drivers/mailbox/mailbox-sti.c 404 */;
	void *cocci_id/* drivers/mailbox/mailbox-sti.c 398 */;
	const struct of_device_id cocci_id/* drivers/mailbox/mailbox-sti.c 395 */[];
	const struct sti_mbox_pdata cocci_id/* drivers/mailbox/mailbox-sti.c 390 */;
	const struct mbox_chan_ops cocci_id/* drivers/mailbox/mailbox-sti.c 383 */;
	const struct of_phandle_args *cocci_id/* drivers/mailbox/mailbox-sti.c 322 */;
	struct sti_mbox_pdata *cocci_id/* drivers/mailbox/mailbox-sti.c 216 */;
	irqreturn_t cocci_id/* drivers/mailbox/mailbox-sti.c 213 */;
	int cocci_id/* drivers/mailbox/mailbox-sti.c 213 */;
	struct mbox_controller *cocci_id/* drivers/mailbox/mailbox-sti.c 163 */;
	void __iomem *cocci_id/* drivers/mailbox/mailbox-sti.c 155 */;
	void cocci_id/* drivers/mailbox/mailbox-sti.c 149 */;
	unsigned long cocci_id/* drivers/mailbox/mailbox-sti.c 140 */;
}
