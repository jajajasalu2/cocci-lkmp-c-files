cocci_test_suite() {
	struct dma_coherent_mem cocci_id/* kernel/dma/coherent.c 60 */;
	long cocci_id/* kernel/dma/coherent.c 47 */;
	struct dma_coherent_mem **cocci_id/* kernel/dma/coherent.c 42 */;
	const struct reserved_mem_ops *cocci_id/* kernel/dma/coherent.c 362 */;
	int __init cocci_id/* kernel/dma/coherent.c 360 */;
	void cocci_id/* kernel/dma/coherent.c 360 */;
	const struct reserved_mem_ops cocci_id/* kernel/dma/coherent.c 329 */;
	struct reserved_mem *cocci_id/* kernel/dma/coherent.c 300 */;
	struct vm_area_struct *cocci_id/* kernel/dma/coherent.c 238 */;
	int *cocci_id/* kernel/dma/coherent.c 238 */;
	size_t cocci_id/* kernel/dma/coherent.c 238 */;
	void **cocci_id/* kernel/dma/coherent.c 172 */;
	unsigned long cocci_id/* kernel/dma/coherent.c 131 */;
	int cocci_id/* kernel/dma/coherent.c 130 */;
	dma_addr_t *cocci_id/* kernel/dma/coherent.c 128 */;
	ssize_t cocci_id/* kernel/dma/coherent.c 128 */;
	struct dma_coherent_mem *cocci_id/* kernel/dma/coherent.c 127 */;
	struct device *cocci_id/* kernel/dma/coherent.c 126 */;
	void *cocci_id/* kernel/dma/coherent.c 126 */;
	struct dma_coherent_mem {
		void *virt_base;
		dma_addr_t device_base;
		unsigned long pfn_base;
		int size;
		unsigned long *bitmap;
		spinlock_t spinlock;
		bool use_dev_dma_pfn_offset;
	} cocci_id/* kernel/dma/coherent.c 12 */;
	dma_addr_t cocci_id/* kernel/dma/coherent.c 111 */;
	phys_addr_t cocci_id/* kernel/dma/coherent.c 110 */;
}
