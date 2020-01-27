cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/iio/light/jsa1212.c 444 */;
	const struct i2c_device_id cocci_id/* drivers/iio/light/jsa1212.c 438 */[];
	const struct acpi_device_id cocci_id/* drivers/iio/light/jsa1212.c 432 */[];
	struct regmap *cocci_id/* drivers/iio/light/jsa1212.c 316 */;
	struct iio_dev *cocci_id/* drivers/iio/light/jsa1212.c 315 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/jsa1212.c 312 */;
	struct i2c_client *cocci_id/* drivers/iio/light/jsa1212.c 311 */;
	const struct regmap_config cocci_id/* drivers/iio/light/jsa1212.c 302 */;
	bool cocci_id/* drivers/iio/light/jsa1212.c 289 */;
	struct device *cocci_id/* drivers/iio/light/jsa1212.c 289 */;
	unsigned int cocci_id/* drivers/iio/light/jsa1212.c 289 */;
	const struct iio_info cocci_id/* drivers/iio/light/jsa1212.c 265 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/light/jsa1212.c 253 */[];
	int *cocci_id/* drivers/iio/light/jsa1212.c 215 */;
	long cocci_id/* drivers/iio/light/jsa1212.c 215 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/jsa1212.c 214 */;
	__le16 cocci_id/* drivers/iio/light/jsa1212.c 165 */;
	unsigned int *cocci_id/* drivers/iio/light/jsa1212.c 162 */;
	u8 cocci_id/* drivers/iio/light/jsa1212.c 130 */;
	struct jsa1212_data *cocci_id/* drivers/iio/light/jsa1212.c 130 */;
	int cocci_id/* drivers/iio/light/jsa1212.c 130 */;
	const int cocci_id/* drivers/iio/light/jsa1212.c 126 */[];
	struct jsa1212_data {
		struct i2c_client *client;
		struct mutex lock;
		u8 als_rng_idx;
		bool als_en;
		bool pxs_en;
		struct regmap *regmap;
	} cocci_id/* drivers/iio/light/jsa1212.c 116 */;
	enum jsa1212_op_mode{JSA1212_OPMODE_ALS_EN, JSA1212_OPMODE_PXS_EN,} cocci_id/* drivers/iio/light/jsa1212.c 111 */;
}
