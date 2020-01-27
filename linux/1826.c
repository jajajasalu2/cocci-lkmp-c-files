cocci_test_suite() {
	struct ad7476_state *cocci_id/* drivers/iio/adc/ad7476.c 86 */;
	void cocci_id/* drivers/iio/adc/ad7476.c 86 */;
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ad7476.c 69 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ad7476.c 67 */;
	void *cocci_id/* drivers/iio/adc/ad7476.c 67 */;
	enum ad7476_supported_device_ids{ID_AD7091R, ID_AD7276, ID_AD7277, ID_AD7278, ID_AD7466, ID_AD7467, ID_AD7468, ID_AD7495, ID_AD7940, ID_ADC081S, ID_ADC101S, ID_ADC121S, ID_ADS7866, ID_ADS7867, ID_ADS7868,} cocci_id/* drivers/iio/adc/ad7476.c 49 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ad7476.c 341 */;
	struct ad7476_state {
		struct spi_device *spi;
		const struct ad7476_chip_info *chip_info;
		struct regulator *reg;
		struct spi_transfer xfer;
		struct spi_message msg;
		unsigned char data[ALIGN(2, sizeof(s64)) + sizeof(s64)]
			____cacheline_aligned;
	} cocci_id/* drivers/iio/adc/ad7476.c 33 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/ad7476.c 310 */[];
	struct ad7476_chip_info {
		unsigned int int_vref_uv;
		struct iio_chan_spec channel[2];
		void (*reset)(struct ad7476_state *);
	} cocci_id/* drivers/iio/adc/ad7476.c 27 */;
	struct ad7476_state cocci_id/* drivers/iio/adc/ad7476.c 25 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ad7476.c 238 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ad7476.c 235 */;
	int cocci_id/* drivers/iio/adc/ad7476.c 235 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ad7476.c 231 */;
	const struct ad7476_chip_info cocci_id/* drivers/iio/adc/ad7476.c 166 */[];
	long cocci_id/* drivers/iio/adc/ad7476.c 107 */;
	int *cocci_id/* drivers/iio/adc/ad7476.c 105 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ad7476.c 104 */;
	__be16 *cocci_id/* drivers/iio/adc/ad7476.c 100 */;
}
