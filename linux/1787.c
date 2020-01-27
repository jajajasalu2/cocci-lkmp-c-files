cocci_test_suite() {
	const int cocci_id/* drivers/iio/light/stk3310.c 84 */[4];
	struct i2c_driver cocci_id/* drivers/iio/light/stk3310.c 690 */;
	const struct of_device_id cocci_id/* drivers/iio/light/stk3310.c 682 */[];
	const struct reg_field cocci_id/* drivers/iio/light/stk3310.c 68 */;
	const struct acpi_device_id cocci_id/* drivers/iio/light/stk3310.c 673 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/light/stk3310.c 665 */[];
	const struct i2c_device_id *cocci_id/* drivers/iio/light/stk3310.c 567 */;
	u64 cocci_id/* drivers/iio/light/stk3310.c 538 */;
	unsigned int cocci_id/* drivers/iio/light/stk3310.c 537 */;
	irqreturn_t cocci_id/* drivers/iio/light/stk3310.c 534 */;
	void *cocci_id/* drivers/iio/light/stk3310.c 534 */;
	struct regmap *cocci_id/* drivers/iio/light/stk3310.c 501 */;
	struct regmap_config cocci_id/* drivers/iio/light/stk3310.c 490 */;
	bool cocci_id/* drivers/iio/light/stk3310.c 476 */;
	struct device *cocci_id/* drivers/iio/light/stk3310.c 476 */;
	struct i2c_client *cocci_id/* drivers/iio/light/stk3310.c 448 */;
	struct stk3310_data *cocci_id/* drivers/iio/light/stk3310.c 447 */;
	u8 cocci_id/* drivers/iio/light/stk3310.c 446 */;
	struct iio_dev *cocci_id/* drivers/iio/light/stk3310.c 442 */;
	const struct iio_info cocci_id/* drivers/iio/light/stk3310.c 409 */;
	long cocci_id/* drivers/iio/light/stk3310.c 303 */;
	__be16 cocci_id/* drivers/iio/light/stk3310.c 199 */;
	int *cocci_id/* drivers/iio/light/stk3310.c 196 */;
	enum iio_event_info cocci_id/* drivers/iio/light/stk3310.c 195 */;
	enum iio_event_direction cocci_id/* drivers/iio/light/stk3310.c 194 */;
	enum iio_event_type cocci_id/* drivers/iio/light/stk3310.c 193 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/stk3310.c 192 */;
	const int cocci_id/* drivers/iio/light/stk3310.c 178 */[][2];
	int cocci_id/* drivers/iio/light/stk3310.c 178 */;
	const struct attribute_group cocci_id/* drivers/iio/light/stk3310.c 174 */;
	struct attribute *cocci_id/* drivers/iio/light/stk3310.c 166 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/light/stk3310.c 137 */[];
	const struct iio_event_spec cocci_id/* drivers/iio/light/stk3310.c 120 */[];
	struct stk3310_data {
		struct i2c_client *client;
		struct mutex lock;
		bool als_enabled;
		bool ps_enabled;
		u64 timestamp;
		struct regmap *regmap;
		struct regmap_field *reg_state;
		struct regmap_field *reg_als_gain;
		struct regmap_field *reg_ps_gain;
		struct regmap_field *reg_als_it;
		struct regmap_field *reg_ps_it;
		struct regmap_field *reg_int_ps;
		struct regmap_field *reg_flag_psint;
		struct regmap_field *reg_flag_nf;
	} cocci_id/* drivers/iio/light/stk3310.c 103 */;
}