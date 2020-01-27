cocci_test_suite() {
	struct adux1020_data {
		struct i2c_client *client;
		struct iio_dev *indio_dev;
		struct mutex lock;
		struct regmap *regmap;
	} cocci_id/* drivers/iio/light/adux1020.c 95 */;
	enum adux1020_op_modes{ADUX1020_MODE_STANDBY, ADUX1020_MODE_PROX_I, ADUX1020_MODE_PROX_XY, ADUX1020_MODE_GEST, ADUX1020_MODE_SAMPLE, ADUX1020_MODE_FORCE=0x0e, ADUX1020_MODE_IDLE=0x0f,} cocci_id/* drivers/iio/light/adux1020.c 85 */;
	struct i2c_driver cocci_id/* drivers/iio/light/adux1020.c 837 */;
	const struct of_device_id cocci_id/* drivers/iio/light/adux1020.c 831 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/light/adux1020.c 825 */[];
	const struct i2c_device_id *cocci_id/* drivers/iio/light/adux1020.c 778 */;
	unsigned int cocci_id/* drivers/iio/light/adux1020.c 738 */;
	struct i2c_client *cocci_id/* drivers/iio/light/adux1020.c 736 */;
	struct adux1020_data *cocci_id/* drivers/iio/light/adux1020.c 734 */;
	int cocci_id/* drivers/iio/light/adux1020.c 734 */;
	struct iio_dev *cocci_id/* drivers/iio/light/adux1020.c 702 */;
	irqreturn_t cocci_id/* drivers/iio/light/adux1020.c 700 */;
	void *cocci_id/* drivers/iio/light/adux1020.c 700 */;
	const struct iio_info cocci_id/* drivers/iio/light/adux1020.c 690 */;
	const struct attribute_group cocci_id/* drivers/iio/light/adux1020.c 686 */;
	struct attribute *cocci_id/* drivers/iio/light/adux1020.c 681 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/light/adux1020.c 662 */[];
	const struct iio_event_spec cocci_id/* drivers/iio/light/adux1020.c 647 */[];
	enum iio_event_info cocci_id/* drivers/iio/light/adux1020.c 593 */;
	enum iio_event_direction cocci_id/* drivers/iio/light/adux1020.c 565 */;
	enum iio_event_type cocci_id/* drivers/iio/light/adux1020.c 564 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/adux1020.c 563 */;
	const int cocci_id/* drivers/iio/light/adux1020.c 439 */[][2];
	u16 cocci_id/* drivers/iio/light/adux1020.c 366 */[3];
	int *cocci_id/* drivers/iio/light/adux1020.c 363 */;
	long cocci_id/* drivers/iio/light/adux1020.c 363 */;
	u16 *cocci_id/* drivers/iio/light/adux1020.c 312 */;
	enum adux1020_op_modes cocci_id/* drivers/iio/light/adux1020.c 311 */;
	u8 cocci_id/* drivers/iio/light/adux1020.c 252 */;
	const struct reg_sequence cocci_id/* drivers/iio/light/adux1020.c 124 */[];
	const struct regmap_config cocci_id/* drivers/iio/light/adux1020.c 116 */;
	const struct adux1020_mode_data cocci_id/* drivers/iio/light/adux1020.c 108 */[];
	struct adux1020_mode_data {
		u8 bytes;
		u8 buf_len;
		u16 int_en;
	} cocci_id/* drivers/iio/light/adux1020.c 102 */;
}
