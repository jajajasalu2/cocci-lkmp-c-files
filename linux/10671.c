cocci_test_suite() {
	const struct skl_dpll_regs cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 960 */[4];
	struct skl_dpll_regs {
		i915_reg_t ctl,cfgcr1,cfgcr2;
	} cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 955 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 821 */;
	struct hsw_wrpll_rnp cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 754 */;
	unsigned cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 753 */;
	unsigned *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 750 */;
	struct hsw_wrpll_rnp *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 691 */;
	struct drm_atomic_state *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 63 */;
	struct hsw_wrpll_rnp {
		unsigned p,n2,r2;
	} cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 610 */;
	struct intel_shared_dpll_state *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 50 */;
	const struct intel_dpll_mgr *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 3838 */;
	const struct dpll_info *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 3752 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 3748 */;
	i915_reg_t cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 3612 */;
	enum tc_port cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 3195 */;
	const struct icl_port_dpll *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 3114 */;
	enum icl_port_dpll_id cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 3109 */;
	const struct intel_crtc_state *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 3105 */;
	enum phy cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 3090 */;
	unsigned long cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2996 */;
	struct icl_port_dpll *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2992 */;
	struct intel_digital_port *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2971 */;
	const struct intel_shared_dpll *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 297 */;
	int cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2670 */[];
	u32 *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2665 */;
	const struct icl_combo_pll_params *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2557 */;
	const struct skl_wrpll_params cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2536 */;
	const struct icl_combo_pll_params cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2504 */[];
	const struct intel_crtc *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 248 */;
	struct icl_combo_pll_params {
		int clock;
		struct skl_wrpll_params wrpll;
	} cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2466 */;
	struct skl_wrpll_params cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2323 */;
	const int cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2283 */[];
	struct skl_wrpll_params *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2275 */;
	u64 cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2253 */;
	int *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2172 */;
	const enum intel_dpll_id cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2091 */;
	const struct intel_dpll_mgr cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2013 */;
	const struct dpll_info cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 2006 */[];
	struct intel_dpll_mgr {
		const struct dpll_info *dpll_info;
		bool (*get_dplls)(struct intel_atomic_state *state,
				  struct intel_crtc *crtc,
				  struct intel_encoder *encoder);
		void (*put_dplls)(struct intel_atomic_state *state,
				  struct intel_crtc *crtc);
		void (*update_active_dpll)(struct intel_atomic_state *state,
					   struct intel_crtc *crtc,
					   struct intel_encoder *encoder);
		void (*dump_hw_state)(struct drm_i915_private *dev_priv,
				      const struct intel_dpll_hw_state *hw_state);
	} cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1946 */;
	const struct intel_shared_dpll_funcs cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1940 */;
	const struct intel_dpll_hw_state *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1922 */;
	enum intel_dpll_id cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1896 */;
	struct intel_encoder *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1890 */;
	struct intel_atomic_state *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1888 */;
	struct bxt_clk_div cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1871 */;
	const struct bxt_clk_div *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1800 */;
	int cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1785 */;
	struct bxt_clk_div *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1783 */;
	struct intel_crtc_state *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1782 */;
	struct dpll cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1755 */;
	struct intel_crtc *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1754 */;
	const struct bxt_clk_div cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1740 */[];
	struct bxt_clk_div {
		int clock;
		u32 p1;
		u32 p2;
		u32 m2_int;
		u32 m2_frac;
		bool m2_frac_en;
		u32 n;
		int vco;
	} cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1727 */;
	intel_wakeref_t cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1654 */;
	struct intel_dpll_hw_state *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1651 */;
	u32 cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1631 */;
	enum port cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1630 */;
	enum dpio_channel cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1513 */;
	enum dpio_phy cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1512 */;
	struct skl_wrpll_context cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1311 */;
	const struct {
		const int *list;
		int n_dividers;
	} cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1304 */[];
	u64 cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1295 */[3];
	struct skl_wrpll_params {
		u32 dco_fraction;
		u32 dco_integer;
		u32 qdiv_ratio;
		u32 qdiv_mode;
		u32 kdiv;
		u32 pdiv;
		u32 central_freq;
	} cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1213 */;
	struct intel_dpll_hw_state cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 119 */;
	unsigned int *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1165 */;
	bool cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 116 */;
	struct intel_shared_dpll *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 115 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 114 */;
	void cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 114 */;
	struct skl_wrpll_context *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1124 */;
	struct skl_wrpll_context {
		u64 min_deviation;
		u64 central_freq;
		u64 dco_freq;
		unsigned int p;
	} cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1117 */;
	const struct skl_dpll_regs *cocci_id/* drivers/gpu/drm/i915/display/intel_dpll_mgr.c 1088 */;
}
