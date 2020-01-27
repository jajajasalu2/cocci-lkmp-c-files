cocci_test_suite() {
	const uint8_t cocci_id/* drivers/gpu/drm/amd/display/dc/hdcp/hdcp_msg.c 78 */[];
	const bool cocci_id/* drivers/gpu/drm/amd/display/dc/hdcp/hdcp_msg.c 42 */[];
	const struct protection_properties cocci_id/* drivers/gpu/drm/amd/display/dc/hdcp/hdcp_msg.c 320 */;
	struct hdcp_protection_message *cocci_id/* drivers/gpu/drm/amd/display/dc/hdcp/hdcp_msg.c 310 */;
	struct dc_link *cocci_id/* drivers/gpu/drm/amd/display/dc/hdcp/hdcp_msg.c 309 */;
	bool cocci_id/* drivers/gpu/drm/amd/display/dc/hdcp/hdcp_msg.c 308 */;
	enum dc_status cocci_id/* drivers/gpu/drm/amd/display/dc/hdcp/hdcp_msg.c 229 */;
	uint8_t *cocci_id/* drivers/gpu/drm/amd/display/dc/hdcp/hdcp_msg.c 225 */;
	uint32_t cocci_id/* drivers/gpu/drm/amd/display/dc/hdcp/hdcp_msg.c 224 */;
	const uint32_t cocci_id/* drivers/gpu/drm/amd/display/dc/hdcp/hdcp_msg.c 187 */[];
	struct i2c_payload cocci_id/* drivers/gpu/drm/amd/display/dc/hdcp/hdcp_msg.c 133 */[];
	uint8_t cocci_id/* drivers/gpu/drm/amd/display/dc/hdcp/hdcp_msg.c 132 */;
	struct i2c_command cocci_id/* drivers/gpu/drm/amd/display/dc/hdcp/hdcp_msg.c 131 */;
	const uint8_t cocci_id/* drivers/gpu/drm/amd/display/dc/hdcp/hdcp_msg.c 129 */;
	struct protection_properties {
		bool supported;
		bool (*process_transaction)(struct dc_link *link,
					    struct hdcp_protection_message *message_info);
	} cocci_id/* drivers/gpu/drm/amd/display/dc/hdcp/hdcp_msg.c 112 */;
}
