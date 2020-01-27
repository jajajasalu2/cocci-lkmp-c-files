cocci_test_suite() {
	struct nfc_llc_ops cocci_id/* net/nfc/hci/llc_nop.c 74 */;
	struct sk_buff *cocci_id/* net/nfc/hci/llc_nop.c 60 */;
	struct nfc_llc *cocci_id/* net/nfc/hci/llc_nop.c 45 */;
	void cocci_id/* net/nfc/hci/llc_nop.c 45 */;
	struct llc_nop cocci_id/* net/nfc/hci/llc_nop.c 31 */;
	struct llc_nop *cocci_id/* net/nfc/hci/llc_nop.c 26 */;
	llc_failure_t cocci_id/* net/nfc/hci/llc_nop.c 24 */;
	int *cocci_id/* net/nfc/hci/llc_nop.c 23 */;
	rcv_to_hci_t cocci_id/* net/nfc/hci/llc_nop.c 22 */;
	int cocci_id/* net/nfc/hci/llc_nop.c 22 */;
	xmit_to_drv_t cocci_id/* net/nfc/hci/llc_nop.c 21 */;
	struct nfc_hci_dev *cocci_id/* net/nfc/hci/llc_nop.c 21 */;
	void *cocci_id/* net/nfc/hci/llc_nop.c 21 */;
	struct llc_nop {
		struct nfc_hci_dev *hdev;
		xmit_to_drv_t xmit_to_drv;
		rcv_to_hci_t rcv_to_hci;
		int tx_headroom;
		int tx_tailroom;
		llc_failure_t llc_failure;
	} cocci_id/* net/nfc/hci/llc_nop.c 12 */;
}
