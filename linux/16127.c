cocci_test_suite() {
	struct a2150_board {
		const char *name;
		int clock[4];
		int num_clocks;
		int ai_speed;
	} cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 93 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 772 */;
	const int cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 691 */;
	struct comedi_devconfig *cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 638 */;
	void cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 637 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 579 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 568 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 567 */;
	struct comedi_async *cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 469 */;
	struct comedi_isadma_desc *cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 468 */;
	struct comedi_isadma *cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 467 */;
	struct a2150_private *cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 466 */;
	const struct a2150_board *cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 397 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 356 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 354 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 353 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 352 */;
	int cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 352 */;
	unsigned short cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 143 */;
	unsigned short *cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 141 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 132 */;
	void *cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 132 */;
	struct a2150_private {
		struct comedi_isadma *dma;
		unsigned int count;
		int irq_dma_bits;
		int config_bits;
	} cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 124 */;
	const struct a2150_board cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 109 */[];
	enum{a2150_c, a2150_s,} cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 108 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/ni_at_a2150.c 101 */;
}
