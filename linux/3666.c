cocci_test_suite() {
	struct scmi_perf_get_fc_info {
		__le32 domain;
		__le32 message_id;
	} cocci_id/* drivers/firmware/arm_scmi/perf.c 95 */;
	struct scmi_msg_resp_perf_describe_levels {
		__le16 num_returned;
		__le16 num_remaining;
		struct {
			__le32 perf_val;
			__le32 power;
			__le16 transition_latency_us;
			__le16 reserved;
		} opp[0];
	} cocci_id/* drivers/firmware/arm_scmi/perf.c 84 */;
	struct scmi_perf_notify_level_or_limits {
		__le32 domain;
		__le32 notify_enable;
	} cocci_id/* drivers/firmware/arm_scmi/perf.c 79 */;
	int __init cocci_id/* drivers/firmware/arm_scmi/perf.c 745 */;
	struct scmi_perf_set_level {
		__le32 domain;
		__le32 level;
	} cocci_id/* drivers/firmware/arm_scmi/perf.c 74 */;
	struct scmi_handle *cocci_id/* drivers/firmware/arm_scmi/perf.c 707 */;
	struct scmi_perf_ops cocci_id/* drivers/firmware/arm_scmi/perf.c 694 */;
	struct scmi_perf_get_limits {
		__le32 max_level;
		__le32 min_level;
	} cocci_id/* drivers/firmware/arm_scmi/perf.c 69 */;
	unsigned long *cocci_id/* drivers/firmware/arm_scmi/perf.c 668 */;
	u32 cocci_id/* drivers/firmware/arm_scmi/perf.c 667 */;
	bool cocci_id/* drivers/firmware/arm_scmi/perf.c 653 */;
	struct scmi_perf_set_limits {
		__le32 domain;
		__le32 max_level;
		__le32 min_level;
	} cocci_id/* drivers/firmware/arm_scmi/perf.c 63 */;
	struct scmi_perf_info *cocci_id/* drivers/firmware/arm_scmi/perf.c 602 */;
	struct perf_dom_info *cocci_id/* drivers/firmware/arm_scmi/perf.c 601 */;
	struct scmi_opp *cocci_id/* drivers/firmware/arm_scmi/perf.c 600 */;
	unsigned long cocci_id/* drivers/firmware/arm_scmi/perf.c 599 */;
	const struct scmi_handle *cocci_id/* drivers/firmware/arm_scmi/perf.c 595 */;
	struct of_phandle_args cocci_id/* drivers/firmware/arm_scmi/perf.c 586 */;
	struct device *cocci_id/* drivers/firmware/arm_scmi/perf.c 584 */;
	struct scmi_msg_perf_describe_levels {
		__le32 domain;
		__le32 level_index;
	} cocci_id/* drivers/firmware/arm_scmi/perf.c 58 */;
	struct scmi_fc_info *cocci_id/* drivers/firmware/arm_scmi/perf.c 566 */;
	struct scmi_fc_info **cocci_id/* drivers/firmware/arm_scmi/perf.c 564 */;
	struct scmi_msg_resp_perf_desc_fc *cocci_id/* drivers/firmware/arm_scmi/perf.c 507 */;
	struct scmi_perf_get_fc_info *cocci_id/* drivers/firmware/arm_scmi/perf.c 506 */;
	struct scmi_fc_db_info *cocci_id/* drivers/firmware/arm_scmi/perf.c 505 */;
	void __iomem *cocci_id/* drivers/firmware/arm_scmi/perf.c 503 */;
	u8 cocci_id/* drivers/firmware/arm_scmi/perf.c 502 */;
	struct scmi_fc_db_info **cocci_id/* drivers/firmware/arm_scmi/perf.c 497 */;
	void __iomem **cocci_id/* drivers/firmware/arm_scmi/perf.c 496 */;
	void cocci_id/* drivers/firmware/arm_scmi/perf.c 494 */;
	u32 *cocci_id/* drivers/firmware/arm_scmi/perf.c 472 */;
	struct scmi_msg_resp_perf_domain_attributes {
		__le32 flags;
#define SUPPORTS_SET_LIMITS (x)((x) & BIT(31))
#define SUPPORTS_SET_PERF_LVL (x)((x) & BIT(30))
#define SUPPORTS_PERF_LIMIT_NOTIFY (x)((x) & BIT(29))
#define SUPPORTS_PERF_LEVEL_NOTIFY (x)((x) & BIT(28))
#define SUPPORTS_PERF_FASTCHANNELS (x)((x) & BIT(27))
												__le32 rate_limit_us;
		__le32 sustained_freq_khz;
		__le32 sustained_perf_level;
		u8 name[SCMI_MAX_STR_SIZE];
	} cocci_id/* drivers/firmware/arm_scmi/perf.c 45 */;
	struct scmi_perf_set_level *cocci_id/* drivers/firmware/arm_scmi/perf.c 416 */;
	__le32 cocci_id/* drivers/firmware/arm_scmi/perf.c 378 */;
	struct scmi_perf_get_limits *cocci_id/* drivers/firmware/arm_scmi/perf.c 375 */;
	struct scmi_msg_resp_perf_attributes {
		__le16 num_domains;
		__le16 flags;
#define POWER_SCALE_IN_MILLIWATT (x)((x) & BIT(0))
				__le32 stats_addr_low;
		__le32 stats_addr_high;
		__le32 stats_size;
	} cocci_id/* drivers/firmware/arm_scmi/perf.c 36 */;
	struct scmi_perf_set_limits *cocci_id/* drivers/firmware/arm_scmi/perf.c 336 */;
	struct scmi_opp {
		u32 perf;
		u32 power;
		u32 trans_latency_us;
	} cocci_id/* drivers/firmware/arm_scmi/perf.c 30 */;
	struct scmi_msg_resp_perf_describe_levels *cocci_id/* drivers/firmware/arm_scmi/perf.c 246 */;
	struct scmi_msg_perf_describe_levels *cocci_id/* drivers/firmware/arm_scmi/perf.c 245 */;
	const struct scmi_opp *cocci_id/* drivers/firmware/arm_scmi/perf.c 231 */;
	const void *cocci_id/* drivers/firmware/arm_scmi/perf.c 229 */;
	int cocci_id/* drivers/firmware/arm_scmi/perf.c 229 */;
	struct scmi_msg_resp_perf_domain_attributes *cocci_id/* drivers/firmware/arm_scmi/perf.c 190 */;
	enum scmi_performance_protocol_cmd{PERF_DOMAIN_ATTRIBUTES=0x3, PERF_DESCRIBE_LEVELS=0x4, PERF_LIMITS_SET=0x5, PERF_LIMITS_GET=0x6, PERF_LEVEL_SET=0x7, PERF_LEVEL_GET=0x8, PERF_NOTIFY_LIMITS=0x9, PERF_NOTIFY_LEVEL=0xa, PERF_DESCRIBE_FASTCHANNEL=0xb,} cocci_id/* drivers/firmware/arm_scmi/perf.c 18 */;
	u64 cocci_id/* drivers/firmware/arm_scmi/perf.c 176 */;
	u16 cocci_id/* drivers/firmware/arm_scmi/perf.c 171 */;
	struct scmi_msg_resp_perf_attributes *cocci_id/* drivers/firmware/arm_scmi/perf.c 160 */;
	struct scmi_xfer *cocci_id/* drivers/firmware/arm_scmi/perf.c 159 */;
	struct scmi_perf_info {
		int num_domains;
		bool power_scale_mw;
		u64 stats_addr;
		u32 stats_size;
		struct perf_dom_info *dom_info;
	} cocci_id/* drivers/firmware/arm_scmi/perf.c 147 */;
	struct perf_dom_info {
		bool set_limits;
		bool set_perf;
		bool perf_limit_notify;
		bool perf_level_notify;
		bool perf_fastchannels;
		u32 opp_count;
		u32 sustained_freq_khz;
		u32 sustained_perf_level;
		u32 mult_factor;
		char name[SCMI_MAX_STR_SIZE];
		struct scmi_opp opp[MAX_OPPS];
		struct scmi_fc_info *fc_info;
	} cocci_id/* drivers/firmware/arm_scmi/perf.c 132 */;
	struct scmi_fc_info {
		void __iomem *level_set_addr;
		void __iomem *limit_set_addr;
		void __iomem *level_get_addr;
		void __iomem *limit_get_addr;
		struct scmi_fc_db_info *level_set_db;
		struct scmi_fc_db_info *limit_set_db;
	} cocci_id/* drivers/firmware/arm_scmi/perf.c 123 */;
	struct scmi_fc_db_info {
		int width;
		u64 set;
		u64 mask;
		void __iomem *addr;
	} cocci_id/* drivers/firmware/arm_scmi/perf.c 116 */;
	struct scmi_msg_resp_perf_desc_fc {
		__le32 attr;
#define SUPPORTS_DOORBELL (x)((x) & BIT(0))
#define DOORBELL_REG_WIDTH (x)FIELD_GET(GENMASK(2, 1), (x))
						__le32 rate_limit;
		__le32 chan_addr_low;
		__le32 chan_addr_high;
		__le32 chan_size;
		__le32 db_addr_low;
		__le32 db_addr_high;
		__le32 db_set_lmask;
		__le32 db_set_hmask;
		__le32 db_preserve_lmask;
		__le32 db_preserve_hmask;
	} cocci_id/* drivers/firmware/arm_scmi/perf.c 100 */;
}
