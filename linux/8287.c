cocci_test_suite() {
	unsigned long cocci_id/* drivers/net/ethernet/sfc/ptp.c 999 */;
	unsigned cocci_id/* drivers/net/ethernet/sfc/ptp.c 894 */;
	int *cocci_id/* drivers/net/ethernet/sfc/ptp.c 830 */;
	struct pps_event_time cocci_id/* drivers/net/ethernet/sfc/ptp.c 827 */;
	struct pps_event_time *cocci_id/* drivers/net/ethernet/sfc/ptp.c 825 */;
	struct sk_buff_head *cocci_id/* drivers/net/ethernet/sfc/ptp.c 803 */;
	struct efx_tx_queue *cocci_id/* drivers/net/ethernet/sfc/ptp.c 577 */;
	u64 cocci_id/* drivers/net/ethernet/sfc/ptp.c 475 */;
	u32 *cocci_id/* drivers/net/ethernet/sfc/ptp.c 471 */;
	unsigned int *cocci_id/* drivers/net/ethernet/sfc/ptp.c 419 */;
	u64 *cocci_id/* drivers/net/ethernet/sfc/ptp.c 405 */;
	u8 *cocci_id/* drivers/net/ethernet/sfc/ptp.c 396 */;
	size_t cocci_id/* drivers/net/ethernet/sfc/ptp.c 396 */;
	const unsigned long cocci_id/* drivers/net/ethernet/sfc/ptp.c 392 */[];
	const struct efx_hw_stat_desc cocci_id/* drivers/net/ethernet/sfc/ptp.c 375 */[];
	int cocci_id/* drivers/net/ethernet/sfc/ptp.c 350 */(struct ptp_clock_info *ptp,
							     struct ptp_clock_request *request,
							     int on);
	int cocci_id/* drivers/net/ethernet/sfc/ptp.c 348 */(struct ptp_clock_info *ptp,
							     const struct timespec64 *e_ts);
	int cocci_id/* drivers/net/ethernet/sfc/ptp.c 347 */(struct ptp_clock_info *ptp,
							     struct timespec64 *ts);
	int cocci_id/* drivers/net/ethernet/sfc/ptp.c 346 */(struct ptp_clock_info *ptp,
							     s64 delta);
	int cocci_id/* drivers/net/ethernet/sfc/ptp.c 345 */(struct ptp_clock_info *ptp,
							     s32 delta);
	struct efx_ptp_data {
		struct efx_nic *efx;
		struct efx_channel *channel;
		bool rx_ts_inline;
		struct sk_buff_head rxq;
		struct sk_buff_head txq;
		struct list_head evt_list;
		struct list_head evt_free_list;
		spinlock_t evt_lock;
		struct efx_ptp_event_rx rx_evts[MAX_RECEIVE_EVENTS];
		struct workqueue_struct *workwq;
		struct work_struct work;
		bool reset_required;
		u32 rxfilter_event;
		u32 rxfilter_general;
		bool rxfilter_installed;
		struct hwtstamp_config config;
		bool enabled;
		unsigned int mode;
		void (*ns_to_nic_time)(s64 ns, u32 *nic_major, u32 *nic_minor);
		ktime_t (*nic_to_kernel_time)(u32 nic_major, u32 nic_minor,
					      s32 correction);
		struct {
			u32 minor_max;
			u32 sync_event_diff_min;
			u32 sync_event_diff_max;
			unsigned int sync_event_minor_shift;
		} nic_time;
		unsigned int min_synchronisation_ns;
		unsigned int capabilities;
		struct {
			s32 ptp_tx;
			s32 ptp_rx;
			s32 pps_out;
			s32 pps_in;
			s32 general_tx;
			s32 general_rx;
		} ts_corrections;
		efx_qword_t evt_frags[MAX_EVENT_FRAGS];
		int evt_frag_idx;
		int evt_code;
		struct efx_buffer start;
		struct pps_event_time host_time_pps;
		unsigned int adjfreq_ppb_shift;
		s64 current_adjfreq;
		struct ptp_clock *phc_clock;
		struct ptp_clock_info phc_clock_info;
		struct work_struct pps_work;
		struct workqueue_struct *pps_workwq;
		bool nic_ts_enabled;
		_MCDI_DECLARE_BUF(txbuf,MC_CMD_PTP_IN_TRANSMIT_LENMAX);
		unsigned int good_syncs;
		unsigned int fast_syncs;
		unsigned int bad_syncs;
		unsigned int sync_timeouts;
		unsigned int no_time_syncs;
		unsigned int invalid_sync_windows;
		unsigned int undersize_sync_windows;
		unsigned int oversize_sync_windows;
		unsigned int rx_no_timestamp;
		struct efx_ptp_timeset timeset[MC_CMD_PTP_OUT_SYNCHRONIZE_TIMESET_MAXNUM];
		void (*xmit_skb)(struct efx_nic *efx, struct sk_buff *skb);
	} cocci_id/* drivers/net/ethernet/sfc/ptp.c 279 */;
	const struct efx_channel_type cocci_id/* drivers/net/ethernet/sfc/ptp.c 2147 */;
	struct ptp_clock_request *cocci_id/* drivers/net/ethernet/sfc/ptp.c 2134 */;
	struct timespec64 cocci_id/* drivers/net/ethernet/sfc/ptp.c 2117 */;
	const struct timespec64 *cocci_id/* drivers/net/ethernet/sfc/ptp.c 2110 */;
	ktime_t cocci_id/* drivers/net/ethernet/sfc/ptp.c 2092 */;
	struct timespec64 *cocci_id/* drivers/net/ethernet/sfc/ptp.c 2083 */;
	s64 cocci_id/* drivers/net/ethernet/sfc/ptp.c 2036 */;
	struct efx_ptp_data cocci_id/* drivers/net/ethernet/sfc/ptp.c 2032 */;
	s32 cocci_id/* drivers/net/ethernet/sfc/ptp.c 2029 */;
	struct ptp_clock_info *cocci_id/* drivers/net/ethernet/sfc/ptp.c 2029 */;
	int cocci_id/* drivers/net/ethernet/sfc/ptp.c 2029 */;
	struct efx_ptp_timeset {
		u32 host_start;
		u32 major;
		u32 minor;
		u32 host_end;
		u32 wait;
		u32 window;
	} cocci_id/* drivers/net/ethernet/sfc/ptp.c 199 */;
	struct skb_shared_hwtstamps *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1979 */;
	u32 cocci_id/* drivers/net/ethernet/sfc/ptp.c 1977 */;
	struct efx_ptp_data *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1976 */;
	struct efx_nic *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1975 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1973 */;
	struct efx_channel *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1972 */;
	void cocci_id/* drivers/net/ethernet/sfc/ptp.c 1972 */;
	const __le32 *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1962 */;
	const u8 *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1959 */;
	efx_qword_t *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1885 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1804 */;
	struct efx_ptp_event_rx {
		struct list_head link;
		u32 seq0;
		u32 seq1;
		ktime_t hwtimestamp;
		unsigned long expiry;
	} cocci_id/* drivers/net/ethernet/sfc/ptp.c 180 */;
	struct hwtstamp_config cocci_id/* drivers/net/ethernet/sfc/ptp.c 1786 */;
	struct efx_ef10_nic_data *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1770 */;
	struct ethtool_ts_info *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1753 */;
	struct hwtstamp_config *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1734 */;
	unsigned int cocci_id/* drivers/net/ethernet/sfc/ptp.c 1692 */;
	bool cocci_id/* drivers/net/ethernet/sfc/ptp.c 1691 */;
	struct efx_ptp_match {
		u32 words[DIV_ROUND_UP(PTP_V1_UUID_LENGTH, 4)];
		unsigned long expiry;
		enum ptp_packet_state state;
	} cocci_id/* drivers/net/ethernet/sfc/ptp.c 168 */;
	__be16 *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1602 */;
	struct udphdr cocci_id/* drivers/net/ethernet/sfc/ptp.c 1577 */;
	struct iphdr cocci_id/* drivers/net/ethernet/sfc/ptp.c 1574 */;
	char *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1558 */;
	const struct ptp_clock_info cocci_id/* drivers/net/ethernet/sfc/ptp.c 1393 */;
	struct sk_buff_head cocci_id/* drivers/net/ethernet/sfc/ptp.c 1373 */;
	struct ptp_clock_event cocci_id/* drivers/net/ethernet/sfc/ptp.c 1357 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1352 */;
	enum ptp_packet_state{PTP_PACKET_STATE_UNMATCHED=0, PTP_PACKET_STATE_MATCHED, PTP_PACKET_STATE_TIMED_OUT, PTP_PACKET_STATE_MATCH_UNWANTED,} cocci_id/* drivers/net/ethernet/sfc/ptp.c 132 */;
	struct efx_filter_spec cocci_id/* drivers/net/ethernet/sfc/ptp.c 1246 */;
	struct efx_ptp_match *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1154 */;
	enum ptp_packet_state cocci_id/* drivers/net/ethernet/sfc/ptp.c 1147 */;
	struct efx_ptp_event_rx cocci_id/* drivers/net/ethernet/sfc/ptp.c 1135 */;
	struct efx_ptp_event_rx *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1133 */;
	struct list_head *cocci_id/* drivers/net/ethernet/sfc/ptp.c 1123 */;
	struct skb_shared_hwtstamps cocci_id/* drivers/net/ethernet/sfc/ptp.c 1075 */;
	u8 cocci_id/* drivers/net/ethernet/sfc/ptp.c 1060 */;
}
