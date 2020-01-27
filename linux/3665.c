cocci_test_suite() {
	bool cocci_id/* drivers/firmware/arm_scmi/base.c 66 */;
	struct scmi_revision_info *cocci_id/* drivers/firmware/arm_scmi/base.c 38 */;
	struct scmi_msg_resp_base_attributes *cocci_id/* drivers/firmware/arm_scmi/base.c 37 */;
	struct scmi_xfer *cocci_id/* drivers/firmware/arm_scmi/base.c 36 */;
	const struct scmi_handle *cocci_id/* drivers/firmware/arm_scmi/base.c 33 */;
	int cocci_id/* drivers/firmware/arm_scmi/base.c 33 */;
	u8 cocci_id/* drivers/firmware/arm_scmi/base.c 232 */;
	char cocci_id/* drivers/firmware/arm_scmi/base.c 223 */[SCMI_MAX_STR_SIZE];
	struct scmi_handle *cocci_id/* drivers/firmware/arm_scmi/base.c 218 */;
	__le32 cocci_id/* drivers/firmware/arm_scmi/base.c 202 */;
	char *cocci_id/* drivers/firmware/arm_scmi/base.c 196 */;
	struct scmi_msg_resp_base_attributes {
		u8 num_protocols;
		u8 num_agents;
		__le16 reserved;
	} cocci_id/* drivers/firmware/arm_scmi/base.c 19 */;
	struct device *cocci_id/* drivers/firmware/arm_scmi/base.c 147 */;
	u32 cocci_id/* drivers/firmware/arm_scmi/base.c 146 */;
	__le32 *cocci_id/* drivers/firmware/arm_scmi/base.c 145 */;
	u8 *cocci_id/* drivers/firmware/arm_scmi/base.c 140 */;
	enum scmi_base_protocol_cmd{BASE_DISCOVER_VENDOR=0x3, BASE_DISCOVER_SUB_VENDOR=0x4, BASE_DISCOVER_IMPLEMENT_VERSION=0x5, BASE_DISCOVER_LIST_PROTOCOLS=0x6, BASE_DISCOVER_AGENT=0x7, BASE_NOTIFY_ERRORS=0x8,} cocci_id/* drivers/firmware/arm_scmi/base.c 10 */;
}
