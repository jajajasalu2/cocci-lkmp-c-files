cocci_test_suite() {
	struct intel_quirk cocci_id/* drivers/gpu/drm/i915/display/intel_quirks.c 91 */[];
	const struct dmi_system_id cocci_id/* drivers/gpu/drm/i915/display/intel_quirks.c 77 */[];
	const struct intel_dmi_quirk cocci_id/* drivers/gpu/drm/i915/display/intel_quirks.c 75 */[];
	const struct dmi_system_id *cocci_id/* drivers/gpu/drm/i915/display/intel_quirks.c 69 */;
	int cocci_id/* drivers/gpu/drm/i915/display/intel_quirks.c 69 */;
	struct intel_dmi_quirk {
		void (*hook)(struct drm_i915_private *i915);
		const struct dmi_system_id *dmi_id_list[];
	} cocci_id/* drivers/gpu/drm/i915/display/intel_quirks.c 64 */;
	struct intel_quirk {
		int device;
		int subsystem_vendor;
		int subsystem_device;
		void (*hook)(struct drm_i915_private *i915);
	} cocci_id/* drivers/gpu/drm/i915/display/intel_quirks.c 56 */;
	struct intel_quirk *cocci_id/* drivers/gpu/drm/i915/display/intel_quirks.c 157 */;
	struct pci_dev *cocci_id/* drivers/gpu/drm/i915/display/intel_quirks.c 153 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/display/intel_quirks.c 151 */;
	void cocci_id/* drivers/gpu/drm/i915/display/intel_quirks.c 151 */;
}
