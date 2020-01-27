cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/iio/light/vcnl4035.c 81 */;
	void *cocci_id/* drivers/iio/light/vcnl4035.c 81 */;
	struct i2c_driver cocci_id/* drivers/iio/light/vcnl4035.c 662 */;
	const struct of_device_id cocci_id/* drivers/iio/light/vcnl4035.c 656 */[];
	int __maybe_unused cocci_id/* drivers/iio/light/vcnl4035.c 632 */;
	struct vcnl4035_data {
		struct i2c_client *client;
		struct regmap *regmap;
		unsigned int als_it_val;
		unsigned int als_persistence;
		unsigned int als_thresh_low;
		unsigned int als_thresh_high;
		struct iio_trigger *drdy_trigger0;
	} cocci_id/* drivers/iio/light/vcnl4035.c 58 */;
	struct regmap *cocci_id/* drivers/iio/light/vcnl4035.c 549 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/vcnl4035.c 545 */;
	struct i2c_client *cocci_id/* drivers/iio/light/vcnl4035.c 544 */;
	const struct regmap_config cocci_id/* drivers/iio/light/vcnl4035.c 493 */;
	struct device *cocci_id/* drivers/iio/light/vcnl4035.c 482 */;
	unsigned int cocci_id/* drivers/iio/light/vcnl4035.c 482 */;
	u8 cocci_id/* drivers/iio/light/vcnl4035.c 399 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/light/vcnl4035.c 366 */[];
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/light/vcnl4035.c 362 */;
	enum vcnl4035_scan_index_order{VCNL4035_CHAN_INDEX_LIGHT, VCNL4035_CHAN_INDEX_WHITE_LED,} cocci_id/* drivers/iio/light/vcnl4035.c 357 */;
	const struct iio_event_spec cocci_id/* drivers/iio/light/vcnl4035.c 341 */[];
	const struct iio_info cocci_id/* drivers/iio/light/vcnl4035.c 333 */;
	const struct attribute_group cocci_id/* drivers/iio/light/vcnl4035.c 329 */;
	struct attribute *cocci_id/* drivers/iio/light/vcnl4035.c 324 */[];
	enum iio_event_info cocci_id/* drivers/iio/light/vcnl4035.c 250 */;
	enum iio_event_direction cocci_id/* drivers/iio/light/vcnl4035.c 250 */;
	enum iio_event_type cocci_id/* drivers/iio/light/vcnl4035.c 249 */;
	long cocci_id/* drivers/iio/light/vcnl4035.c 173 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/vcnl4035.c 172 */;
	int *cocci_id/* drivers/iio/light/vcnl4035.c 172 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/light/vcnl4035.c 136 */;
	struct vcnl4035_data *cocci_id/* drivers/iio/light/vcnl4035.c 127 */;
	struct iio_dev *cocci_id/* drivers/iio/light/vcnl4035.c 126 */;
	bool cocci_id/* drivers/iio/light/vcnl4035.c 124 */;
	struct iio_trigger *cocci_id/* drivers/iio/light/vcnl4035.c 123 */;
	int cocci_id/* drivers/iio/light/vcnl4035.c 123 */;
	u8 cocci_id/* drivers/iio/light/vcnl4035.c 105 */[ALIGN(sizeof(u16),
								sizeof(s64)) + sizeof(s64)];
	struct iio_poll_func *cocci_id/* drivers/iio/light/vcnl4035.c 102 */;
}
