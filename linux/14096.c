cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/media/platform/mx2_emmaprp.c 904 */;
	struct resource *cocci_id/* drivers/media/platform/mx2_emmaprp.c 807 */;
	struct video_device *cocci_id/* drivers/media/platform/mx2_emmaprp.c 806 */;
	struct platform_device *cocci_id/* drivers/media/platform/mx2_emmaprp.c 803 */;
	const struct v4l2_m2m_ops cocci_id/* drivers/media/platform/mx2_emmaprp.c 798 */;
	const struct video_device cocci_id/* drivers/media/platform/mx2_emmaprp.c 788 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/platform/mx2_emmaprp.c 779 */;
	struct file *cocci_id/* drivers/media/platform/mx2_emmaprp.c 720 */;
	struct v4l2_m2m_buffer cocci_id/* drivers/media/platform/mx2_emmaprp.c 693 */;
	const struct vb2_ops cocci_id/* drivers/media/platform/mx2_emmaprp.c 676 */;
	struct vb2_v4l2_buffer *cocci_id/* drivers/media/platform/mx2_emmaprp.c 671 */;
	void cocci_id/* drivers/media/platform/mx2_emmaprp.c 669 */;
	long cocci_id/* drivers/media/platform/mx2_emmaprp.c 660 */;
	struct emmaprp_q_data *cocci_id/* drivers/media/platform/mx2_emmaprp.c 650 */;
	struct emmaprp_ctx *cocci_id/* drivers/media/platform/mx2_emmaprp.c 649 */;
	struct vb2_buffer *cocci_id/* drivers/media/platform/mx2_emmaprp.c 647 */;
	int cocci_id/* drivers/media/platform/mx2_emmaprp.c 647 */;
	struct device *cocci_id/* drivers/media/platform/mx2_emmaprp.c 622 */[];
	unsigned int cocci_id/* drivers/media/platform/mx2_emmaprp.c 622 */[];
	unsigned int *cocci_id/* drivers/media/platform/mx2_emmaprp.c 621 */;
	struct vb2_queue *cocci_id/* drivers/media/platform/mx2_emmaprp.c 620 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/platform/mx2_emmaprp.c 593 */;
	enum v4l2_field cocci_id/* drivers/media/platform/mx2_emmaprp.c 465 */;
	struct emmaprp_fmt *cocci_id/* drivers/media/platform/mx2_emmaprp.c 389 */;
	struct v4l2_fmtdesc *cocci_id/* drivers/media/platform/mx2_emmaprp.c 386 */;
	struct v4l2_capability *cocci_id/* drivers/media/platform/mx2_emmaprp.c 379 */;
	bool cocci_id/* drivers/media/platform/mx2_emmaprp.c 35 */;
	unsigned long cocci_id/* drivers/media/platform/mx2_emmaprp.c 333 */;
	irqreturn_t cocci_id/* drivers/media/platform/mx2_emmaprp.c 328 */;
	u32 cocci_id/* drivers/media/platform/mx2_emmaprp.c 276 */;
	dma_addr_t cocci_id/* drivers/media/platform/mx2_emmaprp.c 275 */;
	unsigned int cocci_id/* drivers/media/platform/mx2_emmaprp.c 272 */;
	struct emmaprp_dev *cocci_id/* drivers/media/platform/mx2_emmaprp.c 271 */;
	void *cocci_id/* drivers/media/platform/mx2_emmaprp.c 266 */;
	enum v4l2_buf_type cocci_id/* drivers/media/platform/mx2_emmaprp.c 218 */;
	struct emmaprp_ctx {
		struct v4l2_fh fh;
		struct emmaprp_dev *dev;
		int aborting;
		struct emmaprp_q_data q_data[2];
	} cocci_id/* drivers/media/platform/mx2_emmaprp.c 209 */;
	struct emmaprp_dev {
		struct v4l2_device v4l2_dev;
		struct video_device *vfd;
		struct mutex dev_mutex;
		spinlock_t irqlock;
		void __iomem *base_emma;
		struct clk *clk_emma_ahb,*clk_emma_ipg;
		struct v4l2_m2m_dev *m2m_dev;
	} cocci_id/* drivers/media/platform/mx2_emmaprp.c 196 */;
	struct v4l2_format *cocci_id/* drivers/media/platform/mx2_emmaprp.c 179 */;
	enum{V4L2_M2M_SRC=0, V4L2_M2M_DST=1,} cocci_id/* drivers/media/platform/mx2_emmaprp.c 172 */;
	struct emmaprp_q_data {
		unsigned int width;
		unsigned int height;
		unsigned int sizeimage;
		struct emmaprp_fmt *fmt;
	} cocci_id/* drivers/media/platform/mx2_emmaprp.c 165 */;
	struct emmaprp_fmt cocci_id/* drivers/media/platform/mx2_emmaprp.c 153 */[];
	struct emmaprp_fmt {
		u32 fourcc;
		u32 types;
	} cocci_id/* drivers/media/platform/mx2_emmaprp.c 147 */;
}
