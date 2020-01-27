cocci_test_suite() {
	struct ttm_mem_zone cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 82 */;
	struct page *cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 633 */;
	int cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 620 */;
	struct attribute cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 62 */;
	int64_t cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 545 */;
	struct ttm_operation_ctx *cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 543 */;
	uint64_t cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 542 */;
	struct ttm_mem_zone *cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 488 */;
	unsigned int cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 487 */;
	bool cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 486 */;
	struct ttm_mem_global *cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 484 */;
	void cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 484 */;
	struct ttm_mem_zone {
		struct kobject kobj;
		struct ttm_mem_global *glob;
		const char *name;
		uint64_t zone_mem;
		uint64_t emer_mem;
		uint64_t max_mem;
		uint64_t swap_limit;
		uint64_t used_mem;
	} cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 47 */;
	unsigned long long cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 452 */;
	struct ttm_mem_global cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 44 */;
	struct sysinfo cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 417 */;
	const struct sysinfo *cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 368 */;
	struct ttm_operation_ctx cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 289 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 287 */;
	struct kobj_type cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 232 */;
	const struct sysfs_ops cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 227 */;
	struct attribute *cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 222 */[];
	unsigned long cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 203 */;
	size_t cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 199 */;
	const char *cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 198 */;
	char *cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 181 */;
	struct attribute *cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 180 */;
	struct kobject *cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 179 */;
	ssize_t cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 179 */;
	void cocci_id/* drivers/gpu/drm/ttm/ttm_memory.c 114 */(struct ttm_mem_global *glob);
}
