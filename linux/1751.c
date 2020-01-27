cocci_test_suite() {
	char *cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 73 */;
	struct i2c_msg cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 67 */[2];
	u8 cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 64 */;
	u8 *cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 64 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 49 */[];
	struct lidar_data {
		struct iio_dev *indio_dev;
		struct i2c_client *client;
		int (*xfer)(struct lidar_data *data, u8 reg, u8 *val, int len);
		int i2c_enabled;
		u16 buffer[8];
	} cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 39 */;
	struct i2c_driver cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 361 */;
	const struct dev_pm_ops cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 356 */;
	struct iio_dev *cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 345 */;
	struct device *cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 343 */;
	const struct of_device_id cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 327 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 320 */[];
	const struct i2c_device_id *cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 249 */;
	const struct iio_info cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 244 */;
	struct iio_poll_func *cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 226 */;
	irqreturn_t cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 224 */;
	void *cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 224 */;
	u16 cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 201 */;
	int *cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 194 */;
	long cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 194 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 193 */;
	struct i2c_client *cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 152 */;
	u16 *cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 150 */;
	struct lidar_data *cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 150 */;
	int cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 150 */;
	__be16 cocci_id/* drivers/iio/proximity/pulsedlight-lidar-lite-v2.c 139 */;
}
