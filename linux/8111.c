cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/net/can/sun4i_can.c 846 */;
	struct sun4ican_priv cocci_id/* drivers/net/can/sun4i_can.c 799 */;
	void __iomem *cocci_id/* drivers/net/can/sun4i_can.c 775 */;
	struct clk *cocci_id/* drivers/net/can/sun4i_can.c 774 */;
	struct device_node *cocci_id/* drivers/net/can/sun4i_can.c 773 */;
	struct platform_device *cocci_id/* drivers/net/can/sun4i_can.c 771 */;
	const struct of_device_id cocci_id/* drivers/net/can/sun4i_can.c 754 */[];
	const struct net_device_ops cocci_id/* drivers/net/can/sun4i_can.c 748 */;
	irqreturn_t cocci_id/* drivers/net/can/sun4i_can.c 637 */;
	void *cocci_id/* drivers/net/can/sun4i_can.c 637 */;
	unsigned int cocci_id/* drivers/net/can/sun4i_can.c 518 */;
	enum can_state cocci_id/* drivers/net/can/sun4i_can.c 516 */;
	struct sk_buff *cocci_id/* drivers/net/can/sun4i_can.c 515 */;
	struct can_frame *cocci_id/* drivers/net/can/sun4i_can.c 514 */;
	struct net_device_stats *cocci_id/* drivers/net/can/sun4i_can.c 513 */;
	u8 cocci_id/* drivers/net/can/sun4i_can.c 510 */;
	canid_t cocci_id/* drivers/net/can/sun4i_can.c 469 */;
	void cocci_id/* drivers/net/can/sun4i_can.c 461 */;
	netdev_tx_t cocci_id/* drivers/net/can/sun4i_can.c 412 */;
	enum can_mode cocci_id/* drivers/net/can/sun4i_can.c 386 */;
	struct can_berr_counter *cocci_id/* drivers/net/can/sun4i_can.c 294 */;
	const struct net_device *cocci_id/* drivers/net/can/sun4i_can.c 293 */;
	struct can_bittiming *cocci_id/* drivers/net/can/sun4i_can.c 277 */;
	u32 cocci_id/* drivers/net/can/sun4i_can.c 235 */;
	struct sun4ican_priv *cocci_id/* drivers/net/can/sun4i_can.c 233 */;
	struct net_device *cocci_id/* drivers/net/can/sun4i_can.c 231 */;
	int cocci_id/* drivers/net/can/sun4i_can.c 231 */;
	unsigned long cocci_id/* drivers/net/can/sun4i_can.c 224 */;
	const struct can_bittiming_const cocci_id/* drivers/net/can/sun4i_can.c 210 */;
	struct sun4ican_priv {
		struct can_priv can;
		void __iomem *base;
		struct clk *clk;
		spinlock_t cmdreg_lock;
	} cocci_id/* drivers/net/can/sun4i_can.c 203 */;
}
