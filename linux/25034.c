cocci_test_suite() {
	enum uframe_modifier{U_FRAME_UA=0x06, U_FRAME_RSET=0x19,} cocci_id/* net/nfc/hci/llc_shdlc.c 92 */;
	enum sframe_type{S_FRAME_RR=0x00, S_FRAME_REJ=0x01, S_FRAME_RNR=0x02, S_FRAME_SREJ=0x03,} cocci_id/* net/nfc/hci/llc_shdlc.c 85 */;
	struct nfc_llc_ops cocci_id/* net/nfc/hci/llc_shdlc.c 823 */;
	struct nfc_llc *cocci_id/* net/nfc/hci/llc_shdlc.c 778 */;
	struct llc_shdlc cocci_id/* net/nfc/hci/llc_shdlc.c 748 */;
	llc_failure_t cocci_id/* net/nfc/hci/llc_shdlc.c 741 */;
	int *cocci_id/* net/nfc/hci/llc_shdlc.c 740 */;
	rcv_to_hci_t cocci_id/* net/nfc/hci/llc_shdlc.c 739 */;
	xmit_to_drv_t cocci_id/* net/nfc/hci/llc_shdlc.c 738 */;
	struct nfc_hci_dev *cocci_id/* net/nfc/hci/llc_shdlc.c 738 */;
	void *cocci_id/* net/nfc/hci/llc_shdlc.c 738 */;
	struct work_struct *cocci_id/* net/nfc/hci/llc_shdlc.c 599 */;
	struct timer_list *cocci_id/* net/nfc/hci/llc_shdlc.c 572 */;
	unsigned long *cocci_id/* net/nfc/hci/llc_shdlc.c 559 */;
	u8 *cocci_id/* net/nfc/hci/llc_shdlc.c 543 */;
	unsigned long cocci_id/* net/nfc/hci/llc_shdlc.c 522 */;
	enum uframe_modifier cocci_id/* net/nfc/hci/llc_shdlc.c 466 */;
	enum sframe_type cocci_id/* net/nfc/hci/llc_shdlc.c 465 */;
	u8 cocci_id/* net/nfc/hci/llc_shdlc.c 462 */;
	bool cocci_id/* net/nfc/hci/llc_shdlc.c 398 */;
	void cocci_id/* net/nfc/hci/llc_shdlc.c 343 */;
	struct llc_shdlc {
		struct nfc_hci_dev *hdev;
		xmit_to_drv_t xmit_to_drv;
		rcv_to_hci_t rcv_to_hci;
		struct mutex state_mutex;
		enum shdlc_state state;
		int hard_fault;
		wait_queue_head_t *connect_wq;
		int connect_tries;
		int connect_result;
		struct timer_list connect_timer;
		u8 w;
		bool srej_support;
		struct timer_list t1_timer;
		bool t1_active;
		struct timer_list t2_timer;
		bool t2_active;
		int ns;
		int nr;
		int dnr;
		struct sk_buff_head rcv_q;
		struct sk_buff_head send_q;
		bool rnr;
		struct sk_buff_head ack_pending_q;
		struct work_struct sm_work;
		int tx_headroom;
		int tx_tailroom;
		llc_failure_t llc_failure;
	} cocci_id/* net/nfc/hci/llc_shdlc.c 26 */;
	enum shdlc_state{SHDLC_DISCONNECTED=0, SHDLC_CONNECTING=1, SHDLC_NEGOTIATING=2, SHDLC_HALF_CONNECTED=3, SHDLC_CONNECTED=4,} cocci_id/* net/nfc/hci/llc_shdlc.c 18 */;
	int cocci_id/* net/nfc/hci/llc_shdlc.c 127 */;
	struct sk_buff *cocci_id/* net/nfc/hci/llc_shdlc.c 126 */;
	struct llc_shdlc *cocci_id/* net/nfc/hci/llc_shdlc.c 126 */;
}
