cocci_test_suite() {
	struct intel_instdone *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 998 */;
	enum forcewake_domains cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 958 */;
	i915_reg_t cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 953 */;
	const char *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 940 */;
	const i915_reg_t cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 908 */;
	const u32 cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 907 */;
	u64 cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 861 */;
	const struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 861 */;
	struct lock_class_key cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 756 */;
	struct intel_context *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 753 */;
	const struct engine_info cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 71 */[];
	struct measure_breadcrumb *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 686 */;
	struct measure_breadcrumb {
		struct i915_request rq;
		struct intel_timeline timeline;
		struct intel_ring ring;
		u32 cs[1024];
	} cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 677 */;
	struct engine_info {
		unsigned int hw_id;
		u8 class;
		u8 instance;
		struct engine_mmio_base {
			u32 gen:8;
			u32 base:24;
		} mmio_bases[MAX_MMIO_BASES];
	} cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 60 */;
	void *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 556 */;
	struct drm_i915_gem_object *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 554 */;
	struct i915_vma *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 511 */;
	struct intel_engine_execlists *const cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 495 */;
	int (*cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 470 */)(struct intel_engine_cs *engine);
	const unsigned int cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 418 */;
	struct intel_device_info *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 417 */;
	void cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 353 */;
	typeof(engine->destroy) cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 325 */;
	const struct engine_info *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 275 */;
	enum intel_engine_id cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 273 */;
	struct intel_gt *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 273 */;
	int cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 228 */;
	const struct engine_mmio_base *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 226 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 225 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 225 */;
	unsigned long cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1640 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1621 */;
	ktime_t cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1598 */;
	struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1598 */;
	struct i915_request *const *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1572 */;
	u8 cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 156 */;
	struct intel_engine_execlists *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1556 */;
	va_list cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1470 */;
	intel_wakeref_t cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1466 */;
	struct i915_gpu_error *const cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1464 */;
	char cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1379 */[80];
	const u8 cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1345 */;
	const u32 *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1343 */;
	const struct timer_list *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1277 */;
	struct intel_timeline *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1256 */;
	struct i915_request *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1256 */;
	char cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1235 */[128];
	bool cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1231 */;
	const size_t cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1229 */;
	const void *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1227 */;
	struct drm_printer *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1227 */;
	size_t cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1227 */;
	char *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1190 */;
	const struct i915_sched_attr *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1189 */;
	struct tasklet_struct *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1087 */;
	struct intel_uncore *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1002 */;
	const struct sseu_dev_info *cocci_id/* drivers/gpu/drm/i915/gt/intel_engine_cs.c 1001 */;
}
