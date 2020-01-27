cocci_test_suite() {
	const struct iio_chan_spec cocci_id/* drivers/iio/potentiostat/lmp91000.c 78 */[];
	struct lmp91000_data {
		struct regmap *regmap;
		struct device *dev;
		struct iio_trigger *trig;
		struct iio_cb_buffer *cb_buffer;
		struct iio_channel *adc_chan;
		struct completion completion;
		u8 chan_select;
		u32 buffer[4];
	} cocci_id/* drivers/iio/potentiostat/lmp91000.c 64 */;
	const struct regmap_config cocci_id/* drivers/iio/potentiostat/lmp91000.c 59 */;
	const u16 cocci_id/* drivers/iio/potentiostat/lmp91000.c 44 */[];
	struct i2c_driver cocci_id/* drivers/iio/potentiostat/lmp91000.c 424 */;
	const struct i2c_device_id cocci_id/* drivers/iio/potentiostat/lmp91000.c 417 */[];
	const struct of_device_id cocci_id/* drivers/iio/potentiostat/lmp91000.c 410 */[];
	const int cocci_id/* drivers/iio/potentiostat/lmp91000.c 40 */[];
	struct device *cocci_id/* drivers/iio/potentiostat/lmp91000.c 303 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/potentiostat/lmp91000.c 301 */;
	struct i2c_client *cocci_id/* drivers/iio/potentiostat/lmp91000.c 300 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/potentiostat/lmp91000.c 294 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/potentiostat/lmp91000.c 275 */;
	int *cocci_id/* drivers/iio/potentiostat/lmp91000.c 269 */;
	struct lmp91000_data *cocci_id/* drivers/iio/potentiostat/lmp91000.c 267 */;
	struct iio_dev *cocci_id/* drivers/iio/potentiostat/lmp91000.c 266 */;
	const void *cocci_id/* drivers/iio/potentiostat/lmp91000.c 264 */;
	void *cocci_id/* drivers/iio/potentiostat/lmp91000.c 264 */;
	int cocci_id/* drivers/iio/potentiostat/lmp91000.c 264 */;
	unsigned int cocci_id/* drivers/iio/potentiostat/lmp91000.c 209 */;
	struct device_node *cocci_id/* drivers/iio/potentiostat/lmp91000.c 208 */;
	const struct iio_info cocci_id/* drivers/iio/potentiostat/lmp91000.c 201 */;
	long cocci_id/* drivers/iio/potentiostat/lmp91000.c 157 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/potentiostat/lmp91000.c 156 */;
	struct iio_poll_func *cocci_id/* drivers/iio/potentiostat/lmp91000.c 136 */;
	irqreturn_t cocci_id/* drivers/iio/potentiostat/lmp91000.c 134 */;
}
