cocci_test_suite() {
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 951 */;
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 921 */[];
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 916 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 908 */;
	void cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 901 */;
	const struct apci3xxx_boardinfo cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 86 */[];
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 756 */;
	struct apci3xxx_boardinfo {
		const char *name;
		int ai_subdev_flags;
		int ai_n_chan;
		unsigned int ai_maxdata;
		unsigned char ai_conv_units;
		unsigned int ai_min_acq_ns;
		unsigned int has_ao:1;
		unsigned int has_dig_in:1;
		unsigned int has_dig_out:1;
		unsigned int has_ttl_io:1;
	} cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 73 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 591 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 590 */;
	int cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 590 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 571 */;
	struct apci3xxx_private *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 570 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 516 */;
	const struct apci3xxx_boardinfo *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 514 */;
	enum apci3xxx_boardid{BOARD_APCI3000_16, BOARD_APCI3000_8, BOARD_APCI3000_4, BOARD_APCI3006_16, BOARD_APCI3006_8, BOARD_APCI3006_4, BOARD_APCI3010_16, BOARD_APCI3010_8, BOARD_APCI3010_4, BOARD_APCI3016_16, BOARD_APCI3016_8, BOARD_APCI3016_4, BOARD_APCI3100_16_4, BOARD_APCI3100_8_4, BOARD_APCI3106_16_4, BOARD_APCI3106_8_4, BOARD_APCI3110_16_4, BOARD_APCI3110_8_4, BOARD_APCI3116_16_4, BOARD_APCI3116_8_4, BOARD_APCI3003, BOARD_APCI3002_16, BOARD_APCI3002_8, BOARD_APCI3002_4, BOARD_APCI3500,} cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 45 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 435 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 422 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 421 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 348 */;
	void *cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 348 */;
	struct apci3xxx_private {
		unsigned int ai_timer;
		unsigned char ai_time_base;
	} cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 343 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/addi_apci_3xxx.c 25 */;
}
