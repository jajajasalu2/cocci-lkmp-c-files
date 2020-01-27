cocci_test_suite() {
	const struct pcl816_board cocci_id/* drivers/staging/comedi/drivers/pcl816.c 93 */[];
	struct pcl816_board {
		const char *name;
		int ai_maxdata;
		int ai_chanlist;
	} cocci_id/* drivers/staging/comedi/drivers/pcl816.c 87 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/pcl816.c 74 */;
	struct pcl816_board cocci_id/* drivers/staging/comedi/drivers/pcl816.c 690 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/pcl816.c 683 */;
	const struct pcl816_board *cocci_id/* drivers/staging/comedi/drivers/pcl816.c 604 */;
	struct comedi_devconfig *cocci_id/* drivers/staging/comedi/drivers/pcl816.c 571 */;
	struct pcl816_private *cocci_id/* drivers/staging/comedi/drivers/pcl816.c 486 */;
	struct comedi_isadma_desc *cocci_id/* drivers/staging/comedi/drivers/pcl816.c 454 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/pcl816.c 409 */;
	struct comedi_isadma *cocci_id/* drivers/staging/comedi/drivers/pcl816.c 408 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/pcl816.c 284 */[16];
	unsigned int cocci_id/* drivers/staging/comedi/drivers/pcl816.c 282 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/pcl816.c 281 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/pcl816.c 280 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/pcl816.c 279 */;
	int cocci_id/* drivers/staging/comedi/drivers/pcl816.c 279 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/pcl816.c 241 */;
	void *cocci_id/* drivers/staging/comedi/drivers/pcl816.c 241 */;
	unsigned short cocci_id/* drivers/staging/comedi/drivers/pcl816.c 229 */;
	unsigned short *cocci_id/* drivers/staging/comedi/drivers/pcl816.c 226 */;
	bool cocci_id/* drivers/staging/comedi/drivers/pcl816.c 210 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/pcl816.c 200 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/pcl816.c 199 */;
	void cocci_id/* drivers/staging/comedi/drivers/pcl816.c 174 */;
	struct pcl816_private {
		struct comedi_isadma *dma;
		unsigned int ai_poll_ptr;
		unsigned int ai_cmd_running:1;
		unsigned int ai_cmd_canceled:1;
	} cocci_id/* drivers/staging/comedi/drivers/pcl816.c 105 */;
}
