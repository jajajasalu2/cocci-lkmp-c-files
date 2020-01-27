cocci_test_suite() {
	struct sc27xx_adc_linear_graph cocci_id/* drivers/iio/adc/sc27xx_adc.c 96 */;
	struct sc27xx_adc_linear_graph {
		int volt0;
		int adc0;
		int volt1;
		int adc1;
	} cocci_id/* drivers/iio/adc/sc27xx_adc.c 83 */;
	struct sc27xx_adc_data {
		struct device *dev;
		struct regmap *regmap;
		struct hwspinlock *hwlock;
		int channel_scale[SC27XX_ADC_CHANNEL_MAX];
		u32 base;
		int irq;
	} cocci_id/* drivers/iio/adc/sc27xx_adc.c 70 */;
	struct platform_driver cocci_id/* drivers/iio/adc/sc27xx_adc.c 554 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/sc27xx_adc.c 549 */[];
	struct iio_dev *cocci_id/* drivers/iio/adc/sc27xx_adc.c 485 */;
	struct device_node *cocci_id/* drivers/iio/adc/sc27xx_adc.c 483 */;
	struct device *cocci_id/* drivers/iio/adc/sc27xx_adc.c 482 */;
	struct platform_device *cocci_id/* drivers/iio/adc/sc27xx_adc.c 480 */;
	void *cocci_id/* drivers/iio/adc/sc27xx_adc.c 468 */;
	void cocci_id/* drivers/iio/adc/sc27xx_adc.c 468 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/sc27xx_adc.c 396 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/sc27xx_adc.c 383 */;
	long cocci_id/* drivers/iio/adc/sc27xx_adc.c 328 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/sc27xx_adc.c 327 */;
	u32 cocci_id/* drivers/iio/adc/sc27xx_adc.c 286 */;
	struct sc27xx_adc_data *cocci_id/* drivers/iio/adc/sc27xx_adc.c 283 */;
	int cocci_id/* drivers/iio/adc/sc27xx_adc.c 283 */;
	u32 *cocci_id/* drivers/iio/adc/sc27xx_adc.c 263 */;
	int *cocci_id/* drivers/iio/adc/sc27xx_adc.c 189 */;
	size_t cocci_id/* drivers/iio/adc/sc27xx_adc.c 130 */;
	const char *cocci_id/* drivers/iio/adc/sc27xx_adc.c 127 */;
	struct nvmem_cell *cocci_id/* drivers/iio/adc/sc27xx_adc.c 126 */;
	struct sc27xx_adc_linear_graph *cocci_id/* drivers/iio/adc/sc27xx_adc.c 125 */;
	const struct sc27xx_adc_linear_graph *cocci_id/* drivers/iio/adc/sc27xx_adc.c 124 */;
	bool cocci_id/* drivers/iio/adc/sc27xx_adc.c 122 */;
	const struct sc27xx_adc_linear_graph cocci_id/* drivers/iio/adc/sc27xx_adc.c 106 */;
}
