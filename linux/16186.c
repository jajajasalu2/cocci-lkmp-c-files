cocci_test_suite() {
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 992 */[];
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 987 */;
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 986 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 979 */;
	const char *const cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 846 */[3];
	const int cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 760 */;
	const u8 *cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 757 */;
	size_t cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 757 */;
	struct nidio96_private *cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 744 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 733 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 732 */;
	int cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 732 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 621 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 532 */;
	int *cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 505 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 495 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 494 */;
	const struct nidio_board *cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 475 */;
	struct comedi_async *cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 379 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 374 */;
	void *cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 374 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 361 */;
	void cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 317 */;
	struct nidio96_private {
		struct mite *mite;
		int boardtype;
		int dio;
		unsigned short OP_MODEBits;
		struct mite_channel *di_mite_chan;
		struct mite_ring *di_mite_ring;
		spinlock_t mite_channel_lock;
	} cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 284 */;
	const struct nidio_board cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 268 */[];
	struct nidio_board {
		const char *name;
		unsigned int uses_firmware:1;
		unsigned int dio_speed;
	} cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 262 */;
	enum nidio_boardid{BOARD_PCIDIO_32HS, BOARD_PXI6533, BOARD_PCI6534,} cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 256 */;
	enum FPGA_Control_Bits{FPGA_Enable_Bit=0x8000,} cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 243 */;
	enum pci_6534_fpga_registers{FPGA_Control1_Register=0x200, FPGA_Control2_Register=0x204, FPGA_Irq_Mask_Register=0x208, FPGA_Status_Register=0x20c, FPGA_Signature_Register=0x210, FPGA_SCALS_Counter_Register=0x280, FPGA_SCAMS_Counter_Register=0x284, FPGA_SCBLS_Counter_Register=0x288, FPGA_SCBMS_Counter_Register=0x28c, FPGA_Temp_Control_Register=0x2a0, FPGA_DAR_Register=0x2a8, FPGA_ELC_Read_Register=0x2b8, FPGA_ELC_Write_Register=0x2bc,} cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 227 */;
	enum pci_6534_firmware_registers{Firmware_Control_Register=0x100, Firmware_Status_Register=0x104, Firmware_Data_Register=0x108, Firmware_Mask_Register=0x10c, Firmware_Debug_Register=0x110,} cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 218 */;
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/ni_pcidio.c 1000 */;
}
