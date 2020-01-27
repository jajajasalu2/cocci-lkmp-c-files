cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 617 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 611 */[];
	struct platform_device *cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 506 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 495 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 482 */;
	u16 cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 458 */;
	long cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 456 */;
	int *cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 454 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 453 */;
	struct iproc_adc_priv *cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 434 */;
	int cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 433 */;
	u32 cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 432 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 430 */;
	void cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 430 */;
	u16 *cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 226 */;
	unsigned int cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 164 */;
	irqreturn_t cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 159 */;
	void *cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 159 */;
	struct device *cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 120 */;
	struct iproc_adc_priv {
		struct regmap *regmap;
		struct clk *adc_clk;
		struct mutex mutex;
		int irqno;
		int chan_val;
		int chan_id;
		struct completion completion;
	} cocci_id/* drivers/iio/adc/bcm_iproc_adc.c 108 */;
}
