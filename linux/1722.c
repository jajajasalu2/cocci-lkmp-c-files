cocci_test_suite() {
	struct kmx61_data *cocci_id/* drivers/iio/imu/kmx61.c 982 */;
	struct iio_trigger *cocci_id/* drivers/iio/imu/kmx61.c 980 */;
	struct iio_dev *cocci_id/* drivers/iio/imu/kmx61.c 979 */;
	int cocci_id/* drivers/iio/imu/kmx61.c 979 */;
	enum iio_event_info cocci_id/* drivers/iio/imu/kmx61.c 890 */;
	enum iio_event_direction cocci_id/* drivers/iio/imu/kmx61.c 889 */;
	enum iio_event_type cocci_id/* drivers/iio/imu/kmx61.c 888 */;
	long cocci_id/* drivers/iio/imu/kmx61.c 785 */;
	u16 cocci_id/* drivers/iio/imu/kmx61.c 505 */;
	int *cocci_id/* drivers/iio/imu/kmx61.c 458 */;
	u8 *cocci_id/* drivers/iio/imu/kmx61.c 373 */;
	struct kmx61_data **cocci_id/* drivers/iio/imu/kmx61.c 288 */;
	void cocci_id/* drivers/iio/imu/kmx61.c 279 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/imu/kmx61.c 267 */[];
	const struct iio_event_spec cocci_id/* drivers/iio/imu/kmx61.c 221 */;
	const struct attribute_group cocci_id/* drivers/iio/imu/kmx61.c 213 */;
	struct attribute *cocci_id/* drivers/iio/imu/kmx61.c 201 */[];
	const struct {
		int val;
		int val2;
		int odr_bits;
	} cocci_id/* drivers/iio/imu/kmx61.c 179 */[];
	const struct {
		int val;
		int val2;
	} cocci_id/* drivers/iio/imu/kmx61.c 163 */[];
	const u16 cocci_id/* drivers/iio/imu/kmx61.c 161 */[];
	enum kmx61_axis{KMX61_AXIS_X, KMX61_AXIS_Y, KMX61_AXIS_Z,} cocci_id/* drivers/iio/imu/kmx61.c 155 */;
	struct i2c_driver cocci_id/* drivers/iio/imu/kmx61.c 1526 */;
	const struct i2c_device_id cocci_id/* drivers/iio/imu/kmx61.c 1519 */[];
	const struct acpi_device_id cocci_id/* drivers/iio/imu/kmx61.c 1512 */[];
	enum kmx61_range{KMX61_RANGE_2G, KMX61_RANGE_4G, KMX61_RANGE_8G,} cocci_id/* drivers/iio/imu/kmx61.c 149 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/imu/kmx61.c 1288 */;
	struct i2c_client *cocci_id/* drivers/iio/imu/kmx61.c 1287 */;
	const char *cocci_id/* drivers/iio/imu/kmx61.c 1241 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/imu/kmx61.c 1239 */;
	const struct iio_info *cocci_id/* drivers/iio/imu/kmx61.c 1238 */;
	const struct acpi_device_id *cocci_id/* drivers/iio/imu/kmx61.c 1229 */;
	struct device *cocci_id/* drivers/iio/imu/kmx61.c 1227 */;
	s16 cocci_id/* drivers/iio/imu/kmx61.c 1201 */[8];
	struct iio_poll_func *cocci_id/* drivers/iio/imu/kmx61.c 1196 */;
	irqreturn_t cocci_id/* drivers/iio/imu/kmx61.c 1177 */;
	void *cocci_id/* drivers/iio/imu/kmx61.c 1177 */;
	struct kmx61_data {
		struct i2c_client *client;
		struct mutex lock;
		bool acc_stby;
		bool mag_stby;
		bool acc_ps;
		bool mag_ps;
		u8 range;
		u8 odr_bits;
		u8 wake_thresh;
		u8 wake_duration;
		struct iio_dev *acc_indio_dev;
		struct iio_trigger *acc_dready_trig;
		struct iio_trigger *motion_trig;
		bool acc_dready_trig_on;
		bool motion_trig_on;
		bool ev_enable_state;
		struct iio_dev *mag_indio_dev;
		struct iio_trigger *mag_dready_trig;
		bool mag_dready_trig_on;
	} cocci_id/* drivers/iio/imu/kmx61.c 115 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/imu/kmx61.c 1081 */;
	u8 cocci_id/* drivers/iio/imu/kmx61.c 1024 */;
	bool cocci_id/* drivers/iio/imu/kmx61.c 1021 */;
	const struct iio_info cocci_id/* drivers/iio/imu/kmx61.c 1001 */;
}
