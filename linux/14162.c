cocci_test_suite() {
	struct sh_veu_vfmt {
		struct v4l2_rect frame;
		unsigned int bytesperline;
		unsigned int offset_y;
		unsigned int offset_c;
		const struct sh_veu_format *fmt;
	} cocci_id/* drivers/media/platform/sh_veu.c 96 */;
	struct v4l2_m2m_buffer cocci_id/* drivers/media/platform/sh_veu.c 929 */;
	struct vb2_queue *cocci_id/* drivers/media/platform/sh_veu.c 919 */;
	const struct vb2_ops cocci_id/* drivers/media/platform/sh_veu.c 911 */;
	struct vb2_v4l2_buffer *cocci_id/* drivers/media/platform/sh_veu.c 905 */;
	void cocci_id/* drivers/media/platform/sh_veu.c 903 */;
	struct sh_veu_format {
		u32 fourcc;
		unsigned int depth;
		unsigned int ydepth;
	} cocci_id/* drivers/media/platform/sh_veu.c 89 */;
	unsigned int cocci_id/* drivers/media/platform/sh_veu.c 886 */;
	struct sh_veu_vfmt *cocci_id/* drivers/media/platform/sh_veu.c 885 */;
	struct vb2_buffer *cocci_id/* drivers/media/platform/sh_veu.c 882 */;
	struct device *cocci_id/* drivers/media/platform/sh_veu.c 855 */[];
	unsigned int cocci_id/* drivers/media/platform/sh_veu.c 855 */[];
	unsigned int *cocci_id/* drivers/media/platform/sh_veu.c 854 */;
	struct sh_veu_file {
		struct v4l2_fh fh;
		struct sh_veu_dev *veu_dev;
		bool cfg_needed;
	} cocci_id/* drivers/media/platform/sh_veu.c 83 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/platform/sh_veu.c 828 */;
	u32 *cocci_id/* drivers/media/platform/sh_veu.c 650 */;
	struct sh_veu_file *cocci_id/* drivers/media/platform/sh_veu.c 639 */;
	struct v4l2_buffer *cocci_id/* drivers/media/platform/sh_veu.c 637 */;
	struct file *cocci_id/* drivers/media/platform/sh_veu.c 637 */;
	struct v4l2_requestbuffers *cocci_id/* drivers/media/platform/sh_veu.c 600 */;
	dma_addr_t cocci_id/* drivers/media/platform/sh_veu.c 510 */;
	const struct v4l2_format *cocci_id/* drivers/media/platform/sh_veu.c 457 */;
	const struct sh_veu_format *cocci_id/* drivers/media/platform/sh_veu.c 457 */;
	struct v4l2_pix_format *cocci_id/* drivers/media/platform/sh_veu.c 390 */;
	struct v4l2_format *cocci_id/* drivers/media/platform/sh_veu.c 388 */;
	enum v4l2_buf_type cocci_id/* drivers/media/platform/sh_veu.c 376 */;
	const int *cocci_id/* drivers/media/platform/sh_veu.c 354 */;
	struct v4l2_fmtdesc *cocci_id/* drivers/media/platform/sh_veu.c 354 */;
	struct v4l2_capability *cocci_id/* drivers/media/platform/sh_veu.c 346 */;
	struct sh_veu_file **cocci_id/* drivers/media/platform/sh_veu.c 310 */;
	int cocci_id/* drivers/media/platform/sh_veu.c 296 */(void *priv,
							      struct vb2_queue *src_vq,
							      struct vb2_queue *dst_vq);
	bool cocci_id/* drivers/media/platform/sh_veu.c 287 */;
	unsigned long cocci_id/* drivers/media/platform/sh_veu.c 251 */;
	u32 cocci_id/* drivers/media/platform/sh_veu.c 202 */;
	enum v4l2_colorspace cocci_id/* drivers/media/platform/sh_veu.c 202 */;
	const int cocci_id/* drivers/media/platform/sh_veu.c 198 */[];
	const struct sh_veu_format cocci_id/* drivers/media/platform/sh_veu.c 146 */[];
	enum sh_veu_fmt_idx{SH_VEU_FMT_NV12, SH_VEU_FMT_NV16, SH_VEU_FMT_NV24, SH_VEU_FMT_RGB332, SH_VEU_FMT_RGB444, SH_VEU_FMT_RGB565, SH_VEU_FMT_RGB666, SH_VEU_FMT_RGB24,} cocci_id/* drivers/media/platform/sh_veu.c 124 */;
	struct platform_driver __refdata cocci_id/* drivers/media/platform/sh_veu.c 1192 */;
	struct sh_veu_dev cocci_id/* drivers/media/platform/sh_veu.c 1182 */;
	struct v4l2_device *cocci_id/* drivers/media/platform/sh_veu.c 1180 */;
	struct video_device *cocci_id/* drivers/media/platform/sh_veu.c 1107 */;
	struct resource *cocci_id/* drivers/media/platform/sh_veu.c 1106 */;
	struct platform_device *cocci_id/* drivers/media/platform/sh_veu.c 1103 */;
	struct sh_veu_dev *cocci_id/* drivers/media/platform/sh_veu.c 1051 */;
	struct sh_veu_dev {
		struct v4l2_device v4l2_dev;
		struct video_device vdev;
		struct v4l2_m2m_dev *m2m_dev;
		struct device *dev;
		struct v4l2_m2m_ctx *m2m_ctx;
		struct sh_veu_vfmt vfmt_out;
		struct sh_veu_vfmt vfmt_in;
		struct sh_veu_file *capture;
		struct sh_veu_file *output;
		struct mutex fop_lock;
		void __iomem *base;
		spinlock_t lock;
		bool is_2h;
		unsigned int xaction;
		bool aborting;
	} cocci_id/* drivers/media/platform/sh_veu.c 105 */;
	irqreturn_t cocci_id/* drivers/media/platform/sh_veu.c 1049 */;
	void *cocci_id/* drivers/media/platform/sh_veu.c 1049 */;
	int cocci_id/* drivers/media/platform/sh_veu.c 1049 */;
	const struct v4l2_m2m_ops cocci_id/* drivers/media/platform/sh_veu.c 1044 */;
	const struct video_device cocci_id/* drivers/media/platform/sh_veu.c 1034 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/platform/sh_veu.c 1025 */;
	struct vm_area_struct *cocci_id/* drivers/media/platform/sh_veu.c 1018 */;
	struct poll_table_struct *cocci_id/* drivers/media/platform/sh_veu.c 1011 */;
	__poll_t cocci_id/* drivers/media/platform/sh_veu.c 1010 */;
}
