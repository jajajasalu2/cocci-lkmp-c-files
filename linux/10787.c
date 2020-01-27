cocci_test_suite() {
	struct {
		const struct intel_forcewake_range *ranges;
		unsigned int num_ranges;
		bool is_watertight;
	} cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 96 */[];
	u32 cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 79 */;
	const i915_reg_t *cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 72 */;
	struct {
		const i915_reg_t *regs;
		unsigned int size;
	} cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 64 */[];
	void cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 62 */;
	const struct i915_subtest cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 327 */[];
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 325 */;
	s32 cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 32 */;
	bool cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 29 */;
	i915_reg_t cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 284 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 28 */;
	const struct intel_forcewake_range *cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 27 */;
	int cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 27 */;
	unsigned long *cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 261 */;
	struct intel_uncore *cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 260 */;
	struct intel_gt *cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 259 */;
	void *cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 256 */;
	enum forcewake_domains cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 194 */;
	u32 __iomem *cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 193 */;
	intel_wakeref_t cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 148 */;
	enum intel_engine_id cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 147 */;
	struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 146 */;
	struct intel_uncore_forcewake_domain *cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 144 */;
	const struct reg *cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 142 */;
	const struct reg {
		const char *name;
		unsigned long platforms;
		unsigned int offset;
	} cocci_id/* drivers/gpu/drm/i915/selftests/intel_uncore.c 126 */[];
}
