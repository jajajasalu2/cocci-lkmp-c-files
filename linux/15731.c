cocci_test_suite() {
	struct hif_ind_startup *cocci_id/* drivers/staging/wfx/hif_rx.c 99 */;
	struct hif_cnf_tx *cocci_id/* drivers/staging/wfx/hif_rx.c 79 */;
	struct hif_cnf_multi_transmit *cocci_id/* drivers/staging/wfx/hif_rx.c 78 */;
	void cocci_id/* drivers/staging/wfx/hif_rx.c 335 */;
	const struct {
		int msg_id;
		int (*handler)(struct wfx_dev *wdev, struct hif_msg *hif,
			       void *buf);
	} cocci_id/* drivers/staging/wfx/hif_rx.c 312 */[];
	size_t cocci_id/* drivers/staging/wfx/hif_rx.c 304 */;
	char *cocci_id/* drivers/staging/wfx/hif_rx.c 281 */;
	struct hif_ind_generic *cocci_id/* drivers/staging/wfx/hif_rx.c 274 */;
	__le32 *cocci_id/* drivers/staging/wfx/hif_rx.c 25 */;
	u32 *cocci_id/* drivers/staging/wfx/hif_rx.c 236 */;
	u8 *cocci_id/* drivers/staging/wfx/hif_rx.c 235 */;
	struct hif_ind_error *cocci_id/* drivers/staging/wfx/hif_rx.c 234 */;
	void *cocci_id/* drivers/staging/wfx/hif_rx.c 232 */;
	struct wfx_dev *cocci_id/* drivers/staging/wfx/hif_rx.c 231 */;
	struct hif_msg *cocci_id/* drivers/staging/wfx/hif_rx.c 231 */;
	int cocci_id/* drivers/staging/wfx/hif_rx.c 231 */;
	struct hif_ind_suspend_resume_tx *cocci_id/* drivers/staging/wfx/hif_rx.c 223 */;
	struct hif_ind_scan_cmpl *cocci_id/* drivers/staging/wfx/hif_rx.c 200 */;
	struct hif_ind_event cocci_id/* drivers/staging/wfx/hif_rx.c 173 */;
	struct wfx_hif_event *cocci_id/* drivers/staging/wfx/hif_rx.c 162 */;
	struct hif_ind_event *cocci_id/* drivers/staging/wfx/hif_rx.c 161 */;
	struct wfx_vif *cocci_id/* drivers/staging/wfx/hif_rx.c 160 */;
	struct hif_msg cocci_id/* drivers/staging/wfx/hif_rx.c 151 */;
	struct hif_ind_rx cocci_id/* drivers/staging/wfx/hif_rx.c 151 */;
	struct hif_ind_rx *cocci_id/* drivers/staging/wfx/hif_rx.c 144 */;
	struct sk_buff *cocci_id/* drivers/staging/wfx/hif_rx.c 141 */;
	struct hif_ind_sl_exchange_pub_keys *cocci_id/* drivers/staging/wfx/hif_rx.c 129 */;
	struct hif_ind_startup cocci_id/* drivers/staging/wfx/hif_rx.c 105 */;
}
