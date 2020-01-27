cocci_test_suite() {
	struct ad5791_state {
		struct spi_device *spi;
		struct regulator *reg_vdd;
		struct regulator *reg_vss;
		const struct ad5791_chip_info *chip_info;
		unsigned short vref_mv;
		unsigned int vref_neg_mv;
		unsigned ctrl;
		unsigned pwr_down_mode;
		bool pwr_down;
		union {
			__be32 d32;
			u8 d8[4];
		} data[3]____cacheline_aligned;
	} cocci_id/* drivers/iio/dac/ad5791.c 82 */;
	struct ad5791_chip_info {
		int (*get_lin_comp)(unsigned int span);
	} cocci_id/* drivers/iio/dac/ad5791.c 67 */;
	struct spi_driver cocci_id/* drivers/iio/dac/ad5791.c 459 */;
	const struct spi_device_id cocci_id/* drivers/iio/dac/ad5791.c 449 */[];
	struct ad5791_platform_data *cocci_id/* drivers/iio/dac/ad5791.c 346 */;
	struct spi_device *cocci_id/* drivers/iio/dac/ad5791.c 344 */;
	const struct iio_info cocci_id/* drivers/iio/dac/ad5791.c 339 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/dac/ad5791.c 312 */[];
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/dac/ad5791.c 281 */[];
	u64 cocci_id/* drivers/iio/dac/ad5791.c 255 */;
	long cocci_id/* drivers/iio/dac/ad5791.c 252 */;
	int *cocci_id/* drivers/iio/dac/ad5791.c 250 */;
	const struct ad5791_chip_info cocci_id/* drivers/iio/dac/ad5791.c 233 */[];
	unsigned int cocci_id/* drivers/iio/dac/ad5791.c 226 */;
	int cocci_id/* drivers/iio/dac/ad5791.c 226 */;
	bool cocci_id/* drivers/iio/dac/ad5791.c 189 */;
	size_t cocci_id/* drivers/iio/dac/ad5791.c 187 */;
	const char *cocci_id/* drivers/iio/dac/ad5791.c 186 */;
	uintptr_t cocci_id/* drivers/iio/dac/ad5791.c 178 */;
	char *cocci_id/* drivers/iio/dac/ad5791.c 178 */;
	ssize_t cocci_id/* drivers/iio/dac/ad5791.c 177 */;
	const struct iio_enum cocci_id/* drivers/iio/dac/ad5791.c 170 */;
	struct ad5791_state *cocci_id/* drivers/iio/dac/ad5791.c 155 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ad5791.c 153 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/ad5791.c 152 */;
	const char *constcocci_id/* drivers/iio/dac/ad5791.c 147 */[];
	struct spi_transfer cocci_id/* drivers/iio/dac/ad5791.c 122 */[];
	u8 cocci_id/* drivers/iio/dac/ad5791.c 119 */;
	u32 *cocci_id/* drivers/iio/dac/ad5791.c 119 */;
	u32 cocci_id/* drivers/iio/dac/ad5791.c 110 */;
	enum ad5791_supported_device_ids{ID_AD5760, ID_AD5780, ID_AD5781, ID_AD5791,} cocci_id/* drivers/iio/dac/ad5791.c 103 */;
}
