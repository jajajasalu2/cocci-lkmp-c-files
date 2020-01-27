cocci_test_suite() {
	int *cocci_id/* drivers/iio/adc/lpc18xx_adc.c 90 */;
	long cocci_id/* drivers/iio/adc/lpc18xx_adc.c 90 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/lpc18xx_adc.c 89 */;
	u32 cocci_id/* drivers/iio/adc/lpc18xx_adc.c 73 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/lpc18xx_adc.c 59 */[];
	struct lpc18xx_adc {
		struct regulator *vref;
		void __iomem *base;
		struct device *dev;
		struct mutex lock;
		struct clk *clk;
		u32 cr_reg;
	} cocci_id/* drivers/iio/adc/lpc18xx_adc.c 42 */;
	struct platform_driver cocci_id/* drivers/iio/adc/lpc18xx_adc.c 213 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/lpc18xx_adc.c 207 */[];
	unsigned long cocci_id/* drivers/iio/adc/lpc18xx_adc.c 123 */;
	unsigned int cocci_id/* drivers/iio/adc/lpc18xx_adc.c 122 */;
	struct lpc18xx_adc *cocci_id/* drivers/iio/adc/lpc18xx_adc.c 121 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/lpc18xx_adc.c 120 */;
	struct platform_device *cocci_id/* drivers/iio/adc/lpc18xx_adc.c 118 */;
	int cocci_id/* drivers/iio/adc/lpc18xx_adc.c 118 */;
	const struct iio_info cocci_id/* drivers/iio/adc/lpc18xx_adc.c 114 */;
}
