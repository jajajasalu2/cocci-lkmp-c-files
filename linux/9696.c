cocci_test_suite() {
	struct iwl_fw_dbg_trigger_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 989 */;
	struct iwl_fw_dbg_conf_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 955 */;
	struct iwl_fw_dbg_dest_tlv cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 946 */;
	struct iwl_fw_dbg_dest_tlv_v1 cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 943 */;
	u8 *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 910 */;
	struct iwl_fw_dbg_dest_tlv_v1 *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 907 */;
	struct iwl_fw_dbg_dest_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 906 */;
	u8 cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 886 */;
	struct iwl_tlv_calib_data cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 824 */;
	struct iwl_ucode_capa cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 739 */;
	struct iwl_ucode_api cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 734 */;
	__le32 *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 710 */;
	bool cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 614 */;
	char cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 611 */[25];
	enum iwl_ucode_tlv_type cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 609 */;
	u32 cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 607 */;
	const u8 *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 606 */;
	struct iwl_ucode_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 604 */;
	struct iwl_tlv_ucode_header *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 603 */;
	bool *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 601 */;
	struct iwl_ucode_capabilities *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 600 */;
	const struct firmware *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 598 */;
	struct iwl_ucode_header *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 500 */;
	const struct iwl_ucode_capa *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 478 */;
	const struct iwl_ucode_api *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 457 */;
	struct iwl_tlv_calib_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 438 */;
	struct fw_sec_parsing *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 409 */;
	const void *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 404 */;
	struct iwl_fw_cipher_scheme *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 381 */;
	struct iwl_fw_cscheme_list *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 380 */;
	const u32 cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 377 */;
	size_t cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 327 */;
	struct fw_sec *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 325 */;
	struct fw_img_parsing *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 324 */;
	int cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 322 */;
	enum iwl_ucode_type cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 321 */;
	struct iwl_firmware_pieces *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 320 */;
	struct iwl_firmware_pieces {
		struct fw_img_parsing img[IWL_UCODE_TYPE_MAX];
		u32 init_evtlog_ptr,init_evtlog_size,init_errlog_ptr;
		u32 inst_evtlog_ptr,inst_evtlog_size,inst_errlog_ptr;
		bool dbg_dest_tlv_init;
		u8 *dbg_dest_ver;
		union {
			struct iwl_fw_dbg_dest_tlv *dbg_dest_tlv;
			struct iwl_fw_dbg_dest_tlv_v1 *dbg_dest_tlv_v1;
		};
		struct iwl_fw_dbg_conf_tlv *dbg_conf_tlv[FW_DBG_CONF_MAX];
		size_t dbg_conf_tlv_len[FW_DBG_CONF_MAX];
		struct iwl_fw_dbg_trigger_tlv *dbg_trigger_tlv[FW_DBG_TRIGGER_MAX];
		size_t dbg_trigger_tlv_len[FW_DBG_TRIGGER_MAX];
		struct iwl_fw_dbg_mem_seg_tlv *dbg_mem_tlv;
		size_t n_mem_tlv;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 288 */;
	struct iwl_tlv_calib_data {
		__le32 ucode_type;
		struct iwl_tlv_calib_ctrl calib;
	}__packed cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 283 */;
	struct fw_sec_parsing {
		__le32 offset;
		const u8 data[];
	}__packed cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 272 */;
	struct fw_img_parsing {
		struct fw_sec *sec;
		int sec_counter;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 264 */;
	char cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 216 */[8];
	const struct iwl_cfg *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 215 */;
	void cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 210 */(const struct firmware *ucode_raw,
									    void *context);
	void *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 191 */;
	struct fw_desc *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 188 */;
	void __exit cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1785 */;
	int __init cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1754 */;
	const char *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1732 */;
	struct iwl_mod_params cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1699 */;
	struct fw_img *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 163 */;
	struct iwl_trans *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1624 */;
	struct fw_sec {
		const void *data;
		size_t size;
		u32 offset;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 150 */;
	struct iwl_fw_dbg_trigger_tlv cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1496 */;
	struct iwl_fw_dbg_trigger_tdls cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1483 */;
	struct iwl_fw_dbg_trigger_ba cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1481 */;
	struct iwl_fw_dbg_trigger_time_event cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1479 */;
	struct iwl_fw_dbg_trigger_txq_timer cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1477 */;
	struct iwl_fw_dbg_trigger_low_rssi cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1475 */;
	struct iwl_fw_dbg_trigger_stats cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1473 */;
	struct iwl_fw_dbg_trigger_mlme cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1471 */;
	struct iwl_fw_dbg_trigger_cmd cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1469 */;
	struct iwl_fw_dbg_trigger_missed_bcon cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1466 */;
	struct iwlwifi_opmode_table {
		const char *name;
		const struct iwl_op_mode_ops *ops;
		struct list_head drv;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 135 */[];
	struct mutex cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 134 */;
	size_t cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1328 */[FW_DBG_TRIGGER_MAX];
	const unsigned int cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1326 */;
	struct iwl_fw *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1321 */;
	void cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1298 */;
	enum{DVM_OP_MODE, MVM_OP_MODE,} cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 128 */;
	struct dentry *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1277 */;
	const struct iwl_op_mode_ops *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1276 */;
	struct iwlwifi_opmode_table *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1274 */;
	struct iwl_drv *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1274 */;
	struct iwl_op_mode *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1273 */;
	struct iwl_fw_cmd_version cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1158 */;
	struct iwl_lmac_debug_addrs *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1134 */;
	struct iwl_umac_debug_addrs *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1118 */;
	struct {
		u8 version[32];
		u8 sha1[20];
	} *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1106 */;
	struct {
		__le32 buf_addr;
		__le32 buf_size;
	} *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1092 */;
	struct iwl_drv {
		struct list_head list;
		struct iwl_fw fw;
		struct iwl_op_mode *op_mode;
		struct iwl_trans *trans;
		struct device *dev;
		int fw_index;
		char firmware_name[64];
		struct completion request_firmware_complete;
#ifdef CONFIG_IWLWIFI_DEBUGFS
		struct dentry *dbgfs_drv;
		struct dentry *dbgfs_trans;
		struct dentry *dbgfs_op_mode;
#endif
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 108 */;
	struct iwl_fw_dbg_mem_seg_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-drv.c 1063 */;
}
