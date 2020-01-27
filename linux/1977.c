cocci_test_suite() {
	struct spi_driver cocci_id/* drivers/iio/dac/ad5064.c 962 */;
	const struct spi_device_id cocci_id/* drivers/iio/dac/ad5064.c 941 */[];
	const struct spi_device_id *cocci_id/* drivers/iio/dac/ad5064.c 930 */;
	struct spi_device *cocci_id/* drivers/iio/dac/ad5064.c 928 */;
	int (*cocci_id/* drivers/iio/dac/ad5064.c 87 */)(struct ad5064_state *st,
							 unsigned int cmd,
							 unsigned int addr,
							 unsigned int val);
	struct ad5064_state cocci_id/* drivers/iio/dac/ad5064.c 85 */;
	ad5064_write_func cocci_id/* drivers/iio/dac/ad5064.c 847 */;
	const char *cocci_id/* drivers/iio/dac/ad5064.c 847 */;
	enum ad5064_type cocci_id/* drivers/iio/dac/ad5064.c 846 */;
	struct device *cocci_id/* drivers/iio/dac/ad5064.c 846 */;
	const char *constcocci_id/* drivers/iio/dac/ad5064.c 790 */;
	struct ad5064_chip_info {
		bool shared_vref;
		unsigned long internal_vref;
		const struct iio_chan_spec *channels;
		unsigned int num_channels;
		enum ad5064_regmap_type regmap_type;
	} cocci_id/* drivers/iio/dac/ad5064.c 77 */;
	enum ad5064_regmap_type{AD5064_REGMAP_ADI, AD5064_REGMAP_ADI2, AD5064_REGMAP_LTC,} cocci_id/* drivers/iio/dac/ad5064.c 61 */;
	const struct ad5064_chip_info cocci_id/* drivers/iio/dac/ad5064.c 460 */[];
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/dac/ad5064.c 372 */[];
	const struct iio_info cocci_id/* drivers/iio/dac/ad5064.c 367 */;
	long cocci_id/* drivers/iio/dac/ad5064.c 319 */;
	int *cocci_id/* drivers/iio/dac/ad5064.c 317 */;
	unsigned int cocci_id/* drivers/iio/dac/ad5064.c 306 */;
	bool cocci_id/* drivers/iio/dac/ad5064.c 288 */;
	size_t cocci_id/* drivers/iio/dac/ad5064.c 285 */;
	uintptr_t cocci_id/* drivers/iio/dac/ad5064.c 276 */;
	char *cocci_id/* drivers/iio/dac/ad5064.c 276 */;
	ssize_t cocci_id/* drivers/iio/dac/ad5064.c 275 */;
	const struct iio_enum cocci_id/* drivers/iio/dac/ad5064.c 261 */;
	struct ad5064_state *cocci_id/* drivers/iio/dac/ad5064.c 241 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ad5064.c 239 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/ad5064.c 238 */;
	int cocci_id/* drivers/iio/dac/ad5064.c 238 */;
	const char *constcocci_id/* drivers/iio/dac/ad5064.c 228 */[];
	enum ad5064_type{ID_AD5024, ID_AD5025, ID_AD5044, ID_AD5045, ID_AD5064, ID_AD5064_1, ID_AD5065, ID_AD5625, ID_AD5625R_1V25, ID_AD5625R_2V5, ID_AD5627, ID_AD5627R_1V25, ID_AD5627R_2V5, ID_AD5628_1, ID_AD5628_2, ID_AD5629_1, ID_AD5629_2, ID_AD5645R_1V25, ID_AD5645R_2V5, ID_AD5647R_1V25, ID_AD5647R_2V5, ID_AD5648_1, ID_AD5648_2, ID_AD5665, ID_AD5665R_1V25, ID_AD5665R_2V5, ID_AD5666_1, ID_AD5666_2, ID_AD5667, ID_AD5667R_1V25, ID_AD5667R_2V5, ID_AD5668_1, ID_AD5668_2, ID_AD5669_1, ID_AD5669_2, ID_LTC2606, ID_LTC2607, ID_LTC2609, ID_LTC2616, ID_LTC2617, ID_LTC2619, ID_LTC2626, ID_LTC2627, ID_LTC2629, ID_LTC2631_L12, ID_LTC2631_H12, ID_LTC2631_L10, ID_LTC2631_H10, ID_LTC2631_L8, ID_LTC2631_H8, ID_LTC2633_L12, ID_LTC2633_H12, ID_LTC2633_L10, ID_LTC2633_H10, ID_LTC2633_L8, ID_LTC2633_H8, ID_LTC2635_L12, ID_LTC2635_H12, ID_LTC2635_L10, ID_LTC2635_H10, ID_LTC2635_L8, ID_LTC2635_H8,} cocci_id/* drivers/iio/dac/ad5064.c 127 */;
	void __exit cocci_id/* drivers/iio/dac/ad5064.c 1124 */;
	void cocci_id/* drivers/iio/dac/ad5064.c 1124 */;
	int __init cocci_id/* drivers/iio/dac/ad5064.c 1089 */;
	struct i2c_driver cocci_id/* drivers/iio/dac/ad5064.c 1080 */;
	struct ad5064_state {
		struct device *dev;
		const struct ad5064_chip_info *chip_info;
		struct regulator_bulk_data vref_reg[AD5064_MAX_VREFS];
		bool pwr_down[AD5064_MAX_DAC_CHANNELS];
		u8 pwr_down_mode[AD5064_MAX_DAC_CHANNELS];
		unsigned int dac_cache[AD5064_MAX_DAC_CHANNELS];
		bool use_internal_vref;
		ad5064_write_func write;
		struct mutex lock;
		union {
			u8 i2c[3];
			__be32 spi;
		} data ____cacheline_aligned;
	} cocci_id/* drivers/iio/dac/ad5064.c 104 */;
	const struct i2c_device_id cocci_id/* drivers/iio/dac/ad5064.c 1028 */[];
	const struct i2c_device_id *cocci_id/* drivers/iio/dac/ad5064.c 1017 */;
	struct i2c_client *cocci_id/* drivers/iio/dac/ad5064.c 1016 */;
}
