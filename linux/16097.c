cocci_test_suite() {
	struct mf6x4_private {
		void __iomem *bar0_mem;
		void __iomem *bar2_mem;
		void __iomem *gpioc_reg;
	} cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 66 */;
	const struct mf6x4_board cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 55 */[];
	struct mf6x4_board {
		const char *name;
		unsigned int bar_nums[3];
	} cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 49 */;
	enum mf6x4_boardid{BOARD_MF634, BOARD_MF624,} cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 44 */;
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 299 */;
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 292 */[];
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 287 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 280 */;
	void cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 267 */;
	const struct mf6x4_board *cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 182 */;
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 181 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 124 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 113 */;
	struct mf6x4_private *cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 112 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 110 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 109 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 108 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 107 */;
	int cocci_id/* drivers/staging/comedi/drivers/mf6x4.c 107 */;
}
