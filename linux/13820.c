cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/media/i2c/video-i2c.c 952 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/video-i2c.c 945 */[];
	const struct i2c_device_id cocci_id/* drivers/media/i2c/video-i2c.c 938 */[];
	const struct dev_pm_ops cocci_id/* drivers/media/i2c/video-i2c.c 933 */;
	struct video_i2c_chip {
		const struct v4l2_fmtdesc *format;
		const struct v4l2_frmsize_discrete *size;
		const struct v4l2_fract *frame_intervals;
		unsigned int num_frame_intervals;
		unsigned int buffer_size;
		unsigned int bpp;
		const struct regmap_config *regmap_config;
		struct nvmem_config *nvmem_config;
		int (*setup)(struct video_i2c_data *data);
		int (*xfer)(struct video_i2c_data *data, char *buf);
		int (*set_power)(struct video_i2c_data *data, bool on);
		int (*hwmon_init)(struct video_i2c_data *data);
	} cocci_id/* drivers/media/i2c/video-i2c.c 91 */;
	struct nvmem_device *cocci_id/* drivers/media/i2c/video-i2c.c 848 */;
	struct nvmem_config *cocci_id/* drivers/media/i2c/video-i2c.c 847 */;
	const struct regmap_config cocci_id/* drivers/media/i2c/video-i2c.c 80 */;
	struct v4l2_device *cocci_id/* drivers/media/i2c/video-i2c.c 758 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/video-i2c.c 755 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/video-i2c.c 754 */;
	struct video_device *cocci_id/* drivers/media/i2c/video-i2c.c 743 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/i2c/video-i2c.c 720 */;
	struct v4l2_streamparm *cocci_id/* drivers/media/i2c/video-i2c.c 690 */;
	struct v4l2_format *cocci_id/* drivers/media/i2c/video-i2c.c 679 */;
	struct v4l2_pix_format *cocci_id/* drivers/media/i2c/video-i2c.c 664 */;
	const struct v4l2_frmsize_discrete cocci_id/* drivers/media/i2c/video-i2c.c 66 */;
	const struct v4l2_frmsize_discrete *cocci_id/* drivers/media/i2c/video-i2c.c 645 */;
	const struct video_i2c_data *cocci_id/* drivers/media/i2c/video-i2c.c 644 */;
	struct v4l2_frmivalenum *cocci_id/* drivers/media/i2c/video-i2c.c 642 */;
	struct v4l2_frmsizeenum *cocci_id/* drivers/media/i2c/video-i2c.c 622 */;
	const struct v4l2_fmtdesc cocci_id/* drivers/media/i2c/video-i2c.c 62 */;
	enum v4l2_buf_type cocci_id/* drivers/media/i2c/video-i2c.c 610 */;
	struct v4l2_fmtdesc *cocci_id/* drivers/media/i2c/video-i2c.c 607 */;
	struct file *cocci_id/* drivers/media/i2c/video-i2c.c 606 */;
	struct v4l2_input *cocci_id/* drivers/media/i2c/video-i2c.c 594 */;
	struct v4l2_capability *cocci_id/* drivers/media/i2c/video-i2c.c 567 */;
	const struct vb2_ops cocci_id/* drivers/media/i2c/video-i2c.c 556 */;
	enum vb2_buffer_state cocci_id/* drivers/media/i2c/video-i2c.c 491 */;
	unsigned long cocci_id/* drivers/media/i2c/video-i2c.c 452 */;
	struct video_i2c_data {
		struct regmap *regmap;
		const struct video_i2c_chip *chip;
		struct mutex lock;
		spinlock_t slock;
		unsigned int sequence;
		struct mutex queue_lock;
		struct v4l2_device v4l2_dev;
		struct video_device vdev;
		struct vb2_queue vb_vidq;
		struct task_struct *kthread_vid_cap;
		struct list_head vid_cap_active;
		struct v4l2_fract frame_interval;
	} cocci_id/* drivers/media/i2c/video-i2c.c 44 */;
	struct video_i2c_buffer cocci_id/* drivers/media/i2c/video-i2c.c 436 */;
	struct video_i2c_buffer *cocci_id/* drivers/media/i2c/video-i2c.c 435 */;
	void cocci_id/* drivers/media/i2c/video-i2c.c 431 */;
	struct vb2_v4l2_buffer *cocci_id/* drivers/media/i2c/video-i2c.c 418 */;
	struct vb2_buffer *cocci_id/* drivers/media/i2c/video-i2c.c 416 */;
	struct device *cocci_id/* drivers/media/i2c/video-i2c.c 399 */[];
	unsigned int cocci_id/* drivers/media/i2c/video-i2c.c 399 */[];
	unsigned int *cocci_id/* drivers/media/i2c/video-i2c.c 398 */;
	struct vb2_queue *cocci_id/* drivers/media/i2c/video-i2c.c 397 */;
	struct video_i2c_buffer {
		struct vb2_v4l2_buffer vb;
		struct list_head list;
	} cocci_id/* drivers/media/i2c/video-i2c.c 39 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/i2c/video-i2c.c 387 */;
	struct video_i2c_chip cocci_id/* drivers/media/i2c/video-i2c.c 37 */;
	const struct video_i2c_chip cocci_id/* drivers/media/i2c/video-i2c.c 359 */[];
	const struct v4l2_fract cocci_id/* drivers/media/i2c/video-i2c.c 343 */[];
	enum{AMG88XX, MLX90640,} cocci_id/* drivers/media/i2c/video-i2c.c 338 */;
	void *cocci_id/* drivers/media/i2c/video-i2c.c 329 */;
	struct device *cocci_id/* drivers/media/i2c/video-i2c.c 328 */;
	struct video_i2c_data *cocci_id/* drivers/media/i2c/video-i2c.c 326 */;
	int cocci_id/* drivers/media/i2c/video-i2c.c 326 */;
	const struct hwmon_chip_info cocci_id/* drivers/media/i2c/video-i2c.c 321 */;
	const struct hwmon_ops cocci_id/* drivers/media/i2c/video-i2c.c 316 */;
	__le16 cocci_id/* drivers/media/i2c/video-i2c.c 286 */;
	long *cocci_id/* drivers/media/i2c/video-i2c.c 283 */;
	u32 cocci_id/* drivers/media/i2c/video-i2c.c 277 */;
	enum hwmon_sensor_types cocci_id/* drivers/media/i2c/video-i2c.c 276 */;
	umode_t cocci_id/* drivers/media/i2c/video-i2c.c 275 */;
	const void *cocci_id/* drivers/media/i2c/video-i2c.c 275 */;
	const struct hwmon_channel_info *cocci_id/* drivers/media/i2c/video-i2c.c 270 */[];
	const struct hwmon_channel_info cocci_id/* drivers/media/i2c/video-i2c.c 265 */;
	const u32 cocci_id/* drivers/media/i2c/video-i2c.c 260 */[];
	bool cocci_id/* drivers/media/i2c/video-i2c.c 250 */;
	unsigned int cocci_id/* drivers/media/i2c/video-i2c.c 177 */;
	char *cocci_id/* drivers/media/i2c/video-i2c.c 163 */;
	struct nvmem_config cocci_id/* drivers/media/i2c/video-i2c.c 130 */;
	size_t cocci_id/* drivers/media/i2c/video-i2c.c 123 */;
}
