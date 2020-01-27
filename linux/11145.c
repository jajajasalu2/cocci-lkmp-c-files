cocci_test_suite() {
	const struct dcn20_dsc_mask *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 87 */;
	const struct dcn20_dsc_shift *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 86 */;
	const struct dcn20_dsc_registers *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 85 */;
	int cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 84 */;
	struct dc_context *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 83 */;
	struct dcn20_dsc *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 82 */;
	void cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 82 */;
	enum dsc_bits_per_comp{DSC_BPC_8=8, DSC_BPC_10=10, DSC_BPC_12=12, DSC_BPC_UNKNOWN,} cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 73 */;
	uint32_t cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 518 */;
	const struct dsc_reg_values *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 516 */;
	const struct dsc_parameters *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 502 */;
	const struct dsc_funcs cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 50 */;
	void cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 48 */(struct display_stream_compressor *dsc);
	void cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 47 */(struct display_stream_compressor *dsc,
									       int opp_pipe);
	bool cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 46 */(struct display_stream_compressor *dsc,
									       const struct dsc_config *dsc_cfg,
									       uint8_t *dsc_packed_pps);
	struct dsc_reg_values *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 446 */;
	void cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 44 */(struct display_stream_compressor *dsc,
									       const struct dsc_config *dsc_cfg,
									       struct dsc_optc_config *dsc_optc_cfg);
	bool cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 43 */(struct display_stream_compressor *dsc,
									       const struct dsc_config *dsc_cfg);
	enum dsc_bits_per_comp cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 423 */;
	enum dc_color_depth cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 423 */;
	void cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 42 */(struct display_stream_compressor *dsc,
									       struct dcn_dsc_state *s);
	void cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 41 */(struct dsc_enc_caps *dsc_enc_caps,
									       int pixel_clock_100Hz);
	enum dsc_pixel_format cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 391 */;
	enum dc_pixel_encoding cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 391 */;
	enum dsc_bits_per_comp cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 38 */(enum dc_color_depth);
	enum dsc_pixel_format cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 37 */(enum dc_pixel_encoding dc_pix_enc,
												bool is_ycbcr422_simple);
	void cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 36 */(struct display_stream_compressor *dsc,
									       const struct dsc_reg_values *reg_vals);
	void cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 35 */(struct dsc_reg_values *reg_vals,
									       const struct dsc_parameters *dsc_params);
	void cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 34 */(struct dsc_reg_values *reg_vals);
	bool cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 32 */(const struct dsc_config *dsc_cfg,
									       struct dsc_reg_values *dsc_reg_vals,
									       struct dsc_optc_config *dsc_optc_cfg);
	struct dsc_parameters cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 310 */;
	void cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 31 */(struct display_stream_compressor *dsc,
									       struct drm_dsc_config *pps);
	struct drm_dsc_config *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 253 */;
	struct display_stream_compressor *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 238 */;
	struct drm_dsc_picture_parameter_set *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 215 */;
	struct dsc_optc_config cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 208 */;
	struct dsc_reg_values cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 207 */;
	bool cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 204 */;
	const struct dsc_config *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 204 */;
	uint8_t *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 204 */;
	struct dsc_optc_config *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 188 */;
	struct dcn_dsc_state *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 154 */;
	struct dsc_enc_caps *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn20/dcn20_dsc.c 107 */;
}
