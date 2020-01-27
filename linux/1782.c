cocci_test_suite() {
	struct isl29028_chip {
		struct mutex lock;
		struct regmap *regmap;
		int prox_sampling_int;
		int prox_sampling_frac;
		bool enable_prox;
		int lux_scale;
		enum isl29028_als_ir_mode als_ir_mode;
	} cocci_id/* drivers/iio/light/isl29028.c 86 */;
	enum isl29028_als_ir_mode{ISL29028_MODE_NONE=0, ISL29028_MODE_ALS, ISL29028_MODE_IR,} cocci_id/* drivers/iio/light/isl29028.c 80 */;
	struct i2c_driver cocci_id/* drivers/iio/light/isl29028.c 702 */;
	const struct of_device_id cocci_id/* drivers/iio/light/isl29028.c 694 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/light/isl29028.c 687 */[];
	int __maybe_unused cocci_id/* drivers/iio/light/isl29028.c 671 */;
	const struct isl29028_prox_data cocci_id/* drivers/iio/light/isl29028.c 66 */[];
	struct isl29028_prox_data {
		int sampling_int;
		int sampling_fract;
		int sleep_time;
	} cocci_id/* drivers/iio/light/isl29028.c 60 */;
	struct iio_dev *cocci_id/* drivers/iio/light/isl29028.c 574 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/isl29028.c 571 */;
	struct i2c_client *cocci_id/* drivers/iio/light/isl29028.c 570 */;
	const struct regmap_config cocci_id/* drivers/iio/light/isl29028.c 561 */;
	bool cocci_id/* drivers/iio/light/isl29028.c 548 */;
	unsigned int cocci_id/* drivers/iio/light/isl29028.c 548 */;
	const struct iio_info cocci_id/* drivers/iio/light/isl29028.c 526 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/light/isl29028.c 511 */[];
	const struct attribute_group cocci_id/* drivers/iio/light/isl29028.c 507 */;
	struct attribute *cocci_id/* drivers/iio/light/isl29028.c 501 */[];
	long cocci_id/* drivers/iio/light/isl29028.c 424 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/isl29028.c 423 */;
	struct device *cocci_id/* drivers/iio/light/isl29028.c 291 */;
	struct isl29028_chip *cocci_id/* drivers/iio/light/isl29028.c 289 */;
	int *cocci_id/* drivers/iio/light/isl29028.c 289 */;
	int cocci_id/* drivers/iio/light/isl29028.c 289 */;
	enum isl29028_als_ir_mode cocci_id/* drivers/iio/light/isl29028.c 183 */;
}
