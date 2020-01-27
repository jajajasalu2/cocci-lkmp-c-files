cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/me4000.c 920 */;
	void *cocci_id/* drivers/staging/comedi/drivers/me4000.c 920 */;
	struct me4000_private *cocci_id/* drivers/staging/comedi/drivers/me4000.c 654 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/me4000.c 538 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/me4000.c 536 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/me4000.c 527 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/me4000.c 526 */;
	int cocci_id/* drivers/staging/comedi/drivers/me4000.c 526 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/me4000.c 463 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/me4000.c 450 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/me4000.c 449 */;
	void cocci_id/* drivers/staging/comedi/drivers/me4000.c 385 */;
	const u8 *cocci_id/* drivers/staging/comedi/drivers/me4000.c 309 */;
	size_t cocci_id/* drivers/staging/comedi/drivers/me4000.c 309 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/me4000.c 299 */;
	const struct me4000_board cocci_id/* drivers/staging/comedi/drivers/me4000.c 188 */[];
	struct me4000_board {
		const char *name;
		int ai_nchan;
		unsigned int can_do_diff_ai:1;
		unsigned int can_do_sh_ai:1;
		unsigned int ex_trig_analog:1;
		unsigned int has_ao:1;
		unsigned int has_ao_fifo:1;
		unsigned int has_counter:1;
	} cocci_id/* drivers/staging/comedi/drivers/me4000.c 177 */;
	enum me4000_boardid{BOARD_ME4650, BOARD_ME4660, BOARD_ME4660I, BOARD_ME4660S, BOARD_ME4660IS, BOARD_ME4670, BOARD_ME4670I, BOARD_ME4670S, BOARD_ME4670IS, BOARD_ME4680, BOARD_ME4680I, BOARD_ME4680S, BOARD_ME4680IS,} cocci_id/* drivers/staging/comedi/drivers/me4000.c 161 */;
	struct me4000_private {
		unsigned long plx_regbase;
		unsigned int ai_ctrl_mode;
		unsigned int ai_init_ticks;
		unsigned int ai_scan_ticks;
		unsigned int ai_chan_ticks;
	} cocci_id/* drivers/staging/comedi/drivers/me4000.c 153 */;
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/me4000.c 1267 */;
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/me4000.c 1249 */[];
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/me4000.c 1244 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/me4000.c 1236 */;
	const struct me4000_board *cocci_id/* drivers/staging/comedi/drivers/me4000.c 1099 */;
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/me4000.c 1098 */;
}
