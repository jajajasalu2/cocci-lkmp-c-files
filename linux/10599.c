cocci_test_suite() {
	typeof(*hwsp) cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 65 */;
	u64 cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 59 */;
	typeof(*timeline) cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 580 */;
	struct intel_timeline *cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 579 */;
	struct kref *cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 577 */;
	unsigned int *cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 54 */;
	void *cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 419 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 417 */;
	u32 *cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 414 */;
	struct i915_request *cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 413 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 398 */;
	struct drm_i915_gem_object *cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 37 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 36 */;
	struct intel_gt *cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 34 */;
	struct i915_vma *cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 34 */;
	struct intel_timeline_cacheline {
		struct i915_active active;
		struct intel_timeline_hwsp *hwsp;
		void *vaddr;
#define CACHELINE_BITS 6
#define CACHELINE_FREE CACHELINE_BITS
	} cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 26 */;
	struct intel_timeline_hwsp {
		struct intel_gt *gt;
		struct intel_gt_timelines *gt_timelines;
		struct list_head free_link;
		struct i915_vma *vma;
		u64 free_bitmap;
	} cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 18 */;
	typeof(*cl) cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 153 */;
	struct intel_timeline_cacheline *cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 152 */;
	struct i915_active *cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 150 */;
	int cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 150 */;
	typeof(ptr) cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 15 */;
	void cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 127 */;
	unsigned long cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 106 */;
	struct intel_gt_timelines *cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 105 */;
	struct intel_timeline_hwsp *cocci_id/* drivers/gpu/drm/i915/gt/intel_timeline.c 103 */;
}
