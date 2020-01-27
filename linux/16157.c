cocci_test_suite() {
	unsigned short cocci_id/* drivers/staging/comedi/drivers/das1800.c 949 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/das1800.c 943 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/das1800.c 930 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/das1800.c 929 */;
	const struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/das1800.c 841 */;
	struct comedi_async *cocci_id/* drivers/staging/comedi/drivers/das1800.c 840 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/das1800.c 728 */;
	unsigned char cocci_id/* drivers/staging/comedi/drivers/das1800.c 727 */;
	const struct das1800_board *cocci_id/* drivers/staging/comedi/drivers/das1800.c 638 */;
	bool cocci_id/* drivers/staging/comedi/drivers/das1800.c 618 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/das1800.c 615 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/das1800.c 512 */;
	void cocci_id/* drivers/staging/comedi/drivers/das1800.c 447 */;
	struct comedi_isadma_desc *cocci_id/* drivers/staging/comedi/drivers/das1800.c 428 */;
	struct comedi_isadma *cocci_id/* drivers/staging/comedi/drivers/das1800.c 427 */;
	struct das1800_private *cocci_id/* drivers/staging/comedi/drivers/das1800.c 426 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/das1800.c 424 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/das1800.c 423 */;
	int cocci_id/* drivers/staging/comedi/drivers/das1800.c 423 */;
	const int cocci_id/* drivers/staging/comedi/drivers/das1800.c 386 */;
	unsigned short *cocci_id/* drivers/staging/comedi/drivers/das1800.c 328 */;
	void *cocci_id/* drivers/staging/comedi/drivers/das1800.c 324 */;
	struct das1800_private {
		struct comedi_isadma *dma;
		int irq_dma_bits;
		int dma_bits;
		unsigned short *fifo_buf;
		unsigned long iobase2;
		bool ai_is_unipolar;
	} cocci_id/* drivers/staging/comedi/drivers/das1800.c 313 */;
	const struct das1800_board cocci_id/* drivers/staging/comedi/drivers/das1800.c 213 */[];
	struct das1800_board {
		const char *name;
		unsigned char id;
		unsigned int ai_speed;
		unsigned int is_01_series:1;
	} cocci_id/* drivers/staging/comedi/drivers/das1800.c 206 */;
	enum das1800_boardid{BOARD_DAS1701ST, BOARD_DAS1701ST_DA, BOARD_DAS1702ST, BOARD_DAS1702ST_DA, BOARD_DAS1702HR, BOARD_DAS1702HR_DA, BOARD_DAS1701AO, BOARD_DAS1702AO, BOARD_DAS1801ST, BOARD_DAS1801ST_DA, BOARD_DAS1802ST, BOARD_DAS1802ST_DA, BOARD_DAS1802HR, BOARD_DAS1802HR_DA, BOARD_DAS1801HC, BOARD_DAS1802HC, BOARD_DAS1801AO, BOARD_DAS1802AO,} cocci_id/* drivers/staging/comedi/drivers/das1800.c 177 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/das1800.c 145 */;
	struct das1800_board cocci_id/* drivers/staging/comedi/drivers/das1800.c 1358 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/das1800.c 1351 */;
	struct comedi_devconfig *cocci_id/* drivers/staging/comedi/drivers/das1800.c 1163 */;
}
