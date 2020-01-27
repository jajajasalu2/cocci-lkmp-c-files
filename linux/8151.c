cocci_test_suite() {
	const struct pci_device_id cocci_id/* drivers/net/can/sja1000/kvaser_pci.c 99 */[];
	struct kvaser_pci {
		int channel;
		struct pci_dev *pci_dev;
		struct net_device *slave_dev[MAX_NO_OF_CHANNELS - 1];
		void __iomem *conf_addr;
		void __iomem *res_addr;
		int no_channels;
		u8 xilinx_ver;
	} cocci_id/* drivers/net/can/sja1000/kvaser_pci.c 41 */;
	struct pci_driver cocci_id/* drivers/net/can/sja1000/kvaser_pci.c 378 */;
	const struct pci_device_id *cocci_id/* drivers/net/can/sja1000/kvaser_pci.c 280 */;
	struct kvaser_pci cocci_id/* drivers/net/can/sja1000/kvaser_pci.c 208 */;
	struct kvaser_pci *cocci_id/* drivers/net/can/sja1000/kvaser_pci.c 205 */;
	struct sja1000_priv *cocci_id/* drivers/net/can/sja1000/kvaser_pci.c 204 */;
	struct net_device *cocci_id/* drivers/net/can/sja1000/kvaser_pci.c 203 */;
	void __iomem *cocci_id/* drivers/net/can/sja1000/kvaser_pci.c 199 */;
	struct net_device **cocci_id/* drivers/net/can/sja1000/kvaser_pci.c 198 */;
	struct pci_dev *cocci_id/* drivers/net/can/sja1000/kvaser_pci.c 197 */;
	int cocci_id/* drivers/net/can/sja1000/kvaser_pci.c 197 */;
	void cocci_id/* drivers/net/can/sja1000/kvaser_pci.c 161 */;
	u32 cocci_id/* drivers/net/can/sja1000/kvaser_pci.c 122 */;
	u8 cocci_id/* drivers/net/can/sja1000/kvaser_pci.c 107 */;
	const struct sja1000_priv *cocci_id/* drivers/net/can/sja1000/kvaser_pci.c 107 */;
}
