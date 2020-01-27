cocci_test_suite() {
	i915_reg_t cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 944 */;
	struct drm_dsc_pps_infoframe cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 889 */;
	struct intel_digital_port *cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 887 */;
	struct rc_parameters cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 56 */[][MAX_COLUMN_INDEX];
	u32 cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 493 */[8];
	u32 cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 492 */[4];
	u32 cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 491 */;
	enum transcoder cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 490 */;
	enum pipe cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 489 */;
	const struct drm_dsc_config *cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 488 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 487 */;
	struct intel_crtc *cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 486 */;
	const struct intel_crtc_state *cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 484 */;
	struct intel_encoder *cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 483 */;
	void cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 483 */;
	enum intel_display_power_domain cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 459 */;
	struct rc_parameters {
		u16 initial_xmit_delay;
		u8 first_line_bpg_offset;
		u16 initial_offset;
		u8 flatness_min_qp;
		u8 flatness_max_qp;
		u8 rc_quant_incr_limit0;
		u8 rc_quant_incr_limit1;
		struct drm_dsc_rc_range_parameters rc_range_params[DSC_NUM_BUF_RANGES];
	} cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 41 */;
	u16 cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 36 */[];
	struct drm_dsc_config *cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 325 */;
	struct intel_crtc_state *cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 323 */;
	struct intel_dp *cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 322 */;
	u8 cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 304 */;
	int cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 304 */;
	u16 cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 286 */;
	enum COLUMN_INDEX_BPC{COLUMN_INDEX_8BPC=0, COLUMN_INDEX_10BPC, COLUMN_INDEX_12BPC, COLUMN_INDEX_14BPC, COLUMN_INDEX_16BPC, MAX_COLUMN_INDEX,} cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 24 */;
	enum ROW_INDEX_BPP{ROW_INDEX_6BPP=0, ROW_INDEX_8BPP, ROW_INDEX_10BPP, ROW_INDEX_12BPP, ROW_INDEX_15BPP, MAX_ROW_INDEX,} cocci_id/* drivers/gpu/drm/i915/display/intel_vdsc.c 15 */;
}
