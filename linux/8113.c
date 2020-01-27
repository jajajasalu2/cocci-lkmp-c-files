cocci_test_suite() {
	struct regulator *cocci_id/* drivers/net/can/ti_hecc.c 861 */;
	struct resource *cocci_id/* drivers/net/can/ti_hecc.c 860 */;
	struct device_node *cocci_id/* drivers/net/can/ti_hecc.c 859 */;
	struct platform_device *cocci_id/* drivers/net/can/ti_hecc.c 855 */;
	const struct of_device_id cocci_id/* drivers/net/can/ti_hecc.c 847 */[];
	const struct net_device_ops cocci_id/* drivers/net/can/ti_hecc.c 840 */;
	unsigned long cocci_id/* drivers/net/can/ti_hecc.c 682 */;
	struct net_device_stats *cocci_id/* drivers/net/can/ti_hecc.c 680 */;
	irqreturn_t cocci_id/* drivers/net/can/ti_hecc.c 676 */;
	void *cocci_id/* drivers/net/can/ti_hecc.c 676 */;
	struct sk_buff *cocci_id/* drivers/net/can/ti_hecc.c 653 */;
	struct can_frame *cocci_id/* drivers/net/can/ti_hecc.c 652 */;
	enum can_state cocci_id/* drivers/net/can/ti_hecc.c 648 */;
	struct net_device *cocci_id/* drivers/net/can/ti_hecc.c 647 */;
	__be32 *cocci_id/* drivers/net/can/ti_hecc.c 572 */;
	bool cocci_id/* drivers/net/can/ti_hecc.c 540 */;
	u32 *cocci_id/* drivers/net/can/ti_hecc.c 539 */;
	unsigned int cocci_id/* drivers/net/can/ti_hecc.c 539 */;
	struct ti_hecc_priv cocci_id/* drivers/net/can/ti_hecc.c 535 */;
	struct can_rx_offload *cocci_id/* drivers/net/can/ti_hecc.c 533 */;
	netdev_tx_t cocci_id/* drivers/net/can/ti_hecc.c 475 */;
	struct can_berr_counter *cocci_id/* drivers/net/can/ti_hecc.c 444 */;
	const struct net_device *cocci_id/* drivers/net/can/ti_hecc.c 443 */;
	enum can_mode cocci_id/* drivers/net/can/ti_hecc.c 426 */;
	const struct ti_hecc_priv *cocci_id/* drivers/net/can/ti_hecc.c 291 */;
	struct can_bittiming *cocci_id/* drivers/net/can/ti_hecc.c 267 */;
	u32 cocci_id/* drivers/net/can/ti_hecc.c 255 */;
	void cocci_id/* drivers/net/can/ti_hecc.c 254 */;
	struct ti_hecc_priv *cocci_id/* drivers/net/can/ti_hecc.c 202 */;
	int cocci_id/* drivers/net/can/ti_hecc.c 202 */;
	struct ti_hecc_priv {
		struct can_priv can;
		struct can_rx_offload offload;
		struct net_device *ndev;
		struct clk *clk;
		void __iomem *base;
		void __iomem *hecc_ram;
		void __iomem *mbx;
		bool use_hecc1int;
		spinlock_t mbx_lock;
		u32 tx_head;
		u32 tx_tail;
		struct regulator *reg_xceiver;
	} cocci_id/* drivers/net/can/ti_hecc.c 187 */;
	const struct can_bittiming_const cocci_id/* drivers/net/can/ti_hecc.c 175 */;
	struct platform_driver cocci_id/* drivers/net/can/ti_hecc.c 1047 */;
	pm_message_t cocci_id/* drivers/net/can/ti_hecc.c 1003 */;
}