cocci_test_suite() {
	unsigned int cocci_id/* drivers/iio/dac/ti-dac082s085.c 88 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ti-dac082s085.c 79 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/ti-dac082s085.c 78 */;
	const char *constcocci_id/* drivers/iio/dac/ti-dac082s085.c 74 */[];
	u8 cocci_id/* drivers/iio/dac/ti-dac082s085.c 65 */;
	u16 cocci_id/* drivers/iio/dac/ti-dac082s085.c 65 */;
	struct ti_dac_chip *cocci_id/* drivers/iio/dac/ti-dac082s085.c 65 */;
	int cocci_id/* drivers/iio/dac/ti-dac082s085.c 65 */;
	struct ti_dac_chip {
		struct mutex lock;
		struct regulator *vref;
		struct spi_message mesg;
		struct spi_transfer xfer;
		u16 val[4];
		bool powerdown;
		u8 powerdown_mode;
		u8 resolution;
		u8 buf[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/dac/ti-dac082s085.c 48 */;
	struct spi_driver cocci_id/* drivers/iio/dac/ti-dac082s085.c 352 */;
	const struct spi_device_id cocci_id/* drivers/iio/dac/ti-dac082s085.c 341 */[];
	const struct of_device_id cocci_id/* drivers/iio/dac/ti-dac082s085.c 329 */[];
	const struct ti_dac_spec cocci_id/* drivers/iio/dac/ti-dac082s085.c 27 */[];
	const struct ti_dac_spec *cocci_id/* drivers/iio/dac/ti-dac082s085.c 262 */;
	struct device *cocci_id/* drivers/iio/dac/ti-dac082s085.c 261 */;
	struct spi_device *cocci_id/* drivers/iio/dac/ti-dac082s085.c 259 */;
	const struct iio_info cocci_id/* drivers/iio/dac/ti-dac082s085.c 253 */;
	struct ti_dac_spec {
		u8 num_channels;
		u8 resolution;
	} cocci_id/* drivers/iio/dac/ti-dac082s085.c 22 */;
	enum{dual_8bit, dual_10bit, dual_12bit, quad_8bit, quad_10bit, quad_12bit,} cocci_id/* drivers/iio/dac/ti-dac082s085.c 20 */;
	int *cocci_id/* drivers/iio/dac/ti-dac082s085.c 187 */;
	long cocci_id/* drivers/iio/dac/ti-dac082s085.c 187 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/dac/ti-dac082s085.c 178 */[];
	const char cocci_id/* drivers/iio/dac/ti-dac082s085.c 172 */[];
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/dac/ti-dac082s085.c 154 */[];
	bool cocci_id/* drivers/iio/dac/ti-dac082s085.c 132 */;
	const char *cocci_id/* drivers/iio/dac/ti-dac082s085.c 129 */;
	size_t cocci_id/* drivers/iio/dac/ti-dac082s085.c 129 */;
	char *cocci_id/* drivers/iio/dac/ti-dac082s085.c 119 */;
	uintptr_t cocci_id/* drivers/iio/dac/ti-dac082s085.c 117 */;
	ssize_t cocci_id/* drivers/iio/dac/ti-dac082s085.c 116 */;
	const struct iio_enum cocci_id/* drivers/iio/dac/ti-dac082s085.c 109 */;
}
