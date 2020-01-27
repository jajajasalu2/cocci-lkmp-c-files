cocci_test_suite() {
	struct pcl730_board cocci_id/* drivers/staging/comedi/drivers/pcl730.c 344 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/pcl730.c 337 */;
	void *cocci_id/* drivers/staging/comedi/drivers/pcl730.c 291 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/pcl730.c 268 */;
	const struct pcl730_board *cocci_id/* drivers/staging/comedi/drivers/pcl730.c 267 */;
	struct comedi_devconfig *cocci_id/* drivers/staging/comedi/drivers/pcl730.c 265 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/pcl730.c 264 */;
	int cocci_id/* drivers/staging/comedi/drivers/pcl730.c 264 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/pcl730.c 257 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/pcl730.c 256 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/pcl730.c 218 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/pcl730.c 217 */;
	const struct pcl730_board cocci_id/* drivers/staging/comedi/drivers/pcl730.c 116 */[];
	struct pcl730_board {
		const char *name;
		unsigned int io_range;
		unsigned is_pcl725:1;
		unsigned is_acl7225b:1;
		unsigned is_ir104:1;
		unsigned has_readback:1;
		unsigned has_ttl_io:1;
		int n_subdevs;
		int n_iso_out_chan;
		int n_iso_in_chan;
		int n_ttl_chan;
	} cocci_id/* drivers/staging/comedi/drivers/pcl730.c 102 */;
}
