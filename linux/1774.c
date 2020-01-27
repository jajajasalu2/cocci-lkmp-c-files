cocci_test_suite() {
	long cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 62 */;
	int *cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 61 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 60 */;
	u32 cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 54 */;
	int cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 48 */;
	struct iio_chan_spec *cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 47 */;
	void cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 47 */;
	struct platform_driver cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 364 */;
	const struct platform_device_id cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 347 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 33 */[];
	struct dev_rot_state cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 238 */;
	struct dev_rot_state {
		struct hid_sensor_hub_callbacks callbacks;
		struct hid_sensor_common common_attributes;
		struct hid_sensor_hub_attribute_info quaternion;
		u32 sampled_vals[4];
		int scale_pre_decml;
		int scale_post_decml;
		int scale_precision;
		int value_offset;
	} cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 21 */;
	struct platform_device *cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 183 */;
	struct dev_rot_state *cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 170 */;
	struct iio_dev *cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 169 */;
	void *cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 167 */;
	char *cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 166 */;
	size_t cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 166 */;
	unsigned cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 165 */;
	struct hid_sensor_hub_device *cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 164 */;
	u8 *cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 157 */;
	const struct iio_info cocci_id/* drivers/iio/orientation/hid-sensor-rotation.c 132 */;
}
