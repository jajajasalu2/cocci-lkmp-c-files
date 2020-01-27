cocci_test_suite() {
	s32 cocci_id/* drivers/iio/temperature/tsys01.c 84 */;
	long cocci_id/* drivers/iio/temperature/tsys01.c 81 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/temperature/tsys01.c 80 */;
	int *cocci_id/* drivers/iio/temperature/tsys01.c 80 */;
	s64 cocci_id/* drivers/iio/temperature/tsys01.c 50 */;
	u32 cocci_id/* drivers/iio/temperature/tsys01.c 49 */;
	s32 *cocci_id/* drivers/iio/temperature/tsys01.c 46 */;
	const int cocci_id/* drivers/iio/temperature/tsys01.c 42 */[];
	struct tsys01_dev {
		void *client;
		struct mutex lock;
		int (*reset)(void *cli, u8 cmd, unsigned int delay);
		int (*convert_and_read)(void *cli, u8 conv, u8 rd,
					unsigned int delay, u32 *adc);
		int (*read_prom_word)(void *cli, int cmd, u16 *word);
		u16 prom[TSYS01_PROM_WORDS_NB];
	} cocci_id/* drivers/iio/temperature/tsys01.c 29 */;
	struct i2c_driver cocci_id/* drivers/iio/temperature/tsys01.c 221 */;
	const struct of_device_id cocci_id/* drivers/iio/temperature/tsys01.c 215 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/temperature/tsys01.c 209 */[];
	struct iio_dev *cocci_id/* drivers/iio/temperature/tsys01.c 183 */;
	struct tsys01_dev *cocci_id/* drivers/iio/temperature/tsys01.c 182 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/temperature/tsys01.c 180 */;
	struct i2c_client *cocci_id/* drivers/iio/temperature/tsys01.c 179 */;
	int cocci_id/* drivers/iio/temperature/tsys01.c 179 */;
	struct device *cocci_id/* drivers/iio/temperature/tsys01.c 154 */;
	char *cocci_id/* drivers/iio/temperature/tsys01.c 131 */;
	char cocci_id/* drivers/iio/temperature/tsys01.c 130 */[7 * TSYS01_PROM_WORDS_NB + 1];
	u8 cocci_id/* drivers/iio/temperature/tsys01.c 117 */;
	bool cocci_id/* drivers/iio/temperature/tsys01.c 115 */;
	u16 *cocci_id/* drivers/iio/temperature/tsys01.c 115 */;
	const struct iio_info cocci_id/* drivers/iio/temperature/tsys01.c 111 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/temperature/tsys01.c 104 */[];
}
