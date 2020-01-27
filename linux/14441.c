cocci_test_suite() {
	struct timbradio *cocci_id/* drivers/media/radio/radio-timb.c 90 */;
	struct timb_radio_platform_data *cocci_id/* drivers/media/radio/radio-timb.c 89 */;
	struct platform_device *cocci_id/* drivers/media/radio/radio-timb.c 87 */;
	int cocci_id/* drivers/media/radio/radio-timb.c 87 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/radio/radio-timb.c 79 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/radio/radio-timb.c 68 */;
	struct v4l2_frequency *cocci_id/* drivers/media/radio/radio-timb.c 62 */;
	struct file *cocci_id/* drivers/media/radio/radio-timb.c 61 */;
	void *cocci_id/* drivers/media/radio/radio-timb.c 61 */;
	const struct v4l2_frequency *cocci_id/* drivers/media/radio/radio-timb.c 55 */;
	const struct v4l2_tuner *cocci_id/* drivers/media/radio/radio-timb.c 48 */;
	struct v4l2_tuner *cocci_id/* drivers/media/radio/radio-timb.c 41 */;
	struct v4l2_capability *cocci_id/* drivers/media/radio/radio-timb.c 32 */;
	struct timbradio {
		struct timb_radio_platform_data pdata;
		struct v4l2_subdev *sd_tuner;
		struct v4l2_subdev *sd_dsp;
		struct video_device video_dev;
		struct v4l2_device v4l2_dev;
		struct mutex lock;
	} cocci_id/* drivers/media/radio/radio-timb.c 21 */;
	struct platform_driver cocci_id/* drivers/media/radio/radio-timb.c 163 */;
}
