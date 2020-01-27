cocci_test_suite() {
	struct platform_driver cocci_id/* sound/soc/sprd/sprd-mcdt.c 997 */;
	const struct of_device_id cocci_id/* sound/soc/sprd/sprd-mcdt.c 991 */[];
	enum sprd_mcdt_fifo_sts{MCDT_ADC_FIFO_REAL_FULL, MCDT_ADC_FIFO_REAL_EMPTY, MCDT_ADC_FIFO_AF, MCDT_ADC_FIFO_AE, MCDT_DAC_FIFO_REAL_FULL, MCDT_DAC_FIFO_REAL_EMPTY, MCDT_DAC_FIFO_AF, MCDT_DAC_FIFO_AE,} cocci_id/* sound/soc/sprd/sprd-mcdt.c 97 */;
	struct platform_device *cocci_id/* sound/soc/sprd/sprd-mcdt.c 942 */;
	struct resource *cocci_id/* sound/soc/sprd/sprd-mcdt.c 915 */;
	enum sprd_mcdt_fifo_int{MCDT_ADC_FIFO_AE_INT, MCDT_ADC_FIFO_AF_INT, MCDT_DAC_FIFO_AE_INT, MCDT_DAC_FIFO_AF_INT, MCDT_ADC_FIFO_OV_INT, MCDT_DAC_FIFO_OV_INT,} cocci_id/* sound/soc/sprd/sprd-mcdt.c 88 */;
	enum sprd_mcdt_channel_type cocci_id/* sound/soc/sprd/sprd-mcdt.c 867 */;
	unsigned long cocci_id/* sound/soc/sprd/sprd-mcdt.c 830 */;
	struct sprd_mcdt_chan *cocci_id/* sound/soc/sprd/sprd-mcdt.c 827 */;
	int cocci_id/* sound/soc/sprd/sprd-mcdt.c 773 */;
	struct sprd_mcdt_chan_callback *cocci_id/* sound/soc/sprd/sprd-mcdt.c 672 */;
	char *cocci_id/* sound/soc/sprd/sprd-mcdt.c 620 */;
	irqreturn_t cocci_id/* sound/soc/sprd/sprd-mcdt.c 522 */;
	void *cocci_id/* sound/soc/sprd/sprd-mcdt.c 522 */;
	enum sprd_mcdt_fifo_int cocci_id/* sound/soc/sprd/sprd-mcdt.c 479 */;
	enum sprd_mcdt_fifo_sts cocci_id/* sound/soc/sprd/sprd-mcdt.c 340 */;
	u32 cocci_id/* sound/soc/sprd/sprd-mcdt.c 320 */;
	enum sprd_mcdt_dma_chan cocci_id/* sound/soc/sprd/sprd-mcdt.c 318 */;
	u8 cocci_id/* sound/soc/sprd/sprd-mcdt.c 317 */;
	struct sprd_mcdt_dev *cocci_id/* sound/soc/sprd/sprd-mcdt.c 317 */;
	void cocci_id/* sound/soc/sprd/sprd-mcdt.c 317 */;
	u32 *cocci_id/* sound/soc/sprd/sprd-mcdt.c 191 */;
	bool cocci_id/* sound/soc/sprd/sprd-mcdt.c 164 */;
	struct sprd_mcdt_dev {
		struct device *dev;
		void __iomem *base;
		spinlock_t lock;
		struct sprd_mcdt_chan chan[MCDT_CHANNEL_NUM];
	} cocci_id/* sound/soc/sprd/sprd-mcdt.c 108 */;
}
