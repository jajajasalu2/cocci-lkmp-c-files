cocci_test_suite() {
	const struct maxim_thermocouple_chip cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 92 */[];
	struct maxim_thermocouple_chip {
		const struct iio_chan_spec *channels;
		const unsigned long *scan_masks;
		u8 num_channels;
		u8 read_size;
		u32 status_bit;
	} cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 82 */;
	const unsigned long cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 80 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 46 */[];
	struct spi_driver cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 256 */;
	const struct of_device_id cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 249 */[];
	const struct spi_device_id cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 242 */[];
	enum{MAX6675, MAX31855,} cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 24 */;
	const struct maxim_thermocouple_chip *cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 213 */;
	struct maxim_thermocouple_data *cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 212 */;
	struct iio_dev *cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 211 */;
	const struct spi_device_id *cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 210 */;
	struct spi_device *cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 208 */;
	int cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 208 */;
	const struct iio_info cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 204 */;
	long cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 169 */;
	struct iio_poll_func *cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 151 */;
	irqreturn_t cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 149 */;
	void *cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 126 */;
	__be32 cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 121 */;
	__be16 cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 120 */;
	unsigned int cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 118 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 116 */;
	int *cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 116 */;
	struct maxim_thermocouple_data {
		struct spi_device *spi;
		const struct maxim_thermocouple_chip *chip;
		u8 buffer[16]____cacheline_aligned;
	} cocci_id/* drivers/iio/temperature/maxim_thermocouple.c 108 */;
}
