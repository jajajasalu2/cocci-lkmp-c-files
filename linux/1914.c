cocci_test_suite() {
	long cocci_id/* drivers/iio/adc/ti-adc084s021.c 86 */;
	int *cocci_id/* drivers/iio/adc/ti-adc084s021.c 85 */;
	u16 *cocci_id/* drivers/iio/adc/ti-adc084s021.c 71 */;
	struct adc084s021 *cocci_id/* drivers/iio/adc/ti-adc084s021.c 67 */;
	void *cocci_id/* drivers/iio/adc/ti-adc084s021.c 67 */;
	int cocci_id/* drivers/iio/adc/ti-adc084s021.c 67 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ti-adc084s021.c 53 */[];
	struct spi_driver cocci_id/* drivers/iio/adc/ti-adc084s021.c 258 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/ti-adc084s021.c 252 */[];
	const struct of_device_id cocci_id/* drivers/iio/adc/ti-adc084s021.c 246 */[];
	struct adc084s021 {
		struct spi_device *spi;
		struct spi_message message;
		struct spi_transfer spi_trans;
		struct regulator *reg;
		struct mutex lock;
		u16 tx_buf[4]____cacheline_aligned;
		__be16 rx_buf[5];
	} cocci_id/* drivers/iio/adc/ti-adc084s021.c 22 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ti-adc084s021.c 195 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/adc/ti-adc084s021.c 188 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ti-adc084s021.c 184 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ti-adc084s021.c 175 */;
	__be16 cocci_id/* drivers/iio/adc/ti-adc084s021.c 170 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ti-adc084s021.c 166 */;
	__be16 cocci_id/* drivers/iio/adc/ti-adc084s021.c 143 */[8];
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ti-adc084s021.c 140 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ti-adc084s021.c 138 */;
}
