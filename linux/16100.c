cocci_test_suite() {
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/rti800.c 74 */;
	struct rti800_board cocci_id/* drivers/staging/comedi/drivers/rti800.c 351 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/rti800.c 344 */;
	const struct rti800_board *cocci_id/* drivers/staging/comedi/drivers/rti800.c 255 */;
	struct comedi_devconfig *cocci_id/* drivers/staging/comedi/drivers/rti800.c 253 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/rti800.c 156 */;
	struct rti800_private *cocci_id/* drivers/staging/comedi/drivers/rti800.c 155 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/rti800.c 153 */;
	unsigned char cocci_id/* drivers/staging/comedi/drivers/rti800.c 138 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/rti800.c 136 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/rti800.c 135 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/rti800.c 134 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/rti800.c 133 */;
	int cocci_id/* drivers/staging/comedi/drivers/rti800.c 133 */;
	struct rti800_private {
		bool adc_2comp;
		bool dac_2comp[2];
		const struct comedi_lrange *ao_range_type_list[2];
		unsigned char muxgain_bits;
	} cocci_id/* drivers/staging/comedi/drivers/rti800.c 126 */;
	const struct rti800_board cocci_id/* drivers/staging/comedi/drivers/rti800.c 117 */[];
	struct rti800_board {
		const char *name;
		int has_ao;
	} cocci_id/* drivers/staging/comedi/drivers/rti800.c 112 */;
	const struct comedi_lrange *const cocci_id/* drivers/staging/comedi/drivers/rti800.c 101 */[];
}
