cocci_test_suite() {
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/berlin2-adc.c 89 */[];
	struct berlin2_adc_priv {
		struct regmap *regmap;
		struct mutex lock;
		wait_queue_head_t wq;
		bool data_available;
		int data;
	} cocci_id/* drivers/iio/adc/berlin2-adc.c 72 */;
	struct platform_driver cocci_id/* drivers/iio/adc/berlin2-adc.c 368 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/berlin2-adc.c 362 */[];
	struct device_node *cocci_id/* drivers/iio/adc/berlin2-adc.c 287 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/berlin2-adc.c 285 */;
	struct platform_device *cocci_id/* drivers/iio/adc/berlin2-adc.c 283 */;
	const struct iio_info cocci_id/* drivers/iio/adc/berlin2-adc.c 279 */;
	unsigned cocci_id/* drivers/iio/adc/berlin2-adc.c 242 */;
	struct berlin2_adc_priv *cocci_id/* drivers/iio/adc/berlin2-adc.c 241 */;
	irqreturn_t cocci_id/* drivers/iio/adc/berlin2-adc.c 239 */;
	void *cocci_id/* drivers/iio/adc/berlin2-adc.c 239 */;
	int cocci_id/* drivers/iio/adc/berlin2-adc.c 239 */;
	long cocci_id/* drivers/iio/adc/berlin2-adc.c 204 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/berlin2-adc.c 203 */;
	int *cocci_id/* drivers/iio/adc/berlin2-adc.c 203 */;
}
