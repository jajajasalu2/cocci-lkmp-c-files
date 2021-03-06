cocci_test_suite() {
	u16 *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 915 */;
	u32 *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 914 */;
	unsigned long cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 847 */;
	struct mpc52xx_fec cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 845 */;
	struct mpc52xx_fec_priv cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 832 */;
	int cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 83 */;
	phys_addr_t cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 828 */;
	const char *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 826 */;
	struct device_node *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 825 */;
	const u32 *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 823 */;
	struct resource cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 822 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 798 */;
	void cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 79 */(struct net_device *dev);
	struct ifreq *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 788 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 778 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 74 */(int,
										  void *);
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 568 */;
	struct mpc52xx_fec_priv {
		struct net_device *ndev;
		int duplex;
		int speed;
		int r_irq;
		int t_irq;
		struct mpc52xx_fec __iomem *fec;
		struct bcom_task *rx_dmatsk;
		struct bcom_task *tx_dmatsk;
		spinlock_t lock;
		int msg_enable;
		unsigned int mdio_speed;
		struct device_node *phy_node;
		enum phy_state link;
		int seven_wire_mode;
	} cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 54 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 481 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 441 */;
	void *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 441 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 308 */;
	u32 cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 173 */;
	struct mpc52xx_fec __iomem *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 172 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 167 */;
	struct mpc52xx_fec_priv *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 166 */;
	struct net_device *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 164 */;
	void cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 164 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 149 */;
	struct bcom_task *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 147 */;
	struct bcom_bd **cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 127 */;
	struct bcom_fec_bd *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 124 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 113 */;
	void __exit cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 1079 */;
	int __init cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 1073 */;
	struct platform_driver *constcocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 1066 */[];
	struct platform_driver cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 1048 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 1039 */[];
	struct platform_device *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 1025 */;
	u8 *cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 102 */;
	pm_message_t cocci_id/* drivers/net/ethernet/freescale/fec_mpc52xx.c 1015 */;
}
