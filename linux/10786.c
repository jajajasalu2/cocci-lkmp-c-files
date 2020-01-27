cocci_test_suite() {
	struct selftest {
		bool enabled;
		const char *name;
		union {
			int (*mock)(void);
			int (*live)(struct drm_i915_private *);
		};
	} cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 60 */;
	void cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 36 */;
	va_list cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 342 */;
	bool cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 340 */;
	unsigned long cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 340 */;
	struct i915_selftest cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 32 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 306 */;
	const struct i915_subtest *cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 305 */;
	int (*cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 304 */)(int err,
										void *data);
	int (*cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 303 */)(void *data);
	const char *cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 302 */;
	struct intel_gt *cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 281 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 258 */;
	void *cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 256 */;
	int cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 256 */;
	char *cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 205 */;
	struct pci_dev *cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 182 */;
	struct selftest *cocci_id/* drivers/gpu/drm/i915/selftests/i915_selftest.c 111 */;
}
