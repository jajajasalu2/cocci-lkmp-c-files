cocci_test_suite() {
	struct mkhi_fw_ver_block {
		u16 minor;
		u8 major;
		u8 platform;
		u16 buildno;
		u16 hotfix;
	}__packed cocci_id/* drivers/misc/mei/bus-fixup.c 97 */;
	struct mkhi_fwcaps {
		struct mkhi_rule_id id;
		u8 len;
		u8 data[0];
	}__packed cocci_id/* drivers/misc/mei/bus-fixup.c 91 */;
	struct mkhi_rule_id {
		__le16 rule_type;
		u8 feature_id;
		u8 reserved;
	}__packed cocci_id/* drivers/misc/mei/bus-fixup.c 85 */;
	struct mei_os_ver {
		__le16 build;
		__le16 reserved1;
		u8 os_type;
		u8 major;
		u8 minor;
		u8 reserved2;
	}__packed cocci_id/* drivers/misc/mei/bus-fixup.c 74 */;
	struct mei_cl_device *cocci_id/* drivers/misc/mei/bus-fixup.c 58 */;
	void cocci_id/* drivers/misc/mei/bus-fixup.c 58 */;
	size_t cocci_id/* drivers/misc/mei/bus-fixup.c 491 */;
	const uuid_le *cocci_id/* drivers/misc/mei/bus-fixup.c 490 */;
	struct mei_fixup *cocci_id/* drivers/misc/mei/bus-fixup.c 489 */;
	struct mei_fixup {
		const uuid_le uuid;
		void (*hook)(struct mei_cl_device *cldev);
	} cocci_id/* drivers/misc/mei/bus-fixup.c 469 */[];
	const char *cocci_id/* drivers/misc/mei/bus-fixup.c 401 */;
	struct mei_nfc_if_version cocci_id/* drivers/misc/mei/bus-fixup.c 400 */;
	struct mei_me_client *cocci_id/* drivers/misc/mei/bus-fixup.c 399 */;
	struct mei_cl *cocci_id/* drivers/misc/mei/bus-fixup.c 398 */;
	struct mei_device *cocci_id/* drivers/misc/mei/bus-fixup.c 397 */;
	struct mei_nfc_reply cocci_id/* drivers/misc/mei/bus-fixup.c 340 */;
	u8 *cocci_id/* drivers/misc/mei/bus-fixup.c 332 */;
	struct mei_nfc_reply *cocci_id/* drivers/misc/mei/bus-fixup.c 324 */;
	struct mei_nfc_cmd cocci_id/* drivers/misc/mei/bus-fixup.c 319 */;
	struct mei_nfc_if_version *cocci_id/* drivers/misc/mei/bus-fixup.c 316 */;
	struct mei_nfc_if_version {
		u8 radio_version_sw[3];
		u8 reserved[3];
		u8 radio_version_hw[3];
		u8 i2c_addr;
		u8 fw_ivn;
		u8 vendor_id;
		u8 radio_type;
	}__packed cocci_id/* drivers/misc/mei/bus-fixup.c 285 */;
	struct mei_nfc_reply {
		u8 command;
		u8 status;
		u16 req_id;
		u32 reserved;
		u16 data_size;
		u8 sub_command;
		u8 reply_status;
		u8 data[];
	}__packed cocci_id/* drivers/misc/mei/bus-fixup.c 274 */;
	struct mei_nfc_cmd {
		u8 command;
		u8 status;
		u16 req_id;
		u32 reserved;
		u16 data_size;
		u8 sub_command;
		u8 data[];
	}__packed cocci_id/* drivers/misc/mei/bus-fixup.c 264 */;
	struct pci_dev *cocci_id/* drivers/misc/mei/bus-fixup.c 251 */;
	const uuid_le cocci_id/* drivers/misc/mei/bus-fixup.c 22 */;
	struct mkhi_msg_hdr cocci_id/* drivers/misc/mei/bus-fixup.c 172 */;
	struct mkhi_fw_ver *cocci_id/* drivers/misc/mei/bus-fixup.c 163 */;
	struct mkhi_msg *cocci_id/* drivers/misc/mei/bus-fixup.c 162 */;
	char cocci_id/* drivers/misc/mei/bus-fixup.c 161 */[MKHI_FWVER_BUF_LEN];
	int cocci_id/* drivers/misc/mei/bus-fixup.c 159 */;
	struct mkhi_fw_ver_block cocci_id/* drivers/misc/mei/bus-fixup.c 157 */;
	struct mkhi_fw_ver cocci_id/* drivers/misc/mei/bus-fixup.c 155 */;
	unsigned int cocci_id/* drivers/misc/mei/bus-fixup.c 135 */;
	struct mei_os_ver *cocci_id/* drivers/misc/mei/bus-fixup.c 134 */;
	struct mkhi_fwcaps *cocci_id/* drivers/misc/mei/bus-fixup.c 133 */;
	char cocci_id/* drivers/misc/mei/bus-fixup.c 131 */[MKHI_OSVER_BUF_LEN];
	const size_t cocci_id/* drivers/misc/mei/bus-fixup.c 130 */;
	struct mei_os_ver cocci_id/* drivers/misc/mei/bus-fixup.c 127 */;
	struct mkhi_fwcaps cocci_id/* drivers/misc/mei/bus-fixup.c 126 */;
	struct mkhi_msg {
		struct mkhi_msg_hdr hdr;
		u8 data[0];
	}__packed cocci_id/* drivers/misc/mei/bus-fixup.c 120 */;
	struct mkhi_msg_hdr {
		u8 group_id;
		u8 command;
		u8 reserved;
		u8 result;
	}__packed cocci_id/* drivers/misc/mei/bus-fixup.c 113 */;
	struct mkhi_fw_ver {
		struct mkhi_fw_ver_block ver[MEI_MAX_FW_VER_BLOCKS];
	}__packed cocci_id/* drivers/misc/mei/bus-fixup.c 105 */;
}
