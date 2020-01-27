cocci_test_suite() {
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 976 */(struct bios_parser *bp,
											   uint32_t id,
											   struct spread_spectrum_info *info);
	struct spread_spectrum_info *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 924 */;
	enum as_signal_type cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 922 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 90 */(struct dc_bios *dcb,
											  struct embedded_panel_info *info);
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 899 */(struct bios_parser *bp,
											   uint32_t id,
											   struct spread_spectrum_info *ss_info);
	ATOM_HPD_INT_RECORD cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 890 */;
	uint8_t cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 87 */(struct dc_bios *dcb);
	struct device_id cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 856 */;
	enum bp_pipe_control_action cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 843 */;
	enum controller_id cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 829 */;
	bool cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 82 */(struct bios_parser *bp,
										struct bp_init_data *init,
										enum dce_version dce_version);
	struct bp_pixel_clock_parameters *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 815 */;
	struct bp_hw_crtc_timing_parameters *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 803 */;
	struct bp_spread_spectrum_parameters *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 788 */;
	struct bp_set_dce_clock_parameters *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 776 */;
	struct bp_adjust_pixel_clock_parameters *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 752 */;
	struct bp_encoder_control *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 740 */;
	ATOM_ENCODER_CAP_RECORD_V2 *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 74 */(struct bios_parser *bp,
												       ATOM_OBJECT *object);
	uint32_t cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 73 */(struct device_id device_id);
	struct bp_transmitter_control *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 728 */;
	uint32_t cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 72 */(enum as_signal_type signal);
	struct device_id cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 71 */(uint16_t device_id);
	ATOM_HPD_INT_RECORD *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 69 */(struct bios_parser *bp,
												ATOM_OBJECT *object);
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 66 */(struct bios_parser *bp,
											  ATOM_I2C_RECORD *record,
											  struct graphics_object_i2c_info *info);
	ATOM_OBJECT *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 64 */(struct bios_parser *bp,
											struct graphics_object_id id);
	uint32_t cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 62 */(struct bios_parser *bp,
										    ATOM_OBJECT *object,
										    uint16_t **id_list);
	void cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 59 */(ATOM_COMMON_TABLE_HEADER *atom_data_tbl,
										struct atom_data_revision *tbl_revision);
	ATOM_FIRMWARE_INFO_V2_2 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 564 */;
	ATOM_FIRMWARE_INFO_V2_2 *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 557 */;
	struct spread_spectrum_info cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 475 */;
	ATOM_FIRMWARE_INFO_V2_1 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 474 */;
	ATOM_FIRMWARE_INFO_V2_1 *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 473 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 463 */(struct bios_parser *bp,
											   uint32_t id,
											   uint32_t index,
											   struct spread_spectrum_info *ss_info);
	ATOM_FIRMWARE_INFO_V1_4 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 424 */;
	ATOM_FIRMWARE_INFO_V1_4 *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 423 */;
	struct dc_firmware_info *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 377 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 365 */(struct bios_parser *bp,
											   struct dc_firmware_info *info);
	ATOM_CONNECTOR_DEVICE_TAG *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 336 */;
	ATOM_CONNECTOR_DEVICE_TAG_RECORD *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 335 */;
	ATOM_OBJECT *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 334 */;
	struct connector_device_tag_info *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 331 */;
	ATOM_CONNECTOR_DEVICE_TAG cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 317 */;
	ATOM_COMMON_RECORD_HEADER cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 302 */;
	ATOM_COMMON_RECORD_HEADER *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 295 */;
	ATOM_CONNECTOR_DEVICE_TAG_RECORD **cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 293 */;
	ATOM_OBJECT_HEADER_V3 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2904 */;
	ATOM_OBJECT_HEADER_V3 *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2902 */;
	ATOM_OBJECT_HEADER cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2892 */;
	ATOM_ROM_HEADER cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2870 */;
	uint16_t cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2865 */;
	struct atom_data_revision cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2849 */;
	ATOM_OBJECT_HEADER *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2848 */;
	ATOM_ROM_HEADER *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2847 */;
	uint16_t *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2846 */;
	enum dce_version cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2844 */;
	struct bp_init_data *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2843 */;
	bool cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2841 */;
	const struct dc_vbios_funcs cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2783 */;
	const unsigned int cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2745 */[MAX_BOARD_SLOTS];
	struct bios_parser *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2742 */;
	unsigned int cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2741 */;
	struct board_layout_info *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2739 */;
	struct dc_bios *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2738 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2737 */;
	struct slot_layout_info *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2694 */;
	ATOM_HPD_INT_RECORD *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 269 */;
	struct graphics_object_hpd_info *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 265 */;
	enum connector_layout_type cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2643 */;
	ATOM_BRACKET_LAYOUT_RECORD cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2620 */;
	ATOM_BRACKET_LAYOUT_RECORD *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2595 */;
	struct integrated_info cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2572 */;
	struct integrated_info *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2566 */;
	ATOM_I2C_RECORD cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 249 */;
	ATOM_INTEGRATED_SYSTEM_INFO_V1_9 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2385 */;
	ATOM_INTEGRATED_SYSTEM_INFO_V1_9 *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2382 */;
	ATOM_I2C_RECORD *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 224 */;
	ATOM_INTEGRATED_SYSTEM_INFO_V1_8 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2235 */;
	ATOM_INTEGRATED_SYSTEM_INFO_V1_8 *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2232 */;
	struct graphics_object_i2c_info *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 219 */;
	enum dal_device_type cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2132 */;
	struct atom_data_revision *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 2086 */;
	uint8_t *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1997 */;
	uint16_t **cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1994 */;
	struct graphics_object_id *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 190 */;
	ATOM_GPIO_I2C_INFO cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1841 */;
	ATOM_GPIO_I2C_INFO *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1831 */;
	ATOM_GPIO_PIN_LUT cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1791 */;
	ATOM_GPIO_PIN_LUT *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1784 */;
	struct gpio_pin_info *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1781 */;
	ATOM_ASIC_SS_ASSIGNMENT_V3 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1753 */;
	ATOM_ASIC_INTERNAL_SS_INFO_V3 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1749 */;
	ATOM_ASIC_SS_ASSIGNMENT_V3 *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1742 */;
	ATOM_ASIC_INTERNAL_SS_INFO_V3 *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1741 */;
	ATOM_ASIC_SS_ASSIGNMENT_V2 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1718 */;
	ATOM_ASIC_INTERNAL_SS_INFO_V2 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1713 */;
	ATOM_ASIC_SS_ASSIGNMENT_V2 *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1706 */;
	ATOM_ASIC_INTERNAL_SS_INFO_V2 *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1705 */;
	ATOM_OBJECT_TABLE cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 170 */;
	ATOM_OBJECT_TABLE *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 169 */;
	uint32_t cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 166 */;
	ATOM_SPREAD_SPECTRUM_INFO cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1635 */;
	ATOM_SPREAD_SPECTRUM_INFO *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1619 */;
	uint8_t cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 159 */;
	struct graphics_object_id cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 157 */;
	uint32_t cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1541 */(struct bios_parser *bp,
										      uint32_t id);
	ATOM_ENCODER_CAP_RECORD_V2 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1534 */;
	ATOM_ENCODER_CAP_RECORD_V2 *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1471 */;
	struct bp_encoder_cap_info *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1467 */;
	ATOM_LCD_INFO_V13 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1339 */;
	ATOM_LCD_INFO_V13 *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1331 */;
	struct embedded_panel_info cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1230 */;
	ATOM_LVDS_INFO_V12 cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1221 */;
	ATOM_LVDS_INFO_V12 *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1212 */;
	struct dc_bios **cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 120 */;
	void cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 120 */;
	ATOM_COMMON_TABLE_HEADER cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1184 */;
	ATOM_COMMON_TABLE_HEADER *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1179 */;
	struct embedded_panel_info *cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1176 */;
	enum bp_result cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 1167 */(struct bios_parser *bp,
											    struct embedded_panel_info *info);
	struct bios_parser cocci_id/* drivers/gpu/drm/amd/display/dc/bios/bios_parser.c 102 */;
}
