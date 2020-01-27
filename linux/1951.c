cocci_test_suite() {
	s32 cocci_id/* drivers/iio/pressure/hid-sensor-press.c 68 */;
	long cocci_id/* drivers/iio/pressure/hid-sensor-press.c 62 */;
	int *cocci_id/* drivers/iio/pressure/hid-sensor-press.c 61 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/pressure/hid-sensor-press.c 60 */;
	u32 cocci_id/* drivers/iio/pressure/hid-sensor-press.c 55 */;
	struct platform_driver cocci_id/* drivers/iio/pressure/hid-sensor-press.c 361 */;
	const struct platform_device_id cocci_id/* drivers/iio/pressure/hid-sensor-press.c 352 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/pressure/hid-sensor-press.c 35 */[];
	struct iio_chan_spec *cocci_id/* drivers/iio/pressure/hid-sensor-press.c 279 */;
	struct press_state cocci_id/* drivers/iio/pressure/hid-sensor-press.c 254 */;
	struct hid_sensor_hub_device *cocci_id/* drivers/iio/pressure/hid-sensor-press.c 251 */;
	struct press_state *cocci_id/* drivers/iio/pressure/hid-sensor-press.c 250 */;
	struct iio_dev *cocci_id/* drivers/iio/pressure/hid-sensor-press.c 249 */;
	const char *cocci_id/* drivers/iio/pressure/hid-sensor-press.c 248 */;
	struct platform_device *cocci_id/* drivers/iio/pressure/hid-sensor-press.c 245 */;
	int cocci_id/* drivers/iio/pressure/hid-sensor-press.c 245 */;
	struct press_state {
		struct hid_sensor_hub_callbacks callbacks;
		struct hid_sensor_common common_attributes;
		struct hid_sensor_hub_attribute_info press_attr;
		u32 press_data;
		int scale_pre_decml;
		int scale_post_decml;
		int scale_precision;
		int value_offset;
	} cocci_id/* drivers/iio/pressure/hid-sensor-press.c 23 */;
	u32 *cocci_id/* drivers/iio/pressure/hid-sensor-press.c 194 */;
	void *cocci_id/* drivers/iio/pressure/hid-sensor-press.c 186 */;
	char *cocci_id/* drivers/iio/pressure/hid-sensor-press.c 185 */;
	size_t cocci_id/* drivers/iio/pressure/hid-sensor-press.c 185 */;
	unsigned cocci_id/* drivers/iio/pressure/hid-sensor-press.c 184 */;
	const void *cocci_id/* drivers/iio/pressure/hid-sensor-press.c 158 */;
	void cocci_id/* drivers/iio/pressure/hid-sensor-press.c 158 */;
	const struct iio_info cocci_id/* drivers/iio/pressure/hid-sensor-press.c 152 */;
}
