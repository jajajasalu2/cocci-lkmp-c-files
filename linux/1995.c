cocci_test_suite() {
	const struct iio_enum cocci_id/* drivers/iio/dac/ti-dac7311.c 99 */;
	unsigned int cocci_id/* drivers/iio/dac/ti-dac7311.c 91 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ti-dac7311.c 82 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/ti-dac7311.c 81 */;
	const char *constcocci_id/* drivers/iio/dac/ti-dac7311.c 75 */[];
	u8 cocci_id/* drivers/iio/dac/ti-dac7311.c 66 */;
	u16 cocci_id/* drivers/iio/dac/ti-dac7311.c 66 */;
	struct ti_dac_chip *cocci_id/* drivers/iio/dac/ti-dac7311.c 66 */;
	int cocci_id/* drivers/iio/dac/ti-dac7311.c 66 */;
	bool cocci_id/* drivers/iio/dac/ti-dac7311.c 58 */;
	struct ti_dac_chip {
		struct mutex lock;
		struct regulator *vref;
		struct spi_device *spi;
		u16 val;
		bool powerdown;
		u8 powerdown_mode;
		u8 resolution;
		u8 buf[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/dac/ti-dac7311.c 47 */;
	struct spi_driver cocci_id/* drivers/iio/dac/ti-dac7311.c 325 */;
	const struct spi_device_id cocci_id/* drivers/iio/dac/ti-dac7311.c 317 */[];
	const struct of_device_id cocci_id/* drivers/iio/dac/ti-dac7311.c 309 */[];
	const struct ti_dac_spec cocci_id/* drivers/iio/dac/ti-dac7311.c 30 */[];
	struct ti_dac_spec {
		u8 resolution;
	} cocci_id/* drivers/iio/dac/ti-dac7311.c 26 */;
	const struct ti_dac_spec *cocci_id/* drivers/iio/dac/ti-dac7311.c 239 */;
	struct device *cocci_id/* drivers/iio/dac/ti-dac7311.c 238 */;
	struct spi_device *cocci_id/* drivers/iio/dac/ti-dac7311.c 236 */;
	const struct iio_info cocci_id/* drivers/iio/dac/ti-dac7311.c 230 */;
	enum{POWER_1KOHM_TO_GND=0, POWER_100KOHM_TO_GND, POWER_TRI_STATE,} cocci_id/* drivers/iio/dac/ti-dac7311.c 20 */;
	int *cocci_id/* drivers/iio/dac/ti-dac7311.c 168 */;
	long cocci_id/* drivers/iio/dac/ti-dac7311.c 168 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/dac/ti-dac7311.c 162 */[];
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/dac/ti-dac7311.c 141 */[];
	enum{ID_DAC5311=0, ID_DAC6311, ID_DAC7311,} cocci_id/* drivers/iio/dac/ti-dac7311.c 14 */;
	const char *cocci_id/* drivers/iio/dac/ti-dac7311.c 119 */;
	size_t cocci_id/* drivers/iio/dac/ti-dac7311.c 119 */;
	char *cocci_id/* drivers/iio/dac/ti-dac7311.c 109 */;
	uintptr_t cocci_id/* drivers/iio/dac/ti-dac7311.c 107 */;
	ssize_t cocci_id/* drivers/iio/dac/ti-dac7311.c 106 */;
}
