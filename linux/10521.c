cocci_test_suite() {
	DISPLAY_DEVICE_OUTPUT_CONTROL_PS_ALLOCATION cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 99 */;
	struct radeon_connector_atom_dig *cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 862 */;
	union dig_encoder_control cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 853 */;
	struct radeon_encoder_atom_dig *cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 851 */;
	union dig_encoder_control {
		DIG_ENCODER_CONTROL_PS_ALLOCATION v1;
		DIG_ENCODER_CONTROL_PARAMETERS_V2 v2;
		DIG_ENCODER_CONTROL_PARAMETERS_V3 v3;
		DIG_ENCODER_CONTROL_PARAMETERS_V4 v4;
	} cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 838 */;
	union lvds_encoder_control cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 571 */;
	union lvds_encoder_control {
		LVDS_ENCODER_CONTROL_PS_ALLOCATION v1;
		LVDS_ENCODER_CONTROL_PS_ALLOCATION_V2 v2;
	} cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 559 */;
	union dvo_encoder_control cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 498 */;
	union dvo_encoder_control {
		ENABLE_EXTERNAL_TMDS_ENCODER_PS_ALLOCATION ext_tmds;
		DVO_ENCODER_CONTROL_PS_ALLOCATION dvo;
		DVO_ENCODER_CONTROL_PS_ALLOCATION_V3 dvo_v3;
		DVO_ENCODER_CONTROL_PS_ALLOCATION_V1_4 dvo_v4;
	} cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 485 */;
	TV_ENCODER_CONTROL_PS_ALLOCATION cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 409 */;
	int cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 40 */;
	struct radeon_encoder_atom_dac *cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 359 */;
	DAC_ENCODER_CONTROL_PS_ALLOCATION cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 357 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 304 */;
	bool cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 300 */(struct radeon_device *rdev,
									  int index,
									  struct drm_display_mode *mode);
	struct radeon_legacy_backlight_privdata *cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 277 */;
	struct radeon_encoder cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2745 */;
	u16 cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2728 */;
	struct radeon_encoder_atom_dig cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2707 */;
	struct radeon_encoder_atom_dac cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2694 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2685 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2666 */;
	struct backlight_device *cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 260 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2387 */;
	uint32_t *cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2380 */;
	uint8_t cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2351 */;
	DAC_LOAD_DETECTION_PS_ALLOCATION cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2349 */;
	struct radeon_connector *cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2344 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2339 */;
	bool cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2338 */;
	struct radeon_backlight_privdata cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 212 */;
	uint32_t cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2073 */;
	struct radeon_crtc *cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2066 */;
	struct radeon_encoder *cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2065 */;
	struct radeon_device *cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2064 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2063 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2061 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2060 */;
	void cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 2059 */;
	char cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 194 */[16];
	struct backlight_properties cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 191 */;
	union crtc_source_param cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 1870 */;
	union crtc_source_param {
		SELECT_CRTC_SOURCE_PS_ALLOCATION v1;
		SELECT_CRTC_SOURCE_PARAMETERS_V2 v2;
	} cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 1858 */;
	const struct backlight_ops cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 180 */;
	struct radeon_backlight_privdata *cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 172 */;
	ENABLE_YUV_PS_ALLOCATION cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 1547 */;
	u32 cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 1453 */;
	u8 cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 1449 */;
	union external_encoder_control cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 1446 */;
	union external_encoder_control {
		EXTERNAL_ENCODER_CONTROL_PS_ALLOCATION v1;
		EXTERNAL_ENCODER_CONTROL_PS_ALLOCATION_V3 v3;
	} cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 1432 */;
	union dig_transmitter_control cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 1023 */;
	union dig_transmitter_control {
		DIG_TRANSMITTER_CONTROL_PS_ALLOCATION v1;
		DIG_TRANSMITTER_CONTROL_PARAMETERS_V2 v2;
		DIG_TRANSMITTER_CONTROL_PARAMETERS_V3 v3;
		DIG_TRANSMITTER_CONTROL_PARAMETERS_V4 v4;
		DIG_TRANSMITTER_CONTROL_PARAMETERS_V1_5 v5;
	} cocci_id/* drivers/gpu/drm/radeon/atombios_encoders.c 1007 */;
}
