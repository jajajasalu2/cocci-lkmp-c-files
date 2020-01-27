cocci_test_suite() {
	struct digital_sel_req {
		u8 sel_cmd;
		u8 b2;
		u8 nfcid1[4];
		u8 bcc;
	}__packed cocci_id/* net/nfc/digital_technology.c 99 */;
	struct digital_sdd_res cocci_id/* net/nfc/digital_technology.c 988 */;
	struct digital_sdd_res {
		u8 nfcid1[4];
		u8 bcc;
	}__packed cocci_id/* net/nfc/digital_technology.c 94 */;
	struct digital_iso15693_inv_req *cocci_id/* net/nfc/digital_technology.c 885 */;
	struct digital_iso15693_inv_res *cocci_id/* net/nfc/digital_technology.c 839 */;
	const u8 cocci_id/* net/nfc/digital_technology.c 83 */[];
	u8 *cocci_id/* net/nfc/digital_technology.c 823 */;
	struct digital_sensf_req cocci_id/* net/nfc/digital_technology.c 808 */;
	struct digital_sensf_req *cocci_id/* net/nfc/digital_technology.c 794 */;
	struct digital_sensf_res *cocci_id/* net/nfc/digital_technology.c 744 */;
	struct digital_sensb_req *cocci_id/* net/nfc/digital_technology.c 706 */;
	struct digital_sensb_res *cocci_id/* net/nfc/digital_technology.c 645 */;
	struct digital_attrib_req *cocci_id/* net/nfc/digital_technology.c 612 */;
	struct digital_attrib_res *cocci_id/* net/nfc/digital_technology.c 575 */;
	__le16 *cocci_id/* net/nfc/digital_technology.c 495 */;
	struct nfc_target cocci_id/* net/nfc/digital_technology.c 489 */;
	struct digital_sdd_res *cocci_id/* net/nfc/digital_technology.c 391 */;
	struct digital_sel_req cocci_id/* net/nfc/digital_technology.c 350 */;
	struct digital_sel_req *cocci_id/* net/nfc/digital_technology.c 346 */;
	struct nfc_target *cocci_id/* net/nfc/digital_technology.c 218 */;
	void *cocci_id/* net/nfc/digital_technology.c 215 */;
	void cocci_id/* net/nfc/digital_technology.c 215 */;
	u8 cocci_id/* net/nfc/digital_technology.c 170 */;
	struct sk_buff *cocci_id/* net/nfc/digital_technology.c 168 */;
	struct nfc_digital_dev *cocci_id/* net/nfc/digital_technology.c 167 */;
	int cocci_id/* net/nfc/digital_technology.c 167 */;
	int cocci_id/* net/nfc/digital_technology.c 164 */(struct nfc_digital_dev *ddev,
							   struct nfc_target *target);
	struct digital_iso15693_inv_res {
		u8 flags;
		u8 dsfid;
		u64 uid;
	}__packed cocci_id/* net/nfc/digital_technology.c 158 */;
	struct digital_iso15693_inv_req {
		u8 flags;
		u8 cmd;
		u8 mask_len;
		u64 mask;
	}__packed cocci_id/* net/nfc/digital_technology.c 151 */;
	struct digital_sensf_res {
		u8 cmd;
		u8 nfcid2[8];
		u8 pad0[2];
		u8 pad1[3];
		u8 mrti_check;
		u8 mrti_update;
		u8 pad2;
		u8 rd[2];
	}__packed cocci_id/* net/nfc/digital_technology.c 140 */;
	struct digital_sensf_req {
		u8 cmd;
		u8 sc1;
		u8 sc2;
		u8 rc;
		u8 tsn;
	}__packed cocci_id/* net/nfc/digital_technology.c 132 */;
	struct digital_attrib_res {
		u8 mbli_did;
	}__packed cocci_id/* net/nfc/digital_technology.c 128 */;
	struct digital_attrib_req {
		u8 cmd;
		u8 nfcid0[4];
		u8 param1;
		u8 param2;
		u8 param3;
		u8 param4;
	}__packed cocci_id/* net/nfc/digital_technology.c 119 */;
	struct digital_sensf_res cocci_id/* net/nfc/digital_technology.c 1125 */;
	struct digital_sensb_res {
		u8 cmd;
		u8 nfcid0[4];
		u8 app_data[4];
		u8 proto_info[3];
	}__packed cocci_id/* net/nfc/digital_technology.c 112 */;
	struct digital_sensb_req {
		u8 cmd;
		u8 afi;
		u8 param;
	}__packed cocci_id/* net/nfc/digital_technology.c 106 */;
}
