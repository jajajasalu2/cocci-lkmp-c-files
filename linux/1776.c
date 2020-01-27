cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/iio/light/isl29018.c 869 */;
	const struct of_device_id cocci_id/* drivers/iio/light/isl29018.c 861 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/light/isl29018.c 853 */[];
	const struct acpi_device_id cocci_id/* drivers/iio/light/isl29018.c 844 */[];
	struct isl29018_chip {
		struct regmap *regmap;
		struct mutex lock;
		int type;
		unsigned int calibscale;
		unsigned int ucalibscale;
		unsigned int int_time;
		struct isl29018_scale scale;
		int prox_scheme;
		bool suspended;
		struct regulator *vcc_reg;
	} cocci_id/* drivers/iio/light/isl29018.c 80 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/isl29018.c 715 */;
	struct i2c_client *cocci_id/* drivers/iio/light/isl29018.c 714 */;
	void *cocci_id/* drivers/iio/light/isl29018.c 704 */;
	void cocci_id/* drivers/iio/light/isl29018.c 704 */;
	const struct isl29018_scale {
		unsigned int scale;
		unsigned int uscale;
	} cocci_id/* drivers/iio/light/isl29018.c 70 */[4][4];
	const struct acpi_device_id *cocci_id/* drivers/iio/light/isl29018.c 692 */;
	const char *cocci_id/* drivers/iio/light/isl29018.c 690 */;
	int *cocci_id/* drivers/iio/light/isl29018.c 690 */;
	const struct isl29018_chip_info cocci_id/* drivers/iio/light/isl29018.c 669 */[];
	struct isl29018_chip_info {
		const struct iio_chan_spec *channels;
		int num_channels;
		const struct iio_info *indio_info;
		const struct regmap_config *regmap_cfg;
	} cocci_id/* drivers/iio/light/isl29018.c 662 */;
	const struct regmap_config cocci_id/* drivers/iio/light/isl29018.c 644 */;
	const unsigned int cocci_id/* drivers/iio/light/isl29018.c 64 */[3][4];
	bool cocci_id/* drivers/iio/light/isl29018.c 630 */;
	const struct iio_info cocci_id/* drivers/iio/light/isl29018.c 618 */;
	enum isl29018_int_time{ISL29018_INT_TIME_16, ISL29018_INT_TIME_12, ISL29018_INT_TIME_8, ISL29018_INT_TIME_4,} cocci_id/* drivers/iio/light/isl29018.c 57 */;
	enum{isl29018, isl29023, isl29035,} cocci_id/* drivers/iio/light/isl29018.c 525 */;
	const struct attribute_group cocci_id/* drivers/iio/light/isl29018.c 517 */;
	struct attribute *cocci_id/* drivers/iio/light/isl29018.c 504 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/light/isl29018.c 487 */[];
	long cocci_id/* drivers/iio/light/isl29018.c 403 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/isl29018.c 400 */;
	size_t cocci_id/* drivers/iio/light/isl29018.c 337 */;
	int cocci_id/* drivers/iio/light/isl29018.c 292 */;
	unsigned int cocci_id/* drivers/iio/light/isl29018.c 291 */;
	struct isl29018_chip *cocci_id/* drivers/iio/light/isl29018.c 290 */;
	struct iio_dev *cocci_id/* drivers/iio/light/isl29018.c 289 */;
	char *cocci_id/* drivers/iio/light/isl29018.c 287 */;
	struct device_attribute *cocci_id/* drivers/iio/light/isl29018.c 286 */;
	struct device *cocci_id/* drivers/iio/light/isl29018.c 286 */;
	ssize_t cocci_id/* drivers/iio/light/isl29018.c 285 */;
	struct isl29018_scale cocci_id/* drivers/iio/light/isl29018.c 134 */;
}
