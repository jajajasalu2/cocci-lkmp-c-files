cocci_test_suite() {
	struct dt282x_private *cocci_id/* drivers/staging/comedi/drivers/dt282x.c 780 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/dt282x.c 778 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/dt282x.c 777 */;
	int cocci_id/* drivers/staging/comedi/drivers/dt282x.c 777 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/dt282x.c 722 */;
	struct comedi_isadma *cocci_id/* drivers/staging/comedi/drivers/dt282x.c 721 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/dt282x.c 665 */;
	const struct dt282x_board *cocci_id/* drivers/staging/comedi/drivers/dt282x.c 662 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/dt282x.c 618 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/dt282x.c 617 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/dt282x.c 589 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/dt282x.c 501 */;
	void *cocci_id/* drivers/staging/comedi/drivers/dt282x.c 501 */;
	struct comedi_isadma_desc *cocci_id/* drivers/staging/comedi/drivers/dt282x.c 464 */;
	void cocci_id/* drivers/staging/comedi/drivers/dt282x.c 459 */;
	unsigned short *cocci_id/* drivers/staging/comedi/drivers/dt282x.c 401 */;
	struct dt282x_private {
		struct comedi_isadma *dma;
		unsigned int ad_2scomp:1;
		unsigned int divisor;
		int dacsr;
		int adcsr;
		int supcsr;
		int ntrig;
		int nread;
		int dma_dir;
	} cocci_id/* drivers/staging/comedi/drivers/dt282x.c 304 */;
	const struct dt282x_board cocci_id/* drivers/staging/comedi/drivers/dt282x.c 199 */[];
	struct dt282x_board {
		const char *name;
		unsigned int ai_maxdata;
		int adchan_se;
		int adchan_di;
		int ai_speed;
		int ispgl;
		int dachan;
		unsigned int ao_maxdata;
	} cocci_id/* drivers/staging/comedi/drivers/dt282x.c 188 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/dt282x.c 178 */;
	struct dt282x_board cocci_id/* drivers/staging/comedi/drivers/dt282x.c 1194 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/dt282x.c 1187 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/dt282x.c 1034 */[2];
	struct comedi_devconfig *cocci_id/* drivers/staging/comedi/drivers/dt282x.c 1030 */;
	const struct comedi_lrange *cocci_id/* drivers/staging/comedi/drivers/dt282x.c 1016 */;
	const struct comedi_lrange *const cocci_id/* drivers/staging/comedi/drivers/dt282x.c 1011 */[];
}
