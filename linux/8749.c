cocci_test_suite() {
	const u8 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 8363 */;
	u8 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 8093 */;
	int cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 8075 */[MAX_DBG_GRC_PARAMS];
	struct qed_dev *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 8069 */;
	void *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 8069 */;
	int cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 8059 */;
	enum debug_print_features cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 8058 */;
	enum debug_print_features{OLD_MODE=0, IDLE_CHK=1, GRC_DUMP=2, MCP_TRACE=3, REG_FIFO=4, PROTECTION_OVERRIDE=5, IGU_FIFO=6, PHY=7, FW_ASSERTS=8, NVM_CFG1=9, DEFAULT_CFG=10, NVM_META=11,} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 8043 */;
	__be32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7971 */;
	enum qed_nvm_images cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7966 */;
	struct qed_nvm_image_att cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7951 */;
	u32 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7798 */;
	char *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7790 */;
	struct qed_dbg_feature *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7786 */;
	enum qed_dbg_features cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7784 */;
	enum dbg_status cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7783 */;
	struct qed_hwfn *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7783 */;
	struct {
		char *name;
		enum dbg_status (*get_size)(struct qed_hwfn *p_hwfn,
					    struct qed_ptt *p_ptt, u32 *size);
		enum dbg_status (*perform_dump)(struct qed_hwfn *p_hwfn,
						struct qed_ptt *p_ptt,
						u32 *dump_buf, u32 buf_size,
						u32 *dumped_dwords);
		enum dbg_status (*print_results)(struct qed_hwfn *p_hwfn,
						 u32 *dump_buf,
						 u32 num_dumped_dwords,
						 char *results_buf);
		enum dbg_status (*results_buf_size)(struct qed_hwfn *p_hwfn,
						    u32 *dump_buf,
						    u32 num_dumped_dwords,
						    u32 *results_buf_size);
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7722 */[];
	u16 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7664 */;
	struct dbg_attn_reg_result *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7650 */;
	struct dbg_attn_bit_mapping *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7649 */;
	enum dbg_attn_type cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7629 */;
	struct user_dbg_array *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7627 */;
	struct dbg_attn_block_result *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7625 */;
	const char *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7427 */;
	struct dbg_tools_user_data cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7419 */;
	struct protection_override_element *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7259 */;
	struct igu_fifo_element *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7203 */;
	u64 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7072 */;
	char cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7068 */[256];
	const struct igu_fifo_addr_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 7065 */;
	char cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 6965 */[4];
	struct reg_fifo_element *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 6962 */;
	struct mcp_trace *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 6860 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 6752 */[3];
	struct mcp_trace_format *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 6692 */;
	struct mcp_trace_format cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 6685 */;
	struct mcp_trace_meta *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 6635 */;
	const struct dbg_idle_chk_rule_parsing_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 6388 */;
	struct dbg_tools_user_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 6360 */;
	size_t cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 6284 */;
	const char **cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 6280 */;
	char cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 6196 */[MAX_MSG_LEN];
	const struct igu_fifo_addr_data cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 6158 */[];
	const char *const cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 6069 */[];
	struct block_info cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5798 */[];
	struct user_dbg_array cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5794 */[MAX_BIN_DBG_BUFFER_TYPE];
	struct user_dbg_array {
		const u32 *ptr;
		u32 size_in_dwords;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5788 */;
	struct dbg_tools_user_data {
		struct mcp_trace_meta mcp_trace_meta;
		const u32 *mcp_trace_user_meta_buf;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5767 */;
	struct mcp_trace_meta {
		u32 modules_num;
		char **modules;
		u32 formats_num;
		struct mcp_trace_format *formats;
		bool is_allocated;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5758 */;
	struct igu_fifo_addr_data {
		u16 start_addr;
		u16 end_addr;
		char *desc;
		char *vf_desc;
		enum igu_fifo_addr_types type;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5750 */;
	enum igu_fifo_addr_types{IGU_ADDR_TYPE_MSIX_MEM, IGU_ADDR_TYPE_WRITE_PBA, IGU_ADDR_TYPE_WRITE_INT_ACK, IGU_ADDR_TYPE_WRITE_ATTN_BITS, IGU_ADDR_TYPE_READ_INT, IGU_ADDR_TYPE_WRITE_PROD_UPDATE, IGU_ADDR_TYPE_RESERVED,} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5740 */;
	enum igu_fifo_sources{IGU_SRC_PXP0, IGU_SRC_PXP1, IGU_SRC_PXP2, IGU_SRC_PXP3, IGU_SRC_PXP4, IGU_SRC_PXP5, IGU_SRC_PXP6, IGU_SRC_PXP7, IGU_SRC_CAU, IGU_SRC_ATTN, IGU_SRC_GRC,} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5726 */;
	struct protection_override_element {
		u64 data;
#define PROTECTION_OVERRIDE_ELEMENT_ADDRESS_SHIFT 0
#define PROTECTION_OVERRIDE_ELEMENT_ADDRESS_MASK 0x7fffff
#define PROTECTION_OVERRIDE_ELEMENT_WINDOW_SIZE_SHIFT 23
#define PROTECTION_OVERRIDE_ELEMENT_WINDOW_SIZE_MASK 0xffffff
#define PROTECTION_OVERRIDE_ELEMENT_READ_SHIFT 47
#define PROTECTION_OVERRIDE_ELEMENT_READ_MASK 0x1
#define PROTECTION_OVERRIDE_ELEMENT_WRITE_SHIFT 48
#define PROTECTION_OVERRIDE_ELEMENT_WRITE_MASK 0x1
#define PROTECTION_OVERRIDE_ELEMENT_READ_PROTECTION_SHIFT 49
#define PROTECTION_OVERRIDE_ELEMENT_READ_PROTECTION_MASK 0x7
#define PROTECTION_OVERRIDE_ELEMENT_WRITE_PROTECTION_SHIFT 52
#define PROTECTION_OVERRIDE_ELEMENT_WRITE_PROTECTION_MASK 0x7
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5710 */;
	struct igu_fifo_cleanup_wr_data {
		u32 data;
#define IGU_FIFO_CLEANUP_WR_DATA_RESERVED_SHIFT 0
#define IGU_FIFO_CLEANUP_WR_DATA_RESERVED_MASK 0x7ffffff
#define IGU_FIFO_CLEANUP_WR_DATA_CLEANUP_VAL_SHIFT 27
#define IGU_FIFO_CLEANUP_WR_DATA_CLEANUP_VAL_MASK 0x1
#define IGU_FIFO_CLEANUP_WR_DATA_CLEANUP_TYPE_SHIFT 28
#define IGU_FIFO_CLEANUP_WR_DATA_CLEANUP_TYPE_MASK 0x7
#define IGU_FIFO_CLEANUP_WR_DATA_CMD_TYPE_SHIFT 31
#define IGU_FIFO_CLEANUP_WR_DATA_CMD_TYPE_MASK 0x1
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5697 */;
	struct igu_fifo_wr_data {
		u32 data;
#define IGU_FIFO_WR_DATA_PROD_CONS_SHIFT 0
#define IGU_FIFO_WR_DATA_PROD_CONS_MASK 0xffffff
#define IGU_FIFO_WR_DATA_UPDATE_FLAG_SHIFT 24
#define IGU_FIFO_WR_DATA_UPDATE_FLAG_MASK 0x1
#define IGU_FIFO_WR_DATA_EN_DIS_INT_FOR_SB_SHIFT 25
#define IGU_FIFO_WR_DATA_EN_DIS_INT_FOR_SB_MASK 0x3
#define IGU_FIFO_WR_DATA_SEGMENT_SHIFT 27
#define IGU_FIFO_WR_DATA_SEGMENT_MASK 0x1
#define IGU_FIFO_WR_DATA_TIMER_MASK_SHIFT 28
#define IGU_FIFO_WR_DATA_TIMER_MASK_MASK 0x1
#define IGU_FIFO_WR_DATA_CMD_TYPE_SHIFT 31
#define IGU_FIFO_WR_DATA_CMD_TYPE_MASK 0x1
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5681 */;
	struct igu_fifo_element {
		u32 dword0;
#define IGU_FIFO_ELEMENT_DWORD0_FID_SHIFT 0
#define IGU_FIFO_ELEMENT_DWORD0_FID_MASK 0xff
#define IGU_FIFO_ELEMENT_DWORD0_IS_PF_SHIFT 8
#define IGU_FIFO_ELEMENT_DWORD0_IS_PF_MASK 0x1
#define IGU_FIFO_ELEMENT_DWORD0_SOURCE_SHIFT 9
#define IGU_FIFO_ELEMENT_DWORD0_SOURCE_MASK 0xf
#define IGU_FIFO_ELEMENT_DWORD0_ERR_TYPE_SHIFT 13
#define IGU_FIFO_ELEMENT_DWORD0_ERR_TYPE_MASK 0xf
#define IGU_FIFO_ELEMENT_DWORD0_CMD_ADDR_SHIFT 17
#define IGU_FIFO_ELEMENT_DWORD0_CMD_ADDR_MASK 0x7fff
		u32 dword1;
		u32 dword2;
#define IGU_FIFO_ELEMENT_DWORD12_IS_WR_CMD_SHIFT 0
#define IGU_FIFO_ELEMENT_DWORD12_IS_WR_CMD_MASK 0x1
#define IGU_FIFO_ELEMENT_DWORD12_WR_DATA_SHIFT 1
#define IGU_FIFO_ELEMENT_DWORD12_WR_DATA_MASK 0xffffffff
		u32 reserved;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5660 */;
	struct reg_fifo_element {
		u64 data;
#define REG_FIFO_ELEMENT_ADDRESS_SHIFT 0
#define REG_FIFO_ELEMENT_ADDRESS_MASK 0x7fffff
#define REG_FIFO_ELEMENT_ACCESS_SHIFT 23
#define REG_FIFO_ELEMENT_ACCESS_MASK 0x1
#define REG_FIFO_ELEMENT_PF_SHIFT 24
#define REG_FIFO_ELEMENT_PF_MASK 0xf
#define REG_FIFO_ELEMENT_VF_SHIFT 28
#define REG_FIFO_ELEMENT_VF_MASK 0xff
#define REG_FIFO_ELEMENT_PORT_SHIFT 36
#define REG_FIFO_ELEMENT_PORT_MASK 0x3
#define REG_FIFO_ELEMENT_PRIVILEGE_SHIFT 38
#define REG_FIFO_ELEMENT_PRIVILEGE_MASK 0x3
#define REG_FIFO_ELEMENT_PROTECTION_SHIFT 40
#define REG_FIFO_ELEMENT_PROTECTION_MASK 0x7
#define REG_FIFO_ELEMENT_MASTER_SHIFT 43
#define REG_FIFO_ELEMENT_MASTER_MASK 0xf
#define REG_FIFO_ELEMENT_ERROR_SHIFT 47
#define REG_FIFO_ELEMENT_ERROR_MASK 0x1f
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5637 */;
	struct block_info {
		const char *name;
		enum block_id id;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5631 */;
	const struct dbg_attn_reg *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5566 */;
	struct idle_chk_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5261 */;
	enum dbg_grc_params cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5133 */;
	struct fw_info *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5110 */;
	struct bin_buffer_hdr *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5095 */;
	const u8 *const cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5093 */;
	struct storm_defs *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5037 */;
	char cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5022 */[2];
	struct fw_asserts_ram_section *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 5021 */;
	struct mcp_trace cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 4751 */;
	struct storm_defs cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 473 */[];
	struct chip_defs cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 466 */[MAX_CHIP_IDS];
	struct dbg_array cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 463 */[MAX_BIN_DBG_BUFFER_TYPE];
	struct dbg_array {
		const u32 *ptr;
		u32 size_in_dwords;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 457 */;
	s32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 4558 */;
	struct mcp_file_att cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 4518 */;
	struct static_init cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 450 */;
	const struct dbg_idle_chk_rule *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 4488 */;
	const struct dbg_idle_chk_cond_hdr *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 4463 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 4307 */[IDLE_CHK_MAX_ENTRIES_SIZE];
	struct dbg_idle_chk_result_reg_hdr *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 4203 */;
	const union dbg_idle_chk_reg *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 4180 */;
	struct dbg_idle_chk_result_hdr *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 4179 */;
	const struct dbg_idle_chk_info_reg *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 4177 */;
	const struct dbg_idle_chk_cond_reg *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 4176 */;
	bool cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 4072 */[MAX_BLOCK_ID];
	struct phy_defs *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3811 */;
	struct dbg_idle_chk_result_reg_hdr cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 381 */;
	char cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3806 */[32];
	struct dbg_idle_chk_result_hdr cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 378 */;
	struct dbg_idle_chk_rule cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 375 */;
	struct dbg_dump_mem cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 372 */;
	struct big_ram_defs *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3693 */;
	char cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3692 */[8];
	char cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3691 */[12];
	struct rss_mem_defs *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3636 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3545 */[VFC_RAM_CMD_DWORDS];
	u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3544 */[VFC_RAM_ADDR_DWORDS];
	struct vfc_ram_defs *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3540 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3492 */[VFC_CAM_CMD_DWORDS];
	u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3491 */[VFC_CAM_ADDR_DWORDS];
	char cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3448 */[10];
	enum dbg_storms cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3381 */;
	const struct dbg_dump_split_hdr *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3288 */;
	const struct dbg_dump_mem *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3193 */;
	const struct dbg_dump_cond_hdr *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3166 */;
	struct dbg_array cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3159 */;
	char cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3134 */;
	struct split_type_defs {
		const char *name;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 311 */;
	char cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 3057 */[64];
	struct phy_defs {
		const char *phy_name;
		u32 base_addr;
		u32 tbus_addr_lo_addr;
		u32 tbus_addr_hi_addr;
		u32 tbus_data_lo_addr;
		u32 tbus_data_hi_addr;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 291 */;
	struct big_ram_defs {
		const char *instance_name;
		enum mem_groups mem_group_id;
		enum mem_groups ram_mem_group_id;
		enum dbg_grc_params grc_param;
		u32 addr_reg_addr;
		u32 data_reg_addr;
		u32 is_256b_reg_addr;
		u32 is_256b_bit_offset[MAX_CHIP_IDS];
		u32 ram_size[MAX_CHIP_IDS];
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 279 */;
	struct vfc_ram_defs {
		const char *mem_name;
		const char *type_name;
		u32 base_row;
		u32 num_rows;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 272 */;
	const struct dbg_dump_reg *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 2708 */;
	struct rss_mem_defs {
		const char *mem_name;
		const char *type_name;
		u32 addr;
		u32 entry_width;
		u32 num_entries[MAX_CHIP_IDS];
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 264 */;
	struct grc_param_defs {
		u32 default_val[MAX_CHIP_IDS];
		u32 min;
		u32 max;
		bool is_preset;
		bool is_persistent;
		u32 exclude_all_preset_val;
		u32 crash_preset_val;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 253 */;
	enum init_split_types cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 2502 */;
	struct reset_reg_defs {
		u32 addr;
		bool exists[MAX_CHIP_IDS];
		u32 unreset_val[MAX_CHIP_IDS];
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 247 */;
	const struct dbg_attn_block *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 2384 */;
	const struct dbg_attn_block_type_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 2381 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 2351 */[MAX_DBG_RESET_REGS];
	struct block_defs {
		const char *name;
		bool exists[MAX_CHIP_IDS];
		bool associated_to_storm;
		u32 storm_id;
		enum dbg_bus_clients dbg_client_id[MAX_CHIP_IDS];
		u32 dbg_select_addr;
		u32 dbg_enable_addr;
		u32 dbg_shift_addr;
		u32 dbg_force_valid_addr;
		u32 dbg_force_frame_addr;
		bool has_reset_bit;
		bool unreset;
		enum dbg_reset_regs reset_reg;
		u8 reset_bit_offset;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 223 */;
	u16 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 2216 */;
	struct qed_ptt *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 2211 */;
	void cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 2210 */;
	u8 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 2204 */;
	enum dbg_bus_frame_modes cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 2202 */;
	struct block_defs *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 2189 */;
	bool cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 2179 */;
	struct public_global cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 2071 */;
	struct mcp_public_data cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 2059 */;
	struct fw_info cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 1999 */;
	char cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 1997 */[16];
	struct storm_defs {
		char letter;
		enum block_id block_id;
		enum dbg_bus_clients dbg_client_id[MAX_CHIP_IDS];
		bool has_vfc;
		u32 sem_fast_mem_addr;
		u32 sem_frame_mode_addr;
		u32 sem_slow_enable_addr;
		u32 sem_slow_mode_addr;
		u32 sem_slow_mode1_conf_addr;
		u32 sem_sync_dbg_empty_addr;
		u32 sem_slow_dbg_empty_addr;
		u32 cm_ctx_wr_addr;
		u32 cm_conn_ag_ctx_lid_size;
		u32 cm_conn_ag_ctx_rd_addr;
		u32 cm_conn_st_ctx_lid_size;
		u32 cm_conn_st_ctx_rd_addr;
		u32 cm_task_ag_ctx_lid_size;
		u32 cm_task_ag_ctx_rd_addr;
		u32 cm_task_st_ctx_lid_size;
		u32 cm_task_st_ctx_rd_addr;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 199 */;
	struct platform_defs {
		const char *name;
		u32 delay_factor;
		u32 dmae_thresh;
		u32 log_thresh;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 189 */;
	struct fw_info_location cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 1878 */;
	struct dbg_tools_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 1863 */;
	enum block_id cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 1861 */;
	struct dbg_bus_block *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 1860 */;
	struct chip_defs {
		const char *name;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 184 */;
	enum platform_ids{PLATFORM_ASIC, PLATFORM_RESERVED, PLATFORM_RESERVED2, PLATFORM_RESERVED3, MAX_PLATFORM_IDS,} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 175 */;
	struct split_type_defs cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 1731 */[];
	struct phy_defs cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 1708 */[];
	struct reset_reg_defs cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 1674 */[];
	struct big_ram_defs cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 1657 */[];
	struct vfc_ram_defs cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 1650 */[];
	struct rss_mem_defs cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 1633 */[];
	enum mem_groups{MEM_GROUP_PXP_MEM, MEM_GROUP_DMAE_MEM, MEM_GROUP_CM_MEM, MEM_GROUP_QM_MEM, MEM_GROUP_DORQ_MEM, MEM_GROUP_BRB_RAM, MEM_GROUP_BRB_MEM, MEM_GROUP_PRS_MEM, MEM_GROUP_IOR, MEM_GROUP_BTB_RAM, MEM_GROUP_CONN_CFC_MEM, MEM_GROUP_TASK_CFC_MEM, MEM_GROUP_CAU_PI, MEM_GROUP_CAU_MEM, MEM_GROUP_PXP_ILT, MEM_GROUP_TM_MEM, MEM_GROUP_SDM_MEM, MEM_GROUP_PBUF, MEM_GROUP_RAM, MEM_GROUP_MULD_MEM, MEM_GROUP_BTB_MEM, MEM_GROUP_RDIF_CTX, MEM_GROUP_TDIF_CTX, MEM_GROUP_CFC_MEM, MEM_GROUP_IGU_MEM, MEM_GROUP_IGU_MSIX, MEM_GROUP_CAU_SB, MEM_GROUP_BMB_RAM, MEM_GROUP_BMB_MEM, MEM_GROUPS_NUM,} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 16 */;
	u32 (*cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 156 */[])(const u32 *r, const u32 *imm);
	struct grc_param_defs cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 1506 */[];
	struct platform_defs cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 1499 */[];
	struct block_defs *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 1408 */[MAX_BLOCK_ID];
	struct block_defs cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 1380 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 115 */;
	const u32 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_debug.c 115 */;
}
