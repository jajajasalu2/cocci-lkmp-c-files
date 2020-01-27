cocci_test_suite() {
	unsigned cocci_id/* drivers/media/radio/dsbr100.c 81 */;
	struct dsbr100_device {
		struct usb_device *usbdev;
		struct video_device videodev;
		struct v4l2_device v4l2_dev;
		struct v4l2_ctrl_handler hdl;
		u8 *transfer_buffer;
		struct mutex v4l2_lock;
		int curfreq;
		bool stereo;
		bool muted;
	} cocci_id/* drivers/media/radio/dsbr100.c 65 */;
	struct dsbr100_device cocci_id/* drivers/media/radio/dsbr100.c 59 */;
	struct usb_driver cocci_id/* drivers/media/radio/dsbr100.c 410 */;
	const struct usb_device_id cocci_id/* drivers/media/radio/dsbr100.c 402 */[];
	struct v4l2_device *cocci_id/* drivers/media/radio/dsbr100.c 338 */;
	const struct usb_device_id *cocci_id/* drivers/media/radio/dsbr100.c 335 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/radio/dsbr100.c 322 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/radio/dsbr100.c 314 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/radio/dsbr100.c 309 */;
	pm_message_t cocci_id/* drivers/media/radio/dsbr100.c 271 */;
	struct usb_interface *cocci_id/* drivers/media/radio/dsbr100.c 247 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/radio/dsbr100.c 225 */;
	struct v4l2_frequency *cocci_id/* drivers/media/radio/dsbr100.c 214 */;
	struct file *cocci_id/* drivers/media/radio/dsbr100.c 213 */;
	void *cocci_id/* drivers/media/radio/dsbr100.c 213 */;
	const struct v4l2_frequency *cocci_id/* drivers/media/radio/dsbr100.c 202 */;
	const struct v4l2_tuner *cocci_id/* drivers/media/radio/dsbr100.c 196 */;
	struct v4l2_tuner *cocci_id/* drivers/media/radio/dsbr100.c 175 */;
	struct v4l2_capability *cocci_id/* drivers/media/radio/dsbr100.c 164 */;
	int cocci_id/* drivers/media/radio/dsbr100.c 147 */;
	struct dsbr100_device *cocci_id/* drivers/media/radio/dsbr100.c 145 */;
	void cocci_id/* drivers/media/radio/dsbr100.c 145 */;
}
