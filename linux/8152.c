cocci_test_suite() {
	struct f81601_pci_card *cocci_id/* drivers/net/can/sja1000/f81601.c 99 */;
	struct net_device *cocci_id/* drivers/net/can/sja1000/f81601.c 98 */;
	struct sja1000_priv *cocci_id/* drivers/net/can/sja1000/f81601.c 97 */;
	const struct pci_device_id *cocci_id/* drivers/net/can/sja1000/f81601.c 95 */;
	struct pci_dev *cocci_id/* drivers/net/can/sja1000/f81601.c 94 */;
	int cocci_id/* drivers/net/can/sja1000/f81601.c 94 */;
	void cocci_id/* drivers/net/can/sja1000/f81601.c 73 */;
	unsigned long cocci_id/* drivers/net/can/sja1000/f81601.c 65 */;
	const struct sja1000_priv *cocci_id/* drivers/net/can/sja1000/f81601.c 56 */;
	unsigned int cocci_id/* drivers/net/can/sja1000/f81601.c 52 */;
	bool cocci_id/* drivers/net/can/sja1000/f81601.c 48 */;
	const struct pci_device_id cocci_id/* drivers/net/can/sja1000/f81601.c 41 */[];
	struct f81601_pci_card {
		void __iomem *addr;
		spinlock_t lock;
		struct pci_dev *dev;
		struct net_device *net_dev[F81601_PCI_MAX_CHAN];
	} cocci_id/* drivers/net/can/sja1000/f81601.c 34 */;
	struct pci_driver cocci_id/* drivers/net/can/sja1000/f81601.c 200 */;
	u8 cocci_id/* drivers/net/can/sja1000/f81601.c 101 */;
}
