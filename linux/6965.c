cocci_test_suite() {
	void cocci_id/* drivers/mailbox/rockchip-mailbox.c 90 */;
	struct rockchip_mbox_chan *cocci_id/* drivers/mailbox/rockchip-mailbox.c 56 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/rockchip-mailbox.c 52 */;
	struct rockchip_mbox {
		struct mbox_controller mbox;
		struct clk *pclk;
		void __iomem *mbox_base;
		u32 buf_size;
		struct rockchip_mbox_chan *chans;
	} cocci_id/* drivers/mailbox/rockchip-mailbox.c 41 */;
	struct rockchip_mbox_chan {
		int idx;
		int irq;
		struct rockchip_mbox_msg *msg;
		struct rockchip_mbox *mb;
	} cocci_id/* drivers/mailbox/rockchip-mailbox.c 34 */;
	struct rockchip_mbox_data {
		int num_chans;
	} cocci_id/* drivers/mailbox/rockchip-mailbox.c 30 */;
	struct rockchip_mbox_msg {
		u32 cmd;
		int rx_size;
	} cocci_id/* drivers/mailbox/rockchip-mailbox.c 25 */;
	struct platform_driver cocci_id/* drivers/mailbox/rockchip-mailbox.c 249 */;
	size_t cocci_id/* drivers/mailbox/rockchip-mailbox.c 208 */;
	struct resource *cocci_id/* drivers/mailbox/rockchip-mailbox.c 169 */;
	const struct rockchip_mbox_data *cocci_id/* drivers/mailbox/rockchip-mailbox.c 168 */;
	const struct of_device_id *cocci_id/* drivers/mailbox/rockchip-mailbox.c 167 */;
	struct platform_device *cocci_id/* drivers/mailbox/rockchip-mailbox.c 164 */;
	const struct of_device_id cocci_id/* drivers/mailbox/rockchip-mailbox.c 158 */[];
	const struct rockchip_mbox_data cocci_id/* drivers/mailbox/rockchip-mailbox.c 154 */;
	struct rockchip_mbox_msg *cocci_id/* drivers/mailbox/rockchip-mailbox.c 128 */;
	u32 cocci_id/* drivers/mailbox/rockchip-mailbox.c 111 */;
	struct rockchip_mbox *cocci_id/* drivers/mailbox/rockchip-mailbox.c 110 */;
	irqreturn_t cocci_id/* drivers/mailbox/rockchip-mailbox.c 107 */;
	void *cocci_id/* drivers/mailbox/rockchip-mailbox.c 107 */;
	int cocci_id/* drivers/mailbox/rockchip-mailbox.c 107 */;
	const struct mbox_chan_ops cocci_id/* drivers/mailbox/rockchip-mailbox.c 101 */;
}
