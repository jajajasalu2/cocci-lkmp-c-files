cocci_test_suite() {
	const struct {
		int sens[3];
		int nfo;
	} cocci_id/* drivers/iio/magnetometer/mmc35240.c 96 */[];
	enum mmc35240_axis{AXIS_X=0, AXIS_Y, AXIS_Z,} cocci_id/* drivers/iio/magnetometer/mmc35240.c 90 */;
	enum mmc35240_resolution{MMC35240_16_BITS_SLOW=0, MMC35240_16_BITS_FAST, MMC35240_14_BITS, MMC35240_12_BITS,} cocci_id/* drivers/iio/magnetometer/mmc35240.c 83 */;
	struct i2c_driver cocci_id/* drivers/iio/magnetometer/mmc35240.c 576 */;
	const struct i2c_device_id cocci_id/* drivers/iio/magnetometer/mmc35240.c 570 */[];
	const struct acpi_device_id cocci_id/* drivers/iio/magnetometer/mmc35240.c 564 */[];
	const struct of_device_id cocci_id/* drivers/iio/magnetometer/mmc35240.c 558 */[];
	const struct dev_pm_ops cocci_id/* drivers/iio/magnetometer/mmc35240.c 554 */;
	struct regmap *cocci_id/* drivers/iio/magnetometer/mmc35240.c 489 */;
	struct iio_dev *cocci_id/* drivers/iio/magnetometer/mmc35240.c 488 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/magnetometer/mmc35240.c 485 */;
	struct i2c_client *cocci_id/* drivers/iio/magnetometer/mmc35240.c 484 */;
	const struct regmap_config cocci_id/* drivers/iio/magnetometer/mmc35240.c 467 */;
	struct reg_default cocci_id/* drivers/iio/magnetometer/mmc35240.c 462 */[];
	struct device *cocci_id/* drivers/iio/magnetometer/mmc35240.c 434 */;
	const struct iio_info cocci_id/* drivers/iio/magnetometer/mmc35240.c 417 */;
	long cocci_id/* drivers/iio/magnetometer/mmc35240.c 353 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/magnetometer/mmc35240.c 352 */;
	int cocci_id/* drivers/iio/magnetometer/mmc35240.c 316 */[3];
	__le16 cocci_id/* drivers/iio/magnetometer/mmc35240.c 314 */[];
	int *cocci_id/* drivers/iio/magnetometer/mmc35240.c 314 */;
	__le16 cocci_id/* drivers/iio/magnetometer/mmc35240.c 299 */;
	__le16 cocci_id/* drivers/iio/magnetometer/mmc35240.c 290 */[3];
	u8 *cocci_id/* drivers/iio/magnetometer/mmc35240.c 242 */;
	u8 cocci_id/* drivers/iio/magnetometer/mmc35240.c 210 */[6];
	unsigned int cocci_id/* drivers/iio/magnetometer/mmc35240.c 209 */;
	u8 cocci_id/* drivers/iio/magnetometer/mmc35240.c 183 */;
	bool cocci_id/* drivers/iio/magnetometer/mmc35240.c 180 */;
	struct mmc35240_data *cocci_id/* drivers/iio/magnetometer/mmc35240.c 168 */;
	int cocci_id/* drivers/iio/magnetometer/mmc35240.c 168 */;
	const struct attribute_group cocci_id/* drivers/iio/magnetometer/mmc35240.c 164 */;
	struct attribute *cocci_id/* drivers/iio/magnetometer/mmc35240.c 159 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/magnetometer/mmc35240.c 153 */[];
	const struct {
		int val;
		int val2;
	} cocci_id/* drivers/iio/magnetometer/mmc35240.c 133 */[];
	struct mmc35240_data {
		struct i2c_client *client;
		struct mutex mutex;
		struct regmap *regmap;
		enum mmc35240_resolution res;
		int axis_coef[3];
		int axis_scale[3];
	} cocci_id/* drivers/iio/magnetometer/mmc35240.c 122 */;
}
