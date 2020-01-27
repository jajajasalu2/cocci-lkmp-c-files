cocci_test_suite() {
	const struct apci3120_board *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 968 */;
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 967 */;
	struct apci3120_dmabuf *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 909 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 706 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 693 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 692 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 540 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 537 */;
	int cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 536 */;
	unsigned short cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 500 */;
	struct comedi_async *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 474 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 469 */;
	void *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 469 */;
	bool cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 378 */;
	struct apci3120_private *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 160 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 158 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 157 */;
	void cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 157 */;
	struct apci3120_private {
		unsigned long amcc;
		unsigned long addon;
		unsigned int osc_base;
		unsigned int use_dma:1;
		unsigned int use_double_buffer:1;
		unsigned int cur_dmabuf:1;
		struct apci3120_dmabuf dmabuf[2];
		unsigned char do_bits;
		unsigned char timer_mode;
		unsigned char mode;
		unsigned short ctrl;
	} cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 143 */;
	struct apci3120_dmabuf {
		unsigned short *virt;
		dma_addr_t hw;
		unsigned int size;
		unsigned int use_size;
	} cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 136 */;
	const struct apci3120_board cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 125 */[];
	struct apci3120_board {
		const char *name;
		unsigned int ai_is_16bit:1;
		unsigned int has_ao:1;
	} cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 119 */;
	enum apci3120_boardid{BOARD_APCI3120, BOARD_APCI3001,} cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 114 */;
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 1107 */;
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 1100 */[];
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 1095 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 1087 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/addi_apci_3120.c 101 */;
}
