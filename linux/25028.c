cocci_test_suite() {
	struct nfc_digital_ops *cocci_id/* net/nfc/digital_core.c 745 */;
	struct nfc_ops cocci_id/* net/nfc/digital_core.c 732 */;
	struct digital_data_exch *cocci_id/* net/nfc/digital_core.c 698 */;
	void *cocci_id/* net/nfc/digital_core.c 695 */;
	data_exchange_cb_t cocci_id/* net/nfc/digital_core.c 694 */;
	struct sk_buff *cocci_id/* net/nfc/digital_core.c 694 */;
	__u32 cocci_id/* net/nfc/digital_core.c 614 */;
	struct nfc_target *cocci_id/* net/nfc/digital_core.c 614 */;
	struct nfc_dev *cocci_id/* net/nfc/digital_core.c 613 */;
	int cocci_id/* net/nfc/digital_core.c 613 */;
	__u8 cocci_id/* net/nfc/digital_core.c 589 */;
	__u8 *cocci_id/* net/nfc/digital_core.c 589 */;
	size_t cocci_id/* net/nfc/digital_core.c 589 */;
	crc_func_t cocci_id/* net/nfc/digital_core.c 55 */;
	u32 cocci_id/* net/nfc/digital_core.c 472 */;
	struct digital_poll_tech *cocci_id/* net/nfc/digital_core.c 448 */;
	digital_poll_t cocci_id/* net/nfc/digital_core.c 446 */;
	u8 cocci_id/* net/nfc/digital_core.c 445 */;
	unsigned int cocci_id/* net/nfc/digital_core.c 43 */;
	void (*cocci_id/* net/nfc/digital_core.c 312 */)(struct sk_buff *skb);
	int (*cocci_id/* net/nfc/digital_core.c 311 */)(struct sk_buff *skb);
	struct digital_cmd {
		struct list_head queue;
		u8 type;
		u8 pending;
		u16 timeout;
		struct sk_buff *req;
		struct sk_buff *resp;
		struct digital_tg_mdaa_params *mdaa_params;
		nfc_digital_cmd_complete_t cmd_cb;
		void *cb_context;
	} cocci_id/* net/nfc/digital_core.c 27 */;
	struct digital_cmd *cocci_id/* net/nfc/digital_core.c 232 */;
	u16 cocci_id/* net/nfc/digital_core.c 229 */;
	nfc_digital_cmd_complete_t cocci_id/* net/nfc/digital_core.c 229 */;
	struct digital_tg_mdaa_params *cocci_id/* net/nfc/digital_core.c 228 */;
	struct digital_cmd cocci_id/* net/nfc/digital_core.c 163 */;
	struct nfc_digital_dev cocci_id/* net/nfc/digital_core.c 158 */;
	struct work_struct *cocci_id/* net/nfc/digital_core.c 152 */;
	struct nfc_digital_dev *cocci_id/* net/nfc/digital_core.c 105 */;
	void cocci_id/* net/nfc/digital_core.c 105 */;
	bool cocci_id/* net/nfc/digital_core.c 100 */;
}