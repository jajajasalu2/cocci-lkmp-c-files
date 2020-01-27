cocci_test_suite() {
	struct ttm_mem_global *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 954 */;
	char *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 943 */;
	unsigned int cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 943 */;
	struct ttm_pool_opts {
		unsigned alloc_size;
		unsigned max_size;
		unsigned small;
	} cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 87 */;
	struct list_head cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 833 */;
	struct ttm_page_pool *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 829 */;
	struct ttm_page_pool {
		spinlock_t lock;
		bool fill_lock;
		struct list_head list;
		gfp_t gfp_flags;
		unsigned npages;
		char *name;
		unsigned long nfrees;
		unsigned long nrefills;
		unsigned int order;
	} cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 69 */;
	unsigned long *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 573 */;
	struct page *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 52 */;
	struct page **cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 491 */;
	unsigned cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 489 */;
	enum ttm_caching_state cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 488 */;
	gfp_t cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 487 */;
	struct list_head *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 487 */;
	int cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 487 */;
	void cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 469 */;
	struct shrinker *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 415 */;
	struct shrink_control *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 415 */;
	unsigned long cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 287 */;
	struct page *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 286 */[NUM_PAGES_TO_ALLOC];
	struct page *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 247 */[];
	bool cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 221 */;
	struct ttm_pool_manager *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 217 */;
	struct kobj_type cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 211 */;
	const struct sysfs_ops cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 206 */;
	struct attribute *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 188 */;
	ssize_t cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 187 */;
	const char *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 154 */;
	size_t cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 154 */;
	struct ttm_pool_manager cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 149 */;
	struct kobject *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 146 */;
	struct attribute *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 139 */[];
	struct attribute cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 134 */;
	char *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 1173 */[];
	struct seq_file *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 1169 */;
	void *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 1169 */;
	struct ttm_dma_tt *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 1097 */;
	struct device *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 1097 */;
	struct ttm_pool_manager {
		struct kobject kobj;
		struct shrinker mm_shrink;
		struct ttm_pool_opts options;
		union {
			struct ttm_page_pool pools[NUM_POOLS];
			struct {
				struct ttm_page_pool wc_pool;
				struct ttm_page_pool uc_pool;
				struct ttm_page_pool wc_pool_dma32;
				struct ttm_page_pool uc_pool_dma32;
				struct ttm_page_pool wc_pool_huge;
				struct ttm_page_pool uc_pool_huge;
			};
		};
	} cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 108 */;
	struct ttm_tt *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 1050 */;
	struct ttm_operation_ctx *cocci_id/* drivers/gpu/drm/ttm/ttm_page_alloc.c 1050 */;
}
