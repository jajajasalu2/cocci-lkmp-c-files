cocci_test_suite() {
	unsigned long cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 998 */;
	const struct ni_660x_register_data cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 98 */[NI660X_NUM_REGS];
	struct ni_660x_register_data {
		int offset;
		char size;
	} cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 93 */;
	s8 cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 824 */;
	int cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 820 */;
	struct ni_660x_private *cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 740 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 738 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 736 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 736 */;
	u64 cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 629 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 533 */;
	const struct ni_660x_board *cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 503 */;
	struct mite_ring *cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 473 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 430 */;
	void *cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 430 */;
	struct mite_channel *cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 370 */;
	enum ni_660x_register{NI660X_STC_DIO_PARALLEL_INPUT=NITIO_NUM_REGS, NI660X_STC_DIO_OUTPUT, NI660X_STC_DIO_CONTROL, NI660X_STC_DIO_SERIAL_INPUT, NI660X_DIO32_INPUT, NI660X_DIO32_OUTPUT, NI660X_CLK_CFG, NI660X_GLOBAL_INT_STATUS, NI660X_DMA_CFG, NI660X_GLOBAL_INT_CFG, NI660X_IO_CFG_0_1, NI660X_IO_CFG_2_3, NI660X_IO_CFG_4_5, NI660X_IO_CFG_6_7, NI660X_IO_CFG_8_9, NI660X_IO_CFG_10_11, NI660X_IO_CFG_12_13, NI660X_IO_CFG_14_15, NI660X_IO_CFG_16_17, NI660X_IO_CFG_18_19, NI660X_IO_CFG_20_21, NI660X_IO_CFG_22_23, NI660X_IO_CFG_24_25, NI660X_IO_CFG_26_27, NI660X_IO_CFG_28_29, NI660X_IO_CFG_30_31, NI660X_IO_CFG_32_33, NI660X_IO_CFG_34_35, NI660X_IO_CFG_36_37, NI660X_IO_CFG_38_39, NI660X_NUM_REGS,} cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 37 */;
	enum comedi_io_direction cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 339 */;
	enum ni_gpct_register cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 303 */;
	struct ni_660x_private {
		struct mite *mite;
		struct ni_gpct_device *counter_dev;
		struct mite_ring *ring[NI660X_MAX_CHIPS][NI660X_COUNTERS_PER_CHIP];
		spinlock_t mite_channel_lock;
		spinlock_t interrupt_lock;
		unsigned int dma_cfg[NI660X_MAX_CHIPS];
		unsigned int io_cfg[NI660X_NUM_PFI_CHANNELS];
		u64 io_dir;
		struct ni_route_tables routing_tables;
	} cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 257 */;
	const struct ni_660x_board cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 216 */[];
	struct ni_660x_board {
		const char *name;
		unsigned int n_chips;
	} cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 211 */;
	enum ni_660x_boardid{BOARD_PCI6601, BOARD_PCI6602, BOARD_PXI6602, BOARD_PCI6608, BOARD_PXI6608, BOARD_PCI6624, BOARD_PXI6624,} cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 201 */;
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 1245 */;
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 1233 */[];
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 1228 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 1220 */;
	void cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 1202 */;
	struct ni_gpct *cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 1154 */;
	struct ni_gpct_device *cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 1004 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 1003 */;
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/ni_660x.c 1000 */;
}
