cocci_test_suite() {
	struct das16m1_private {
		struct comedi_8254 *counter;
		unsigned int intr_ctrl;
		unsigned int adc_count;
		u16 initial_hw_count;
		unsigned short ai_buffer[DAS16M1_AI_FIFO_SZ];
		unsigned long extra_iobase;
	} cocci_id/* drivers/staging/comedi/drivers/das16m1.c 97 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/das16m1.c 83 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/das16m1.c 612 */;
	struct comedi_devconfig *cocci_id/* drivers/staging/comedi/drivers/das16m1.c 505 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/das16m1.c 451 */;
	u16 cocci_id/* drivers/staging/comedi/drivers/das16m1.c 380 */;
	unsigned short cocci_id/* drivers/staging/comedi/drivers/das16m1.c 333 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/das16m1.c 325 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/das16m1.c 312 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/das16m1.c 311 */;
	struct das16m1_private *cocci_id/* drivers/staging/comedi/drivers/das16m1.c 299 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/das16m1.c 297 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/das16m1.c 296 */;
	int cocci_id/* drivers/staging/comedi/drivers/das16m1.c 296 */;
	struct comedi_async *cocci_id/* drivers/staging/comedi/drivers/das16m1.c 243 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/das16m1.c 155 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/das16m1.c 141 */;
	unsigned short *cocci_id/* drivers/staging/comedi/drivers/das16m1.c 126 */;
	void *cocci_id/* drivers/staging/comedi/drivers/das16m1.c 123 */;
	void cocci_id/* drivers/staging/comedi/drivers/das16m1.c 121 */;
}
