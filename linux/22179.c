cocci_test_suite() {
	unsigned cocci_id/* mm/dmapool.c 67 */;
	struct device_attribute *cocci_id/* mm/dmapool.c 65 */;
	char *cocci_id/* mm/dmapool.c 65 */;
	ssize_t cocci_id/* mm/dmapool.c 64 */;
	struct dma_page {
		struct list_head page_list;
		void *vaddr;
		dma_addr_t dma;
		unsigned int in_use;
		unsigned int offset;
	} cocci_id/* mm/dmapool.c 53 */;
	struct dma_pool **cocci_id/* mm/dmapool.c 509 */;
	struct dma_pool {
		struct list_head page_list;
		spinlock_t lock;
		size_t size;
		struct device *dev;
		size_t allocation;
		size_t boundary;
		char name[32];
		struct list_head pools;
	} cocci_id/* mm/dmapool.c 42 */;
	unsigned int cocci_id/* mm/dmapool.c 414 */;
	dma_addr_t cocci_id/* mm/dmapool.c 410 */;
	u8 *cocci_id/* mm/dmapool.c 354 */;
	int cocci_id/* mm/dmapool.c 353 */;
	int *cocci_id/* mm/dmapool.c 348 */;
	size_t cocci_id/* mm/dmapool.c 324 */;
	struct dma_page *cocci_id/* mm/dmapool.c 323 */;
	unsigned long cocci_id/* mm/dmapool.c 322 */;
	dma_addr_t *cocci_id/* mm/dmapool.c 320 */;
	gfp_t cocci_id/* mm/dmapool.c 319 */;
	struct dma_pool *cocci_id/* mm/dmapool.c 319 */;
	void *cocci_id/* mm/dmapool.c 319 */;
	struct dma_page cocci_id/* mm/dmapool.c 289 */;
	void cocci_id/* mm/dmapool.c 269 */;
	bool cocci_id/* mm/dmapool.c 135 */;
	const char *cocci_id/* mm/dmapool.c 130 */;
	struct device *cocci_id/* mm/dmapool.c 130 */;
}
