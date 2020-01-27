cocci_test_suite() {
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/dt2801.c 635 */;
	struct dt2801_private *cocci_id/* drivers/staging/comedi/drivers/dt2801.c 537 */;
	const struct dt2801_board *cocci_id/* drivers/staging/comedi/drivers/dt2801.c 536 */;
	struct comedi_devconfig *cocci_id/* drivers/staging/comedi/drivers/dt2801.c 534 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/dt2801.c 474 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/dt2801.c 448 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/dt2801.c 448 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/dt2801.c 447 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/dt2801.c 446 */;
	const struct comedi_lrange *cocci_id/* drivers/staging/comedi/drivers/dt2801.c 414 */;
	int cocci_id/* drivers/staging/comedi/drivers/dt2801.c 414 */;
	const struct comedi_lrange *cocci_id/* drivers/staging/comedi/drivers/dt2801.c 399 */[];
	void cocci_id/* drivers/staging/comedi/drivers/dt2801.c 315 */;
	int *cocci_id/* drivers/staging/comedi/drivers/dt2801.c 227 */;
	struct dt2801_private {
		const struct comedi_lrange *dac_range_types[2];
	} cocci_id/* drivers/staging/comedi/drivers/dt2801.c 211 */;
	const struct dt2801_board cocci_id/* drivers/staging/comedi/drivers/dt2801.c 144 */[];
	struct dt2801_board {
		const char *name;
		int boardcode;
		int ad_diff;
		int ad_chan;
		int adbits;
		int adrangetype;
		int dabits;
	} cocci_id/* drivers/staging/comedi/drivers/dt2801.c 130 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/dt2801.c 101 */;
}
