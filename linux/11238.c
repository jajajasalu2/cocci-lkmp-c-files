cocci_test_suite() {
	const struct abm_parameters *const cocci_id/* drivers/gpu/drm/amd/display/modules/power/power_helpers.c 97 */[];
	const struct abm_parameters cocci_id/* drivers/gpu/drm/amd/display/modules/power/power_helpers.c 81 */[abm_defines_max_level];
	struct abm_parameters {
		unsigned char min_reduction;
		unsigned char max_reduction;
		unsigned char bright_pos_gain;
		unsigned char dark_pos_gain;
		unsigned char brightness_gain;
		unsigned char contrast_factor;
		unsigned char deviation_gain;
		unsigned char min_knee;
		unsigned char max_knee;
	} cocci_id/* drivers/gpu/drm/amd/display/modules/power/power_helpers.c 69 */;
	struct iram_table_v_2 *cocci_id/* drivers/gpu/drm/amd/display/modules/power/power_helpers.c 676 */;
	char *cocci_id/* drivers/gpu/drm/amd/display/modules/power/power_helpers.c 669 */;
	struct iram_table_v_2_2 *cocci_id/* drivers/gpu/drm/amd/display/modules/power/power_helpers.c 666 */;
	unsigned char cocci_id/* drivers/gpu/drm/amd/display/modules/power/power_helpers.c 654 */[IRAM_SIZE];
	struct dmcu_iram_parameters cocci_id/* drivers/gpu/drm/amd/display/modules/power/power_helpers.c 652 */;
	bool cocci_id/* drivers/gpu/drm/amd/display/modules/power/power_helpers.c 651 */;
	struct dmcu *cocci_id/* drivers/gpu/drm/amd/display/modules/power/power_helpers.c 651 */;
	const unsigned char cocci_id/* drivers/gpu/drm/amd/display/modules/power/power_helpers.c 61 */[abm_defines_max_config][abm_defines_max_level];
	const unsigned char cocci_id/* drivers/gpu/drm/amd/display/modules/power/power_helpers.c 41 */[13];
	unsigned int cocci_id/* drivers/gpu/drm/amd/display/modules/power/power_helpers.c 210 */;
	void cocci_id/* drivers/gpu/drm/amd/display/modules/power/power_helpers.c 207 */;
	struct iram_table_v_2_2 {
		uint16_t flags;
		uint8_t min_reduction[NUM_AMBI_LEVEL][NUM_AGGR_LEVEL];
		uint8_t max_reduction[NUM_AMBI_LEVEL][NUM_AGGR_LEVEL];
		uint8_t bright_pos_gain[NUM_AMBI_LEVEL][NUM_AGGR_LEVEL];
		uint8_t dark_pos_gain[NUM_AMBI_LEVEL][NUM_AGGR_LEVEL];
		uint8_t hybrid_factor[NUM_AGGR_LEVEL];
		uint8_t contrast_factor[NUM_AGGR_LEVEL];
		uint8_t deviation_gain[NUM_AGGR_LEVEL];
		uint8_t iir_curve[NUM_AMBI_LEVEL];
		uint8_t min_knee[NUM_AGGR_LEVEL];
		uint8_t max_knee[NUM_AGGR_LEVEL];
		uint16_t min_abm_backlight;
		uint8_t pad[19];
		uint16_t crgb_thresh[NUM_POWER_FN_SEGS];
		uint16_t crgb_offset[NUM_POWER_FN_SEGS];
		uint16_t crgb_slope[NUM_POWER_FN_SEGS];
		uint16_t backlight_thresholds[NUM_BL_CURVE_SEGS];
		uint16_t backlight_offsets[NUM_BL_CURVE_SEGS];
		uint8_t psr_state;
		uint8_t dmcu_mcp_interface_version;
		uint8_t dmcu_abm_feature_version;
		uint8_t dmcu_psr_feature_version;
		uint16_t dmcu_version;
		uint8_t dmcu_state;
		uint8_t dummy1;
		uint8_t dummy2;
		uint8_t dummy3;
		uint8_t dummy4;
		uint8_t dummy5;
		uint8_t dummy6;
		uint8_t dummy7;
		uint8_t dummy8;
		uint8_t dummy9;
	} cocci_id/* drivers/gpu/drm/amd/display/modules/power/power_helpers.c 158 */;
	struct iram_table_v_2 {
		uint16_t min_abm_backlight;
		uint8_t min_reduction[NUM_AMBI_LEVEL][NUM_AGGR_LEVEL];
		uint8_t max_reduction[NUM_AMBI_LEVEL][NUM_AGGR_LEVEL];
		uint8_t bright_pos_gain[NUM_AMBI_LEVEL][NUM_AGGR_LEVEL];
		uint8_t bright_neg_gain[NUM_AMBI_LEVEL][NUM_AGGR_LEVEL];
		uint8_t dark_pos_gain[NUM_AMBI_LEVEL][NUM_AGGR_LEVEL];
		uint8_t dark_neg_gain[NUM_AMBI_LEVEL][NUM_AGGR_LEVEL];
		uint8_t iir_curve[NUM_AMBI_LEVEL];
		uint8_t deviation_gain;
		uint16_t crgb_thresh[NUM_POWER_FN_SEGS];
		uint16_t crgb_offset[NUM_POWER_FN_SEGS];
		uint16_t crgb_slope[NUM_POWER_FN_SEGS];
		uint16_t backlight_thresholds[NUM_BL_CURVE_SEGS];
		uint16_t backlight_offsets[NUM_BL_CURVE_SEGS];
		uint8_t psr_state;
		uint8_t dmcu_mcp_interface_version;
		uint8_t dmcu_abm_feature_version;
		uint8_t dmcu_psr_feature_version;
		uint16_t dmcu_version;
		uint8_t dmcu_state;
		uint16_t blRampReduction;
		uint16_t blRampStart;
		uint8_t dummy5;
		uint8_t dummy6;
		uint8_t dummy7;
		uint8_t dummy8;
		uint8_t dummy9;
	} cocci_id/* drivers/gpu/drm/amd/display/modules/power/power_helpers.c 116 */;
}