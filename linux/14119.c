cocci_test_suite() {
	dma_cap_mask_t cocci_id/* drivers/media/platform/m2m-deinterlace.c 923 */;
	struct video_device *cocci_id/* drivers/media/platform/m2m-deinterlace.c 922 */;
	struct platform_device *cocci_id/* drivers/media/platform/m2m-deinterlace.c 919 */;
	const struct v4l2_m2m_ops cocci_id/* drivers/media/platform/m2m-deinterlace.c 913 */;
	const struct video_device cocci_id/* drivers/media/platform/m2m-deinterlace.c 903 */;
	enum v4l2_buf_type cocci_id/* drivers/media/platform/m2m-deinterlace.c 90 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/platform/m2m-deinterlace.c 894 */;
	struct deinterlace_q_data cocci_id/* drivers/media/platform/m2m-deinterlace.c 88 */[2];
	struct data_chunk cocci_id/* drivers/media/platform/m2m-deinterlace.c 863 */;
	struct dma_interleaved_template cocci_id/* drivers/media/platform/m2m-deinterlace.c 862 */;
	struct file *cocci_id/* drivers/media/platform/m2m-deinterlace.c 841 */;
	struct v4l2_m2m_buffer cocci_id/* drivers/media/platform/m2m-deinterlace.c 804 */;
	const struct vb2_ops cocci_id/* drivers/media/platform/m2m-deinterlace.c 787 */;
	struct vb2_v4l2_buffer *cocci_id/* drivers/media/platform/m2m-deinterlace.c 781 */;
	void cocci_id/* drivers/media/platform/m2m-deinterlace.c 779 */;
	long cocci_id/* drivers/media/platform/m2m-deinterlace.c 770 */;
	struct deinterlace_q_data *cocci_id/* drivers/media/platform/m2m-deinterlace.c 762 */;
	struct deinterlace_ctx *cocci_id/* drivers/media/platform/m2m-deinterlace.c 761 */;
	struct vb2_buffer *cocci_id/* drivers/media/platform/m2m-deinterlace.c 759 */;
	int cocci_id/* drivers/media/platform/m2m-deinterlace.c 759 */;
	struct device *cocci_id/* drivers/media/platform/m2m-deinterlace.c 733 */[];
	unsigned int cocci_id/* drivers/media/platform/m2m-deinterlace.c 733 */[];
	unsigned int *cocci_id/* drivers/media/platform/m2m-deinterlace.c 732 */;
	struct vb2_queue *cocci_id/* drivers/media/platform/m2m-deinterlace.c 731 */;
	struct vb2_dc_conf {
		struct device *dev;
	} cocci_id/* drivers/media/platform/m2m-deinterlace.c 727 */;
	enum{YUV420_DMA_Y_ODD, YUV420_DMA_Y_EVEN, YUV420_DMA_U_ODD, YUV420_DMA_U_EVEN, YUV420_DMA_V_ODD, YUV420_DMA_V_EVEN, YUV420_DMA_Y_ODD_DOUBLING, YUV420_DMA_U_ODD_DOUBLING, YUV420_DMA_V_ODD_DOUBLING, YUYV_DMA_ODD, YUYV_DMA_EVEN, YUYV_DMA_EVEN_DOUBLING,} cocci_id/* drivers/media/platform/m2m-deinterlace.c 72 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/platform/m2m-deinterlace.c 699 */;
	enum{V4L2_M2M_SRC=0, V4L2_M2M_DST=1,} cocci_id/* drivers/media/platform/m2m-deinterlace.c 67 */;
	struct deinterlace_q_data {
		unsigned int width;
		unsigned int height;
		unsigned int sizeimage;
		struct deinterlace_fmt *fmt;
		enum v4l2_field field;
	} cocci_id/* drivers/media/platform/m2m-deinterlace.c 59 */;
	struct deinterlace_fmt cocci_id/* drivers/media/platform/m2m-deinterlace.c 45 */[];
	struct deinterlace_fmt *cocci_id/* drivers/media/platform/m2m-deinterlace.c 443 */;
	u32 cocci_id/* drivers/media/platform/m2m-deinterlace.c 440 */;
	struct v4l2_fmtdesc *cocci_id/* drivers/media/platform/m2m-deinterlace.c 440 */;
	struct v4l2_capability *cocci_id/* drivers/media/platform/m2m-deinterlace.c 432 */;
	struct deinterlace_fmt {
		u32 fourcc;
		u32 types;
	} cocci_id/* drivers/media/platform/m2m-deinterlace.c 39 */;
	void *cocci_id/* drivers/media/platform/m2m-deinterlace.c 351 */;
	unsigned cocci_id/* drivers/media/platform/m2m-deinterlace.c 343 */;
	bool cocci_id/* drivers/media/platform/m2m-deinterlace.c 27 */;
	enum dma_ctrl_flags cocci_id/* drivers/media/platform/m2m-deinterlace.c 214 */;
	dma_addr_t cocci_id/* drivers/media/platform/m2m-deinterlace.c 213 */;
	unsigned int cocci_id/* drivers/media/platform/m2m-deinterlace.c 211 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/media/platform/m2m-deinterlace.c 210 */;
	struct dma_device *cocci_id/* drivers/media/platform/m2m-deinterlace.c 209 */;
	struct dma_chan *cocci_id/* drivers/media/platform/m2m-deinterlace.c 208 */;
	struct deinterlace_dev *cocci_id/* drivers/media/platform/m2m-deinterlace.c 207 */;
	struct deinterlace_ctx {
		struct v4l2_fh fh;
		struct deinterlace_dev *dev;
		int aborting;
		enum v4l2_colorspace colorspace;
		dma_cookie_t cookie;
		struct dma_interleaved_template *xt;
	} cocci_id/* drivers/media/platform/m2m-deinterlace.c 134 */;
	struct deinterlace_dev {
		struct v4l2_device v4l2_dev;
		struct video_device vfd;
		atomic_t busy;
		struct mutex dev_mutex;
		spinlock_t irqlock;
		struct dma_chan *dma_chan;
		struct v4l2_m2m_dev *m2m_dev;
	} cocci_id/* drivers/media/platform/m2m-deinterlace.c 121 */;
	struct v4l2_format *cocci_id/* drivers/media/platform/m2m-deinterlace.c 103 */;
	struct platform_driver cocci_id/* drivers/media/platform/m2m-deinterlace.c 1000 */;
}
