cocci_test_suite() {
	s32 cocci_id/* drivers/iio/light/cm32181.c 74 */;
	struct cm32181_chip {
		struct i2c_client *client;
		struct mutex lock;
		u16 conf_regs[CM32181_CONF_REG_NUM];
		int calibscale;
	} cocci_id/* drivers/iio/light/cm32181.c 55 */;
	const int cocci_id/* drivers/iio/light/cm32181.c 51 */[];
	const u8 cocci_id/* drivers/iio/light/cm32181.c 47 */[CM32181_CONF_REG_NUM];
	struct i2c_driver cocci_id/* drivers/iio/light/cm32181.c 354 */;
	const struct of_device_id cocci_id/* drivers/iio/light/cm32181.c 348 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/light/cm32181.c 341 */[];
	struct iio_dev *cocci_id/* drivers/iio/light/cm32181.c 301 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/cm32181.c 298 */;
	const struct iio_info cocci_id/* drivers/iio/light/cm32181.c 291 */;
	const struct attribute_group cocci_id/* drivers/iio/light/cm32181.c 287 */;
	struct attribute *cocci_id/* drivers/iio/light/cm32181.c 282 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/light/cm32181.c 269 */[];
	int cocci_id/* drivers/iio/light/cm32181.c 261 */;
	struct device_attribute *cocci_id/* drivers/iio/light/cm32181.c 259 */;
	char *cocci_id/* drivers/iio/light/cm32181.c 259 */;
	struct device *cocci_id/* drivers/iio/light/cm32181.c 258 */;
	ssize_t cocci_id/* drivers/iio/light/cm32181.c 258 */;
	long cocci_id/* drivers/iio/light/cm32181.c 205 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/cm32181.c 204 */;
	unsigned long cocci_id/* drivers/iio/light/cm32181.c 178 */;
	struct i2c_client *cocci_id/* drivers/iio/light/cm32181.c 175 */;
	struct cm32181_chip *cocci_id/* drivers/iio/light/cm32181.c 173 */;
	u16 cocci_id/* drivers/iio/light/cm32181.c 111 */;
	int *cocci_id/* drivers/iio/light/cm32181.c 109 */;
}
