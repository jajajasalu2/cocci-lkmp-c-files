cocci_test_suite() {
	enum dscl_mode_sel{DSCL_MODE_SCALING_444_BYPASS=0, DSCL_MODE_SCALING_444_RGB_ENABLE=1, DSCL_MODE_SCALING_444_YCBCR_ENABLE=2, DSCL_MODE_SCALING_420_YCBCR_ENABLE=3, DSCL_MODE_SCALING_420_LUMA_BYPASS=4, DSCL_MODE_SCALING_420_CHROMA_BYPASS=5, DSCL_MODE_DSCL_BYPASS=6,} cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 78 */;
	const struct rect *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 644 */;
	enum dscl_autocal_mode{AUTOCAL_MODE_OFF=0, AUTOCAL_MODE_AUTOSCALE=1, AUTOCAL_MODE_AUTOCENTER=2, AUTOCAL_MODE_AUTOREPLICATE=3,} cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 61 */;
	enum dcn10_coef_filter_type_sel{SCL_COEF_LUMA_VERT_FILTER=0, SCL_COEF_LUMA_HORZ_FILTER=1, SCL_COEF_CHROMA_VERT_FILTER=2, SCL_COEF_CHROMA_HORZ_FILTER=3, SCL_COEF_ALPHA_VERT_FILTER=4, SCL_COEF_ALPHA_HORZ_FILTER=5,} cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 52 */;
	struct dcn10_dpp *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 479 */;
	int cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 417 */;
	int *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 414 */;
	enum lb_memory_config cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 413 */;
	const struct scaler_data *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 412 */;
	void cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 411 */;
	enum lb_pixel_depth cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 395 */;
	uint16_t cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 269 */;
	const int cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 266 */;
	enum dcn10_coef_filter_type_sel cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 263 */;
	struct fixed31_32 cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 235 */;
	const uint16_t *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 235 */;
	uint32_t cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 209 */;
	const struct line_buffer_params *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 203 */;
	const long long cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 172 */;
	bool cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 170 */;
	struct dpp *cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 168 */;
	enum dscl_mode_sel cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 167 */;
	enum pixel_format cocci_id/* drivers/gpu/drm/amd/display/dc/dcn10/dcn10_dpp_dscl.c 158 */;
}
