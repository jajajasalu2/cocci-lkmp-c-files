cocci_test_suite() {
	const struct out_csc_color_matrix_type cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_hw_sequencer.c 76 */[];
	struct out_csc_color_matrix_type {
		enum dc_color_space_type color_space_type;
		uint16_t regval[12];
	} cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_hw_sequencer.c 71 */;
	const struct tg_color cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_hw_sequencer.c 56 */[];
	enum dc_color_space_type{COLOR_SPACE_RGB_TYPE, COLOR_SPACE_RGB_LIMITED_TYPE, COLOR_SPACE_YCBCR601_TYPE, COLOR_SPACE_YCBCR709_TYPE, COLOR_SPACE_YCBCR2020_TYPE, COLOR_SPACE_YCBCR601_LIMITED_TYPE, COLOR_SPACE_YCBCR709_LIMITED_TYPE, COLOR_SPACE_YCBCR709_BLACK_TYPE,} cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_hw_sequencer.c 45 */;
	enum black_color_format{BLACK_COLOR_FORMAT_RGB_FULLRANGE=0, BLACK_COLOR_FORMAT_RGB_LIMITED, BLACK_COLOR_FORMAT_YUV_TV, BLACK_COLOR_FORMAT_YUV_CV, BLACK_COLOR_FORMAT_YUV_SUPER_AA, BLACK_COLOR_FORMAT_DEBUG,} cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_hw_sequencer.c 36 */;
	struct timing_generator *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_hw_sequencer.c 273 */;
	bool cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_hw_sequencer.c 272 */;
	struct tg_color *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_hw_sequencer.c 228 */;
	enum dc_color_space cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_hw_sequencer.c 227 */;
	const struct dc *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_hw_sequencer.c 226 */;
	void cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_hw_sequencer.c 225 */;
	enum dc_color_space_type cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_hw_sequencer.c 209 */;
	int cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_hw_sequencer.c 208 */;
	uint32_t *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_hw_sequencer.c 206 */;
	const uint16_t *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_hw_sequencer.c 205 */;
}
