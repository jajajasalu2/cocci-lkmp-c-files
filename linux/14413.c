cocci_test_suite() {
	u8 cocci_id/* drivers/media/radio/radio-sf16fmi.c 71 */;
	void *cocci_id/* drivers/media/radio/radio-sf16fmi.c 71 */;
	bool cocci_id/* drivers/media/radio/radio-sf16fmi.c 60 */;
	struct pnp_dev *cocci_id/* drivers/media/radio/radio-sf16fmi.c 59 */;
	struct fmi cocci_id/* drivers/media/radio/radio-sf16fmi.c 58 */;
	struct fmi {
		struct v4l2_device v4l2_dev;
		struct v4l2_ctrl_handler hdl;
		struct video_device vdev;
		int io;
		bool mute;
		u32 curfreq;
		struct mutex lock;
	} cocci_id/* drivers/media/radio/radio-sf16fmi.c 47 */;
	struct fmi *cocci_id/* drivers/media/radio/radio-sf16fmi.c 371 */;
	void __exit cocci_id/* drivers/media/radio/radio-sf16fmi.c 369 */;
	void cocci_id/* drivers/media/radio/radio-sf16fmi.c 369 */;
	int cocci_id/* drivers/media/radio/radio-sf16fmi.c 278 */[];
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/radio/radio-sf16fmi.c 276 */;
	struct v4l2_device *cocci_id/* drivers/media/radio/radio-sf16fmi.c 275 */;
	int __init cocci_id/* drivers/media/radio/radio-sf16fmi.c 272 */;
	struct isapnp_device_id cocci_id/* drivers/media/radio/radio-sf16fmi.c 230 */[];
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/radio/radio-sf16fmi.c 218 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/radio/radio-sf16fmi.c 210 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/radio/radio-sf16fmi.c 206 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/radio/radio-sf16fmi.c 190 */;
	struct v4l2_frequency *cocci_id/* drivers/media/radio/radio-sf16fmi.c 179 */;
	struct file *cocci_id/* drivers/media/radio/radio-sf16fmi.c 178 */;
	const struct v4l2_frequency *cocci_id/* drivers/media/radio/radio-sf16fmi.c 165 */;
	const struct v4l2_tuner *cocci_id/* drivers/media/radio/radio-sf16fmi.c 159 */;
	struct v4l2_tuner *cocci_id/* drivers/media/radio/radio-sf16fmi.c 140 */;
	struct v4l2_capability *cocci_id/* drivers/media/radio/radio-sf16fmi.c 131 */;
	int cocci_id/* drivers/media/radio/radio-sf16fmi.c 105 */;
}
