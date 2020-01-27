cocci_test_suite() {
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 713 */;
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 706 */[];
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 701 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 693 */;
	struct plx_dma_desc cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 634 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 585 */;
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 583 */;
	int cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 580 */;
	void __iomem *cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 540 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 457 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 456 */;
	dma_addr_t cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 415 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 332 */;
	u32 cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 282 */;
	struct comedi_async *cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 279 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 254 */;
	struct hpdi_private *cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 253 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 251 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 251 */;
	void cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 251 */;
	u8 cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 186 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 177 */;
	void *cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 177 */;
	struct hpdi_private {
		void __iomem *plx9080_mmio;
		u32 *dio_buffer[NUM_DMA_BUFFERS];
		dma_addr_t dio_buffer_phys_addr[NUM_DMA_BUFFERS];
		struct plx_dma_desc *dma_desc;
		dma_addr_t dma_desc_phys_addr;
		unsigned int num_dma_descriptors;
		u32 *desc_dio_buffer[NUM_DMA_DESCRIPTORS];
		unsigned int dma_desc_index;
		unsigned int tx_fifo_size;
		unsigned int rx_fifo_size;
		unsigned long dio_count;
		unsigned int block_size;
	} cocci_id/* drivers/staging/comedi/drivers/gsc_hpdi.c 117 */;
}
