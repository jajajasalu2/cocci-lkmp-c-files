cocci_test_suite() {
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/dt3000.c 731 */;
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/dt3000.c 719 */[];
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/dt3000.c 714 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/dt3000.c 706 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/dt3000.c 616 */;
	struct dt3k_private *cocci_id/* drivers/staging/comedi/drivers/dt3000.c 615 */;
	const struct dt3k_boardtype *cocci_id/* drivers/staging/comedi/drivers/dt3000.c 614 */;
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/dt3000.c 613 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/dt3000.c 611 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/dt3000.c 610 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/dt3000.c 508 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/dt3000.c 507 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/dt3000.c 458 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/dt3000.c 456 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/dt3000.c 317 */;
	void *cocci_id/* drivers/staging/comedi/drivers/dt3000.c 317 */;
	int cocci_id/* drivers/staging/comedi/drivers/dt3000.c 313 */;
	unsigned short cocci_id/* drivers/staging/comedi/drivers/dt3000.c 281 */;
	void cocci_id/* drivers/staging/comedi/drivers/dt3000.c 273 */;
	struct dt3k_private {
		unsigned int lock;
		unsigned int ai_front;
		unsigned int ai_rear;
	} cocci_id/* drivers/staging/comedi/drivers/dt3000.c 221 */;
	const struct dt3k_boardtype cocci_id/* drivers/staging/comedi/drivers/dt3000.c 168 */[];
	struct dt3k_boardtype {
		const char *name;
		int adchan;
		int ai_speed;
		const struct comedi_lrange *adrange;
		unsigned int ai_is_16bit:1;
		unsigned int has_ao:1;
	} cocci_id/* drivers/staging/comedi/drivers/dt3000.c 159 */;
	enum dt3k_boardid{BOARD_DT3001, BOARD_DT3001_PGL, BOARD_DT3002, BOARD_DT3003, BOARD_DT3003_PGL, BOARD_DT3004, BOARD_DT3005,} cocci_id/* drivers/staging/comedi/drivers/dt3000.c 149 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/dt3000.c 131 */;
}
