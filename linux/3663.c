cocci_test_suite() {
	u32 cocci_id/* drivers/firmware/arm_scmi/clock.c 99 */;
	struct scmi_clock_info *cocci_id/* drivers/firmware/arm_scmi/clock.c 99 */;
	const struct scmi_handle *cocci_id/* drivers/firmware/arm_scmi/clock.c 98 */;
	int cocci_id/* drivers/firmware/arm_scmi/clock.c 98 */;
	struct scmi_msg_resp_clock_protocol_attributes *cocci_id/* drivers/firmware/arm_scmi/clock.c 79 */;
	struct clock_info {
		int num_clocks;
		int max_async_req;
		atomic_t cur_async_req;
		struct scmi_clock_info *clk;
	} cocci_id/* drivers/firmware/arm_scmi/clock.c 67 */;
	struct scmi_clock_set_rate {
		__le32 flags;
#define CLOCK_SET_ASYNC BIT(0)
#define CLOCK_SET_IGNORE_RESP BIT(1)
#define CLOCK_SET_ROUND_UP BIT(2)
#define CLOCK_SET_ROUND_AUTO BIT(3)
						__le32 id;
		__le32 value_low;
		__le32 value_high;
	} cocci_id/* drivers/firmware/arm_scmi/clock.c 56 */;
	struct scmi_msg_resp_clock_describe_rates {
		__le32 num_rates_flags;
#define NUM_RETURNED (x)((x) & 0xfff)
#define RATE_DISCRETE (x)!((x) & BIT(12))
#define NUM_REMAINING (x)((x) >> 16)
								struct {
									__le32 value_low;
									__le32 value_high;
								} rate[0];
#define RATE_TO_U64 (X)({typeof(X) x = (X);le32_to_cpu((x).value_low) | (u64)le32_to_cpu((x).value_high) << 32;})
		} cocci_id/* drivers/firmware/arm_scmi/clock.c 40 */;
	struct scmi_msg_clock_describe_rates {
		__le32 id;
		__le32 rate_index;
	} cocci_id/* drivers/firmware/arm_scmi/clock.c 35 */;
	int __init cocci_id/* drivers/firmware/arm_scmi/clock.c 349 */;
	void cocci_id/* drivers/firmware/arm_scmi/clock.c 349 */;
	struct scmi_handle *cocci_id/* drivers/firmware/arm_scmi/clock.c 313 */;
	struct scmi_clk_ops cocci_id/* drivers/firmware/arm_scmi/clock.c 304 */;
	struct scmi_clock_set_config {
		__le32 id;
		__le32 attributes;
	} cocci_id/* drivers/firmware/arm_scmi/clock.c 30 */;
	const struct scmi_clock_info *cocci_id/* drivers/firmware/arm_scmi/clock.c 292 */;
	struct clock_info *cocci_id/* drivers/firmware/arm_scmi/clock.c 287 */;
	struct scmi_clock_set_config *cocci_id/* drivers/firmware/arm_scmi/clock.c 258 */;
	struct scmi_msg_resp_clock_attributes {
		__le32 attributes;
#define CLOCK_ENABLE BIT(0)
			u8 name[SCMI_MAX_STR_SIZE];
	} cocci_id/* drivers/firmware/arm_scmi/clock.c 24 */;
	struct scmi_clock_set_rate *cocci_id/* drivers/firmware/arm_scmi/clock.c 223 */;
	u64 cocci_id/* drivers/firmware/arm_scmi/clock.c 203 */;
	__le32 cocci_id/* drivers/firmware/arm_scmi/clock.c 203 */;
	struct scmi_msg_resp_clock_protocol_attributes {
		__le16 num_clocks;
		u8 max_async_req;
		u8 reserved;
	} cocci_id/* drivers/firmware/arm_scmi/clock.c 18 */;
	struct scmi_msg_resp_clock_describe_rates *cocci_id/* drivers/firmware/arm_scmi/clock.c 134 */;
	struct scmi_msg_clock_describe_rates *cocci_id/* drivers/firmware/arm_scmi/clock.c 133 */;
	u16 cocci_id/* drivers/firmware/arm_scmi/clock.c 131 */;
	bool cocci_id/* drivers/firmware/arm_scmi/clock.c 129 */;
	u64 *cocci_id/* drivers/firmware/arm_scmi/clock.c 127 */;
	struct scmi_msg_resp_clock_attributes *cocci_id/* drivers/firmware/arm_scmi/clock.c 103 */;
	struct scmi_xfer *cocci_id/* drivers/firmware/arm_scmi/clock.c 102 */;
	enum scmi_clock_protocol_cmd{CLOCK_ATTRIBUTES=0x3, CLOCK_DESCRIBE_RATES=0x4, CLOCK_RATE_SET=0x5, CLOCK_RATE_GET=0x6, CLOCK_CONFIG_SET=0x7,} cocci_id/* drivers/firmware/arm_scmi/clock.c 10 */;
}
