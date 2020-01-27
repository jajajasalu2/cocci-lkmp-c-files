cocci_test_suite() {
	struct pcl726_board {
		const char *name;
		unsigned long io_len;
		unsigned int irq_mask;
		const struct comedi_lrange *const *ao_ranges;
		int ao_num_ranges;
		int ao_nchan;
		unsigned int have_dio:1;
		unsigned int is_pcl727:1;
	} cocci_id/* drivers/staging/comedi/drivers/pcl726.c 93 */;
	const struct comedi_lrange *const cocci_id/* drivers/staging/comedi/drivers/pcl726.c 68 */[];
	struct pcl726_board cocci_id/* drivers/staging/comedi/drivers/pcl726.c 417 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/pcl726.c 410 */;
	struct pcl726_private *cocci_id/* drivers/staging/comedi/drivers/pcl726.c 312 */;
	const struct pcl726_board *cocci_id/* drivers/staging/comedi/drivers/pcl726.c 311 */;
	struct comedi_devconfig *cocci_id/* drivers/staging/comedi/drivers/pcl726.c 309 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/pcl726.c 285 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/pcl726.c 237 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/pcl726.c 235 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/pcl726.c 234 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/pcl726.c 233 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/pcl726.c 232 */;
	int cocci_id/* drivers/staging/comedi/drivers/pcl726.c 232 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/pcl726.c 216 */;
	void *cocci_id/* drivers/staging/comedi/drivers/pcl726.c 216 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/pcl726.c 159 */;
	struct pcl726_private {
		const struct comedi_lrange *rangelist[12];
		unsigned int cmd_running:1;
	} cocci_id/* drivers/staging/comedi/drivers/pcl726.c 143 */;
	const struct pcl726_board cocci_id/* drivers/staging/comedi/drivers/pcl726.c 104 */[];
}
