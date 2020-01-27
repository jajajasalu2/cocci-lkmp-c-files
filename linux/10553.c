cocci_test_suite() {
	drm_ioctl_compat_t *cocci_id/* drivers/gpu/drm/i915/i915_ioc32.c 81 */;
	long cocci_id/* drivers/gpu/drm/i915/i915_ioc32.c 78 */;
	drm_ioctl_compat_t *cocci_id/* drivers/gpu/drm/i915/i915_ioc32.c 65 */[];
	void __user *cocci_id/* drivers/gpu/drm/i915/i915_ioc32.c 51 */;
	drm_i915_getparam_t __user *cocci_id/* drivers/gpu/drm/i915/i915_ioc32.c 49 */;
	struct drm_i915_getparam32 cocci_id/* drivers/gpu/drm/i915/i915_ioc32.c 48 */;
	unsigned long cocci_id/* drivers/gpu/drm/i915/i915_ioc32.c 46 */;
	struct file *cocci_id/* drivers/gpu/drm/i915/i915_ioc32.c 45 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/i915_ioc32.c 45 */;
	int cocci_id/* drivers/gpu/drm/i915/i915_ioc32.c 45 */;
	struct drm_i915_getparam32 {
		s32 param;
		u32 value;
	} cocci_id/* drivers/gpu/drm/i915/i915_ioc32.c 35 */;
}
