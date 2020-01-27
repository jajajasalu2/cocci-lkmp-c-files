cocci_test_suite() {
	unsigned long *cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 98 */;
	struct frame_vector *cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 79 */;
	const struct vb2_mem_ops cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 430 */;
	struct dma_buf *cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 410 */;
	struct vb2_vmalloc_buf *cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 41 */;
	void cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 400 */;
	gfp_t cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 39 */;
	enum dma_data_direction cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 38 */;
	struct device *cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 37 */;
	void *cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 37 */;
	unsigned long cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 37 */;
	void cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 35 */(void *buf_priv);
	const struct dma_buf_ops cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 342 */;
	struct vm_area_struct *cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 337 */;
	struct mutex *cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 275 */;
	struct vb2_vmalloc_buf {
		void *vaddr;
		struct frame_vector *vec;
		enum dma_data_direction dma_dir;
		unsigned long size;
		refcount_t refcount;
		struct vb2_vmarea_handler handler;
		struct dma_buf *dbuf;
	} cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 25 */;
	struct page *cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 234 */;
	struct scatterlist *cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 218 */;
	struct sg_table *cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 217 */;
	struct vb2_vmalloc_attachment *cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 214 */;
	struct dma_buf_attachment *cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 212 */;
	int cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 211 */;
	struct vb2_vmalloc_attachment {
		struct sg_table sgt;
		enum dma_data_direction dma_dir;
	} cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 206 */;
	unsigned int cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 163 */;
	void __iomem *cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 145 */;
	struct page **cocci_id/* drivers/media/common/videobuf2/videobuf2-vmalloc.c 132 */;
}
