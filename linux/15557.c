cocci_test_suite() {
	struct ad7746_chip_info {
		struct i2c_client *client;
		struct mutex lock;
		u8 config;
		u8 cap_setup;
		u8 vt_setup;
		u8 capdac[2][2];
		s8 capdac_set;
		union {
			__be32 d32;
			u8 d8[4];
		} data ____cacheline_aligned;
	} cocci_id/* drivers/staging/iio/cdc/ad7746.c 91 */;
	struct i2c_driver cocci_id/* drivers/staging/iio/cdc/ad7746.c 760 */;
	const struct of_device_id cocci_id/* drivers/staging/iio/cdc/ad7746.c 751 */[];
	const struct i2c_device_id cocci_id/* drivers/staging/iio/cdc/ad7746.c 742 */[];
	unsigned char cocci_id/* drivers/staging/iio/cdc/ad7746.c 682 */;
	struct iio_dev *cocci_id/* drivers/staging/iio/cdc/ad7746.c 681 */;
	struct ad7746_chip_info *cocci_id/* drivers/staging/iio/cdc/ad7746.c 680 */;
	struct ad7746_platform_data *cocci_id/* drivers/staging/iio/cdc/ad7746.c 679 */;
	const struct i2c_device_id *cocci_id/* drivers/staging/iio/cdc/ad7746.c 677 */;
	struct i2c_client *cocci_id/* drivers/staging/iio/cdc/ad7746.c 676 */;
	int cocci_id/* drivers/staging/iio/cdc/ad7746.c 676 */;
	const struct iio_info cocci_id/* drivers/staging/iio/cdc/ad7746.c 666 */;
	u8 cocci_id/* drivers/staging/iio/cdc/ad7746.c 535 */;
	long cocci_id/* drivers/staging/iio/cdc/ad7746.c 531 */;
	int *cocci_id/* drivers/staging/iio/cdc/ad7746.c 530 */;
	const struct iio_chan_spec *cocci_id/* drivers/staging/iio/cdc/ad7746.c 529 */;
	const struct attribute_group cocci_id/* drivers/staging/iio/cdc/ad7746.c 416 */;
	struct attribute *cocci_id/* drivers/staging/iio/cdc/ad7746.c 405 */[];
	bool cocci_id/* drivers/staging/iio/cdc/ad7746.c 292 */;
	size_t cocci_id/* drivers/staging/iio/cdc/ad7746.c 286 */;
	const char *cocci_id/* drivers/staging/iio/cdc/ad7746.c 285 */;
	struct device_attribute *cocci_id/* drivers/staging/iio/cdc/ad7746.c 284 */;
	struct device *cocci_id/* drivers/staging/iio/cdc/ad7746.c 283 */;
	ssize_t cocci_id/* drivers/staging/iio/cdc/ad7746.c 283 */;
	const unsigned char cocci_id/* drivers/staging/iio/cdc/ad7746.c 213 */[][2];
	const struct iio_chan_spec cocci_id/* drivers/staging/iio/cdc/ad7746.c 121 */[];
	enum ad7746_chan{VIN, VIN_VDD, TEMP_INT, TEMP_EXT, CIN1, CIN1_DIFF, CIN2, CIN2_DIFF,} cocci_id/* drivers/staging/iio/cdc/ad7746.c 110 */;
}
