cocci_test_suite() {
	short cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 750 */;
	struct mite_channel *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 721 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 67 */;
	struct ni_gpct *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 6255 */;
	enum comedi_io_direction cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 615 */;
	const char *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 5973 */;
	struct ni_private *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 5959 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 5957 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 5955 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 5955 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 5883 */;
	void *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 5883 */;
	s8 cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 5706 */;
	const short cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 53 */[][16];
	const int cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 5253 */[];
	const unsigned int cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 4815 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 4809 */;
	unsigned short *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 4777 */;
	const int cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 4757 */;
	enum ni_pfi_filter_select cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 4640 */;
	int cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 4429 */;
	const struct ni_board_struct *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 4427 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 4425 */;
	struct caldac_struct cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 4346 */[];
	struct caldac_struct {
		int n_chans;
		int n_bits;
		int (*packbits)(int address, int value, int *bitstring);
	} cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 4340 */;
	int *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 4322 */;
	const struct mio_regmap *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 414 */;
	enum ni_gpct_register cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 4052 */;
	const struct mio_regmap cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 390 */[];
	unsigned char *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 3751 */;
	unsigned char cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 3750 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 3725 */;
	struct mio_regmap {
		unsigned int mio_reg;
		int size;
	} cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 287 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 2665 */[];
	const struct comedi_krange *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 2570 */;
	__le16 cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 2525 */;
	const struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 2166 */;
	enum timebase_nanoseconds{TIMEBASE_1_NS=50, TIMEBASE_2_NS=10000,} cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 210 */;
	struct mite_ring *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 1955 */;
	const struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 1927 */;
	enum ni_common_subdevices{NI_AI_SUBDEV, NI_AO_SUBDEV, NI_DIO_SUBDEV, NI_8255_DIO_SUBDEV, NI_UNUSED_SUBDEV, NI_CALIBRATION_SUBDEV, NI_EEPROM_SUBDEV, NI_PFI_DIO_SUBDEV, NI_CS5529_CALIBRATION_SUBDEV, NI_SERIAL_SUBDEV, NI_RTSI_SUBDEV, NI_GPCT0_SUBDEV, NI_GPCT1_SUBDEV, NI_FREQ_OUT_SUBDEV, NI_NUM_SUBDEVICES,} cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 190 */;
	enum aimodes{AIMODE_NONE=0, AIMODE_HALF_FULL=1, AIMODE_SCAN=2, AIMODE_SAMPLE=3,} cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 183 */;
	const struct comedi_lrange *const cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 172 */[];
	__le32 *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 1409 */;
	__le16 *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 1408 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 1288 */;
	unsigned short cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 1266 */;
	void cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 1266 */;
	struct comedi_async *cocci_id/* drivers/staging/comedi/drivers/ni_mio_common.c 1043 */;
}
