cocci_test_suite() {
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ti-adc12138.c 93 */[];
	struct spi_driver cocci_id/* drivers/iio/adc/ti-adc12138.c 535 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/ti-adc12138.c 527 */[];
	const struct of_device_id cocci_id/* drivers/iio/adc/ti-adc12138.c 517 */[];
	struct spi_device *cocci_id/* drivers/iio/adc/ti-adc12138.c 393 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ti-adc12138.c 385 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ti-adc12138.c 383 */;
	struct adc12138 {
		struct spi_device *spi;
		unsigned int id;
		struct clk *cclk;
		struct regulator *vref_p;
		struct regulator *vref_n;
		struct mutex lock;
		struct completion complete;
		unsigned int acquisition_time;
		u8 tx_buf[2]____cacheline_aligned;
		u8 rx_buf[2];
	} cocci_id/* drivers/iio/adc/ti-adc12138.c 37 */;
	__be16 cocci_id/* drivers/iio/adc/ti-adc12138.c 332 */[20];
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ti-adc12138.c 329 */;
	enum{adc12130, adc12132, adc12138,} cocci_id/* drivers/iio/adc/ti-adc12138.c 31 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ti-adc12138.c 275 */;
	__be16 cocci_id/* drivers/iio/adc/ti-adc12138.c 226 */;
	long cocci_id/* drivers/iio/adc/ti-adc12138.c 222 */;
	int *cocci_id/* drivers/iio/adc/ti-adc12138.c 221 */;
	__be16 *cocci_id/* drivers/iio/adc/ti-adc12138.c 203 */;
	unsigned long cocci_id/* drivers/iio/adc/ti-adc12138.c 193 */;
	u8 cocci_id/* drivers/iio/adc/ti-adc12138.c 165 */;
	const u8 cocci_id/* drivers/iio/adc/ti-adc12138.c 164 */[];
	void *cocci_id/* drivers/iio/adc/ti-adc12138.c 161 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ti-adc12138.c 160 */;
	struct adc12138 *cocci_id/* drivers/iio/adc/ti-adc12138.c 159 */;
	int cocci_id/* drivers/iio/adc/ti-adc12138.c 159 */;
	u8 cocci_id/* drivers/iio/adc/ti-adc12138.c 148 */[2];
	struct spi_transfer cocci_id/* drivers/iio/adc/ti-adc12138.c 124 */;
}
