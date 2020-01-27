cocci_test_suite() {
	struct _SET_PIXEL_CLOCK_PS_ALLOCATION_V5 {
		PIXEL_CLOCK_PARAMETERS_V5 sPCLKInput;
		ENABLE_SPREAD_SPECTRUM_ON_PPLL sReserved;
	} cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 995 */;
	SET_PIXEL_CLOCK_PS_ALLOCATION cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 945 */;
	PIXEL_CLOCK_PARAMETERS_V3 *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 944 */;
	struct amdgpu_device *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 86 */;
	DIG_TRANSMITTER_CONTROL_PARAMETERS_V1_6 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 840 */;
	void *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 83 */;
	DIG_TRANSMITTER_CONTROL_PARAMETERS_V1_5 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 779 */;
	struct bp_transmitter_control *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 775 */;
	DIG_TRANSMITTER_CONTROL_PARAMETERS_V4 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 655 */;
	void cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 54 */(struct bios_parser *bp);
	DIG_TRANSMITTER_CONTROL_PARAMETERS_V3 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 521 */;
	enum connector_id cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 402 */;
	DIG_TRANSMITTER_CONTROL_PARAMETERS_V2 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 401 */;
	uint32_t *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 40 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 358 */(struct bios_parser *bp,
											     struct bp_transmitter_control *cntl);
	ENCODER_STREAM_SETUP_PARAMETERS_V5 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 288 */;
	DIG_ENCODER_CONTROL_PARAMETERS_V4 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 259 */;
	const struct command_table_helper *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 2315 */;
	SET_DCE_CLOCK_PS_ALLOCATION_V2_1 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 2312 */;
	struct bp_set_dce_clock_parameters *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 2308 */;
	DIG_ENCODER_CONTROL_PARAMETERS_V3 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 230 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 2288 */(struct bios_parser *bp,
											      struct bp_set_dce_clock_parameters *bp_params);
	ENABLE_DISP_POWER_GATING_PS_ALLOCATION cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 2264 */;
	enum bp_pipe_control_action cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 2260 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 2236 */(struct bios_parser *bp,
											      enum controller_id crtc_id,
											      enum bp_pipe_control_action action);
	struct graphics_object_id cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 2136 */;
	EXTERNAL_ENCODER_CONTROL_PARAMETERS_V3 *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 2135 */;
	EXTERNAL_ENCODER_CONTROL_PS_ALLOCATION_V3 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 2134 */;
	struct bp_external_encoder_control *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 2129 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 2109 */(struct bios_parser *bp,
											      struct bp_external_encoder_control *cntl);
	SET_PIXEL_CLOCK_PS_ALLOCATION_V6 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 2068 */;
	SET_PIXEL_CLOCK_PS_ALLOCATION_V5 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 2037 */;
	struct bp_pixel_clock_parameters *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 2033 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 2007 */(struct bios_parser *bp,
											      struct bp_pixel_clock_parameters *bp_params);
	DIG_ENCODER_CONTROL_PARAMETERS_V2 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 200 */;
	ENABLE_CRTC_PARAMETERS cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1979 */;
	enum controller_id cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1975 */;
	struct bp_encoder_control *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 197 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1956 */(struct bios_parser *bp,
											      enum controller_id controller_id,
											      bool enable);
	SET_CRTC_USING_DTD_TIMING_PARAMETERS cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1818 */;
	SET_CRTC_TIMING_PARAMETERS_PS_ALLOCATION cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1745 */;
	struct bp_hw_crtc_timing_parameters *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1742 */;
	struct cmd_tbl *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 173 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1707 */(struct bios_parser *bp,
											      struct bp_hw_crtc_timing_parameters *bp_params);
	DISPLAY_DEVICE_OUTPUT_CONTROL_PS_ALLOCATION cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1666 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1635 */(struct bios_parser *bp,
											      bool enable);
	DAC_ENCODER_CONTROL_PS_ALLOCATION cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1593 */;
	bool cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1588 */;
	DAC_ENCODER_CONTROL_PS_ALLOCATION *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1569 */;
	void cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1568 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1537 */(struct bios_parser *bp,
											      bool enable,
											      uint32_t pixel_clock,
											      uint8_t dac_standard);
	uint64_t cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1507 */;
	ADJUST_DISPLAY_PLL_PS_ALLOCATION_V3 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1481 */;
	uint8_t cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1471 */;
	uint16_t cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1465 */;
	uint32_t cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1463 */;
	ADJUST_DISPLAY_PLL_PS_ALLOCATION cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1459 */;
	struct bp_adjust_pixel_clock_parameters *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1456 */;
	struct bios_parser *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1455 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1454 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 144 */(struct bios_parser *bp,
											     struct bp_encoder_control *cntl);
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1430 */(struct bios_parser *bp,
											      struct bp_adjust_pixel_clock_parameters *bp_params);
	ENABLE_SPREAD_SPECTRUM_ON_PPLL_V3 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1359 */;
	ENABLE_SPREAD_SPECTRUM_ON_PPLL_V2 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1307 */;
	ENABLE_SPREAD_SPECTRUM_ON_PPLL cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1263 */;
	struct bp_spread_spectrum_parameters *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1259 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1221 */(struct bios_parser *bp,
											      struct bp_spread_spectrum_parameters *bp_params,
											      bool enable);
	PIXEL_CLOCK_PARAMETERS_V7 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1151 */;
	struct _SET_PIXEL_CLOCK_PS_ALLOCATION_V6 {
		PIXEL_CLOCK_PARAMETERS_V6 sPCLKInput;
		ENABLE_SPREAD_SPECTRUM_ON_PPLL sReserved;
	} cocci_id/* drivers/gpu/drm/amd/display/dc/bios/command_table.c 1004 */;
}
