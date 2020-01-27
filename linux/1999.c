cocci_test_suite() {
	unsigned int cocci_id/* drivers/iio/dac/ti-dac5571.c 81 */;
	u16 cocci_id/* drivers/iio/dac/ti-dac5571.c 79 */;
	struct dac5571_data *cocci_id/* drivers/iio/dac/ti-dac5571.c 79 */;
	int cocci_id/* drivers/iio/dac/ti-dac5571.c 79 */;
	struct dac5571_data {
		struct i2c_client *client;
		int id;
		struct mutex lock;
		struct regulator *vref;
		u16 val[4];
		bool powerdown;
		u8 powerdown_mode;
		const struct dac5571_spec *spec;
		int (*dac5571_cmd)(struct dac5571_data *data, int channel,
				   u16 val);
		int (*dac5571_pwrdwn)(struct dac5571_data *data, int channel,
				      u8 pwrdwn);
		u8 buf[3]____cacheline_aligned;
	} cocci_id/* drivers/iio/dac/ti-dac5571.c 44 */;
	struct i2c_driver cocci_id/* drivers/iio/dac/ti-dac5571.c 418 */;
	const struct i2c_device_id cocci_id/* drivers/iio/dac/ti-dac5571.c 404 */[];
	const struct of_device_id cocci_id/* drivers/iio/dac/ti-dac5571.c 389 */[];
	const struct dac5571_spec cocci_id/* drivers/iio/dac/ti-dac5571.c 35 */[];
	const struct dac5571_spec *cocci_id/* drivers/iio/dac/ti-dac5571.c 311 */;
	struct device *cocci_id/* drivers/iio/dac/ti-dac5571.c 310 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/dac/ti-dac5571.c 308 */;
	struct i2c_client *cocci_id/* drivers/iio/dac/ti-dac5571.c 307 */;
	const struct iio_info cocci_id/* drivers/iio/dac/ti-dac5571.c 301 */;
	struct dac5571_spec {
		u8 num_channels;
		u8 resolution;
	} cocci_id/* drivers/iio/dac/ti-dac5571.c 30 */;
	enum chip_id{single_8bit, single_10bit, single_12bit, quad_8bit, quad_10bit, quad_12bit,} cocci_id/* drivers/iio/dac/ti-dac5571.c 25 */;
	int *cocci_id/* drivers/iio/dac/ti-dac5571.c 240 */;
	long cocci_id/* drivers/iio/dac/ti-dac5571.c 240 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/dac/ti-dac5571.c 231 */[];
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/dac/ti-dac5571.c 207 */[];
	bool cocci_id/* drivers/iio/dac/ti-dac5571.c 179 */;
	const char *cocci_id/* drivers/iio/dac/ti-dac5571.c 176 */;
	size_t cocci_id/* drivers/iio/dac/ti-dac5571.c 176 */;
	char *cocci_id/* drivers/iio/dac/ti-dac5571.c 166 */;
	uintptr_t cocci_id/* drivers/iio/dac/ti-dac5571.c 164 */;
	ssize_t cocci_id/* drivers/iio/dac/ti-dac5571.c 163 */;
	const struct iio_enum cocci_id/* drivers/iio/dac/ti-dac5571.c 156 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ti-dac5571.c 124 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/ti-dac5571.c 123 */;
	const char *constcocci_id/* drivers/iio/dac/ti-dac5571.c 119 */[];
	u8 cocci_id/* drivers/iio/dac/ti-dac5571.c 106 */;
}
