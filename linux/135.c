cocci_test_suite() {
	struct dma_devres *cocci_id/* kernel/dma/mapping.c 84 */;
	struct dma_devres cocci_id/* kernel/dma/mapping.c 60 */;
	enum dma_data_direction cocci_id/* kernel/dma/mapping.c 371 */;
	void cocci_id/* kernel/dma/mapping.c 370 */;
	void cocci_id/* kernel/dma/mapping.c 330 */(struct device *dev,
						    u64 mask);
	const struct dma_map_ops *cocci_id/* kernel/dma/mapping.c 267 */;
	gfp_t cocci_id/* kernel/dma/mapping.c 265 */;
	unsigned long cocci_id/* kernel/dma/mapping.c 265 */;
	dma_addr_t *cocci_id/* kernel/dma/mapping.c 264 */;
	struct device *cocci_id/* kernel/dma/mapping.c 264 */;
	void *cocci_id/* kernel/dma/mapping.c 264 */;
	size_t cocci_id/* kernel/dma/mapping.c 264 */;
	u64 cocci_id/* kernel/dma/mapping.c 243 */;
	struct dma_devres {
		size_t size;
		void *vaddr;
		dma_addr_t dma_handle;
		unsigned long attrs;
	} cocci_id/* kernel/dma/mapping.c 21 */;
	bool cocci_id/* kernel/dma/mapping.c 205 */;
	struct vm_area_struct *cocci_id/* kernel/dma/mapping.c 172 */;
	pgprot_t cocci_id/* kernel/dma/mapping.c 155 */;
	struct page *cocci_id/* kernel/dma/mapping.c 115 */;
	dma_addr_t cocci_id/* kernel/dma/mapping.c 112 */;
	struct sg_table *cocci_id/* kernel/dma/mapping.c 111 */;
	int cocci_id/* kernel/dma/mapping.c 111 */;
}
