cocci_test_suite() {
	struct scmi_msg_resp_power_domain_attributes *cocci_id/* drivers/firmware/arm_scmi/power.c 91 */;
	struct power_dom_info *cocci_id/* drivers/firmware/arm_scmi/power.c 87 */;
	u32 cocci_id/* drivers/firmware/arm_scmi/power.c 86 */;
	u64 cocci_id/* drivers/firmware/arm_scmi/power.c 77 */;
	struct scmi_msg_resp_power_attributes *cocci_id/* drivers/firmware/arm_scmi/power.c 64 */;
	struct scmi_xfer *cocci_id/* drivers/firmware/arm_scmi/power.c 63 */;
	struct scmi_power_info *cocci_id/* drivers/firmware/arm_scmi/power.c 60 */;
	const struct scmi_handle *cocci_id/* drivers/firmware/arm_scmi/power.c 59 */;
	int cocci_id/* drivers/firmware/arm_scmi/power.c 59 */;
	struct scmi_power_info {
		int num_domains;
		u64 stats_addr;
		u32 stats_size;
		struct power_dom_info *dom_info;
	} cocci_id/* drivers/firmware/arm_scmi/power.c 52 */;
	struct power_dom_info {
		bool state_set_sync;
		bool state_set_async;
		bool state_set_notify;
		char name[SCMI_MAX_STR_SIZE];
	} cocci_id/* drivers/firmware/arm_scmi/power.c 45 */;
	struct scmi_power_state_notify {
		__le32 domain;
		__le32 notify_enable;
	} cocci_id/* drivers/firmware/arm_scmi/power.c 40 */;
	struct scmi_power_set_state {
		__le32 flags;
#define STATE_SET_ASYNC BIT(0)
			__le32 domain;
		__le32 state;
	} cocci_id/* drivers/firmware/arm_scmi/power.c 33 */;
	struct scmi_msg_resp_power_domain_attributes {
		__le32 flags;
#define SUPPORTS_STATE_SET_NOTIFY (x)((x) & BIT(31))
#define SUPPORTS_STATE_SET_ASYNC (x)((x) & BIT(30))
#define SUPPORTS_STATE_SET_SYNC (x)((x) & BIT(29))
								u8 name[SCMI_MAX_STR_SIZE];
	} cocci_id/* drivers/firmware/arm_scmi/power.c 25 */;
	int __init cocci_id/* drivers/firmware/arm_scmi/power.c 216 */;
	void cocci_id/* drivers/firmware/arm_scmi/power.c 216 */;
	struct scmi_handle *cocci_id/* drivers/firmware/arm_scmi/power.c 182 */;
	struct scmi_power_ops cocci_id/* drivers/firmware/arm_scmi/power.c 175 */;
	struct scmi_msg_resp_power_attributes {
		__le16 num_domains;
		__le16 reserved;
		__le32 stats_addr_low;
		__le32 stats_addr_high;
		__le32 stats_size;
	} cocci_id/* drivers/firmware/arm_scmi/power.c 17 */;
	char *cocci_id/* drivers/firmware/arm_scmi/power.c 167 */;
	u32 *cocci_id/* drivers/firmware/arm_scmi/power.c 140 */;
	struct scmi_power_set_state *cocci_id/* drivers/firmware/arm_scmi/power.c 121 */;
	enum scmi_power_protocol_cmd{POWER_DOMAIN_ATTRIBUTES=0x3, POWER_STATE_SET=0x4, POWER_STATE_GET=0x5, POWER_STATE_NOTIFY=0x6,} cocci_id/* drivers/firmware/arm_scmi/power.c 10 */;
}
