cocci_test_suite() {
	struct v4l2_subdev_frame_size_enum cocci_id/* drivers/staging/media/imx/imx-media-capture.c 87 */;
	struct v4l2_frmsizeenum *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 83 */;
	struct v4l2_subdev *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 827 */;
	struct device *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 827 */;
	struct imx_media_dev cocci_id/* drivers/staging/media/imx/imx-media-capture.c 741 */;
	struct v4l2_device *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 734 */;
	struct imx_media_video_dev *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 715 */;
	struct imx_media_buffer cocci_id/* drivers/staging/media/imx/imx-media-capture.c 704 */;
	struct v4l2_capability *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 70 */;
	struct video_device cocci_id/* drivers/staging/media/imx/imx-media-capture.c 683 */;
	const struct v4l2_file_operations cocci_id/* drivers/staging/media/imx/imx-media-capture.c 674 */;
	struct video_device *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 636 */;
	const struct vb2_ops cocci_id/* drivers/staging/media/imx/imx-media-capture.c 63 */;
	struct capture_priv cocci_id/* drivers/staging/media/imx/imx-media-capture.c 58 */;
	struct v4l2_format cocci_id/* drivers/staging/media/imx/imx-media-capture.c 537 */;
	struct v4l2_rect cocci_id/* drivers/staging/media/imx/imx-media-capture.c 536 */;
	unsigned long cocci_id/* drivers/staging/media/imx/imx-media-capture.c 523 */;
	void cocci_id/* drivers/staging/media/imx/imx-media-capture.c 519 */;
	long cocci_id/* drivers/staging/media/imx/imx-media-capture.c 510 */;
	struct v4l2_pix_format *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 505 */;
	struct vb2_queue *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 503 */;
	struct imx_media_buffer *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 494 */;
	struct vb2_buffer *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 492 */;
	unsigned int cocci_id/* drivers/staging/media/imx/imx-media-capture.c 467 */;
	struct device *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 463 */[];
	unsigned int cocci_id/* drivers/staging/media/imx/imx-media-capture.c 462 */[];
	unsigned int *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 460 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/staging/media/imx/imx-media-capture.c 421 */;
	const struct v4l2_event_subscription *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 407 */;
	struct v4l2_fh *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 406 */;
	struct v4l2_subdev_frame_interval cocci_id/* drivers/staging/media/imx/imx-media-capture.c 365 */;
	struct v4l2_streamparm *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 362 */;
	struct v4l2_selection *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 332 */;
	v4l2_std_id cocci_id/* drivers/staging/media/imx/imx-media-capture.c 321 */;
	v4l2_std_id *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 314 */;
	struct capture_priv {
		struct imx_media_video_dev vdev;
		struct v4l2_subdev *src_sd;
		int src_sd_pad;
		struct device *dev;
		struct imx_media_dev *md;
		struct media_pad vdev_pad;
		struct mutex mutex;
		struct vb2_queue q;
		struct list_head ready_q;
		spinlock_t q_lock;
		struct v4l2_ctrl_handler ctrl_hdlr;
		bool stop;
	} cocci_id/* drivers/staging/media/imx/imx-media-capture.c 31 */;
	u32 cocci_id/* drivers/staging/media/imx/imx-media-capture.c 214 */;
	const struct imx_media_pixfmt *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 210 */;
	struct v4l2_rect *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 208 */;
	const struct imx_media_pixfmt **cocci_id/* drivers/staging/media/imx/imx-media-capture.c 207 */;
	struct v4l2_format *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 206 */;
	struct v4l2_subdev_format *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 205 */;
	struct capture_priv *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 204 */;
	int cocci_id/* drivers/staging/media/imx/imx-media-capture.c 204 */;
	struct v4l2_subdev_format cocci_id/* drivers/staging/media/imx/imx-media-capture.c 158 */;
	struct v4l2_fmtdesc *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 154 */;
	struct file *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 153 */;
	void *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 153 */;
	struct v4l2_subdev_frame_interval_enum cocci_id/* drivers/staging/media/imx/imx-media-capture.c 127 */;
	struct v4l2_frmivalenum *cocci_id/* drivers/staging/media/imx/imx-media-capture.c 123 */;
}