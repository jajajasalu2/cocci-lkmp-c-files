cocci_test_suite() {
	s64 cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 83 */;
	struct qede_dev *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 66 */;
	struct qede_ptp cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 65 */;
	struct qede_ptp *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 65 */;
	s32 cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 63 */;
	struct ptp_clock_info *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 63 */;
	int cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 63 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 557 */;
	bool cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 464 */;
	void cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 394 */;
	struct ethtool_ts_info *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 350 */;
	struct qede_ptp {
		const struct qed_eth_ptp_ops *ops;
		struct ptp_clock_info clock_info;
		struct cyclecounter cc;
		struct timecounter tc;
		struct ptp_clock *clock;
		struct work_struct work;
		unsigned long ptp_tx_start;
		struct qede_dev *edev;
		struct sk_buff *tx_skb;
		spinlock_t lock;
		bool hw_ts_ioctl_called;
		u16 tx_type;
		u16 rx_filter;
	} cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 35 */;
	struct hwtstamp_config cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 316 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 314 */;
	enum qed_ptp_filter_type cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 227 */;
	enum qed_ptp_hwtstamp_tx_type cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 226 */;
	const struct cyclecounter *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 206 */;
	struct skb_shared_hwtstamps cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 161 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 159 */;
	struct ptp_clock_request *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 145 */;
	const struct timespec64 *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 122 */;
	u64 cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 105 */;
	struct timespec64 *cocci_id/* drivers/net/ethernet/qlogic/qede/qede_ptp.c 101 */;
}
