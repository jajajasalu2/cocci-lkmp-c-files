cocci_test_suite() {
	char *cocci_id/* arch/arm/common/dmabounce.c 86 */;
	struct device_attribute *cocci_id/* arch/arm/common/dmabounce.c 85 */;
	ssize_t cocci_id/* arch/arm/common/dmabounce.c 85 */;
	struct dmabounce_device_info {
		struct device *dev;
		struct list_head safe_buffers;
#ifdef STATS
		unsigned long total_allocs;
		unsigned long map_op_count;
		unsigned long bounce_count;
		int attr_res;
#endif
		struct dmabounce_pool small;
		struct dmabounce_pool large;
		rwlock_t lock;
		int (*needs_bounce)(struct device *, dma_addr_t, size_t);
	} cocci_id/* arch/arm/common/dmabounce.c 67 */;
	struct dmabounce_pool {
		unsigned long size;
		struct dma_pool *pool;
#ifdef STATS
		unsigned long allocs;
#endif
	} cocci_id/* arch/arm/common/dmabounce.c 59 */;
	struct dmabounce_device_info cocci_id/* arch/arm/common/dmabounce.c 488 */;
	int (*cocci_id/* arch/arm/common/dmabounce.c 483 */)(struct device *,
							     dma_addr_t,
							     size_t);
	const char *cocci_id/* arch/arm/common/dmabounce.c 470 */;
	const struct dma_map_ops cocci_id/* arch/arm/common/dmabounce.c 453 */;
	struct safe_buffer {
		struct list_head node;
		void *ptr;
		size_t size;
		int direction;
		struct dmabounce_pool *pool;
		void *safe;
		dma_addr_t safe_dma_addr;
	} cocci_id/* arch/arm/common/dmabounce.c 45 */;
	u64 cocci_id/* arch/arm/common/dmabounce.c 445 */;
	void cocci_id/* arch/arm/common/dmabounce.c 396 */;
	unsigned long cocci_id/* arch/arm/common/dmabounce.c 369 */;
	struct safe_buffer *cocci_id/* arch/arm/common/dmabounce.c 368 */;
	enum dma_data_direction cocci_id/* arch/arm/common/dmabounce.c 366 */;
	size_t cocci_id/* arch/arm/common/dmabounce.c 366 */;
	dma_addr_t cocci_id/* arch/arm/common/dmabounce.c 365 */;
	struct device *cocci_id/* arch/arm/common/dmabounce.c 365 */;
	int cocci_id/* arch/arm/common/dmabounce.c 365 */;
	struct page *cocci_id/* arch/arm/common/dmabounce.c 313 */;
	struct safe_buffer cocci_id/* arch/arm/common/dmabounce.c 124 */;
	struct dmabounce_pool *cocci_id/* arch/arm/common/dmabounce.c 109 */;
	struct dmabounce_device_info *cocci_id/* arch/arm/common/dmabounce.c 105 */;
	void *cocci_id/* arch/arm/common/dmabounce.c 105 */;
}
