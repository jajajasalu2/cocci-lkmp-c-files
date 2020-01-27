cocci_test_suite() {
	enum ad7768_mclk_div{AD7768_MCLK_DIV_16, AD7768_MCLK_DIV_8, AD7768_MCLK_DIV_4, AD7768_MCLK_DIV_2,} cocci_id/* drivers/iio/adc/ad7768-1.c 96 */;
	enum ad7768_pwrmode{AD7768_ECO_MODE=0, AD7768_MED_MODE=2, AD7768_FAST_MODE=3,} cocci_id/* drivers/iio/adc/ad7768-1.c 90 */;
	enum ad7768_conv_mode{AD7768_CONTINUOUS, AD7768_ONE_SHOT, AD7768_SINGLE, AD7768_PERIODIC, AD7768_STANDBY,} cocci_id/* drivers/iio/adc/ad7768-1.c 82 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ad7768-1.c 643 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/ad7768-1.c 637 */[];
	const struct spi_device_id cocci_id/* drivers/iio/adc/ad7768-1.c 631 */[];
	struct spi_device *cocci_id/* drivers/iio/adc/ad7768-1.c 541 */;
	void *cocci_id/* drivers/iio/adc/ad7768-1.c 534 */;
	void cocci_id/* drivers/iio/adc/ad7768-1.c 534 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/adc/ad7768-1.c 523 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/adc/ad7768-1.c 518 */;
	struct ad7768_state *cocci_id/* drivers/iio/adc/ad7768-1.c 491 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ad7768-1.c 489 */;
	int cocci_id/* drivers/iio/adc/ad7768-1.c 489 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ad7768-1.c 476 */;
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ad7768-1.c 455 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ad7768-1.c 419 */;
	const struct attribute_group cocci_id/* drivers/iio/adc/ad7768-1.c 415 */;
	struct attribute *cocci_id/* drivers/iio/adc/ad7768-1.c 410 */[];
	int *cocci_id/* drivers/iio/adc/ad7768-1.c 356 */;
	long cocci_id/* drivers/iio/adc/ad7768-1.c 356 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ad7768-1.c 355 */;
	char *cocci_id/* drivers/iio/adc/ad7768-1.c 334 */;
	struct device_attribute *cocci_id/* drivers/iio/adc/ad7768-1.c 333 */;
	struct device *cocci_id/* drivers/iio/adc/ad7768-1.c 332 */;
	ssize_t cocci_id/* drivers/iio/adc/ad7768-1.c 332 */;
	enum ad7768_dec_rate cocci_id/* drivers/iio/adc/ad7768-1.c 271 */;
	unsigned int *cocci_id/* drivers/iio/adc/ad7768-1.c 249 */;
	unsigned int cocci_id/* drivers/iio/adc/ad7768-1.c 247 */;
	enum ad7768_conv_mode cocci_id/* drivers/iio/adc/ad7768-1.c 202 */;
	struct ad7768_state {
		struct spi_device *spi;
		struct regulator *vref;
		struct mutex lock;
		struct clk *mclk;
		unsigned int mclk_freq;
		unsigned int samp_freq;
		struct completion completion;
		struct iio_trigger *trig;
		struct gpio_desc *gpio_sync_in;
		union {
			__be32 d32;
			u8 d8[2];
		} data ____cacheline_aligned;
	} cocci_id/* drivers/iio/adc/ad7768-1.c 154 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ad7768-1.c 135 */[];
	const struct ad7768_clk_configuration cocci_id/* drivers/iio/adc/ad7768-1.c 121 */[];
	struct ad7768_clk_configuration {
		enum ad7768_mclk_div mclk_div;
		enum ad7768_dec_rate dec_rate;
		unsigned int clk_div;
		enum ad7768_pwrmode pwrmode;
	} cocci_id/* drivers/iio/adc/ad7768-1.c 114 */;
	enum ad7768_dec_rate{AD7768_DEC_RATE_32=0, AD7768_DEC_RATE_64=1, AD7768_DEC_RATE_128=2, AD7768_DEC_RATE_256=3, AD7768_DEC_RATE_512=4, AD7768_DEC_RATE_1024=5, AD7768_DEC_RATE_8=9, AD7768_DEC_RATE_16=10,} cocci_id/* drivers/iio/adc/ad7768-1.c 103 */;
}
