cocci_test_suite() {
	bool (*cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 974 */)(struct iwl_fw_runtime *fwrt,
										   struct iwl_fwrt_dump_data *dump_data,
										   union iwl_dbg_tlv_tp_data *tp_data,
										   u32 trig_data);
	struct iwl_cmd_header *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 949 */;
	struct iwl_rx_packet *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 948 */;
	union iwl_dbg_tlv_tp_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 945 */;
	struct iwl_fwrt_dump_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 944 */;
	struct iwl_dbg_tlv_ver_data {
		int min_ver;
		int max_ver;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 93 */;
	struct iwl_fw_runtime *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 862 */;
	__le32 cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 841 */;
	enum iwl_dbg_tlv_type{IWL_DBG_TLV_TYPE_DEBUG_INFO=IWL_UCODE_TLV_TYPE_DEBUG_INFO - IWL_UCODE_TLV_DEBUG_BASE, IWL_DBG_TLV_TYPE_BUF_ALLOC, IWL_DBG_TLV_TYPE_HCMD, IWL_DBG_TLV_TYPE_REGION, IWL_DBG_TLV_TYPE_TRIGGER, IWL_DBG_TLV_TYPE_NUM,} cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 78 */;
	int cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 764 */;
	u32 cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 762 */;
	__le32 *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 761 */;
	struct iwl_fw_ini_trigger_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 759 */;
	void *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 759 */;
	bool cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 756 */;
	struct iwl_ucode_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 756 */;
	struct iwl_fwrt_dump_data cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 683 */;
	struct timer_list *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 679 */;
	u16 cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 664 */;
	struct iwl_fw_ini_hcmd *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 662 */;
	struct iwl_buf_alloc_frag *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 625 */;
	struct iwl_host_cmd cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 617 */;
	struct iwl_buf_alloc_cmd cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 611 */;
	struct iwl_fw_mon *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 509 */;
	enum iwl_fw_ini_allocation_id cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 507 */;
	dma_addr_t cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 478 */;
	struct iwl_dram_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 475 */;
	const struct firmware *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 442 */;
	struct device *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 440 */;
	size_t cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 415 */;
	const u8 *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 414 */;
	struct iwl_dbg_tlv_time_point_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 388 */;
	struct iwl_dbg_tlv_timer_node *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 328 */;
	enum iwl_ini_cfg_state *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 293 */;
	struct iwl_fw_ini_header *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 290 */;
	struct iwl_trans *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 287 */;
	void cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 287 */;
	int (*cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 278 */[])(struct iwl_trans *trans,
										    struct iwl_ucode_tlv *tlv);
	struct iwl_ucode_tlv **cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 220 */;
	struct iwl_fw_ini_region_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 219 */;
	struct iwl_fw_ini_hcmd_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 195 */;
	struct iwl_fw_ini_allocation_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 167 */;
	struct iwl_fw_ini_debug_info_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 153 */;
	struct iwl_dbg_tlv_node *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 124 */;
	struct list_head *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 121 */;
	const struct iwl_dbg_tlv_ver_data cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 112 */[IWL_DBG_TLV_TYPE_NUM];
	struct iwl_dbg_tlv_timer_node {
		struct list_head list;
		struct timer_list timer;
		struct iwl_fw_runtime *fwrt;
		struct iwl_ucode_tlv *tlv;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 105 */;
	enum iwl_fw_ini_time_point cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 1042 */;
	enum iwl_fw_ini_buffer_location *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-dbg-tlv.c 1013 */;
}
