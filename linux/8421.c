cocci_test_suite() {
	struct ptp_tm_offset cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 88 */[6];
	struct ptp_tm_offset {
		unsigned int mbps;
		int egress;
		int ingress;
	} cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 82 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 805 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 725 */;
	void *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 725 */;
	bool cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 654 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 650 */;
	u16 cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 636 */;
	u8 *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 636 */;
	struct aq_ring_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 625 */;
	const struct aq_hw_ops *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 588 */;
	struct hwtstamp_config *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 564 */;
	struct skb_shared_hwtstamps cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 533 */;
	enum ptp_pin_function cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 505 */;
	struct aq_ptp_s {
		struct aq_nic_s *aq_nic;
		struct hwtstamp_config hwtstamp_config;
		spinlock_t ptp_lock;
		spinlock_t ptp_ring_lock;
		struct ptp_clock *ptp_clock;
		struct ptp_clock_info ptp_info;
		atomic_t offset_egress;
		atomic_t offset_ingress;
		struct aq_ring_param_s ptp_ring_param;
		struct ptp_tx_timeout ptp_tx_timeout;
		unsigned int idx_vector;
		struct napi_struct napi;
		struct aq_ring_s ptp_tx;
		struct aq_ring_s ptp_rx;
		struct aq_ring_s hwts_rx;
		struct ptp_skb_ring skb_ring;
		struct aq_rx_filter_l3l4 udp_filter;
		struct aq_rx_filter_l2 eth_type_filter;
		struct delayed_work poll_sync;
		u32 poll_timeout_ms;
		bool extts_pin_enabled;
		u64 last_sync1588_ts;
	} cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 48 */;
	u32 cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 459 */;
	struct ptp_clock_request *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 455 */;
	struct ptp_tx_timeout {
		spinlock_t lock;
		bool active;
		unsigned long tx_start;
	} cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 42 */;
	struct ptp_clock_time *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 387 */;
	struct skb_shared_hwtstamps *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 353 */;
	struct ptp_skb_ring {
		struct sk_buff **buff;
		spinlock_t lock;
		unsigned int size;
		unsigned int head;
		unsigned int tail;
	} cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 34 */;
	const struct timespec64 *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 335 */;
	struct timespec64 *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 311 */;
	unsigned long cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 295 */;
	s64 cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 291 */;
	struct aq_nic_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 275 */;
	struct aq_ptp_s cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 274 */;
	struct aq_ptp_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 274 */;
	struct ptp_clock_info *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 272 */;
	long cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 272 */;
	enum ptp_speed_offsets{ptp_offset_idx_10=0, ptp_offset_idx_100, ptp_offset_idx_1000, ptp_offset_idx_2500, ptp_offset_idx_5000, ptp_offset_idx_10000,} cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 25 */;
	struct ptp_tx_timeout *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 242 */;
	struct sk_buff **cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 179 */;
	struct delayed_work *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 1382 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 1380 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 138 */;
	struct ptp_skb_ring *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 138 */;
	struct ptp_clock_event cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 1362 */;
	u64 cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 1357 */;
	u64 *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 1327 */;
	uint64_t cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 1291 */;
	struct ptp_clock *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 1285 */;
	struct hw_atl_utils_mbox cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 1172 */;
	void cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 1168 */(struct work_struct *w);
	struct timespec64 cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 1162 */;
	void cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 1159 */;
	unsigned int cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 115 */;
	struct ptp_pin_desc cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 1149 */;
	int cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 113 */;
	struct ptp_pin_desc cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 1111 */[MAX_PTP_GPIO_COUNT];
	struct hw_atl_info *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 1109 */;
	const struct hw_atl_ptp_offset *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 1101 */;
	struct ptp_clock_info cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_ptp.c 1037 */;
}