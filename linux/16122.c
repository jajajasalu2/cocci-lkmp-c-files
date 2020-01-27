cocci_test_suite() {
	struct atmio16_board_t cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 733 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 726 */;
	const struct atmio16_board_t cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 716 */[];
	void cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 710 */;
	const struct atmio16_board_t *cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 583 */;
	struct comedi_devconfig *cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 581 */;
	bool cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 516 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 470 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 454 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 453 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 444 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 443 */;
	int cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 443 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 301 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 300 */;
	struct atmio16d_private *cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 299 */;
	unsigned short cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 225 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 221 */;
	void *cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 221 */;
	struct atmio16d_private {
		enum{adc_diff, adc_singleended,} adc_mux;
		enum{adc_bipolar10, adc_bipolar5, adc_unipolar10,} adc_range;
		enum{adc_2comp, adc_straight,} adc_coding;
		enum{dac_bipolar, dac_unipolar,} dac0_range,dac1_range;
		enum{dac_internal, dac_external,} dac0_reference,dac1_reference;
		enum{dac_2comp, dac_straight,} dac0_coding,dac1_coding;
		const struct comedi_lrange *ao_range_type_list[2];
		unsigned int com_reg_1_state;
		unsigned int com_reg_2_state;
	} cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 138 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 110 */;
	struct atmio16_board_t {
		const char *name;
		int has_8255;
	} cocci_id/* drivers/staging/comedi/drivers/ni_atmio16d.c 104 */;
}
