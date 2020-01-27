cocci_test_suite() {
	const struct iio_chan_spec *cocci_id/* drivers/iio/potentiometer/ad5272.c 99 */;
	int *cocci_id/* drivers/iio/potentiometer/ad5272.c 75 */;
	u8 cocci_id/* drivers/iio/potentiometer/ad5272.c 67 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/potentiometer/ad5272.c 55 */;
	struct ad5272_data {
		struct i2c_client *client;
		struct mutex lock;
		const struct ad5272_cfg *cfg;
		u8 buf[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/potentiometer/ad5272.c 48 */;
	const struct ad5272_cfg cocci_id/* drivers/iio/potentiometer/ad5272.c 40 */[];
	enum ad5272_type{AD5272_020, AD5272_050, AD5272_100, AD5274_020, AD5274_100,} cocci_id/* drivers/iio/potentiometer/ad5272.c 32 */;
	struct ad5272_cfg {
		int max_pos;
		int kohms;
		int shift;
	} cocci_id/* drivers/iio/potentiometer/ad5272.c 26 */;
	struct i2c_driver cocci_id/* drivers/iio/potentiometer/ad5272.c 218 */;
	const struct i2c_device_id cocci_id/* drivers/iio/potentiometer/ad5272.c 208 */[];
	void *cocci_id/* drivers/iio/potentiometer/ad5272.c 198 */;
	const struct of_device_id cocci_id/* drivers/iio/potentiometer/ad5272.c 197 */[];
	struct ad5272_data *cocci_id/* drivers/iio/potentiometer/ad5272.c 165 */;
	struct iio_dev *cocci_id/* drivers/iio/potentiometer/ad5272.c 164 */;
	struct device *cocci_id/* drivers/iio/potentiometer/ad5272.c 163 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/potentiometer/ad5272.c 161 */;
	struct i2c_client *cocci_id/* drivers/iio/potentiometer/ad5272.c 160 */;
	int cocci_id/* drivers/iio/potentiometer/ad5272.c 160 */;
	struct gpio_desc *cocci_id/* drivers/iio/potentiometer/ad5272.c 142 */;
	const struct iio_info cocci_id/* drivers/iio/potentiometer/ad5272.c 135 */;
	long cocci_id/* drivers/iio/potentiometer/ad5272.c 100 */;
}
