cocci_test_suite() {
	struct adc108s102_state {
		struct spi_device *spi;
		struct regulator *reg;
		u32 va_millivolt;
		struct spi_transfer ring_xfer;
		struct spi_transfer scan_single_xfer;
		struct spi_message ring_msg;
		struct spi_message scan_single_msg;
		__be16 rx_buf[13]____cacheline_aligned;
		__be16 tx_buf[9]____cacheline_aligned;
	} cocci_id/* drivers/iio/adc/ti-adc108s102.c 58 */;
	u16 cocci_id/* drivers/iio/adc/ti-adc108s102.c 56 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ti-adc108s102.c 325 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/ti-adc108s102.c 319 */[];
	const struct acpi_device_id cocci_id/* drivers/iio/adc/ti-adc108s102.c 312 */[];
	const struct of_device_id cocci_id/* drivers/iio/adc/ti-adc108s102.c 304 */[];
	struct iio_dev *cocci_id/* drivers/iio/adc/ti-adc108s102.c 220 */;
	struct adc108s102_state *cocci_id/* drivers/iio/adc/ti-adc108s102.c 219 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ti-adc108s102.c 217 */;
	int cocci_id/* drivers/iio/adc/ti-adc108s102.c 217 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ti-adc108s102.c 212 */;
	int *cocci_id/* drivers/iio/adc/ti-adc108s102.c 176 */;
	long cocci_id/* drivers/iio/adc/ti-adc108s102.c 176 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ti-adc108s102.c 175 */;
	unsigned int cocci_id/* drivers/iio/adc/ti-adc108s102.c 161 */;
	u8 *cocci_id/* drivers/iio/adc/ti-adc108s102.c 152 */;
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ti-adc108s102.c 141 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ti-adc108s102.c 139 */;
	void *cocci_id/* drivers/iio/adc/ti-adc108s102.c 139 */;
	const unsigned long *cocci_id/* drivers/iio/adc/ti-adc108s102.c 113 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ti-adc108s102.c 100 */[];
}
