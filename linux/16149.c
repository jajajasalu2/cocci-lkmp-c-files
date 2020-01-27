cocci_test_suite() {
	enum cb_pcidda_boardid{BOARD_DDA02_12, BOARD_DDA04_12, BOARD_DDA08_12, BOARD_DDA02_16, BOARD_DDA04_16, BOARD_DDA08_16,} cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 95 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 84 */;
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 411 */;
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 400 */[];
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 394 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 386 */;
	const struct cb_pcidda_board *cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 331 */;
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 330 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 328 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 291 */;
	struct cb_pcidda_private *cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 290 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 288 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 287 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 286 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 285 */;
	int cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 285 */;
	void cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 257 */;
	const int cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 195 */;
	struct cb_pcidda_private {
		unsigned long daqio;
		unsigned int dac_cal1_bits;
		unsigned int ao_range[MAX_AO_CHANNELS];
		u16 eeprom_data[EEPROM_SIZE];
	} cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 143 */;
	const struct cb_pcidda_board cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 110 */[];
	struct cb_pcidda_board {
		const char *name;
		int ao_chans;
		int ao_bits;
	} cocci_id/* drivers/staging/comedi/drivers/cb_pcidda.c 104 */;
}
