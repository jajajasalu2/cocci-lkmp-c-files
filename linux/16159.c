cocci_test_suite() {
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/me_daq.c 93 */;
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/me_daq.c 545 */;
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/me_daq.c 538 */[];
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/me_daq.c 533 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/me_daq.c 525 */;
	void cocci_id/* drivers/staging/comedi/drivers/me_daq.c 512 */;
	const struct me_board *cocci_id/* drivers/staging/comedi/drivers/me_daq.c 431 */;
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/me_daq.c 430 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/me_daq.c 344 */;
	struct me_private_data *cocci_id/* drivers/staging/comedi/drivers/me_daq.c 343 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/me_daq.c 341 */;
	const u8 *cocci_id/* drivers/staging/comedi/drivers/me_daq.c 340 */;
	size_t cocci_id/* drivers/staging/comedi/drivers/me_daq.c 340 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/me_daq.c 339 */;
	int cocci_id/* drivers/staging/comedi/drivers/me_daq.c 339 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/me_daq.c 231 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/me_daq.c 217 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/me_daq.c 216 */;
	void __iomem *cocci_id/* drivers/staging/comedi/drivers/me_daq.c 187 */;
	struct me_private_data {
		void __iomem *plx_regbase;
		unsigned short ctrl1;
		unsigned short ctrl2;
		unsigned short dac_ctrl;
	} cocci_id/* drivers/staging/comedi/drivers/me_daq.c 136 */;
	const struct me_board cocci_id/* drivers/staging/comedi/drivers/me_daq.c 125 */[];
	struct me_board {
		const char *name;
		int needs_firmware;
		int has_ao;
	} cocci_id/* drivers/staging/comedi/drivers/me_daq.c 119 */;
	enum me_boardid{BOARD_ME2600, BOARD_ME2000,} cocci_id/* drivers/staging/comedi/drivers/me_daq.c 114 */;
}
