cocci_test_suite() {
	const struct iio_chan_spec cocci_id/* drivers/iio/light/pa12203001.c 99 */[];
	const struct attribute_group cocci_id/* drivers/iio/light/pa12203001.c 95 */;
	struct attribute *cocci_id/* drivers/iio/light/pa12203001.c 90 */[];
	const struct {
		u8 reg;
		u8 val;
	} cocci_id/* drivers/iio/light/pa12203001.c 76 */[];
	struct pa12203001_data {
		struct i2c_client *client;
		struct mutex lock;
		bool als_enabled;
		bool px_enabled;
		bool als_needs_enable;
		bool px_needs_enable;
		struct regmap *map;
	} cocci_id/* drivers/iio/light/pa12203001.c 62 */;
	const int cocci_id/* drivers/iio/light/pa12203001.c 60 */[];
	struct i2c_driver cocci_id/* drivers/iio/light/pa12203001.c 471 */;
	const struct i2c_device_id cocci_id/* drivers/iio/light/pa12203001.c 464 */[];
	const struct acpi_device_id cocci_id/* drivers/iio/light/pa12203001.c 457 */[];
	struct device *cocci_id/* drivers/iio/light/pa12203001.c 422 */;
	struct pa12203001_data cocci_id/* drivers/iio/light/pa12203001.c 351 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/pa12203001.c 344 */;
	struct i2c_client *cocci_id/* drivers/iio/light/pa12203001.c 343 */;
	struct iio_dev *cocci_id/* drivers/iio/light/pa12203001.c 312 */;
	const struct iio_info cocci_id/* drivers/iio/light/pa12203001.c 306 */;
	__le16 cocci_id/* drivers/iio/light/pa12203001.c 216 */;
	unsigned int cocci_id/* drivers/iio/light/pa12203001.c 215 */;
	long cocci_id/* drivers/iio/light/pa12203001.c 210 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/pa12203001.c 209 */;
	int *cocci_id/* drivers/iio/light/pa12203001.c 209 */;
	bool cocci_id/* drivers/iio/light/pa12203001.c 157 */;
	u8 cocci_id/* drivers/iio/light/pa12203001.c 129 */;
	struct pa12203001_data *cocci_id/* drivers/iio/light/pa12203001.c 129 */;
	int cocci_id/* drivers/iio/light/pa12203001.c 129 */;
	const struct regmap_config cocci_id/* drivers/iio/light/pa12203001.c 121 */;
	const struct regmap_access_table cocci_id/* drivers/iio/light/pa12203001.c 116 */;
	const struct regmap_range cocci_id/* drivers/iio/light/pa12203001.c 111 */[];
}
