cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 971 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 961 */[];
	pm_message_t cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 938 */;
	struct emac_board_info cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 812 */;
	const char *cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 810 */;
	struct device_node *cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 806 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 804 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 788 */;
	struct emac_board_info {
		struct clk *clk;
		struct device *dev;
		struct platform_device *pdev;
		spinlock_t lock;
		void __iomem *membase;
		u32 msg_enable;
		struct net_device *ndev;
		struct sk_buff *skb_last;
		u16 tx_fifo_stat;
		int emacrx_completed_flag;
		struct device_node *phy_node;
		unsigned int link;
		unsigned int speed;
		unsigned int duplex;
		phy_interface_t phy_interface;
	} cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 72 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 653 */;
	int *cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 597 */;
	bool cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 516 */;
	u8 *cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 515 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 514 */;
	int cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 41 */;
	unsigned int cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 389 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 368 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 246 */;
	struct emac_board_info *cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 234 */;
	u32 cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 232 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 225 */;
	struct net_device *cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 224 */;
	void cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 224 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 210 */;
	void __iomem *cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 205 */;
	void *cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 205 */;
	unsigned long cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 123 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/allwinner/sun4i-emac.c 122 */;
}
