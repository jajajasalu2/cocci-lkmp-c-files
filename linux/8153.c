cocci_test_suite() {
	struct pci_driver cocci_id/* drivers/net/can/sja1000/plx_pci.c 761 */;
	struct plx_pci_channel_map *cocci_id/* drivers/net/can/sja1000/plx_pci.c 670 */;
	void __iomem *cocci_id/* drivers/net/can/sja1000/plx_pci.c 632 */;
	struct plx_pci_card_info *cocci_id/* drivers/net/can/sja1000/plx_pci.c 629 */;
	struct net_device *cocci_id/* drivers/net/can/sja1000/plx_pci.c 627 */;
	struct sja1000_priv *cocci_id/* drivers/net/can/sja1000/plx_pci.c 626 */;
	const struct pci_device_id *cocci_id/* drivers/net/can/sja1000/plx_pci.c 624 */;
	int cocci_id/* drivers/net/can/sja1000/plx_pci.c 623 */;
	const int cocci_id/* drivers/net/can/sja1000/plx_pci.c 508 */[2];
	u32 cocci_id/* drivers/net/can/sja1000/plx_pci.c 478 */;
	struct plx_pci_card *cocci_id/* drivers/net/can/sja1000/plx_pci.c 477 */;
	struct pci_dev *cocci_id/* drivers/net/can/sja1000/plx_pci.c 475 */;
	void cocci_id/* drivers/net/can/sja1000/plx_pci.c 475 */;
	struct plx_pci_card {
		int channels;
		struct net_device *net_dev[PLX_PCI_MAX_CHAN];
		void __iomem *conf_addr;
		void (*reset_func)(struct pci_dev *pdev);
	} cocci_id/* drivers/net/can/sja1000/plx_pci.c 44 */;
	const struct sja1000_priv *cocci_id/* drivers/net/can/sja1000/plx_pci.c 424 */;
	u8 cocci_id/* drivers/net/can/sja1000/plx_pci.c 409 */;
	const struct pci_device_id cocci_id/* drivers/net/can/sja1000/plx_pci.c 285 */[];
	struct plx_pci_card_info cocci_id/* drivers/net/can/sja1000/plx_pci.c 181 */;
	struct plx_pci_card_info {
		const char *name;
		int channel_count;
		u32 can_clock;
		u8 ocr;
		u8 cdr;
		struct plx_pci_channel_map conf_map;
		struct plx_pci_channel_map chan_map_tbl[PLX_PCI_MAX_CHAN];
		void (*reset_func)(struct pci_dev *pdev);
	} cocci_id/* drivers/net/can/sja1000/plx_pci.c 164 */;
	struct plx_pci_channel_map {
		u32 bar;
		u32 offset;
		u32 size;
	} cocci_id/* drivers/net/can/sja1000/plx_pci.c 158 */;
	void cocci_id/* drivers/net/can/sja1000/plx_pci.c 153 */(struct pci_dev *pdev);
}
