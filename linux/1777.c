cocci_test_suite() {
	s32 cocci_id/* drivers/iio/light/hid-sensor-als.c 83 */;
	long cocci_id/* drivers/iio/light/hid-sensor-als.c 77 */;
	int *cocci_id/* drivers/iio/light/hid-sensor-als.c 76 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/hid-sensor-als.c 75 */;
	u32 cocci_id/* drivers/iio/light/hid-sensor-als.c 70 */;
	int cocci_id/* drivers/iio/light/hid-sensor-als.c 64 */;
	struct iio_chan_spec *cocci_id/* drivers/iio/light/hid-sensor-als.c 63 */;
	void cocci_id/* drivers/iio/light/hid-sensor-als.c 63 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/light/hid-sensor-als.c 39 */[];
	struct platform_driver cocci_id/* drivers/iio/light/hid-sensor-als.c 379 */;
	const struct platform_device_id cocci_id/* drivers/iio/light/hid-sensor-als.c 370 */[];
	struct als_state cocci_id/* drivers/iio/light/hid-sensor-als.c 273 */;
	struct als_state {
		struct hid_sensor_hub_callbacks callbacks;
		struct hid_sensor_common common_attributes;
		struct hid_sensor_hub_attribute_info als_illum;
		u32 illum[CHANNEL_SCAN_INDEX_MAX];
		int scale_pre_decml;
		int scale_post_decml;
		int scale_precision;
		int value_offset;
	} cocci_id/* drivers/iio/light/hid-sensor-als.c 27 */;
	const char *cocci_id/* drivers/iio/light/hid-sensor-als.c 268 */;
	struct platform_device *cocci_id/* drivers/iio/light/hid-sensor-als.c 223 */;
	enum{CHANNEL_SCAN_INDEX_INTENSITY=0, CHANNEL_SCAN_INDEX_ILLUM=1, CHANNEL_SCAN_INDEX_MAX,} cocci_id/* drivers/iio/light/hid-sensor-als.c 21 */;
	u32 *cocci_id/* drivers/iio/light/hid-sensor-als.c 207 */;
	struct als_state *cocci_id/* drivers/iio/light/hid-sensor-als.c 205 */;
	struct iio_dev *cocci_id/* drivers/iio/light/hid-sensor-als.c 204 */;
	void *cocci_id/* drivers/iio/light/hid-sensor-als.c 202 */;
	char *cocci_id/* drivers/iio/light/hid-sensor-als.c 201 */;
	size_t cocci_id/* drivers/iio/light/hid-sensor-als.c 201 */;
	unsigned cocci_id/* drivers/iio/light/hid-sensor-als.c 200 */;
	struct hid_sensor_hub_device *cocci_id/* drivers/iio/light/hid-sensor-als.c 199 */;
	const void *cocci_id/* drivers/iio/light/hid-sensor-als.c 174 */;
	const struct iio_info cocci_id/* drivers/iio/light/hid-sensor-als.c 168 */;
}
