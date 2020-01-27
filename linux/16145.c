cocci_test_suite() {
	const struct pci_8255_boardinfo cocci_id/* drivers/staging/comedi/drivers/8255_pci.c 86 */[];
	struct pci_8255_boardinfo {
		const char *name;
		int dio_badr;
		int n_8255;
		unsigned int has_mite:1;
	} cocci_id/* drivers/staging/comedi/drivers/8255_pci.c 79 */;
	enum pci_8255_boardid{BOARD_ADLINK_PCI7224, BOARD_ADLINK_PCI7248, BOARD_ADLINK_PCI7296, BOARD_CB_PCIDIO24, BOARD_CB_PCIDIO24H, BOARD_CB_PCIDIO48H_OLD, BOARD_CB_PCIDIO48H_NEW, BOARD_CB_PCIDIO96H, BOARD_NI_PCIDIO96, BOARD_NI_PCIDIO96B, BOARD_NI_PXI6508, BOARD_NI_PCI6503, BOARD_NI_PCI6503B, BOARD_NI_PCI6503X, BOARD_NI_PXI_6503,} cocci_id/* drivers/staging/comedi/drivers/8255_pci.c 61 */;
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/8255_pci.c 285 */;
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/8255_pci.c 263 */[];
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/8255_pci.c 258 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/8255_pci.c 250 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/8255_pci.c 199 */;
	const struct pci_8255_boardinfo *cocci_id/* drivers/staging/comedi/drivers/8255_pci.c 198 */;
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/8255_pci.c 197 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/8255_pci.c 195 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/8255_pci.c 194 */;
	int cocci_id/* drivers/staging/comedi/drivers/8255_pci.c 194 */;
	u32 cocci_id/* drivers/staging/comedi/drivers/8255_pci.c 178 */;
	void __iomem *cocci_id/* drivers/staging/comedi/drivers/8255_pci.c 177 */;
}
