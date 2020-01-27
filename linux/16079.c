cocci_test_suite() {
	struct pcmuio_board cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 617 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 611 */;
	void cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 597 */;
	struct pcmuio_asic *cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 538 */;
	struct pcmuio_private *cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 524 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 523 */;
	const struct pcmuio_board *cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 522 */;
	struct comedi_devconfig *cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 520 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 451 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 360 */;
	void *cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 360 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 219 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 215 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 214 */;
	int cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 130 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 129 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 129 */;
	struct pcmuio_private {
		struct pcmuio_asic asics[PCMUIO_MAX_ASICS];
		unsigned int irq2;
	} cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 124 */;
	struct pcmuio_asic {
		spinlock_t pagelock;
		spinlock_t spinlock;
		unsigned int enabled_mask;
		unsigned int active:1;
	} cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 117 */;
	const struct pcmuio_board cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 107 */[];
	struct pcmuio_board {
		const char *name;
		const int num_asics;
	} cocci_id/* drivers/staging/comedi/drivers/pcmuio.c 102 */;
}
