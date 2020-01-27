cocci_test_suite() {
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ti-adc0832.c 68 */[];
	struct spi_driver cocci_id/* drivers/iio/adc/ti-adc0832.c 340 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/ti-adc0832.c 331 */[];
	const struct of_device_id cocci_id/* drivers/iio/adc/ti-adc0832.c 320 */[];
	struct adc0832 {
		struct spi_device *spi;
		struct regulator *reg;
		struct mutex lock;
		u8 mux_bits;
		u8 tx_buf[2]____cacheline_aligned;
		u8 rx_buf[2];
	} cocci_id/* drivers/iio/adc/ti-adc0832.c 26 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ti-adc0832.c 235 */;
	u8 cocci_id/* drivers/iio/adc/ti-adc0832.c 202 */[24];
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ti-adc0832.c 199 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ti-adc0832.c 197 */;
	void *cocci_id/* drivers/iio/adc/ti-adc0832.c 197 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ti-adc0832.c 193 */;
	enum{adc0831, adc0832, adc0834, adc0838,} cocci_id/* drivers/iio/adc/ti-adc0832.c 19 */;
	long cocci_id/* drivers/iio/adc/ti-adc0832.c 164 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ti-adc0832.c 163 */;
	int *cocci_id/* drivers/iio/adc/ti-adc0832.c 163 */;
	struct spi_transfer cocci_id/* drivers/iio/adc/ti-adc0832.c 132 */;
	bool cocci_id/* drivers/iio/adc/ti-adc0832.c 129 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ti-adc0832.c 115 */;
	struct adc0832 *cocci_id/* drivers/iio/adc/ti-adc0832.c 113 */;
	int cocci_id/* drivers/iio/adc/ti-adc0832.c 113 */;
}
