cocci_test_suite() {
	long cocci_id/* drivers/iio/potentiometer/tpl0102.c 87 */;
	const int **cocci_id/* drivers/iio/potentiometer/tpl0102.c 86 */;
	int *cocci_id/* drivers/iio/potentiometer/tpl0102.c 86 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/potentiometer/tpl0102.c 85 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/potentiometer/tpl0102.c 58 */[];
	const struct regmap_config cocci_id/* drivers/iio/potentiometer/tpl0102.c 43 */;
	struct tpl0102_data {
		struct regmap *regmap;
		const struct tpl0102_cfg *cfg;
	} cocci_id/* drivers/iio/potentiometer/tpl0102.c 38 */;
	const struct tpl0102_cfg cocci_id/* drivers/iio/potentiometer/tpl0102.c 29 */[];
	enum tpl0102_type{CAT5140_503, CAT5140_104, TPL0102_104, TPL0401_103,} cocci_id/* drivers/iio/potentiometer/tpl0102.c 22 */;
	struct i2c_driver cocci_id/* drivers/iio/potentiometer/tpl0102.c 161 */;
	struct tpl0102_cfg {
		int wipers;
		int avail[3];
		int kohms;
	} cocci_id/* drivers/iio/potentiometer/tpl0102.c 16 */;
	const struct i2c_device_id cocci_id/* drivers/iio/potentiometer/tpl0102.c 152 */[];
	struct iio_dev *cocci_id/* drivers/iio/potentiometer/tpl0102.c 128 */;
	struct tpl0102_data *cocci_id/* drivers/iio/potentiometer/tpl0102.c 127 */;
	struct device *cocci_id/* drivers/iio/potentiometer/tpl0102.c 126 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/potentiometer/tpl0102.c 124 */;
	struct i2c_client *cocci_id/* drivers/iio/potentiometer/tpl0102.c 123 */;
	int cocci_id/* drivers/iio/potentiometer/tpl0102.c 123 */;
	const struct iio_info cocci_id/* drivers/iio/potentiometer/tpl0102.c 117 */;
}
