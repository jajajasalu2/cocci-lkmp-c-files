cocci_test_suite() {
	struct device *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 99 */;
	void *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 99 */;
	unsigned long cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 99 */;
	const struct vb2_mem_ops cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 636 */;
	unsigned int cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 61 */;
	struct dma_buf_attachment *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 601 */;
	struct dma_buf *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 597 */;
	void cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 584 */;
	void cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 56 */(void *buf_priv);
	const struct dma_buf_ops cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 493 */;
	struct vm_area_struct *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 488 */;
	struct mutex *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 426 */;
	struct scatterlist *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 368 */;
	struct vb2_dma_sg_attachment *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 366 */;
	struct vb2_dma_sg_attachment {
		struct sg_table sgt;
		enum dma_data_direction dma_dir;
	} cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 358 */;
	struct vb2_dma_sg_buf {
		struct device *dev;
		void *vaddr;
		struct page **pages;
		struct frame_vector *vec;
		int offset;
		enum dma_data_direction dma_dir;
		struct sg_table sg_table;
		struct sg_table *dma_sgt;
		size_t size;
		unsigned int num_pages;
		refcount_t refcount;
		struct vb2_vmarea_handler handler;
		struct dma_buf_attachment *db_attach;
	} cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 34 */;
	int cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 25 */;
	struct frame_vector *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 227 */;
	struct page *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 123 */;
	struct sg_table *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 104 */;
	struct vb2_dma_sg_buf *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 103 */;
	gfp_t cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 101 */;
	enum dma_data_direction cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-sg.c 100 */;
}
