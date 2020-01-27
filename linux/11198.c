cocci_test_suite() {
	union hdmi_scdc_status_flags_data {
		uint8_t byte[2];
		struct {
			uint8_t CLOCK_DETECTED:1;
			uint8_t CH0_LOCKED:1;
			uint8_t CH1_LOCKED:1;
			uint8_t CH2_LOCKED:1;
			uint8_t RESERVED:4;
			uint8_t RESERVED2:8;
			uint8_t RESERVED3:8;
		} fields;
	} cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 87 */;
	union hdmi_scdc_update_read_data {
		uint8_t byte[2];
		struct {
			uint8_t STATUS_UPDATE:1;
			uint8_t CED_UPDATE:1;
			uint8_t RR_TEST:1;
			uint8_t RESERVED:5;
			uint8_t RESERVED2:8;
		} fields;
	} cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 76 */;
	union hdmi_scdc_status_flags_data cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 719 */;
	uint8_t cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 684 */[2];
	struct ddc *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 671 */;
	enum dc_status cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 650 */;
	enum aux_channel_operation_result *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 630 */;
	struct aux_payload *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 587 */;
	struct dp_hdmi_dongle_signature_data {
		int8_t id[15];
		uint8_t eot;
	} cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 58 */;
	struct i2c_command cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 560 */;
	const uint8_t cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 55 */[];
	struct aux_payload cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 530 */;
	enum{DP_SINK_CAP_SIZE=DP_EDP_CONFIGURATION_CAP - DP_DPCD_REV + 1,} cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 498 */;
	struct dvi_hdmi_dongle_signature_data {
		int8_t vendor[3];
		uint8_t version[2];
		uint8_t size;
		int8_t id[11];
	} cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 47 */;
	struct dp_hdmi_dongle_signature_data *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 378 */;
	int cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 377 */;
	uint8_t cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 375 */[DP_ADAPTOR_TYPE2_SIZE];
	enum display_dongle_type *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 374 */;
	uint8_t cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 372 */;
	struct display_sink_capability *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 370 */;
	struct i2c_payload cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 344 */[2];
	struct dc_link *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 295 */;
	enum display_dongle_type cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 286 */;
	enum ddc_transaction_type cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 267 */;
	enum ddc_service_type cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 260 */;
	struct ddc_service **cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 249 */;
	struct ddc_service cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 234 */;
	struct dc_bios *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 200 */;
	struct gpio_ddc_hw_info cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 199 */;
	struct graphics_object_i2c_info cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 198 */;
	struct gpio_service *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 197 */;
	enum connector_id cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 194 */;
	struct ddc_service_init_data *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 192 */;
	struct ddc_service *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 191 */;
	void cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 190 */;
	struct i2c_payload cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 180 */;
	bool cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 174 */;
	uint8_t *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 173 */;
	uint32_t cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 171 */;
	struct i2c_payloads *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 170 */;
	struct i2c_payloads **cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 157 */;
	struct i2c_payload *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 147 */;
	struct i2c_payloads cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 133 */;
	struct dc_context *cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 129 */;
	struct aux_payloads {
		struct vector payloads;
	} cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 125 */;
	struct i2c_payloads {
		struct vector payloads;
	} cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 121 */;
	union hdmi_scdc_ced_data {
		uint8_t byte[7];
		struct {
			uint8_t CH0_8LOW:8;
			uint8_t CH0_7HIGH:7;
			uint8_t CH0_VALID:1;
			uint8_t CH1_8LOW:8;
			uint8_t CH1_7HIGH:7;
			uint8_t CH1_VALID:1;
			uint8_t CH2_8LOW:8;
			uint8_t CH2_7HIGH:7;
			uint8_t CH2_VALID:1;
			uint8_t CHECKSUM:8;
			uint8_t RESERVED:8;
			uint8_t RESERVED2:8;
			uint8_t RESERVED3:8;
			uint8_t RESERVED4:4;
		} fields;
	} cocci_id/* drivers/gpu/drm/amd/display/dc/core/dc_link_ddc.c 101 */;
}
