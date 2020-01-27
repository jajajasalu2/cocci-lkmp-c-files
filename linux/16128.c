cocci_test_suite() {
	struct comedi_devconfig *cocci_id/* drivers/staging/comedi/drivers/rti802.c 68 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/rti802.c 47 */;
	struct rti802_private *cocci_id/* drivers/staging/comedi/drivers/rti802.c 46 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/rti802.c 44 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/rti802.c 43 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/rti802.c 42 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/rti802.c 41 */;
	int cocci_id/* drivers/staging/comedi/drivers/rti802.c 41 */;
	struct rti802_private {
		enum{dac_2comp, dac_straight,} dac_coding[8];
		const struct comedi_lrange *range_type_list[8];
	} cocci_id/* drivers/staging/comedi/drivers/rti802.c 34 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/rti802.c 110 */;
}
