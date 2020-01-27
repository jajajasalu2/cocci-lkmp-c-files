cocci_test_suite() {
	u16 cocci_id/* drivers/iio/pressure/hp03.c 98 */[7];
	u8 cocci_id/* drivers/iio/pressure/hp03.c 97 */[18];
	const u8 cocci_id/* drivers/iio/pressure/hp03.c 81 */;
	struct hp03_priv *cocci_id/* drivers/iio/pressure/hp03.c 81 */;
	int cocci_id/* drivers/iio/pressure/hp03.c 81 */;
	const struct regmap_config cocci_id/* drivers/iio/pressure/hp03.c 70 */;
	bool cocci_id/* drivers/iio/pressure/hp03.c 65 */;
	struct device *cocci_id/* drivers/iio/pressure/hp03.c 65 */;
	unsigned int cocci_id/* drivers/iio/pressure/hp03.c 65 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/pressure/hp03.c 47 */[];
	struct hp03_priv {
		struct i2c_client *client;
		struct mutex lock;
		struct gpio_desc *xclr_gpio;
		struct i2c_client *eeprom_client;
		struct regmap *eeprom_regmap;
		s32 pressure;
		s32 temp;
	} cocci_id/* drivers/iio/pressure/hp03.c 35 */;
	struct i2c_driver cocci_id/* drivers/iio/pressure/hp03.c 302 */;
	const struct of_device_id cocci_id/* drivers/iio/pressure/hp03.c 296 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/pressure/hp03.c 290 */[];
	struct iio_dev *cocci_id/* drivers/iio/pressure/hp03.c 215 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/pressure/hp03.c 212 */;
	struct i2c_client *cocci_id/* drivers/iio/pressure/hp03.c 211 */;
	const struct iio_info cocci_id/* drivers/iio/pressure/hp03.c 207 */;
	int *cocci_id/* drivers/iio/pressure/hp03.c 162 */;
	long cocci_id/* drivers/iio/pressure/hp03.c 162 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/pressure/hp03.c 161 */;
}
