cocci_test_suite() {
	u32 cocci_id/* drivers/net/wimax/i2400m/rx.c 988 */;
	enum i2400m_cs cocci_id/* drivers/net/wimax/i2400m/rx.c 987 */;
	struct net_device *cocci_id/* drivers/net/wimax/i2400m/rx.c 985 */;
	const struct i2400m_pl_edata_hdr *cocci_id/* drivers/net/wimax/i2400m/rx.c 984 */;
	struct kref *cocci_id/* drivers/net/wimax/i2400m/rx.c 927 */;
	struct i2400m_roq_data *cocci_id/* drivers/net/wimax/i2400m/rx.c 662 */;
	struct device *cocci_id/* drivers/net/wimax/i2400m/rx.c 660 */;
	struct sk_buff *cocci_id/* drivers/net/wimax/i2400m/rx.c 658 */;
	struct i2400m_roq_log_entry *cocci_id/* drivers/net/wimax/i2400m/rx.c 593 */;
	enum i2400m_ro_type cocci_id/* drivers/net/wimax/i2400m/rx.c 589 */;
	struct i2400m_roq_log {
		struct i2400m_roq_log_entry {
			enum i2400m_ro_type type;
			unsigned ws,count,sn,nsn,new_ws;
		} entry[I2400M_ROQ_LOG_LENGTH];
		unsigned in,out;
	} cocci_id/* drivers/net/wimax/i2400m/rx.c 542 */;
	enum{I2400M_ROQ_LOG_LENGTH=32,} cocci_id/* drivers/net/wimax/i2400m/rx.c 538 */;
	int cocci_id/* drivers/net/wimax/i2400m/rx.c 524 */;
	unsigned long cocci_id/* drivers/net/wimax/i2400m/rx.c 507 */;
	struct i2400m_roq *cocci_id/* drivers/net/wimax/i2400m/rx.c 505 */;
	struct i2400m *cocci_id/* drivers/net/wimax/i2400m/rx.c 505 */;
	unsigned cocci_id/* drivers/net/wimax/i2400m/rx.c 505 */;
	void cocci_id/* drivers/net/wimax/i2400m/rx.c 497 */;
	struct i2400m_roq {
		unsigned ws;
		struct sk_buff_head queue;
		struct i2400m_roq_log *log;
	} cocci_id/* drivers/net/wimax/i2400m/rx.c 488 */;
	struct i2400m_roq_data {
		unsigned sn;
		enum i2400m_cs cs;
	} cocci_id/* drivers/net/wimax/i2400m/rx.c 467 */;
	const struct i2400m_l3l4_hdr *cocci_id/* drivers/net/wimax/i2400m/rx.c 363 */;
	struct wimax_dev *cocci_id/* drivers/net/wimax/i2400m/rx.c 290 */;
	const void *cocci_id/* drivers/net/wimax/i2400m/rx.c 244 */;
	size_t cocci_id/* drivers/net/wimax/i2400m/rx.c 244 */;
	struct i2400m_report_hook_args *cocci_id/* drivers/net/wimax/i2400m/rx.c 217 */;
	struct i2400m cocci_id/* drivers/net/wimax/i2400m/rx.c 185 */;
	struct work_struct *cocci_id/* drivers/net/wimax/i2400m/rx.c 183 */;
	struct i2400m_report_hook_args {
		struct sk_buff *skb_rx;
		const struct i2400m_l3l4_hdr *l3l4_hdr;
		size_t size;
		struct list_head list_node;
	} cocci_id/* drivers/net/wimax/i2400m/rx.c 165 */;
	struct i2400m_roq_log *cocci_id/* drivers/net/wimax/i2400m/rx.c 1352 */;
	const __le32 *cocci_id/* drivers/net/wimax/i2400m/rx.c 1315 */;
	char cocci_id/* drivers/net/wimax/i2400m/rx.c 1314 */[64];
	void *cocci_id/* drivers/net/wimax/i2400m/rx.c 1256 */;
	const struct i2400m_msg_hdr *cocci_id/* drivers/net/wimax/i2400m/rx.c 1248 */;
	enum i2400m_pt cocci_id/* drivers/net/wimax/i2400m/rx.c 1103 */;
	const struct i2400m_pld *cocci_id/* drivers/net/wimax/i2400m/rx.c 1098 */;
}
