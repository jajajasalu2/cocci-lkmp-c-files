cocci_test_suite() {
	u8 cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 825 */;
	i915_reg_t cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 823 */;
	struct edid *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 822 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 819 */;
	struct intel_lvds_encoder cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 80 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 775 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 774 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 773 */;
	bool cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 771 */;
	struct intel_lvds_encoder *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 771 */;
	const struct dmi_system_id cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 724 */[];
	const struct dmi_system_id *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 718 */;
	int cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 718 */;
	struct intel_lvds_encoder {
		struct intel_encoder base;
		bool is_dual_link;
		i915_reg_t reg;
		u32 a3_power;
		struct intel_lvds_pps init_pps;
		u32 init_lvds_val;
		struct intel_connector *attached_connector;
	} cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 65 */;
	struct intel_lvds_pps {
		int t1_t2;
		int t3;
		int t4;
		int t5;
		int tx;
		int divider;
		int port;
		bool powerdown_on_reset;
	} cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 51 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 495 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 483 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 477 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 451 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 450 */;
	struct intel_crtc *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 396 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 395 */;
	struct intel_connector *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 393 */;
	struct drm_connector_state *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 388 */;
	struct intel_crtc_state *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 387 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 366 */;
	const struct drm_connector_state *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 344 */;
	const struct intel_crtc_state *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 343 */;
	struct intel_encoder *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 342 */;
	void cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 342 */;
	enum pipe cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 235 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 234 */;
	struct intel_lvds_pps *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 155 */;
	u32 cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 124 */;
	intel_wakeref_t cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 104 */;
	enum pipe *cocci_id/* drivers/gpu/drm/i915/display/intel_lvds.c 100 */;
}
