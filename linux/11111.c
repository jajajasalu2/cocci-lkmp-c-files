cocci_test_suite() {
	enum csc_color_mode{CSC_COLOR_MODE_GRAPHICS_BYPASS, CSC_COLOR_MODE_GRAPHICS_PREDEFINED, CSC_COLOR_MODE_GRAPHICS_OUTPUT_CSC,} cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 94 */;
	const struct out_csc_color_matrix cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 77 */[];
	const struct out_csc_color_matrix *cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 723 */;
	struct transform *cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 722 */;
	void cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 721 */;
	enum grph_color_adjust_option cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 682 */;
	const struct default_adjustment *cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 673 */;
	const uint32_t *cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 536 */;
	struct input_csc_matrix cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 534 */;
	int cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 534 */;
	const struct input_csc_matrix cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 511 */[];
	struct input_csc_matrix {
		enum dc_color_space color_space;
		uint32_t regval[12];
	} cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 506 */;
	enum dc_color_depth cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 463 */;
	uint32_t cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 365 */;
	struct dc_context *cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 364 */;
	enum dc_color_space cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 362 */;
	enum graphics_csc_adjust_type cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 361 */;
	enum csc_color_mode cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 360 */;
	struct dce_transform *cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 359 */;
	bool cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 358 */;
	enum{OUTPUT_CSC_MATRIX_SIZE=12,} cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 35 */;
	enum grph_color_adjust_option{GRPH_COLOR_MATRIX_HW_DEFAULT=1, GRPH_COLOR_MATRIX_SW,} cocci_id/* drivers/gpu/drm/amd/display/dc/dce110/dce110_opp_csc_v.c 103 */;
}
