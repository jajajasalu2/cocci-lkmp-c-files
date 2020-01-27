cocci_test_suite() {
	struct dio_boardtype {
		const char *name;
		int nsubdevs;
		struct diosubd_data sdi[PCI_DIO_MAX_DI_SUBDEVS];
		struct diosubd_data sdo[PCI_DIO_MAX_DO_SUBDEVS];
		struct diosubd_data sdio[PCI_DIO_MAX_DIO_SUBDEVG];
		unsigned long id_reg;
		unsigned long timer_regbase;
		unsigned int is_16bit:1;
	} cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 90 */;
	struct diosubd_data {
		int chans;
		unsigned long addr;
	} cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 85 */;
	enum pci_dio_boardid{TYPE_PCI1730, TYPE_PCI1733, TYPE_PCI1734, TYPE_PCI1735, TYPE_PCI1736, TYPE_PCI1739, TYPE_PCI1750, TYPE_PCI1751, TYPE_PCI1752, TYPE_PCI1753, TYPE_PCI1753E, TYPE_PCI1754, TYPE_PCI1756, TYPE_PCI1761, TYPE_PCI1762,} cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 67 */;
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 527 */;
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 508 */[];
	unsigned long cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 502 */;
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 500 */;
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 499 */;
	int cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 499 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 460 */;
	void *cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 387 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 350 */;
	const struct diosubd_data *cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 349 */;
	const struct dio_boardtype *cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 348 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 344 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 211 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 210 */;
	const struct dio_boardtype cocci_id/* drivers/staging/comedi/drivers/adv_pci_dio.c 101 */[];
}
