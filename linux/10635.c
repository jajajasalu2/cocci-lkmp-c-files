cocci_test_suite() {
	struct {
		unsigned int low_mm;
		unsigned int high_mm;
		unsigned int fence;
		unsigned int weight;
		enum intel_vgpu_edid edid;
		char *name;
	} cocci_id/* drivers/gpu/drm/i915/gvt/vgpu.c 79 */[];
	struct vgt_if cocci_id/* drivers/gpu/drm/i915/gvt/vgpu.c 72 */;
	struct intel_gvt_workload_scheduler *cocci_id/* drivers/gpu/drm/i915/gvt/vgpu.c 530 */;
	intel_engine_mask_t cocci_id/* drivers/gpu/drm/i915/gvt/vgpu.c 527 */;
	bool cocci_id/* drivers/gpu/drm/i915/gvt/vgpu.c 526 */;
	struct intel_vgpu_creation_params cocci_id/* drivers/gpu/drm/i915/gvt/vgpu.c 473 */;
	struct intel_vgpu_type *cocci_id/* drivers/gpu/drm/i915/gvt/vgpu.c 471 */;
	int cocci_id/* drivers/gpu/drm/i915/gvt/vgpu.c 363 */;
	struct intel_vgpu_creation_params *cocci_id/* drivers/gpu/drm/i915/gvt/vgpu.c 360 */;
	struct intel_vgpu *cocci_id/* drivers/gpu/drm/i915/gvt/vgpu.c 359 */;
	struct intel_gvt *cocci_id/* drivers/gpu/drm/i915/gvt/vgpu.c 359 */;
	enum intel_engine_id cocci_id/* drivers/gpu/drm/i915/gvt/vgpu.c 316 */;
	void cocci_id/* drivers/gpu/drm/i915/gvt/vgpu.c 213 */;
	struct intel_vgpu_type cocci_id/* drivers/gpu/drm/i915/gvt/vgpu.c 128 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/gvt/vgpu.c 108 */;
}
