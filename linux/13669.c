cocci_test_suite() {
	const struct vb2_mem_ops cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 691 */;
	struct dma_buf_attachment *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 659 */;
	struct dma_buf *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 655 */;
	void cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 642 */;
	dma_addr_t cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 52 */;
	unsigned long *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 496 */;
	struct frame_vector *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 457 */;
	struct page **cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 427 */;
	const struct dma_buf_ops cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 358 */;
	struct vm_area_struct *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 353 */;
	struct mutex *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 288 */;
	struct vb2_dc_buf {
		struct device *dev;
		void *vaddr;
		unsigned long size;
		void *cookie;
		dma_addr_t dma_addr;
		unsigned long attrs;
		enum dma_data_direction dma_dir;
		struct sg_table *dma_sgt;
		struct frame_vector *vec;
		struct vb2_vmarea_handler handler;
		refcount_t refcount;
		struct sg_table *sgt_base;
		struct dma_buf_attachment *db_attach;
	} cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 25 */;
	struct sg_table *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 225 */;
	struct scatterlist *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 224 */;
	unsigned int cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 223 */;
	struct vb2_dc_attachment *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 222 */;
	int cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 219 */;
	struct vb2_dc_attachment {
		struct sg_table sgt;
		enum dma_data_direction dma_dir;
	} cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 214 */;
	struct vb2_dc_buf *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 143 */;
	gfp_t cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 141 */;
	enum dma_data_direction cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 140 */;
	struct device *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 139 */;
	void *cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 139 */;
	unsigned long cocci_id/* drivers/media/common/videobuf2/videobuf2-dma-contig.c 139 */;
}
