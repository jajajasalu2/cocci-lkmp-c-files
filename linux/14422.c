cocci_test_suite() {
	const struct v4l2_frequency_band cocci_id/* drivers/media/radio/radio-raremono.c 73 */[];
	enum{BAND_FM, BAND_AM, BAND_SW,} cocci_id/* drivers/media/radio/radio-raremono.c 71 */;
	const struct usb_device_id cocci_id/* drivers/media/radio/radio-raremono.c 49 */[];
	struct usb_driver cocci_id/* drivers/media/radio/radio-raremono.c 382 */;
	const struct usb_device_id *cocci_id/* drivers/media/radio/radio-raremono.c 299 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/radio/radio-raremono.c 288 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/radio/radio-raremono.c 281 */;
	struct v4l2_device *cocci_id/* drivers/media/radio/radio-raremono.c 272 */;
	void cocci_id/* drivers/media/radio/radio-raremono.c 272 */;
	struct v4l2_frequency *cocci_id/* drivers/media/radio/radio-raremono.c 261 */;
	u32 cocci_id/* drivers/media/radio/radio-raremono.c 243 */;
	const struct v4l2_frequency *cocci_id/* drivers/media/radio/radio-raremono.c 240 */;
	const struct v4l2_tuner *cocci_id/* drivers/media/radio/radio-raremono.c 234 */;
	struct v4l2_tuner *cocci_id/* drivers/media/radio/radio-raremono.c 205 */;
	struct v4l2_frequency_band *cocci_id/* drivers/media/radio/radio-raremono.c 191 */;
	struct file *cocci_id/* drivers/media/radio/radio-raremono.c 190 */;
	void *cocci_id/* drivers/media/radio/radio-raremono.c 190 */;
	struct v4l2_capability *cocci_id/* drivers/media/radio/radio-raremono.c 180 */;
	struct usb_interface *cocci_id/* drivers/media/radio/radio-raremono.c 162 */;
	struct raremono_device *cocci_id/* drivers/media/radio/radio-raremono.c 122 */;
	unsigned cocci_id/* drivers/media/radio/radio-raremono.c 122 */;
	int cocci_id/* drivers/media/radio/radio-raremono.c 122 */;
	struct raremono_device cocci_id/* drivers/media/radio/radio-raremono.c 118 */;
	struct raremono_device {
		struct usb_device *usbdev;
		struct usb_interface *intf;
		struct video_device vdev;
		struct v4l2_device v4l2_dev;
		struct mutex lock;
		u8 *buffer;
		u32 band;
		unsigned curfreq;
	} cocci_id/* drivers/media/radio/radio-raremono.c 104 */;
}
