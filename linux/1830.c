cocci_test_suite() {
	struct spi_driver cocci_id/* drivers/iio/adc/ad7793.c 814 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/ad7793.c 800 */[];
	struct iio_dev *cocci_id/* drivers/iio/adc/ad7793.c 708 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ad7793.c 704 */;
	const struct ad7793_chip_info cocci_id/* drivers/iio/adc/ad7793.c 602 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/ad7793.c 532 */;
	unsigned int cocci_id/* drivers/iio/adc/ad7793.c 448 */;
	bool cocci_id/* drivers/iio/adc/ad7793.c 404 */;
	unsigned long long cocci_id/* drivers/iio/adc/ad7793.c 403 */;
	long cocci_id/* drivers/iio/adc/ad7793.c 399 */;
	int *cocci_id/* drivers/iio/adc/ad7793.c 397 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ad7793.c 396 */;
	const struct attribute_group cocci_id/* drivers/iio/adc/ad7793.c 382 */;
	struct attribute *cocci_id/* drivers/iio/adc/ad7793.c 376 */[];
	struct device_attribute *cocci_id/* drivers/iio/adc/ad7793.c 357 */;
	char *cocci_id/* drivers/iio/adc/ad7793.c 357 */;
	struct device *cocci_id/* drivers/iio/adc/ad7793.c 356 */;
	ssize_t cocci_id/* drivers/iio/adc/ad7793.c 356 */;
	const u16 cocci_id/* drivers/iio/adc/ad7793.c 344 */[16];
	u64 cocci_id/* drivers/iio/adc/ad7793.c 329 */;
	u32 cocci_id/* drivers/iio/adc/ad7793.c 261 */;
	const struct ad7793_platform_data *cocci_id/* drivers/iio/adc/ad7793.c 227 */;
	struct ad7793_state *cocci_id/* drivers/iio/adc/ad7793.c 220 */;
	int cocci_id/* drivers/iio/adc/ad7793.c 220 */;
	const struct ad_sd_calib_data cocci_id/* drivers/iio/adc/ad7793.c 211 */[6];
	const struct ad_sigma_delta_info cocci_id/* drivers/iio/adc/ad7793.c 203 */;
	enum ad_sigma_delta_mode cocci_id/* drivers/iio/adc/ad7793.c 193 */;
	struct ad_sigma_delta *cocci_id/* drivers/iio/adc/ad7793.c 182 */;
	struct ad7793_state cocci_id/* drivers/iio/adc/ad7793.c 179 */;
	enum ad7793_supported_device_ids{ID_AD7785, ID_AD7792, ID_AD7793, ID_AD7794, ID_AD7795, ID_AD7796, ID_AD7797, ID_AD7798, ID_AD7799,} cocci_id/* drivers/iio/adc/ad7793.c 165 */;
	struct ad7793_state {
		const struct ad7793_chip_info *chip_info;
		struct regulator *reg;
		u16 int_vref_mv;
		u16 mode;
		u16 conf;
		u32 scale_avail[8][2];
		struct ad_sigma_delta sd;
	} cocci_id/* drivers/iio/adc/ad7793.c 153 */;
	struct ad7793_chip_info {
		unsigned int id;
		const struct iio_chan_spec *channels;
		unsigned int num_channels;
		unsigned int flags;
		const struct iio_info *iio_info;
		const u16 *sample_freq_avail;
	} cocci_id/* drivers/iio/adc/ad7793.c 143 */;
}
