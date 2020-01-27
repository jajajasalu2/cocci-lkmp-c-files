cocci_test_suite() {
	u32 cocci_id/* drivers/gpu/drm/panfrost/panfrost_gpu.c 371 */;
	struct panfrost_device *cocci_id/* drivers/gpu/drm/panfrost/panfrost_gpu.c 366 */;
	void cocci_id/* drivers/gpu/drm/panfrost/panfrost_gpu.c 366 */;
	int cocci_id/* drivers/gpu/drm/panfrost/panfrost_gpu.c 336 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/panfrost/panfrost_gpu.c 21 */;
	void *cocci_id/* drivers/gpu/drm/panfrost/panfrost_gpu.c 21 */;
	const struct panfrost_model *cocci_id/* drivers/gpu/drm/panfrost/panfrost_gpu.c 202 */;
	u64 cocci_id/* drivers/gpu/drm/panfrost/panfrost_gpu.c 200 */;
	const char *cocci_id/* drivers/gpu/drm/panfrost/panfrost_gpu.c 199 */;
	const struct panfrost_model cocci_id/* drivers/gpu/drm/panfrost/panfrost_gpu.c 170 */[];
	struct panfrost_model {
		const char *name;
		u32 id;
		u32 id_mask;
		u64 features;
		u64 issues;
		struct {
			u32 revision;
			u64 issues;
		} revs[MAX_HW_REVS];
	} cocci_id/* drivers/gpu/drm/panfrost/panfrost_gpu.c 142 */;
}
