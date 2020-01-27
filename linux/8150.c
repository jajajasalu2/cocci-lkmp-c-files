cocci_test_suite() {
	const struct pci_device_id cocci_id/* drivers/net/can/sja1000/ems_pci.c 93 */[];
	struct pci_driver cocci_id/* drivers/net/can/sja1000/ems_pci.c 354 */;
	struct ems_pci_card {
		int version;
		int channels;
		struct pci_dev *pci_dev;
		struct net_device *net_dev[EMS_PCI_MAX_CHAN];
		void __iomem *conf_addr;
		void __iomem *base_addr;
	} cocci_id/* drivers/net/can/sja1000/ems_pci.c 31 */;
	struct ems_pci_card cocci_id/* drivers/net/can/sja1000/ems_pci.c 226 */;
	struct ems_pci_card *cocci_id/* drivers/net/can/sja1000/ems_pci.c 215 */;
	struct net_device *cocci_id/* drivers/net/can/sja1000/ems_pci.c 214 */;
	struct sja1000_priv *cocci_id/* drivers/net/can/sja1000/ems_pci.c 213 */;
	const struct pci_device_id *cocci_id/* drivers/net/can/sja1000/ems_pci.c 211 */;
	struct pci_dev *cocci_id/* drivers/net/can/sja1000/ems_pci.c 210 */;
	int cocci_id/* drivers/net/can/sja1000/ems_pci.c 210 */;
	void cocci_id/* drivers/net/can/sja1000/ems_pci.c 200 */;
	unsigned char cocci_id/* drivers/net/can/sja1000/ems_pci.c 156 */;
	const struct sja1000_priv *cocci_id/* drivers/net/can/sja1000/ems_pci.c 154 */;
	u8 cocci_id/* drivers/net/can/sja1000/ems_pci.c 112 */;
	unsigned int cocci_id/* drivers/net/can/sja1000/ems_pci.c 107 */;
}
