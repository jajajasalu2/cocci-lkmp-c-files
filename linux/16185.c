cocci_test_suite() {
	const struct das16cs_board cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 97 */[];
	struct das16cs_board {
		const char *name;
		int device_id;
		unsigned int has_ao:1;
		unsigned int has_4dio:1;
	} cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 90 */;
	struct pcmcia_driver cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 445 */;
	const struct pcmcia_device_id cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 438 */[];
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 426 */;
	const struct das16cs_board *cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 345 */;
	struct pcmcia_device *cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 344 */;
	const void *cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 326 */;
	unsigned short cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 201 */;
	struct das16cs_private *cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 144 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 142 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 131 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 129 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 128 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 127 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 126 */;
	int cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 126 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 117 */;
	struct das16cs_private {
		unsigned short misc1;
		unsigned short misc2;
	} cocci_id/* drivers/staging/comedi/drivers/cb_das16_cs.c 112 */;
}
