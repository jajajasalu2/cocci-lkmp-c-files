cocci_test_suite() {
	struct mlx90632_data {
		struct i2c_client *client;
		struct mutex lock;
		struct regmap *regmap;
		u16 emissivity;
	} cocci_id/* drivers/iio/temperature/mlx90632.c 92 */;
	struct i2c_driver cocci_id/* drivers/iio/temperature/mlx90632.c 744 */;
	struct iio_dev *cocci_id/* drivers/iio/temperature/mlx90632.c 735 */;
	struct device *cocci_id/* drivers/iio/temperature/mlx90632.c 733 */;
	int __maybe_unused cocci_id/* drivers/iio/temperature/mlx90632.c 733 */;
	const struct of_device_id cocci_id/* drivers/iio/temperature/mlx90632.c 719 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/temperature/mlx90632.c 713 */[];
	struct regmap *cocci_id/* drivers/iio/temperature/mlx90632.c 625 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/temperature/mlx90632.c 621 */;
	struct i2c_client *cocci_id/* drivers/iio/temperature/mlx90632.c 620 */;
	const struct iio_info cocci_id/* drivers/iio/temperature/mlx90632.c 592 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/temperature/mlx90632.c 576 */[];
	long cocci_id/* drivers/iio/temperature/mlx90632.c 521 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/temperature/mlx90632.c 520 */;
	s16 cocci_id/* drivers/iio/temperature/mlx90632.c 490 */;
	unsigned int cocci_id/* drivers/iio/temperature/mlx90632.c 488 */;
	s32 cocci_id/* drivers/iio/temperature/mlx90632.c 487 */;
	struct mlx90632_data *cocci_id/* drivers/iio/temperature/mlx90632.c 485 */;
	int *cocci_id/* drivers/iio/temperature/mlx90632.c 485 */;
	int cocci_id/* drivers/iio/temperature/mlx90632.c 485 */;
	s64 cocci_id/* drivers/iio/temperature/mlx90632.c 433 */;
	s8 cocci_id/* drivers/iio/temperature/mlx90632.c 411 */;
	u16 cocci_id/* drivers/iio/temperature/mlx90632.c 407 */;
	u32 cocci_id/* drivers/iio/temperature/mlx90632.c 308 */;
	s32 *cocci_id/* drivers/iio/temperature/mlx90632.c 304 */;
	s16 *cocci_id/* drivers/iio/temperature/mlx90632.c 280 */;
	u8 cocci_id/* drivers/iio/temperature/mlx90632.c 247 */;
	uint8_t *cocci_id/* drivers/iio/temperature/mlx90632.c 202 */;
	const struct regmap_config cocci_id/* drivers/iio/temperature/mlx90632.c 137 */;
	const struct regmap_range cocci_id/* drivers/iio/temperature/mlx90632.c 126 */[];
	const struct regmap_access_table cocci_id/* drivers/iio/temperature/mlx90632.c 121 */;
}
