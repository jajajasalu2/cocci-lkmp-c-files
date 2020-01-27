cocci_test_suite() {
	struct sockaddr *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 989 */;
	bool cocci_id/* drivers/net/ethernet/wiznet/w5100.c 974 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/wiznet/w5100.c 945 */;
	void *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 945 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 902 */;
	struct w5100_priv cocci_id/* drivers/net/ethernet/wiznet/w5100.c 898 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 896 */;
	u8 cocci_id/* drivers/net/ethernet/wiznet/w5100.c 854 */[2];
	netdev_tx_t cocci_id/* drivers/net/ethernet/wiznet/w5100.c 831 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 785 */;
	struct ethtool_regs *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 763 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 725 */;
	void cocci_id/* drivers/net/ethernet/wiznet/w5100.c 618 */;
	unsigned long cocci_id/* drivers/net/ethernet/wiznet/w5100.c 579 */;
	u16 cocci_id/* drivers/net/ethernet/wiznet/w5100.c 577 */;
	struct w5100_priv *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 577 */;
	const u8 *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 541 */;
	const u16 cocci_id/* drivers/net/ethernet/wiznet/w5100.c 524 */;
	const u32 cocci_id/* drivers/net/ethernet/wiznet/w5100.c 523 */;
	u8 *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 518 */;
	const struct w5100_ops cocci_id/* drivers/net/ethernet/wiznet/w5100.c 282 */;
	u64 cocci_id/* drivers/net/ethernet/wiznet/w5100.c 277 */;
	struct resource *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 268 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 265 */;
	u8 cocci_id/* drivers/net/ethernet/wiznet/w5100.c 211 */;
	u32 cocci_id/* drivers/net/ethernet/wiznet/w5100.c 210 */;
	struct net_device *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 210 */;
	int cocci_id/* drivers/net/ethernet/wiznet/w5100.c 210 */;
	struct w5100_mmio_priv *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 194 */;
	void __iomem *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 192 */;
	struct w5100_mmio_priv {
		void __iomem *base;
		spinlock_t reg_lock;
	} cocci_id/* drivers/net/ethernet/wiznet/w5100.c 181 */;
	struct w5100_priv {
		const struct w5100_ops *ops;
		u32 s0_regs;
		u32 s0_tx_buf;
		u16 s0_tx_buf_size;
		u32 s0_rx_buf;
		u16 s0_rx_buf_size;
		int irq;
		int link_irq;
		int link_gpio;
		struct napi_struct napi;
		struct net_device *ndev;
		bool promisc;
		u32 msg_enable;
		struct workqueue_struct *xfer_wq;
		struct work_struct rx_work;
		struct sk_buff *tx_skb;
		struct work_struct tx_work;
		struct work_struct setrx_work;
		struct work_struct restart_work;
	} cocci_id/* drivers/net/ethernet/wiznet/w5100.c 146 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/wiznet/w5100.c 1272 */;
	char *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 1187 */;
	size_t cocci_id/* drivers/net/ethernet/wiznet/w5100.c 1087 */;
	struct device *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 1080 */;
	const struct net_device *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 1073 */;
	struct w5100_mmio_priv cocci_id/* drivers/net/ethernet/wiznet/w5100.c 1064 */;
	const struct w5100_ops *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 1048 */;
	const void *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 1046 */;
	struct wiznet_platform_data *cocci_id/* drivers/net/ethernet/wiznet/w5100.c 1045 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/wiznet/w5100.c 1033 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/wiznet/w5100.c 1024 */;
}
