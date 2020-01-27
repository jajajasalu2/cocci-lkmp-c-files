cocci_test_suite() {
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ad7766.c 69 */;
	enum ad7766_device_ids{ID_AD7766, ID_AD7766_1, ID_AD7766_2,} cocci_id/* drivers/iio/adc/ad7766.c 61 */;
	struct ad7766 {
		const struct ad7766_chip_info *chip_info;
		struct spi_device *spi;
		struct clk *mclk;
		struct gpio_desc *pd_gpio;
		struct regulator_bulk_data reg[AD7766_NUM_SUPPLIES];
		struct iio_trigger *trig;
		struct spi_transfer xfer;
		struct spi_message msg;
		unsigned char data[ALIGN(3, sizeof(s64)) + sizeof(s64)]
			____cacheline_aligned;
	} cocci_id/* drivers/iio/adc/ad7766.c 35 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ad7766.c 314 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/ad7766.c 303 */[];
	enum{AD7766_SUPPLY_AVDD=0, AD7766_SUPPLY_DVDD=1, AD7766_SUPPLY_VREF=2, AD7766_NUM_SUPPLIES=3,} cocci_id/* drivers/iio/adc/ad7766.c 28 */;
	struct ad7766_chip_info {
		unsigned int decimation_factor;
	} cocci_id/* drivers/iio/adc/ad7766.c 24 */;
	const struct spi_device_id *cocci_id/* drivers/iio/adc/ad7766.c 215 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ad7766.c 213 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/adc/ad7766.c 208 */;
	bool cocci_id/* drivers/iio/adc/ad7766.c 196 */;
	struct iio_trigger *cocci_id/* drivers/iio/adc/ad7766.c 196 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ad7766.c 190 */;
	void *cocci_id/* drivers/iio/adc/ad7766.c 190 */;
	int cocci_id/* drivers/iio/adc/ad7766.c 190 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ad7766.c 186 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/adc/ad7766.c 179 */;
	const struct ad7766_chip_info cocci_id/* drivers/iio/adc/ad7766.c 167 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ad7766.c 151 */[];
	struct regulator *cocci_id/* drivers/iio/adc/ad7766.c 132 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ad7766.c 129 */;
	int *cocci_id/* drivers/iio/adc/ad7766.c 129 */;
	long cocci_id/* drivers/iio/adc/ad7766.c 129 */;
	struct ad7766 *cocci_id/* drivers/iio/adc/ad7766.c 112 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ad7766.c 110 */;
}
