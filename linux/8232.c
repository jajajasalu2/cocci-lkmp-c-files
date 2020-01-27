cocci_test_suite() {
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/ti/tlan.c 961 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/ti/tlan.c 958 */;
	struct board {
		const char *device_label;
		u32 flags;
		u16 addr_ofs;
	} cocci_id/* drivers/net/ethernet/ti/tlan.c 89 */[];
	char cocci_id/* drivers/net/ethernet/ti/tlan.c 877 */;
	const char *const cocci_id/* drivers/net/ethernet/ti/tlan.c 84 */[];
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/ti/tlan.c 813 */;
	struct ethtool_eeprom *cocci_id/* drivers/net/ethernet/ti/tlan.c 802 */;
	const char cocci_id/* drivers/net/ethernet/ti/tlan.c 80 */[];
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/ti/tlan.c 784 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/ti/tlan.c 768 */;
	long cocci_id/* drivers/net/ethernet/ti/tlan.c 675 */;
	void __init cocci_id/* drivers/net/ethernet/ti/tlan.c 673 */;
	void __exit cocci_id/* drivers/net/ethernet/ti/tlan.c 644 */;
	int cocci_id/* drivers/net/ethernet/ti/tlan.c 59 */;
	int cocci_id/* drivers/net/ethernet/ti/tlan.c 56 */[MAX_TLAN_BOARDS];
	struct tlan_priv cocci_id/* drivers/net/ethernet/ti/tlan.c 486 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/ti/tlan.c 438 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/ti/tlan.c 437 */;
	int __init cocci_id/* drivers/net/ethernet/ti/tlan.c 400 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/ti/tlan.c 391 */;
	pm_message_t cocci_id/* drivers/net/ethernet/ti/tlan.c 350 */;
	unsigned long cocci_id/* drivers/net/ethernet/ti/tlan.c 3255 */;
	struct tlan_priv *cocci_id/* drivers/net/ethernet/ti/tlan.c 3254 */;
	u8 cocci_id/* drivers/net/ethernet/ti/tlan.c 3251 */;
	u8 *cocci_id/* drivers/net/ethernet/ti/tlan.c 3251 */;
	u16 cocci_id/* drivers/net/ethernet/ti/tlan.c 3192 */;
	void cocci_id/* drivers/net/ethernet/ti/tlan.c 3192 */;
	u16 *cocci_id/* drivers/net/ethernet/ti/tlan.c 2848 */;
	bool cocci_id/* drivers/net/ethernet/ti/tlan.c 2847 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/ti/tlan.c 2762 */;
	u32 (*cocci_id/* drivers/net/ethernet/ti/tlan.c 233 */[TLAN_INT_NUMBER_OF_INTS])(struct net_device *,
											 u16);
	u32 cocci_id/* drivers/net/ethernet/ti/tlan.c 2258 */;
	const struct tlan_list *cocci_id/* drivers/net/ethernet/ti/tlan.c 224 */;
	int cocci_id/* drivers/net/ethernet/ti/tlan.c 212 */(struct net_device *,
							     u8, u8 *);
	void cocci_id/* drivers/net/ethernet/ti/tlan.c 211 */(u16, u8 *, int);
	int cocci_id/* drivers/net/ethernet/ti/tlan.c 210 */(u16, u8, int);
	void cocci_id/* drivers/net/ethernet/ti/tlan.c 209 */(u16);
	void cocci_id/* drivers/net/ethernet/ti/tlan.c 207 */(struct net_device *,
							      u16, u16, u16);
	char *cocci_id/* drivers/net/ethernet/ti/tlan.c 2056 */;
	void cocci_id/* drivers/net/ethernet/ti/tlan.c 205 */(u16, u32,
							      unsigned);
	bool cocci_id/* drivers/net/ethernet/ti/tlan.c 204 */(struct net_device *,
							      u16, u16, u16 *);
	unsigned int cocci_id/* drivers/net/ethernet/ti/tlan.c 1980 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/ti/tlan.c 1970 */;
	struct tlan_list *cocci_id/* drivers/net/ethernet/ti/tlan.c 1969 */;
	void cocci_id/* drivers/net/ethernet/ti/tlan.c 187 */(struct net_device *,
							      int areg,
							      char *mac);
	void cocci_id/* drivers/net/ethernet/ti/tlan.c 186 */(struct net_device *);
	void cocci_id/* drivers/net/ethernet/ti/tlan.c 184 */(struct net_device *,
							      int);
	void cocci_id/* drivers/net/ethernet/ti/tlan.c 183 */(struct tlan_list *,
							      char *, int);
	struct tlan_list cocci_id/* drivers/net/ethernet/ti/tlan.c 1786 */;
	void cocci_id/* drivers/net/ethernet/ti/tlan.c 178 */(struct timer_list *t);
	dma_addr_t cocci_id/* drivers/net/ethernet/ti/tlan.c 1778 */;
	unsigned cocci_id/* drivers/net/ethernet/ti/tlan.c 1726 */;
	u32 cocci_id/* drivers/net/ethernet/ti/tlan.c 172 */(struct net_device *,
							     u16);
	int cocci_id/* drivers/net/ethernet/ti/tlan.c 166 */(struct pci_dev *pdev,
							     const struct pci_device_id *ent);
	void cocci_id/* drivers/net/ethernet/ti/tlan.c 165 */(struct work_struct *work);
	void cocci_id/* drivers/net/ethernet/ti/tlan.c 164 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/ti/tlan.c 162 */(struct pci_dev *pdev,
							     long ioaddr,
							     int irq, int rev,
							     const struct pci_device_id *ent);
	int cocci_id/* drivers/net/ethernet/ti/tlan.c 161 */(struct net_device *dev,
							     struct ifreq *rq,
							     int cmd);
	struct net_device_stats *cocci_id/* drivers/net/ethernet/ti/tlan.c 159 */(struct net_device *);
	int cocci_id/* drivers/net/ethernet/ti/tlan.c 158 */(struct net_device *);
	irqreturn_t cocci_id/* drivers/net/ethernet/ti/tlan.c 157 */(int,
								     void *);
	netdev_tx_t cocci_id/* drivers/net/ethernet/ti/tlan.c 156 */(struct sk_buff *,
								     struct net_device *);
	int cocci_id/* drivers/net/ethernet/ti/tlan.c 155 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/ti/tlan.c 153 */(void);
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/ti/tlan.c 1282 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/ti/tlan.c 1230 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/ti/tlan.c 121 */[];
	struct net_device *cocci_id/* drivers/net/ethernet/ti/tlan.c 1200 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/ti/tlan.c 1153 */;
	void *cocci_id/* drivers/net/ethernet/ti/tlan.c 1153 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/ti/tlan.c 1057 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/ti/tlan.c 1026 */;
}
