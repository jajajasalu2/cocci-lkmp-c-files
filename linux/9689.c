cocci_test_suite() {
	struct iwl_fw_error_dump_paging cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 894 */;
	struct iwl_fw_error_dump_mem cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 876 */;
	const struct fw_img *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 839 */;
	const struct iwl_fw_dbg_mem_seg_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 829 */;
	struct iwl_fw_error_dump_trigger_desc *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 827 */;
	struct iwl_fw_error_dump_smem_cfg *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 826 */;
	struct iwl_fw_error_dump_info *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 825 */;
	struct iwl_fw_dump_ptrs *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 821 */;
	struct iwl_fw_dump_ptrs {
		struct iwl_trans_dump_data *trans_ptr;
		void *fwrt_ptr;
		u32 fwrt_len;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 82 */;
	struct iwl_fw_error_dump_paging *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 797 */;
	struct iwl_fw_error_dump_data **cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 791 */;
	struct iwl_fw_error_dump_fifo cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 734 */;
	struct iwl_fw_error_dump_mem *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 710 */;
	void (*cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 682 */)(struct iwl_fw_runtime *,
									      const struct iwl_prph_range *,
									      u32,
									      void *);
	struct iwl_fw_error_dump_prph cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 676 */;
	struct iwl_fw_error_dump_data cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 675 */;
	struct scatterlist *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 626 */;
	struct iwl_trans *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 584 */;
	struct iwl_fw_error_dump_prph *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 583 */;
	const struct iwl_prph_range *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 580 */;
	const struct iwl_prph_range cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 476 */[];
	struct iwl_prph_range {
		u32 start,end;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 365 */;
	struct iwl_fw_dbg_params *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2649 */;
	u32 *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 262 */;
	struct iwl_host_cmd cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2618 */;
	struct iwl_dbg_suspend_resume_cmd cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2613 */;
	struct iwl_fw_error_dump_fifo *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 260 */;
	struct {
		u32 addr;
		const char *str;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2579 */[];
	const struct iwl_cfg *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2538 */;
	typeof(*fwrt) cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2521 */;
	typeof(*wks) cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2519 */;
	struct iwl_fwrt_wk_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2518 */;
	struct work_struct *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2516 */;
	struct iwl_fw_dbg_params cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2480 */;
	u8 cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2478 */;
	struct iwl_fw_dbg_conf_hcmd *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2454 */;
	u8 *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2430 */;
	va_list cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2403 */;
	char cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2397 */[64];
	enum iwl_fw_ini_time_point cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2350 */;
	u16 cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2314 */;
	bool cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2311 */;
	unsigned int cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2310 */;
	struct iwl_fwrt_shared_mem_cfg *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 231 */;
	struct iwl_fw_dump_desc *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2309 */;
	struct iwl_fw_dbg_trigger_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2307 */;
	const char *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2306 */;
	size_t cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2306 */;
	enum iwl_fw_dbg_trigger cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2305 */;
	const struct iwl_fw_dump_desc *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2248 */;
	const struct iwl_fw_dump_desc cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2240 */;
	struct list_head cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2213 */;
	typeof(*entry) cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2196 */;
	void cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2192 */;
	struct iwl_fw_error_dump_file *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2149 */;
	struct iwl_fw_dump_ptrs cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2148 */;
	struct iwl_fw_ini_dump_file_hdr *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2118 */;
	struct iwl_fw_ini_dump_entry *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2117 */;
	struct iwl_fw_ini_trigger_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2116 */;
	struct list_head *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2114 */;
	struct iwl_fwrt_dump_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2113 */;
	u64 cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2066 */;
	struct iwl_dump_ini_region_data cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 2061 */;
	const struct iwl_dump_ini_mem_ops cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1982 */[];
	struct iwl_fw_ini_debug_info_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1963 */;
	struct iwl_fw_ini_dump_cfg_name *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1909 */;
	struct iwl_dbg_tlv_node *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1908 */;
	struct iwl_fw_ini_dump_info *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1907 */;
	struct iwl_fw_error_dump_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1906 */;
	struct iwl_fw_ini_error_dump_header *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1837 */;
	const struct iwl_dump_ini_mem_ops *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1832 */;
	struct iwl_dump_ini_mem_ops {
		u32 (*get_num_of_ranges)(struct iwl_fw_runtime *fwrt,
					 struct iwl_dump_ini_region_data *reg_data);
		u32 (*get_size)(struct iwl_fw_runtime *fwrt,
				struct iwl_dump_ini_region_data *reg_data);
		void *(*fill_mem_hdr)(struct iwl_fw_runtime *fwrt,
				      struct iwl_dump_ini_region_data *reg_data,
				      void *data);
		int (*fill_range)(struct iwl_fw_runtime *fwrt,
				  struct iwl_dump_ini_region_data *reg_data,
				  void *range, int idx);
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1806 */;
	struct iwl_fw_ini_error_dump cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1791 */;
	struct iwl_fw_ini_error_dump_range cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1775 */;
	struct iwl_fw_ini_err_table_dump cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1774 */;
	struct iwl_fw_ini_error_dump_register cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1755 */;
	struct iwl_ini_rxf_data cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1751 */;
	struct iwl_txf_iter_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1728 */;
	struct iwl_fw_ini_allocation_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1706 */;
	struct iwl_fw_ini_monitor_dump cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1696 */;
	struct iwl_dram_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1687 */;
	struct iwl_fw_mon *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1680 */;
	struct iwl_fw_ini_err_table_dump *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1576 */;
	struct iwl_fw_ini_monitor_dump *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1553 */;
	unsigned long cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1527 */;
	const struct iwl_fw_mon_regs *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1523 */;
	const struct iwl_fw_mon_reg *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1502 */;
	__le32 cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1501 */;
	struct iwl_fw_ini_error_dump *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1481 */;
	struct iwl_rx_packet *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1460 */;
	struct iwl_fw_ini_region_err_table *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1442 */;
	struct iwl_fw_ini_error_dump_register *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1372 */;
	struct iwl_ini_rxf_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1330 */;
	struct iwl_ini_rxf_data {
		u32 fifo_num;
		u32 size;
		u32 offset;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1322 */;
	u32 cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1137 */;
	dma_addr_t cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1136 */;
	struct iwl_fw_ini_error_dump_range *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1135 */;
	struct page *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1134 */;
	void *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1129 */;
	struct iwl_fw_runtime *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1128 */;
	int cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1128 */;
	__le32 *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1098 */;
	struct iwl_fw_ini_region_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1096 */;
	struct iwl_dump_ini_region_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1093 */;
	struct iwl_dump_ini_region_data {
		struct iwl_ucode_tlv *reg_tlv;
		struct iwl_fwrt_dump_data *dump_data;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/fw/dbg.c 1063 */;
}
