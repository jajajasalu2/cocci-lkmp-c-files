cocci_test_suite() {
	struct st21nfca_psl_res {
		u8 length;
		u8 cmd0;
		u8 cmd1;
		u8 did;
	}__packed cocci_id/* drivers/nfc/st21nfca/dep.c 94 */;
	struct st21nfca_psl_req {
		u8 length;
		u8 cmd0;
		u8 cmd1;
		u8 did;
		u8 brs;
		u8 fsl;
	}__packed cocci_id/* drivers/nfc/st21nfca/dep.c 85 */;
	struct st21nfca_atr_res {
		u8 length;
		u8 cmd0;
		u8 cmd1;
		u8 nfcid3[NFC_NFCID3_MAXSIZE];
		u8 did;
		u8 bsi;
		u8 bri;
		u8 to;
		u8 ppi;
		u8 gbi[0];
	}__packed cocci_id/* drivers/nfc/st21nfca/dep.c 72 */;
	struct st21nfca_hci_info *cocci_id/* drivers/nfc/st21nfca/dep.c 676 */;
	struct nfc_hci_dev *cocci_id/* drivers/nfc/st21nfca/dep.c 674 */;
	void cocci_id/* drivers/nfc/st21nfca/dep.c 674 */;
	u8 *cocci_id/* drivers/nfc/st21nfca/dep.c 623 */;
	struct st21nfca_atr_req {
		u8 length;
		u8 cmd0;
		u8 cmd1;
		u8 nfcid3[NFC_NFCID3_MAXSIZE];
		u8 did;
		u8 bsi;
		u8 bri;
		u8 ppi;
		u8 gbi[0];
	}__packed cocci_id/* drivers/nfc/st21nfca/dep.c 60 */;
	struct st21nfca_dep_req_res *cocci_id/* drivers/nfc/st21nfca/dep.c 580 */;
	struct st21nfca_atr_req cocci_id/* drivers/nfc/st21nfca/dep.c 528 */;
	uint cocci_id/* drivers/nfc/st21nfca/dep.c 518 */;
	struct nfc_target *cocci_id/* drivers/nfc/st21nfca/dep.c 517 */;
	struct st21nfca_atr_req *cocci_id/* drivers/nfc/st21nfca/dep.c 516 */;
	size_t cocci_id/* drivers/nfc/st21nfca/dep.c 512 */;
	struct st21nfca_atr_res cocci_id/* drivers/nfc/st21nfca/dep.c 484 */;
	struct st21nfca_atr_res *cocci_id/* drivers/nfc/st21nfca/dep.c 469 */;
	void *cocci_id/* drivers/nfc/st21nfca/dep.c 465 */;
	struct st21nfca_psl_req cocci_id/* drivers/nfc/st21nfca/dep.c 444 */;
	struct st21nfca_psl_req *cocci_id/* drivers/nfc/st21nfca/dep.c 440 */;
	u8 cocci_id/* drivers/nfc/st21nfca/dep.c 405 */;
	struct sk_buff *cocci_id/* drivers/nfc/st21nfca/dep.c 405 */;
	int cocci_id/* drivers/nfc/st21nfca/dep.c 404 */;
	struct st21nfca_psl_res cocci_id/* drivers/nfc/st21nfca/dep.c 239 */;
	u8 cocci_id/* drivers/nfc/st21nfca/dep.c 236 */[2];
	struct st21nfca_psl_res *cocci_id/* drivers/nfc/st21nfca/dep.c 234 */;
	struct nfc_dev *cocci_id/* drivers/nfc/st21nfca/dep.c 116 */;
	struct st21nfca_hci_info cocci_id/* drivers/nfc/st21nfca/dep.c 113 */;
	struct work_struct *cocci_id/* drivers/nfc/st21nfca/dep.c 110 */;
	struct st21nfca_dep_req_res {
		u8 length;
		u8 cmd0;
		u8 cmd1;
		u8 pfb;
		u8 did;
		u8 nad;
	}__packed cocci_id/* drivers/nfc/st21nfca/dep.c 101 */;
}
