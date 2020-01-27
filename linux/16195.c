cocci_test_suite() {
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 953 */;
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 894 */[];
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 888 */;
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 887 */;
	int cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 887 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 880 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 75 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 480 */;
	void *cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 480 */;
	struct comedi_async *cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 439 */;
	struct pci1710_private *cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 377 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 375 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 374 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 332 */;
	const struct boardtype *cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 305 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 290 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 289 */;
	void cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 247 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 189 */[32];
	unsigned int cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 186 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 183 */;
	struct pci1710_private {
		unsigned int max_samples;
		unsigned int ctrl;
		unsigned int ctrl_ext;
		unsigned int mux_scan;
		unsigned char ai_et;
		unsigned int act_chanlist[32];
		unsigned char saved_seglen;
		unsigned char da_ranges;
		unsigned char unipolar_gain;
	} cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 169 */;
	const struct boardtype cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 140 */[];
	struct boardtype {
		const char *name;
		const struct comedi_lrange *ai_range;
		unsigned int is_pci1711:1;
		unsigned int is_pci1713:1;
		unsigned int has_ao:1;
	} cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 132 */;
	enum pci1710_boardid{BOARD_PCI1710, BOARD_PCI1710HG, BOARD_PCI1711, BOARD_PCI1713, BOARD_PCI1731,} cocci_id/* drivers/staging/comedi/drivers/adv_pci1710.c 124 */;
}
