cocci_test_suite() {
	struct comedi_devconfig *cocci_id/* drivers/staging/comedi/drivers/pcl818.c 981 */;
	struct comedi_isadma *cocci_id/* drivers/staging/comedi/drivers/pcl818.c 763 */;
	struct pcl818_private *cocci_id/* drivers/staging/comedi/drivers/pcl818.c 762 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/pcl818.c 688 */;
	const struct pcl818_board *cocci_id/* drivers/staging/comedi/drivers/pcl818.c 637 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/pcl818.c 635 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/pcl818.c 634 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/pcl818.c 634 */;
	int cocci_id/* drivers/staging/comedi/drivers/pcl818.c 634 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/pcl818.c 575 */[16];
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/pcl818.c 573 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/pcl818.c 534 */;
	void *cocci_id/* drivers/staging/comedi/drivers/pcl818.c 534 */;
	unsigned short *cocci_id/* drivers/staging/comedi/drivers/pcl818.c 480 */;
	bool cocci_id/* drivers/staging/comedi/drivers/pcl818.c 424 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/pcl818.c 414 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/pcl818.c 413 */;
	void cocci_id/* drivers/staging/comedi/drivers/pcl818.c 369 */;
	struct comedi_isadma_desc *cocci_id/* drivers/staging/comedi/drivers/pcl818.c 307 */;
	struct pcl818_private {
		struct comedi_isadma *dma;
		unsigned int ns_min;
		unsigned int act_chanlist[16];
		unsigned int act_chanlist_len;
		unsigned int act_chanlist_pos;
		unsigned int usefifo:1;
		unsigned int ai_cmd_running:1;
		unsigned int ai_cmd_canceled:1;
	} cocci_id/* drivers/staging/comedi/drivers/pcl818.c 288 */;
	const struct pcl818_board cocci_id/* drivers/staging/comedi/drivers/pcl818.c 235 */[];
	struct pcl818_board {
		const char *name;
		unsigned int ns_min;
		int n_aochan;
		const struct comedi_lrange *ai_range_type;
		unsigned int has_dma:1;
		unsigned int has_fifo:1;
		unsigned int is_818:1;
	} cocci_id/* drivers/staging/comedi/drivers/pcl818.c 225 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/pcl818.c 207 */;
	struct pcl818_board cocci_id/* drivers/staging/comedi/drivers/pcl818.c 1131 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/pcl818.c 1124 */;
}
