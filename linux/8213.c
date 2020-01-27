cocci_test_suite() {
	struct smsc911x_data {
		void __iomem *ioaddr;
		unsigned int idrev;
		unsigned int generation;
		struct smsc911x_platform_config config;
		spinlock_t mac_lock;
		spinlock_t dev_lock;
		struct mii_bus *mii_bus;
		unsigned int using_extphy;
		int last_duplex;
		int last_carrier;
		u32 msg_enable;
		unsigned int gpio_setting;
		unsigned int gpio_orig_setting;
		struct net_device *dev;
		struct napi_struct napi;
		unsigned int software_irq_signal;
#ifdef USE_PHY_WORK_AROUND
#define MIN_PACKET_SIZE (64)
			char loopback_tx_pkt[MIN_PACKET_SIZE];
		char loopback_rx_pkt[MIN_PACKET_SIZE];
		unsigned int resetcount;
#endif
		unsigned int multicast_update_pending;
		unsigned int set_bits_mask;
		unsigned int clear_bits_mask;
		unsigned int hashhi;
		unsigned int hashlo;
		const struct smsc911x_ops *ops;
		struct regulator_bulk_data supplies[SMSC911X_NUM_SUPPLIES];
		struct gpio_desc *reset_gpiod;
		struct clk *clk;
	} cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 86 */;
	char cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 848 */;
	struct smsc911x_ops {
		u32 (*reg_read)(struct smsc911x_data *pdata, u32 reg);
		void (*reg_write)(struct smsc911x_data *pdata, u32 reg, u32 val);
		void (*rx_readfifo)(struct smsc911x_data *pdata, unsigned int *buf, unsigned int wordcount);
		void (*tx_writefifo)(struct smsc911x_data *pdata, unsigned int *buf, unsigned int wordcount);
	} cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 75 */;
	int cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 65 */;
	u16 cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 590 */;
	struct mii_bus *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 553 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 394 */;
	void __exit cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2679 */;
	int __init cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2672 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2660 */;
	const struct acpi_device_id cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2654 */[];
	const struct of_device_id cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2647 */[];
	const struct dev_pm_ops cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2635 */;
	struct smsc911x_data cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2447 */;
	struct resource *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2417 */;
	struct smsc911x_platform_config *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2416 */;
	struct device *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2371 */;
	const struct smsc911x_ops cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2363 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2148 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2132 */;
	u8 cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2095 */[SMSC911X_EEPROM_SIZE];
	struct ethtool_eeprom *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2092 */;
	u8 cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2049 */;
	u8 *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2049 */;
	unsigned int cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 2010 */;
	u32 *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1991 */;
	unsigned long cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1988 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1987 */;
	void *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1984 */;
	struct ethtool_regs *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1983 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1956 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1947 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1924 */;
	void cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 189 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1859 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1829 */;
	unsigned int *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1809 */;
	ulong cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1785 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1777 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1776 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1523 */;
	struct net_device *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1515 */;
	u8 cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1503 */[6];
	u32 cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 148 */;
	struct smsc911x_data *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 148 */;
	char cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1281 */[ETH_ALEN];
	struct napi_struct *cocci_id/* drivers/net/ethernet/smsc/smsc911x.c 1206 */;
}