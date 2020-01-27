cocci_test_suite() {
	struct video_device *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 991 */;
	struct v4l2_fmtdesc *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 98 */;
	struct mtk_jpeg_fmt *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 97 */;
	u32 cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 919 */;
	enum vb2_buffer_state cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 918 */;
	irqreturn_t cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 912 */;
	void *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 912 */;
	struct v4l2_m2m_buffer cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 883 */;
	struct mtk_jpeg_src_buf cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 870 */;
	const struct v4l2_m2m_ops cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 856 */;
	struct v4l2_capability *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 85 */;
	struct mtk_jpeg_fb cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 807 */;
	struct mtk_jpeg_bs cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 806 */;
	unsigned long cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 804 */;
	struct mtk_jpeg_fb *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 774 */;
	struct mtk_jpeg_bs *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 763 */;
	const struct vb2_ops cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 751 */;
	struct mtk_jpeg_ctx cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 75 */;
	struct v4l2_fh *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 73 */;
	int cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 70 */;
	enum v4l2_buf_type cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 698 */;
	struct vb2_v4l2_buffer *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 697 */;
	struct vb2_queue *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 685 */;
	u8 *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 676 */;
	bool cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 660 */;
	struct mtk_jpeg_src_buf *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 659 */;
	struct mtk_jpeg_dev *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 658 */;
	struct mtk_jpeg_dec_param *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 657 */;
	struct mtk_jpeg_src_buf {
		struct vb2_v4l2_buffer b;
		struct list_head list;
		int flags;
		struct mtk_jpeg_dec_param dec_param;
	} cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 63 */;
	struct vb2_buffer *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 584 */;
	enum{MTK_JPEG_BUF_FLAGS_INIT=0, MTK_JPEG_BUF_FLAGS_LAST_FRAME=1,} cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 58 */;
	struct device *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 560 */[];
	unsigned int cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 559 */[];
	unsigned int *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 557 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 529 */;
	struct v4l2_buffer *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 504 */;
	struct v4l2_selection *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 455 */;
	const struct v4l2_event_subscription *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 444 */;
	const struct v4l2_event cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 434 */;
	struct mtk_jpeg_fmt cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 30 */[];
	struct v4l2_plane_pix_format *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 299 */;
	struct mtk_jpeg_q_data *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 183 */;
	struct v4l2_pix_format_mplane *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 182 */;
	struct v4l2_format *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 180 */;
	struct mtk_jpeg_ctx *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 179 */;
	void cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 179 */;
	u32 *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 160 */;
	unsigned int cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 160 */;
	struct platform_driver cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 1263 */;
	const struct of_device_id cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 1249 */[];
	struct device *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 1211 */;
	struct file *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 118 */;
	struct resource *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 1080 */;
	struct platform_device *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 1055 */;
	struct device_node *cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 1054 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/platform/mtk-jpeg/mtk_jpeg_core.c 1043 */;
}