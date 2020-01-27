cocci_test_suite() {
	struct sun4i_gpadc_iio {
		struct iio_dev *indio_dev;
		struct completion completion;
		int temp_data;
		u32 adc_data;
		struct regmap *regmap;
		unsigned int fifo_data_irq;
		atomic_t ignore_fifo_data_irq;
		unsigned int temp_data_irq;
		atomic_t ignore_temp_data_irq;
		const struct gpadc_data *data;
		bool no_irq;
		struct mutex mutex;
		struct thermal_zone_device *tzd;
		struct device *sensor_device;
	} cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 91 */;
	struct platform_driver cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 704 */;
	const struct platform_device_id cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 696 */[];
	struct platform_device *cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 607 */;
	const struct gpadc_data cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 58 */;
	struct gpadc_data *cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 544 */;
	struct sun4i_gpadc_dev *cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 534 */;
	void __iomem *cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 500 */;
	struct resource *cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 499 */;
	struct gpadc_data {
		int temp_offset;
		int temp_scale;
		unsigned int tp_mode_en;
		unsigned int tp_adc_select;
		unsigned int (*adc_chan_select)(unsigned int chan);
		unsigned int adc_chan_mask;
	} cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 49 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 487 */[];
	atomic_t *cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 442 */;
	unsigned int *cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 442 */;
	irq_handler_t cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 441 */;
	const char *cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 440 */;
	const struct dev_pm_ops cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 435 */;
	const struct thermal_zone_of_device_ops cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 431 */;
	struct device *cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 394 */;
	unsigned int cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 39 */;
	irqreturn_t cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 368 */;
	void *cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 368 */;
	const struct iio_info cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 350 */;
	long cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 308 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 307 */;
	struct sun4i_gpadc_iio *cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 265 */;
	int *cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 263 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 262 */;
	int cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 262 */;
	u32 cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 169 */;
	const struct regmap_config cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 157 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 126 */[];
	struct iio_map cocci_id/* drivers/iio/adc/sun4i-gpadc-iio.c 118 */[];
}
