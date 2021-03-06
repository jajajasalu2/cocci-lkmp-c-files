cocci_test_suite() {
	struct video_device *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 880 */;
	struct imx_media_dev *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 877 */;
	struct imx_media_video_dev *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 876 */;
	const struct video_device cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 834 */;
	struct v4l2_m2m_ops cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 820 */;
	const struct v4l2_file_operations cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 811 */;
	const struct ipu_csc_scaler_q_data cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 730 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 708 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 702 */;
	enum v4l2_buf_type cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 68 */;
	struct ipu_csc_scaler_q_data *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 67 */;
	struct ipu_image cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 647 */;
	struct v4l2_pix_format *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 646 */;
	bool cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 620 */;
	enum ipu_rotate_mode cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 618 */;
	struct ipu_csc_scaler_ctx cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 616 */;
	struct v4l2_ctrl *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 613 */;
	struct v4l2_m2m_buffer cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 588 */;
	const struct vb2_ops cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 568 */;
	struct ipu_csc_scaler_ctx {
		struct ipu_csc_scaler_priv *priv;
		struct v4l2_fh fh;
		struct ipu_csc_scaler_q_data q_data[2];
		struct ipu_image_convert_ctx *icc;
		struct v4l2_ctrl_handler ctrl_hdlr;
		int rotate;
		bool hflip;
		bool vflip;
		enum ipu_rotate_mode rot_mode;
		unsigned int sequence;
	} cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 52 */;
	struct ipu_soc *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 504 */;
	const enum ipu_ic_task cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 501 */;
	struct ipu_image *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 485 */;
	struct ipu_csc_scaler_q_data {
		struct v4l2_pix_format cur_fmt;
		struct v4l2_rect rect;
	} cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 47 */;
	unsigned long cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 449 */;
	struct vb2_queue *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 445 */;
	struct vb2_buffer *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 443 */;
	struct ipu_csc_scaler_priv cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 44 */;
	unsigned int cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 423 */;
	struct device *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 419 */[];
	unsigned int cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 418 */[];
	unsigned int *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 416 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 379 */;
	struct ipu_csc_scaler_priv {
		struct imx_media_video_dev vdev;
		struct v4l2_m2m_dev *m2m_dev;
		struct device *dev;
		struct imx_media_dev *md;
		struct mutex mutex;
	} cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 33 */;
	struct v4l2_selection *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 294 */;
	enum{V4L2_M2M_SRC=0, V4L2_M2M_DST=1,} cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 28 */;
	enum v4l2_field cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 195 */;
	struct v4l2_format *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 177 */;
	u32 cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 164 */;
	struct v4l2_fmtdesc *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 162 */;
	struct file *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 161 */;
	struct v4l2_capability *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 151 */;
	int cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 117 */;
	struct ipu_image_convert_run *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 116 */;
	struct vb2_v4l2_buffer *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 115 */;
	struct ipu_csc_scaler_priv *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 114 */;
	struct ipu_csc_scaler_ctx *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 113 */;
	void *cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 111 */;
	void cocci_id/* drivers/staging/media/imx/imx-media-csc-scaler.c 111 */;
}
