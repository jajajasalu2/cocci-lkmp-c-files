cocci_test_suite() {
	const struct iio_chan_spec cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 65 */[];
	struct platform_driver cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 587 */;
	const struct platform_device_id cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 578 */[];
	const u32 cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 54 */[MAGN_3D_CHANNEL_MAX];
	struct magn_3d_state cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 488 */;
	struct iio_chan_spec *cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 484 */;
	struct hid_sensor_hub_device *cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 483 */;
	struct magn_3d_state *cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 482 */;
	struct iio_dev *cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 481 */;
	char *cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 480 */;
	struct platform_device *cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 477 */;
	int cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 477 */;
	struct magn_3d_state {
		struct hid_sensor_hub_callbacks callbacks;
		struct hid_sensor_common magn_flux_attributes;
		struct hid_sensor_common rot_attributes;
		struct hid_sensor_hub_attribute_info magn[MAGN_3D_CHANNEL_MAX];
		u32 *iio_vals;
		u32 *magn_val_addr[MAGN_3D_CHANNEL_MAX];
		struct common_attributes magn_flux_attr;
		struct common_attributes rot_attr;
	} cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 39 */;
	struct iio_chan_spec cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 383 */;
	int *cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 344 */;
	struct iio_chan_spec **cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 343 */;
	struct common_attributes {
		int scale_pre_decml;
		int scale_post_decml;
		int scale_precision;
		int value_offset;
	} cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 32 */;
	u32 *cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 310 */;
	void *cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 304 */;
	size_t cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 303 */;
	unsigned cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 302 */;
	const void *cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 279 */;
	void cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 279 */;
	const struct iio_info cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 273 */;
	enum magn_3d_channel{CHANNEL_SCAN_INDEX_X, CHANNEL_SCAN_INDEX_Y, CHANNEL_SCAN_INDEX_Z, CHANNEL_SCAN_INDEX_NORTH_MAGN_TILT_COMP, CHANNEL_SCAN_INDEX_NORTH_TRUE_TILT_COMP, CHANNEL_SCAN_INDEX_NORTH_MAGN, CHANNEL_SCAN_INDEX_NORTH_TRUE, MAGN_3D_CHANNEL_MAX,} cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 21 */;
	s32 cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 153 */;
	long cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 147 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 145 */;
	u32 cocci_id/* drivers/iio/magnetometer/hid-sensor-magn-3d.c 140 */;
}
