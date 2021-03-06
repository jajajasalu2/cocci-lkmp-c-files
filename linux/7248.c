cocci_test_suite() {
	uint8_t cocci_id/* drivers/bluetooth/hci_qca.c 988 */;
	const void *cocci_id/* drivers/bluetooth/hci_qca.c 962 */;
	const struct h4_recv_pkt cocci_id/* drivers/bluetooth/hci_qca.c 953 */[];
	struct hci_event_hdr *cocci_id/* drivers/bluetooth/hci_qca.c 909 */;
	void *cocci_id/* drivers/bluetooth/hci_qca.c 909 */;
	struct qca_data {
		struct hci_uart *hu;
		struct sk_buff *rx_skb;
		struct sk_buff_head txq;
		struct sk_buff_head tx_wait_q;
		spinlock_t hci_ibs_lock;
		u8 tx_ibs_state;
		u8 rx_ibs_state;
		bool tx_vote;
		bool rx_vote;
		struct timer_list tx_idle_timer;
		u32 tx_idle_delay;
		struct timer_list wake_retrans_timer;
		u32 wake_retrans;
		struct workqueue_struct *workqueue;
		struct work_struct ws_awake_rx;
		struct work_struct ws_awake_device;
		struct work_struct ws_rx_vote_off;
		struct work_struct ws_tx_vote_off;
		unsigned long flags;
		struct completion drop_ev_comp;
		wait_queue_head_t suspend_wait_q;
		u64 ibs_sent_wacks;
		u64 ibs_sent_slps;
		u64 ibs_sent_wakes;
		u64 ibs_recv_wacks;
		u64 ibs_recv_slps;
		u64 ibs_recv_wakes;
		u64 vote_last_jif;
		u32 vote_on_ms;
		u32 vote_off_ms;
		u64 tx_votes_on;
		u64 rx_votes_on;
		u64 tx_votes_off;
		u64 rx_votes_off;
		u64 votes_on;
		u64 votes_off;
	} cocci_id/* drivers/bluetooth/hci_qca.c 84 */;
	enum hci_ibs_clock_state_vote{HCI_IBS_VOTE_STATS_UPDATE, HCI_IBS_TX_VOTE_CLOCK_ON, HCI_IBS_TX_VOTE_CLOCK_OFF, HCI_IBS_RX_VOTE_CLOCK_ON, HCI_IBS_RX_VOTE_CLOCK_OFF,} cocci_id/* drivers/bluetooth/hci_qca.c 76 */;
	struct sk_buff *cocci_id/* drivers/bluetooth/hci_qca.c 742 */;
	struct qca_data *cocci_id/* drivers/bluetooth/hci_qca.c 705 */;
	unsigned long cocci_id/* drivers/bluetooth/hci_qca.c 704 */;
	struct hci_uart *cocci_id/* drivers/bluetooth/hci_qca.c 702 */;
	enum rx_states{HCI_IBS_RX_ASLEEP, HCI_IBS_RX_AWAKE,} cocci_id/* drivers/bluetooth/hci_qca.c 70 */;
	enum tx_ibs_states{HCI_IBS_TX_ASLEEP, HCI_IBS_TX_WAKING, HCI_IBS_TX_AWAKE,} cocci_id/* drivers/bluetooth/hci_qca.c 63 */;
	struct qca_serdev *cocci_id/* drivers/bluetooth/hci_qca.c 616 */;
	enum qca_flags{QCA_IBS_ENABLED, QCA_DROP_VENDOR_EVENT, QCA_SUSPENDING,} cocci_id/* drivers/bluetooth/hci_qca.c 56 */;
	umode_t cocci_id/* drivers/bluetooth/hci_qca.c 559 */;
	struct dentry *cocci_id/* drivers/bluetooth/hci_qca.c 558 */;
	struct hci_dev *cocci_id/* drivers/bluetooth/hci_qca.c 554 */;
	struct qca_data cocci_id/* drivers/bluetooth/hci_qca.c 489 */;
	bool cocci_id/* drivers/bluetooth/hci_qca.c 435 */;
	struct timer_list *cocci_id/* drivers/bluetooth/hci_qca.c 395 */;
	struct work_struct *cocci_id/* drivers/bluetooth/hci_qca.c 308 */;
	struct tty_struct *cocci_id/* drivers/bluetooth/hci_qca.c 205 */;
	void cocci_id/* drivers/bluetooth/hci_qca.c 205 */;
	const char *cocci_id/* drivers/bluetooth/hci_qca.c 186 */;
	int __exit cocci_id/* drivers/bluetooth/hci_qca.c 1699 */;
	int __init cocci_id/* drivers/bluetooth/hci_qca.c 1692 */;
	int cocci_id/* drivers/bluetooth/hci_qca.c 169 */(struct hci_dev *hdev);
	struct serdev_device_driver cocci_id/* drivers/bluetooth/hci_qca.c 1682 */;
	void cocci_id/* drivers/bluetooth/hci_qca.c 168 */(struct hci_uart *hu);
	const struct of_device_id cocci_id/* drivers/bluetooth/hci_qca.c 1673 */[];
	void cocci_id/* drivers/bluetooth/hci_qca.c 167 */(struct qca_serdev *qcadev);
	struct hci_dev cocci_id/* drivers/bluetooth/hci_qca.c 1662 */;
	struct device *cocci_id/* drivers/bluetooth/hci_qca.c 1660 */;
	int __maybe_unused cocci_id/* drivers/bluetooth/hci_qca.c 1660 */;
	int cocci_id/* drivers/bluetooth/hci_qca.c 166 */(struct qca_serdev *qcadev);
	struct qca_serdev {
		struct hci_uart serdev_hu;
		struct gpio_desc *bt_en;
		struct clk *susclk;
		enum qca_btsoc_type btsoc_type;
		struct qca_power *bt_power;
		u32 init_speed;
		u32 oper_speed;
		const char *firmware_name;
	} cocci_id/* drivers/bluetooth/hci_qca.c 155 */;
	struct qca_power cocci_id/* drivers/bluetooth/hci_qca.c 1511 */;
	const struct qca_vreg_data *cocci_id/* drivers/bluetooth/hci_qca.c 1496 */;
	struct serdev_device *cocci_id/* drivers/bluetooth/hci_qca.c 1493 */;
	struct qca_power {
		struct device *dev;
		struct regulator_bulk_data *vreg_bulk;
		int num_vregs;
		bool vregs_on;
	} cocci_id/* drivers/bluetooth/hci_qca.c 148 */;
	struct regulator_bulk_data *cocci_id/* drivers/bluetooth/hci_qca.c 1466 */;
	const struct qca_vreg *cocci_id/* drivers/bluetooth/hci_qca.c 1464 */;
	size_t cocci_id/* drivers/bluetooth/hci_qca.c 1464 */;
	struct qca_power *cocci_id/* drivers/bluetooth/hci_qca.c 1463 */;
	struct qca_vreg_data {
		enum qca_btsoc_type soc_type;
		struct qca_vreg *vregs;
		size_t num_vregs;
	} cocci_id/* drivers/bluetooth/hci_qca.c 139 */;
	struct qca_vreg cocci_id/* drivers/bluetooth/hci_qca.c 1360 */[];
	const struct qca_vreg_data cocci_id/* drivers/bluetooth/hci_qca.c 1358 */;
	const struct hci_uart_proto cocci_id/* drivers/bluetooth/hci_qca.c 1343 */;
	struct qca_vreg {
		const char *name;
		unsigned int load_uA;
	} cocci_id/* drivers/bluetooth/hci_qca.c 134 */;
	enum qca_speed_type{QCA_INIT_SPEED=1, QCA_OPER_SPEED,} cocci_id/* drivers/bluetooth/hci_qca.c 125 */;
	enum qca_btsoc_type cocci_id/* drivers/bluetooth/hci_qca.c 1159 */;
	int cocci_id/* drivers/bluetooth/hci_qca.c 1133 */;
	enum qca_speed_type cocci_id/* drivers/bluetooth/hci_qca.c 1114 */;
	u8 cocci_id/* drivers/bluetooth/hci_qca.c 1079 */;
	unsigned int cocci_id/* drivers/bluetooth/hci_qca.c 1067 */;
	u8 cocci_id/* drivers/bluetooth/hci_qca.c 1029 */[];
}
