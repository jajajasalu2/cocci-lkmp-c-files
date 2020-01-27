cocci_test_suite() {
	const struct iio_event_spec cocci_id/* drivers/iio/accel/kxcjk-1013.c 978 */;
	const struct attribute_group cocci_id/* drivers/iio/accel/kxcjk-1013.c 974 */;
	struct attribute *cocci_id/* drivers/iio/accel/kxcjk-1013.c 968 */[];
	const char *cocci_id/* drivers/iio/accel/kxcjk-1013.c 953 */;
	char *cocci_id/* drivers/iio/accel/kxcjk-1013.c 949 */;
	struct device_attribute *cocci_id/* drivers/iio/accel/kxcjk-1013.c 948 */;
	struct device *cocci_id/* drivers/iio/accel/kxcjk-1013.c 947 */;
	ssize_t cocci_id/* drivers/iio/accel/kxcjk-1013.c 947 */;
	struct kxcjk1013_data *cocci_id/* drivers/iio/accel/kxcjk-1013.c 942 */;
	struct iio_dev *cocci_id/* drivers/iio/accel/kxcjk-1013.c 940 */;
	int cocci_id/* drivers/iio/accel/kxcjk-1013.c 940 */;
	enum iio_event_info cocci_id/* drivers/iio/accel/kxcjk-1013.c 828 */;
	enum iio_event_direction cocci_id/* drivers/iio/accel/kxcjk-1013.c 827 */;
	enum iio_event_type cocci_id/* drivers/iio/accel/kxcjk-1013.c 826 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/accel/kxcjk-1013.c 825 */;
	long cocci_id/* drivers/iio/accel/kxcjk-1013.c 748 */;
	u8 cocci_id/* drivers/iio/accel/kxcjk-1013.c 701 */;
	int *cocci_id/* drivers/iio/accel/kxcjk-1013.c 620 */;
	size_t cocci_id/* drivers/iio/accel/kxcjk-1013.c 619 */;
	const struct kx_odr_map *cocci_id/* drivers/iio/accel/kxcjk-1013.c 618 */;
	enum kxcjk1013_mode *cocci_id/* drivers/iio/accel/kxcjk-1013.c 299 */;
	enum kxcjk1013_mode cocci_id/* drivers/iio/accel/kxcjk-1013.c 273 */;
	const struct {
		u16 scale;
		u8 gsel_0;
		u8 gsel_1;
	} cocci_id/* drivers/iio/accel/kxcjk-1013.c 264 */[];
	const struct {
		int odr_bits;
		int usec;
	} cocci_id/* drivers/iio/accel/kxcjk-1013.c 204 */[KX_MAX_CHIPS][12];
	const struct kx_odr_map cocci_id/* drivers/iio/accel/kxcjk-1013.c 191 */[];
	const char *const cocci_id/* drivers/iio/accel/kxcjk-1013.c 188 */;
	struct kx_odr_map {
		int val;
		int val2;
		int odr_bits;
		int wuf_bits;
	} cocci_id/* drivers/iio/accel/kxcjk-1013.c 166 */;
	enum kxcjk1013_range{KXCJK1013_RANGE_2G, KXCJK1013_RANGE_4G, KXCJK1013_RANGE_8G,} cocci_id/* drivers/iio/accel/kxcjk-1013.c 160 */;
	enum kxcjk1013_mode{STANDBY, OPERATION,} cocci_id/* drivers/iio/accel/kxcjk-1013.c 155 */;
	struct i2c_driver cocci_id/* drivers/iio/accel/kxcjk-1013.c 1518 */;
	const struct of_device_id cocci_id/* drivers/iio/accel/kxcjk-1013.c 1509 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/accel/kxcjk-1013.c 1498 */[];
	const struct acpi_device_id cocci_id/* drivers/iio/accel/kxcjk-1013.c 1482 */[];
	enum kxcjk1013_axis{AXIS_X, AXIS_Y, AXIS_Z, AXIS_MAX,} cocci_id/* drivers/iio/accel/kxcjk-1013.c 148 */;
	struct kxcjk1013_data {
		struct i2c_client *client;
		struct iio_trigger *dready_trig;
		struct iio_trigger *motion_trig;
		struct mutex mutex;
		s16 buffer[8];
		u8 odr_bits;
		u8 range;
		int wake_thres;
		int wake_dur;
		bool active_high_intr;
		bool dready_trigger_on;
		int ev_enable_state;
		bool motion_trigger_on;
		int64_t timestamp;
		enum kx_chipset chipset;
		bool is_smo8500_device;
	} cocci_id/* drivers/iio/accel/kxcjk-1013.c 129 */;
	struct kxcjk_1013_platform_data *cocci_id/* drivers/iio/accel/kxcjk-1013.c 1257 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/accel/kxcjk-1013.c 1253 */;
	struct i2c_client *cocci_id/* drivers/iio/accel/kxcjk-1013.c 1252 */;
	enum kx_chipset cocci_id/* drivers/iio/accel/kxcjk-1013.c 1247 */;
	const struct acpi_device_id *cocci_id/* drivers/iio/accel/kxcjk-1013.c 1238 */;
	bool *cocci_id/* drivers/iio/accel/kxcjk-1013.c 1236 */;
	enum kx_chipset *cocci_id/* drivers/iio/accel/kxcjk-1013.c 1235 */;
	irqreturn_t cocci_id/* drivers/iio/accel/kxcjk-1013.c 1216 */;
	void *cocci_id/* drivers/iio/accel/kxcjk-1013.c 1216 */;
	enum kx_chipset{KXCJK1013, KXCJ91008, KXTJ21009, KXTF9, KX_MAX_CHIPS,} cocci_id/* drivers/iio/accel/kxcjk-1013.c 121 */;
	void cocci_id/* drivers/iio/accel/kxcjk-1013.c 1114 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/accel/kxcjk-1013.c 1109 */;
	bool cocci_id/* drivers/iio/accel/kxcjk-1013.c 1071 */;
	struct iio_trigger *cocci_id/* drivers/iio/accel/kxcjk-1013.c 1070 */;
	u8 *cocci_id/* drivers/iio/accel/kxcjk-1013.c 1042 */;
	struct iio_poll_func *cocci_id/* drivers/iio/accel/kxcjk-1013.c 1033 */;
	const unsigned long cocci_id/* drivers/iio/accel/kxcjk-1013.c 1029 */[];
	const struct iio_info cocci_id/* drivers/iio/accel/kxcjk-1013.c 1019 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/accel/kxcjk-1013.c 1012 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/accel/kxcjk-1013.c 1005 */[];
}