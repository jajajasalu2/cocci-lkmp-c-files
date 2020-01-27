cocci_test_suite() {
	struct i2c_client *cocci_id/* drivers/iio/humidity/am2315.c 94 */;
	void cocci_id/* drivers/iio/humidity/am2315.c 94 */;
	int cocci_id/* drivers/iio/humidity/am2315.c 75 */;
	u8 cocci_id/* drivers/iio/humidity/am2315.c 73 */;
	u16 cocci_id/* drivers/iio/humidity/am2315.c 73 */;
	u8 *cocci_id/* drivers/iio/humidity/am2315.c 73 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/humidity/am2315.c 44 */[];
	struct am2315_sensor_data {
		s16 hum_data;
		s16 temp_data;
	} cocci_id/* drivers/iio/humidity/am2315.c 39 */;
	struct am2315_data {
		struct i2c_client *client;
		struct mutex lock;
		s16 buffer[8];
	} cocci_id/* drivers/iio/humidity/am2315.c 33 */;
	struct i2c_driver cocci_id/* drivers/iio/humidity/am2315.c 267 */;
	const struct acpi_device_id cocci_id/* drivers/iio/humidity/am2315.c 260 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/humidity/am2315.c 254 */[];
	struct am2315_data *cocci_id/* drivers/iio/humidity/am2315.c 223 */;
	struct iio_dev *cocci_id/* drivers/iio/humidity/am2315.c 222 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/humidity/am2315.c 219 */;
	const struct iio_info cocci_id/* drivers/iio/humidity/am2315.c 214 */;
	struct am2315_sensor_data cocci_id/* drivers/iio/humidity/am2315.c 195 */;
	int *cocci_id/* drivers/iio/humidity/am2315.c 192 */;
	long cocci_id/* drivers/iio/humidity/am2315.c 192 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/humidity/am2315.c 191 */;
	struct iio_poll_func *cocci_id/* drivers/iio/humidity/am2315.c 159 */;
	irqreturn_t cocci_id/* drivers/iio/humidity/am2315.c 154 */;
	void *cocci_id/* drivers/iio/humidity/am2315.c 154 */;
	u8 cocci_id/* drivers/iio/humidity/am2315.c 111 */[8];
	u8 cocci_id/* drivers/iio/humidity/am2315.c 104 */[3];
	struct am2315_sensor_data *cocci_id/* drivers/iio/humidity/am2315.c 100 */;
}
