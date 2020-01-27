cocci_test_suite() {
	struct scmi_msg_resp_reset_domain_attributes *cocci_id/* drivers/firmware/arm_scmi/reset.c 83 */;
	struct scmi_reset_info {
		int num_domains;
		struct reset_dom_info *dom_info;
	} cocci_id/* drivers/firmware/arm_scmi/reset.c 50 */;
	struct reset_dom_info {
		bool async_reset;
		bool reset_notify;
		u32 latency_us;
		char name[SCMI_MAX_STR_SIZE];
	} cocci_id/* drivers/firmware/arm_scmi/reset.c 43 */;
	struct scmi_msg_reset_domain_reset {
		__le32 domain_id;
		__le32 flags;
#define AUTONOMOUS_RESET BIT(0)
#define EXPLICIT_RESET_ASSERT BIT(1)
#define ASYNCHRONOUS_RESET BIT(2)
					__le32 reset_state;
#define ARCH_RESET_TYPE BIT(31)
#define COLD_RESET_STATE BIT(0)
#define ARCH_COLD_RESET (ARCH_RESET_TYPE | COLD_RESET_STATE)
				} cocci_id/* drivers/firmware/arm_scmi/reset.c 31 */;
	struct scmi_msg_resp_reset_domain_attributes {
		__le32 attributes;
#define SUPPORTS_ASYNC_RESET (x)((x) & BIT(31))
#define SUPPORTS_NOTIFY_RESET (x)((x) & BIT(30))
						__le32 latency;
		u8 name[SCMI_MAX_STR_SIZE];
	} cocci_id/* drivers/firmware/arm_scmi/reset.c 23 */;
	int __init cocci_id/* drivers/firmware/arm_scmi/reset.c 226 */;
	void cocci_id/* drivers/firmware/arm_scmi/reset.c 226 */;
	struct scmi_handle *cocci_id/* drivers/firmware/arm_scmi/reset.c 192 */;
	struct scmi_reset_ops cocci_id/* drivers/firmware/arm_scmi/reset.c 183 */;
	enum scmi_reset_protocol_notify{RESET_ISSUED=0x0,} cocci_id/* drivers/firmware/arm_scmi/reset.c 16 */;
	struct reset_dom_info *cocci_id/* drivers/firmware/arm_scmi/reset.c 140 */;
	struct scmi_reset_info *cocci_id/* drivers/firmware/arm_scmi/reset.c 139 */;
	struct scmi_msg_reset_domain_reset *cocci_id/* drivers/firmware/arm_scmi/reset.c 138 */;
	struct scmi_xfer *cocci_id/* drivers/firmware/arm_scmi/reset.c 137 */;
	u32 cocci_id/* drivers/firmware/arm_scmi/reset.c 133 */;
	const struct scmi_handle *cocci_id/* drivers/firmware/arm_scmi/reset.c 133 */;
	int cocci_id/* drivers/firmware/arm_scmi/reset.c 133 */;
	char *cocci_id/* drivers/firmware/arm_scmi/reset.c 117 */;
	enum scmi_reset_protocol_cmd{RESET_DOMAIN_ATTRIBUTES=0x3, RESET=0x4, RESET_NOTIFY=0x5,} cocci_id/* drivers/firmware/arm_scmi/reset.c 10 */;
}
