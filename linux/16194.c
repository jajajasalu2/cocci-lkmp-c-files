cocci_test_suite() {
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 97 */;
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 737 */;
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 730 */[];
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 724 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 716 */;
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 627 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 531 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 519 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 518 */;
	unsigned char cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 459 */;
	struct comedi_async *cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 455 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 450 */;
	unsigned short *cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 395 */;
	void *cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 391 */;
	void cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 390 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 205 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 203 */;
	struct pci9111_private_data *cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 187 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 185 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 184 */;
	int cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 184 */;
	enum pci9111_ISC1_sources cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 153 */;
	enum pci9111_ISC0_sources cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 152 */;
	enum pci9111_ISC1_sources{irq_on_timer_tick, irq_on_external_trigger,} cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 146 */;
	enum pci9111_ISC0_sources{irq_on_eoc, irq_on_fifo_half_full,} cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 141 */;
	bool cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 118 */;
	struct pci9111_private_data {
		unsigned long lcr_io_base;
		unsigned int scan_delay;
		unsigned int chunk_counter;
		unsigned int chunk_num_samples;
		unsigned short ai_bounce_buffer[2 * PCI9111_FIFO_HALF_SIZE];
	} cocci_id/* drivers/staging/comedi/drivers/adl_pci9111.c 107 */;
}
