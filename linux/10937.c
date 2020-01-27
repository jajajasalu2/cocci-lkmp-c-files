cocci_test_suite() {
	union dig_transmitter_control {
		DIG_TRANSMITTER_CONTROL_PS_ALLOCATION v1;
		DIG_TRANSMITTER_CONTROL_PARAMETERS_V2 v2;
		DIG_TRANSMITTER_CONTROL_PARAMETERS_V3 v3;
		DIG_TRANSMITTER_CONTROL_PARAMETERS_V4 v4;
		DIG_TRANSMITTER_CONTROL_PARAMETERS_V1_5 v5;
		DIG_TRANSMITTER_CONTROL_PARAMETERS_V1_6 v6;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 751 */;
	union dig_encoder_control cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 580 */;
	union dig_encoder_control {
		DIG_ENCODER_CONTROL_PS_ALLOCATION v1;
		DIG_ENCODER_CONTROL_PARAMETERS_V2 v2;
		DIG_ENCODER_CONTROL_PARAMETERS_V3 v3;
		DIG_ENCODER_CONTROL_PARAMETERS_V4 v4;
		DIG_ENCODER_CONTROL_PARAMETERS_V5 v5;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 563 */;
	struct amdgpu_connector_atom_dig *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 449 */;
	union dvo_encoder_control cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 387 */;
	union dvo_encoder_control {
		ENABLE_EXTERNAL_TMDS_ENCODER_PS_ALLOCATION ext_tmds;
		DVO_ENCODER_CONTROL_PS_ALLOCATION dvo;
		DVO_ENCODER_CONTROL_PS_ALLOCATION_V3 dvo_v3;
		DVO_ENCODER_CONTROL_PS_ALLOCATION_V1_4 dvo_v4;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 374 */;
	struct amdgpu_crtc *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 353 */;
	DAC_ENCODER_CONTROL_PS_ALLOCATION cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 324 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 286 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 285 */;
	struct amdgpu_legacy_backlight_privdata *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 247 */;
	struct amdgpu_encoder_atom_dig *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 234 */;
	struct amdgpu_encoder_atom_dig cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 2142 */;
	ATOM_PANEL_RESOLUTION_PATCH_RECORD cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 2123 */;
	ATOM_FAKE_EDID_PATCH_RECORD cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 2117 */;
	struct edid *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 2100 */;
	u8 *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 2075 */;
	ATOM_PANEL_RESOLUTION_PATCH_RECORD *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 2073 */;
	ATOM_FAKE_EDID_PATCH_RECORD *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 2072 */;
	union lvds_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 2006 */;
	uint16_t cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 2005 */;
	struct amdgpu_mode_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 2003 */;
	union lvds_info {
		struct _ATOM_LVDS_INFO info;
		struct _ATOM_LVDS_INFO_V12 info_12;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1993 */;
	struct amdgpu_backlight_privdata cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 190 */;
	u32 cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1797 */;
	uint32_t cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1757 */;
	struct amdgpu_connector *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1756 */;
	struct amdgpu_encoder *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1755 */;
	struct amdgpu_device *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1754 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1753 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1751 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1750 */;
	char cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 175 */[16];
	enum drm_connector_status cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1749 */;
	uint32_t *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1742 */;
	uint8_t cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1713 */;
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1712 */;
	DAC_LOAD_DETECTION_PS_ALLOCATION cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1711 */;
	struct backlight_properties cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 171 */;
	bool cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1699 */;
	const struct backlight_ops cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 160 */;
	struct amdgpu_backlight_privdata *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 152 */;
	union crtc_source_param cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1472 */;
	union crtc_source_param {
		SELECT_CRTC_SOURCE_PS_ALLOCATION v1;
		SELECT_CRTC_SOURCE_PARAMETERS_V2 v2;
		SELECT_CRTC_SOURCE_PARAMETERS_V3 v3;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1459 */;
	void cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1406 */;
	union external_encoder_control cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1231 */;
	u8 cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 123 */;
	struct backlight_device *cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 123 */;
	union external_encoder_control {
		EXTERNAL_ENCODER_CONTROL_PS_ALLOCATION v1;
		EXTERNAL_ENCODER_CONTROL_PS_ALLOCATION_V3 v3;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1217 */;
	union dig_transmitter_control cocci_id/* drivers/gpu/drm/amd/amdgpu/atombios_encoders.c 1182 */;
}
