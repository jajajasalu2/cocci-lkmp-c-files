cocci_test_suite() {
	const struct i2c_device_id cocci_id/* drivers/iio/light/vcnl4000.c 92 */[];
	struct vcnl4000_chip_spec {
		const char *prod;
		int (*init)(struct vcnl4000_data *data);
		int (*measure_light)(struct vcnl4000_data *data, int *val);
		int (*measure_proximity)(struct vcnl4000_data *data, int *val);
	} cocci_id/* drivers/iio/light/vcnl4000.c 85 */;
	struct vcnl4000_data {
		struct i2c_client *client;
		enum vcnl4000_device_ids id;
		int rev;
		int al_scale;
		const struct vcnl4000_chip_spec *chip_spec;
		struct mutex vcnl4000_lock;
		struct vcnl4200_channel vcnl4200_al;
		struct vcnl4200_channel vcnl4200_ps;
	} cocci_id/* drivers/iio/light/vcnl4000.c 74 */;
	struct vcnl4200_channel {
		u8 reg;
		ktime_t last_measurement;
		ktime_t sampling_rate;
		struct mutex lock;
	} cocci_id/* drivers/iio/light/vcnl4000.c 67 */;
	enum vcnl4000_device_ids{VCNL4000, VCNL4010, VCNL4040, VCNL4200,} cocci_id/* drivers/iio/light/vcnl4000.c 60 */;
	struct i2c_driver cocci_id/* drivers/iio/light/vcnl4000.c 423 */;
	void *cocci_id/* drivers/iio/light/vcnl4000.c 401 */;
	const struct of_device_id cocci_id/* drivers/iio/light/vcnl4000.c 398 */[];
	struct iio_dev *cocci_id/* drivers/iio/light/vcnl4000.c 368 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/vcnl4000.c 365 */;
	struct i2c_client *cocci_id/* drivers/iio/light/vcnl4000.c 364 */;
	const struct iio_info cocci_id/* drivers/iio/light/vcnl4000.c 360 */;
	long cocci_id/* drivers/iio/light/vcnl4000.c 327 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/vcnl4000.c 326 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/light/vcnl4000.c 314 */[];
	const struct vcnl4000_chip_spec cocci_id/* drivers/iio/light/vcnl4000.c 287 */[];
	ktime_t cocci_id/* drivers/iio/light/vcnl4000.c 241 */;
	s64 cocci_id/* drivers/iio/light/vcnl4000.c 240 */;
	struct vcnl4200_channel *cocci_id/* drivers/iio/light/vcnl4000.c 237 */;
	u8 *cocci_id/* drivers/iio/light/vcnl4000.c 222 */;
	__be16 cocci_id/* drivers/iio/light/vcnl4000.c 194 */;
	int *cocci_id/* drivers/iio/light/vcnl4000.c 191 */;
	u8 cocci_id/* drivers/iio/light/vcnl4000.c 190 */;
	struct vcnl4000_data *cocci_id/* drivers/iio/light/vcnl4000.c 102 */;
	int cocci_id/* drivers/iio/light/vcnl4000.c 102 */;
}
