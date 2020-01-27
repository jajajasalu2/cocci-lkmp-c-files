cocci_test_suite() {
	struct digital_psl_res {
		u8 dir;
		u8 cmd;
		u8 did;
	}__packed cocci_id/* net/nfc/digital_dep.c 97 */;
	struct digital_psl_req {
		u8 dir;
		u8 cmd;
		u8 did;
		u8 brs;
		u8 fsl;
	}__packed cocci_id/* net/nfc/digital_dep.c 89 */;
	struct digital_atr_res {
		u8 dir;
		u8 cmd;
		u8 nfcid3[10];
		u8 did;
		u8 bs;
		u8 br;
		u8 to;
		u8 pp;
		u8 gb[0];
	}__packed cocci_id/* net/nfc/digital_dep.c 77 */;
	struct digital_dep_req_res cocci_id/* net/nfc/digital_dep.c 759 */;
	uint cocci_id/* net/nfc/digital_dep.c 695 */;
	struct digital_dep_req_res *cocci_id/* net/nfc/digital_dep.c 693 */;
	struct digital_data_exch *cocci_id/* net/nfc/digital_dep.c 692 */;
	struct digital_atr_req {
		u8 dir;
		u8 cmd;
		u8 nfcid3[10];
		u8 did;
		u8 bs;
		u8 br;
		u8 pp;
		u8 gb[0];
	}__packed cocci_id/* net/nfc/digital_dep.c 66 */;
	u16 cocci_id/* net/nfc/digital_dep.c 638 */;
	struct digital_atr_req cocci_id/* net/nfc/digital_dep.c 495 */;
	struct digital_atr_req *cocci_id/* net/nfc/digital_dep.c 479 */;
	size_t cocci_id/* net/nfc/digital_dep.c 476 */;
	__u8 cocci_id/* net/nfc/digital_dep.c 475 */;
	__u8 *cocci_id/* net/nfc/digital_dep.c 475 */;
	struct digital_atr_res cocci_id/* net/nfc/digital_dep.c 429 */;
	int cocci_id/* net/nfc/digital_dep.c 409 */;
	u8 cocci_id/* net/nfc/digital_dep.c 407 */;
	struct digital_atr_res *cocci_id/* net/nfc/digital_dep.c 406 */;
	struct nfc_target *cocci_id/* net/nfc/digital_dep.c 405 */;
	struct sk_buff *cocci_id/* net/nfc/digital_dep.c 403 */;
	struct nfc_digital_dev *cocci_id/* net/nfc/digital_dep.c 402 */;
	void *cocci_id/* net/nfc/digital_dep.c 402 */;
	void cocci_id/* net/nfc/digital_dep.c 402 */;
	struct digital_psl_req *cocci_id/* net/nfc/digital_dep.c 366 */;
	struct digital_psl_res *cocci_id/* net/nfc/digital_dep.c 302 */;
	int (*cocci_id/* net/nfc/digital_dep.c 236 */)(struct nfc_digital_dev *ddev,
						       struct digital_data_exch *data_exch);
	u8 *cocci_id/* net/nfc/digital_dep.c 179 */;
	const u16 cocci_id/* net/nfc/digital_dep.c 146 */[DIGITAL_NFC_DEP_IN_MAX_WT + 1];
	struct digital_psl_req cocci_id/* net/nfc/digital_dep.c 1427 */;
	unsigned long cocci_id/* net/nfc/digital_dep.c 1392 */;
	struct digital_psl_res cocci_id/* net/nfc/digital_dep.c 1373 */;
	const u8 cocci_id/* net/nfc/digital_dep.c 114 */[4];
	void cocci_id/* net/nfc/digital_dep.c 109 */(struct nfc_digital_dev *ddev,
						     void *arg,
						     struct sk_buff *resp);
	struct digital_dep_req_res {
		u8 dir;
		u8 cmd;
		u8 pfb;
	}__packed cocci_id/* net/nfc/digital_dep.c 103 */;
}
