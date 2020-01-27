cocci_test_suite() {
	struct mei_nfc_if_version *cocci_id/* drivers/nfc/mei_phy.c 97 */;
	struct mei_nfc_reply *cocci_id/* drivers/nfc/mei_phy.c 96 */;
	struct mei_nfc_connect_resp {
		u8 fw_ivn;
		u8 vendor_id;
		u16 me_major;
		u16 me_minor;
		u16 me_hotfix;
		u16 me_build;
	}__packed cocci_id/* drivers/nfc/mei_phy.c 51 */;
	struct mei_nfc_connect {
		u8 fw_ivn;
		u8 vendor_id;
	}__packed cocci_id/* drivers/nfc/mei_phy.c 46 */;
	struct nfc_mei_phy cocci_id/* drivers/nfc/mei_phy.c 384 */;
	struct mei_cl_device *cocci_id/* drivers/nfc/mei_phy.c 380 */;
	struct nfc_phy_ops cocci_id/* drivers/nfc/mei_phy.c 373 */;
	void *cocci_id/* drivers/nfc/mei_phy.c 362 */;
	void cocci_id/* drivers/nfc/mei_phy.c 362 */;
	struct mei_nfc_if_version {
		u8 radio_version_sw[3];
		u8 reserved[3];
		u8 radio_version_hw[3];
		u8 i2c_addr;
		u8 fw_ivn;
		u8 vendor_id;
		u8 radio_type;
	}__packed cocci_id/* drivers/nfc/mei_phy.c 36 */;
	struct mei_nfc_reply {
		struct mei_nfc_hdr hdr;
		u8 sub_command;
		u8 reply_status;
		u8 data[];
	}__packed cocci_id/* drivers/nfc/mei_phy.c 29 */;
	struct mei_nfc_hdr *cocci_id/* drivers/nfc/mei_phy.c 267 */;
	struct sk_buff *cocci_id/* drivers/nfc/mei_phy.c 251 */;
	struct mei_nfc_cmd {
		struct mei_nfc_hdr hdr;
		u8 sub_command;
		u8 data[];
	}__packed cocci_id/* drivers/nfc/mei_phy.c 23 */;
	u8 *cocci_id/* drivers/nfc/mei_phy.c 177 */;
	struct mei_nfc_connect_resp cocci_id/* drivers/nfc/mei_phy.c 155 */;
	struct mei_nfc_connect cocci_id/* drivers/nfc/mei_phy.c 152 */;
	struct mei_nfc_cmd cocci_id/* drivers/nfc/mei_phy.c 151 */;
	struct mei_nfc_hdr {
		u8 cmd;
		u8 status;
		u16 req_id;
		u32 reserved;
		u16 data_size;
	}__packed cocci_id/* drivers/nfc/mei_phy.c 15 */;
	size_t cocci_id/* drivers/nfc/mei_phy.c 146 */;
	struct mei_nfc_connect_resp *cocci_id/* drivers/nfc/mei_phy.c 145 */;
	struct mei_nfc_connect *cocci_id/* drivers/nfc/mei_phy.c 144 */;
	struct mei_nfc_cmd *cocci_id/* drivers/nfc/mei_phy.c 143 */;
	struct nfc_mei_phy *cocci_id/* drivers/nfc/mei_phy.c 141 */;
	int cocci_id/* drivers/nfc/mei_phy.c 141 */;
	struct mei_nfc_if_version cocci_id/* drivers/nfc/mei_phy.c 117 */;
	struct mei_nfc_reply cocci_id/* drivers/nfc/mei_phy.c 116 */;
}
