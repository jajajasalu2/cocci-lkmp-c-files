cocci_test_suite() {
	long cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 96 */;
	int *cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 95 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 94 */;
	u32 cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 89 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 47 */[];
	struct platform_driver cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 418 */;
	const struct platform_device_id cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 409 */[];
	const u32 cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 40 */[INCLI_3D_CHANNEL_MAX];
	struct iio_chan_spec *cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 335 */;
	struct incl_3d_state cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 309 */;
	struct hid_sensor_hub_device *cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 306 */;
	struct incl_3d_state *cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 305 */;
	struct iio_dev *cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 304 */;
	char *cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 303 */;
	struct platform_device *cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 300 */;
	int cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 300 */;
	struct incl_3d_state {
		struct hid_sensor_hub_callbacks callbacks;
		struct hid_sensor_common common_attributes;
		struct hid_sensor_hub_attribute_info incl[INCLI_3D_CHANNEL_MAX];
		u32 incl_val[INCLI_3D_CHANNEL_MAX];
		int scale_pre_decml;
		int scale_post_decml;
		int scale_precision;
		int value_offset;
	} cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 29 */;
	enum incl_3d_channel{CHANNEL_SCAN_INDEX_X, CHANNEL_SCAN_INDEX_Y, CHANNEL_SCAN_INDEX_Z, INCLI_3D_CHANNEL_MAX,} cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 22 */;
	u32 *cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 219 */;
	void *cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 211 */;
	size_t cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 210 */;
	unsigned cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 209 */;
	u8 *cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 184 */;
	void cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 184 */;
	const struct iio_info cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 178 */;
	s32 cocci_id/* drivers/iio/orientation/hid-sensor-incl-3d.c 102 */;
}
