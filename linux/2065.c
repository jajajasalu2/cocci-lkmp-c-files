cocci_test_suite() {
	long cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 95 */;
	int *cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 94 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 93 */;
	u32 cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 88 */;
	int cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 82 */;
	struct iio_chan_spec *cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 81 */;
	void cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 81 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 46 */[];
	struct platform_driver cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 397 */;
	const u32 cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 39 */[GYRO_3D_CHANNEL_MAX];
	const struct platform_device_id cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 388 */[];
	const char *cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 286 */;
	struct gyro_3d_state {
		struct hid_sensor_hub_callbacks callbacks;
		struct hid_sensor_common common_attributes;
		struct hid_sensor_hub_attribute_info gyro[GYRO_3D_CHANNEL_MAX];
		u32 gyro_val[GYRO_3D_CHANNEL_MAX];
		int scale_pre_decml;
		int scale_post_decml;
		int scale_precision;
		int value_offset;
	} cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 28 */;
	struct platform_device *cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 236 */;
	u32 *cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 225 */;
	struct gyro_3d_state *cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 215 */;
	struct iio_dev *cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 214 */;
	void *cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 212 */;
	char *cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 211 */;
	size_t cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 211 */;
	unsigned cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 210 */;
	enum gyro_3d_channel{CHANNEL_SCAN_INDEX_X, CHANNEL_SCAN_INDEX_Y, CHANNEL_SCAN_INDEX_Z, GYRO_3D_CHANNEL_MAX,} cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 21 */;
	struct hid_sensor_hub_device *cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 209 */;
	const void *cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 184 */;
	const struct iio_info cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 178 */;
	s32 cocci_id/* drivers/iio/gyro/hid-sensor-gyro-3d.c 101 */;
}
