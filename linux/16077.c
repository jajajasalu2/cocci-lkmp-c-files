cocci_test_suite() {
	u16 cocci_id/* drivers/staging/comedi/drivers/rtd520.c 615 */;
	u32 cocci_id/* drivers/staging/comedi/drivers/rtd520.c 614 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/rtd520.c 609 */;
	void *cocci_id/* drivers/staging/comedi/drivers/rtd520.c 609 */;
	unsigned short cocci_id/* drivers/staging/comedi/drivers/rtd520.c 585 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/rtd520.c 584 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/rtd520.c 580 */;
	struct comedi_async *cocci_id/* drivers/staging/comedi/drivers/rtd520.c 579 */;
	struct rtd_private *cocci_id/* drivers/staging/comedi/drivers/rtd520.c 578 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/rtd520.c 575 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/rtd520.c 575 */;
	int cocci_id/* drivers/staging/comedi/drivers/rtd520.c 575 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/rtd520.c 534 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/rtd520.c 522 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/rtd520.c 521 */;
	const unsigned int cocci_id/* drivers/staging/comedi/drivers/rtd520.c 486 */;
	struct rtd_private {
		void __iomem *las1;
		void __iomem *lcfg;
		long ai_count;
		int xfer_count;
		int flags;
		unsigned int fifosz;
		unsigned char timer_gate_src[3];
		unsigned char timer_clk_src[3];
	} cocci_id/* drivers/staging/comedi/drivers/rtd520.c 348 */;
	const struct rtd_boardinfo cocci_id/* drivers/staging/comedi/drivers/rtd520.c 333 */[];
	struct rtd_boardinfo {
		const char *name;
		int range_bip10;
		int range_uni10;
		const struct comedi_lrange *ai_range;
	} cocci_id/* drivers/staging/comedi/drivers/rtd520.c 326 */;
	enum rtd_boardid{BOARD_DM7520, BOARD_PCI4520,} cocci_id/* drivers/staging/comedi/drivers/rtd520.c 321 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/rtd520.c 279 */;
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/rtd520.c 1356 */;
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/rtd520.c 1349 */[];
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/rtd520.c 1344 */;
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/rtd520.c 1343 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/rtd520.c 1336 */;
	void cocci_id/* drivers/staging/comedi/drivers/rtd520.c 1316 */;
	const struct rtd_boardinfo *cocci_id/* drivers/staging/comedi/drivers/rtd520.c 1212 */;
	unsigned char cocci_id/* drivers/staging/comedi/drivers/rtd520.c 1197 */;
}
