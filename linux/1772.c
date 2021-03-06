cocci_test_suite() {
	struct adf4371_pwrdown {
		unsigned int reg;
		unsigned int bit;
	} cocci_id/* drivers/iio/frequency/adf4371.c 99 */;
	enum adf4371_variant{ADF4371, ADF4372,} cocci_id/* drivers/iio/frequency/adf4371.c 94 */;
	enum{ADF4371_CH_RF8, ADF4371_CH_RFAUX8, ADF4371_CH_RF16, ADF4371_CH_RF32,} cocci_id/* drivers/iio/frequency/adf4371.c 87 */;
	enum{ADF4371_FREQ, ADF4371_POWER_DOWN, ADF4371_CHANNEL_NAME,} cocci_id/* drivers/iio/frequency/adf4371.c 81 */;
	struct spi_driver cocci_id/* drivers/iio/frequency/adf4371.c 620 */;
	const struct of_device_id cocci_id/* drivers/iio/frequency/adf4371.c 613 */[];
	const struct spi_device_id cocci_id/* drivers/iio/frequency/adf4371.c 606 */[];
	struct regmap *cocci_id/* drivers/iio/frequency/adf4371.c 555 */;
	struct iio_dev *cocci_id/* drivers/iio/frequency/adf4371.c 553 */;
	const struct spi_device_id *cocci_id/* drivers/iio/frequency/adf4371.c 552 */;
	struct spi_device *cocci_id/* drivers/iio/frequency/adf4371.c 550 */;
	int cocci_id/* drivers/iio/frequency/adf4371.c 550 */;
	struct adf4371_state *cocci_id/* drivers/iio/frequency/adf4371.c 545 */;
	void *cocci_id/* drivers/iio/frequency/adf4371.c 543 */;
	void cocci_id/* drivers/iio/frequency/adf4371.c 543 */;
	const struct iio_info cocci_id/* drivers/iio/frequency/adf4371.c 471 */;
	const struct adf4371_chip_info cocci_id/* drivers/iio/frequency/adf4371.c 447 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/frequency/adf4371.c 440 */[];
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/frequency/adf4371.c 420 */[];
	bool cocci_id/* drivers/iio/frequency/adf4371.c 374 */;
	const char *cocci_id/* drivers/iio/frequency/adf4371.c 370 */;
	size_t cocci_id/* drivers/iio/frequency/adf4371.c 370 */;
	char *cocci_id/* drivers/iio/frequency/adf4371.c 327 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/frequency/adf4371.c 326 */;
	uintptr_t cocci_id/* drivers/iio/frequency/adf4371.c 325 */;
	ssize_t cocci_id/* drivers/iio/frequency/adf4371.c 324 */;
	u8 cocci_id/* drivers/iio/frequency/adf4371.c 240 */;
	u32 cocci_id/* drivers/iio/frequency/adf4371.c 215 */;
	unsigned int *cocci_id/* drivers/iio/frequency/adf4371.c 209 */;
	unsigned long long cocci_id/* drivers/iio/frequency/adf4371.c 207 */;
	u64 cocci_id/* drivers/iio/frequency/adf4371.c 187 */;
	unsigned int cocci_id/* drivers/iio/frequency/adf4371.c 185 */;
	struct adf4371_state {
		struct spi_device *spi;
		struct regmap *regmap;
		struct clk *clkin;
		struct mutex lock;
		const struct adf4371_chip_info *chip_info;
		unsigned long clkin_freq;
		unsigned long fpfd;
		unsigned int integer;
		unsigned int fract1;
		unsigned int fract2;
		unsigned int mod2;
		unsigned int rf_div_sel;
		unsigned int ref_div_factor;
		u8 buf[10]____cacheline_aligned;
	} cocci_id/* drivers/iio/frequency/adf4371.c 157 */;
	struct adf4371_chip_info {
		unsigned int num_channels;
		const struct iio_chan_spec *channels;
	} cocci_id/* drivers/iio/frequency/adf4371.c 152 */;
	const struct regmap_config cocci_id/* drivers/iio/frequency/adf4371.c 146 */;
	const struct reg_sequence cocci_id/* drivers/iio/frequency/adf4371.c 115 */[];
	const struct adf4371_pwrdown cocci_id/* drivers/iio/frequency/adf4371.c 108 */[4];
	const char *constcocci_id/* drivers/iio/frequency/adf4371.c 104 */[];
}
