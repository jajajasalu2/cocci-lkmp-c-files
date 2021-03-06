cocci_test_suite() {
	const struct iio_chan_spec cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 48 */[];
	struct platform_driver cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 465 */;
	const struct platform_device_id cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 453 */[];
	const u32 cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 41 */[ACCEL_3D_CHANNEL_MAX];
	struct accel_3d_state cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 348 */;
	const char *cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 339 */;
	struct platform_device *cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 288 */;
	struct accel_3d_state {
		struct hid_sensor_hub_callbacks callbacks;
		struct hid_sensor_common common_attributes;
		struct hid_sensor_hub_attribute_info accel[ACCEL_3D_CHANNEL_MAX];
		u32 accel_val[ACCEL_3D_CHANNEL_MAX + 3];
		int scale_pre_decml;
		int scale_post_decml;
		int scale_precision;
		int value_offset;
		int64_t timestamp;
	} cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 28 */;
	int64_t *cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 278 */;
	u32 *cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 271 */;
	struct accel_3d_state *cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 261 */;
	struct iio_dev *cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 260 */;
	void *cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 258 */;
	char *cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 257 */;
	size_t cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 257 */;
	unsigned cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 256 */;
	struct hid_sensor_hub_device *cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 255 */;
	int64_t cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 224 */;
	const struct iio_info cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 217 */;
	enum accel_3d_channel{CHANNEL_SCAN_INDEX_X, CHANNEL_SCAN_INDEX_Y, CHANNEL_SCAN_INDEX_Z, ACCEL_3D_CHANNEL_MAX,} cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 21 */;
	s32 cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 139 */;
	long cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 133 */;
	int *cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 132 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 131 */;
	u32 cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 126 */;
	int cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 120 */;
	struct iio_chan_spec *cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 119 */;
	void cocci_id/* drivers/iio/accel/hid-sensor-accel-3d.c 119 */;
}
