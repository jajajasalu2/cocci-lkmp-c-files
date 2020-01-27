cocci_test_suite() {
	ENABLE_SCALER_PS_ALLOCATION cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 89 */;
	struct amdgpu_pll *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 827 */;
	union set_pixel_clock cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 594 */;
	struct amdgpu_atom_ss *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 588 */;
	union set_dce_clock cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 531 */;
	union set_dce_clock {
		SET_DCE_CLOCK_PS_ALLOCATION_V1_1 v1_1;
		SET_DCE_CLOCK_PS_ALLOCATION_V2_1 v2_1;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 521 */;
	SET_CRTC_OVERSCAN_PS_ALLOCATION cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 46 */;
	union set_pixel_clock {
		SET_PIXEL_CLOCK_PS_ALLOCATION base;
		PIXEL_CLOCK_PARAMETERS v1;
		PIXEL_CLOCK_PARAMETERS_V2 v2;
		PIXEL_CLOCK_PARAMETERS_V3 v3;
		PIXEL_CLOCK_PARAMETERS_V5 v5;
		PIXEL_CLOCK_PARAMETERS_V6 v6;
		PIXEL_CLOCK_PARAMETERS_V7 v7;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 458 */;
	struct amdgpu_encoder_atom_dig *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 416 */;
	uint32_t *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 399 */;
	struct amdgpu_connector_atom_dig *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 330 */;
	struct amdgpu_connector *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 329 */;
	u8 cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 321 */;
	union adjust_pixel_clock cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 320 */;
	bool cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 319 */;
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 315 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 313 */;
	struct amdgpu_encoder *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 312 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 311 */;
	struct amdgpu_device *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 310 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 309 */;
	struct amdgpu_crtc *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 308 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 306 */;
	u32 cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 305 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 305 */;
	union adjust_pixel_clock {
		ADJUST_DISPLAY_PLL_PS_ALLOCATION v1;
		ADJUST_DISPLAY_PLL_PS_ALLOCATION_V3 v3;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 300 */;
	union atom_enable_ss cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 249 */;
	unsigned cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 247 */;
	union atom_enable_ss {
		ENABLE_SPREAD_SPECTRUM_ON_PPLL_PS_ALLOCATION v1;
		ENABLE_SPREAD_SPECTRUM_ON_PPLL_V2 v2;
		ENABLE_SPREAD_SPECTRUM_ON_PPLL_V3 v3;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 235 */;
	u16 cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 198 */;
	SET_CRTC_USING_DTD_TIMING_PARAMETERS cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 196 */;
	ENABLE_DISP_POWER_GATING_PS_ALLOCATION cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 168 */;
	BLANK_CRTC_PS_ALLOCATION cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 152 */;
	void cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 146 */;
	ENABLE_CRTC_PS_ALLOCATION cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_crtc.c 136 */;
}
