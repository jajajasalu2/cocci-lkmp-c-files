cocci_test_suite() {
	struct mmio_diff_param cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 89 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 85 */;
	struct diff_mmio *cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 63 */;
	struct mmio_diff_param *cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 62 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 61 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 59 */;
	void *cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 59 */;
	int cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 58 */;
	struct diff_mmio cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 49 */;
	struct list_head *cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 44 */;
	struct diff_mmio {
		struct list_head node;
		u32 offset;
		u32 preg;
		u32 vreg;
	} cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 35 */;
	struct mmio_diff_param {
		struct intel_vgpu *vgpu;
		int total;
		int diff;
		struct list_head diff_mmio_list;
	} cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 28 */;
	struct intel_gvt *cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 235 */;
	struct drm_minor *cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 223 */;
	char cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 195 */[16];
	struct intel_vgpu *cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 193 */;
	void cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 193 */;
	struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 165 */;
	char cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 147 */[128];
	enum intel_engine_id cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 146 */;
	u64 cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 142 */;
	u64 *cocci_id/* drivers/gpu/drm/i915/gvt/debugfs.c 128 */;
}
