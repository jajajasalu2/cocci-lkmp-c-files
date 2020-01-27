cocci_test_suite() {
	struct hi3660_mbox cocci_id/* drivers/mailbox/hi3660-mailbox.c 83 */;
	struct hi3660_mbox {
		struct device *dev;
		void __iomem *base;
		struct mbox_chan chan[MBOX_CHAN_MAX];
		struct hi3660_chan_info mchan[MBOX_CHAN_MAX];
		struct mbox_controller controller;
	} cocci_id/* drivers/mailbox/hi3660-mailbox.c 73 */;
	struct hi3660_chan_info {
		unsigned int dst_irq;
		unsigned int ack_irq;
	} cocci_id/* drivers/mailbox/hi3660-mailbox.c 56 */;
	void __exit cocci_id/* drivers/mailbox/hi3660-mailbox.c 293 */;
	void cocci_id/* drivers/mailbox/hi3660-mailbox.c 293 */;
	int __init cocci_id/* drivers/mailbox/hi3660-mailbox.c 287 */;
	struct platform_driver cocci_id/* drivers/mailbox/hi3660-mailbox.c 279 */;
	void *cocci_id/* drivers/mailbox/hi3660-mailbox.c 266 */;
	struct resource *cocci_id/* drivers/mailbox/hi3660-mailbox.c 243 */;
	struct device *cocci_id/* drivers/mailbox/hi3660-mailbox.c 240 */;
	struct platform_device *cocci_id/* drivers/mailbox/hi3660-mailbox.c 238 */;
	const struct of_device_id cocci_id/* drivers/mailbox/hi3660-mailbox.c 231 */[];
	const struct of_phandle_args *cocci_id/* drivers/mailbox/hi3660-mailbox.c 213 */;
	struct mbox_controller *cocci_id/* drivers/mailbox/hi3660-mailbox.c 212 */;
	const struct mbox_chan_ops cocci_id/* drivers/mailbox/hi3660-mailbox.c 207 */;
	u32 *cocci_id/* drivers/mailbox/hi3660-mailbox.c 181 */;
	unsigned int cocci_id/* drivers/mailbox/hi3660-mailbox.c 140 */;
	void __iomem *cocci_id/* drivers/mailbox/hi3660-mailbox.c 139 */;
	struct hi3660_chan_info *cocci_id/* drivers/mailbox/hi3660-mailbox.c 138 */;
	struct hi3660_mbox *cocci_id/* drivers/mailbox/hi3660-mailbox.c 137 */;
	unsigned long cocci_id/* drivers/mailbox/hi3660-mailbox.c 136 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/hi3660-mailbox.c 134 */;
	int cocci_id/* drivers/mailbox/hi3660-mailbox.c 134 */;
}
