cocci_test_suite() {
	struct hx711_data {
		struct device *dev;
		struct gpio_desc *gpiod_pd_sck;
		struct gpio_desc *gpiod_dout;
		struct regulator *reg_avdd;
		int gain_set;
		int gain_chan_a;
		struct mutex lock;
		u32 buffer[4];
		u32 data_ready_delay_ns;
		u32 clock_frequency;
	} cocci_id/* drivers/iio/adc/hx711.c 79 */;
	struct platform_driver cocci_id/* drivers/iio/adc/hx711.c 608 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/hx711.c 601 */[];
	struct hx711_data cocci_id/* drivers/iio/adc/hx711.c 468 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/hx711.c 464 */;
	struct device_node *cocci_id/* drivers/iio/adc/hx711.c 462 */;
	struct device *cocci_id/* drivers/iio/adc/hx711.c 461 */;
	struct platform_device *cocci_id/* drivers/iio/adc/hx711.c 459 */;
	struct hx711_gain_to_scale cocci_id/* drivers/iio/adc/hx711.c 43 */[HX711_GAIN_MAX];
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/hx711.c 427 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/hx711.c 420 */;
	const struct attribute_group cocci_id/* drivers/iio/adc/hx711.c 416 */;
	struct attribute *cocci_id/* drivers/iio/adc/hx711.c 410 */[];
	struct iio_dev_attr *cocci_id/* drivers/iio/adc/hx711.c 390 */;
	char *cocci_id/* drivers/iio/adc/hx711.c 388 */;
	struct device_attribute *cocci_id/* drivers/iio/adc/hx711.c 387 */;
	ssize_t cocci_id/* drivers/iio/adc/hx711.c 386 */;
	struct iio_poll_func *cocci_id/* drivers/iio/adc/hx711.c 358 */;
	irqreturn_t cocci_id/* drivers/iio/adc/hx711.c 356 */;
	void *cocci_id/* drivers/iio/adc/hx711.c 356 */;
	struct hx711_gain_to_scale {
		int gain;
		int gain_pulse;
		int scale;
		int channel;
	} cocci_id/* drivers/iio/adc/hx711.c 28 */;
	int *cocci_id/* drivers/iio/adc/hx711.c 272 */;
	long cocci_id/* drivers/iio/adc/hx711.c 272 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/hx711.c 271 */;
	unsigned long cocci_id/* drivers/iio/adc/hx711.c 104 */;
	struct hx711_data *cocci_id/* drivers/iio/adc/hx711.c 102 */;
	int cocci_id/* drivers/iio/adc/hx711.c 102 */;
}
