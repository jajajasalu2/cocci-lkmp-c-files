cocci_test_suite() {
	union type0_task_context {
		struct e4_iscsi_task_context iscsi_ctx;
		struct e4_fcoe_task_context fcoe_ctx;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 97 */;
	struct src_ent *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 965 */;
	struct qed_dma_mem cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 927 */;
	struct qed_dma_mem *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 906 */;
	union conn_context {
		struct e4_core_conn_context core_ctx;
		struct e4_eth_conn_context eth_ctx;
		struct e4_iscsi_conn_context iscsi_ctx;
		struct e4_fcoe_conn_context fcoe_ctx;
		struct e4_roce_conn_context roce_ctx;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 88 */;
	struct src_ent cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 782 */;
	struct qed_tm_iids cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 580 */;
	struct qed_qm_iids cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 579 */;
	struct qed_src_iids cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 578 */;
	struct qed_cdu_iids cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 577 */;
	struct qed_ilt_cli_blk *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 576 */;
	struct qed_qm_iids *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 374 */;
	struct qed_tm_iids *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 317 */;
	struct qed_tm_iids {
		u32 pf_cids;
		u32 pf_tids[NUM_TASK_PF_SEGMENTS];
		u32 pf_tids_total;
		u32 per_vf_cids;
		u32 per_vf_tids;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 307 */;
	struct qed_src_iids *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 290 */;
	struct qed_src_iids {
		u32 pf_cids;
		u32 per_vf_cids;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 284 */;
	struct qed_cdu_iids *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 273 */;
	struct qed_cdu_iids {
		u32 pf_cids;
		u32 per_vf_cids;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 267 */;
	void **cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 2501 */;
	union type1_task_context *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 2327 */;
	u8 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 2326 */;
	void *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 2261 */;
	u64 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 2260 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 2259 */;
	struct qed_ptt *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 2258 */;
	enum qed_cxt_elem_type cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 2253 */;
	struct qed_tid_mem *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 2200 */;
	struct qed_iscsi_pf_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 2170 */;
	struct qed_fcoe_pf_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 2149 */;
	struct qed_eth_pf_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 2135 */;
	struct qed_rdma_pf_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 2067 */;
	struct qed_cxt_mngr {
		struct qed_conn_type_cfg conn_cfg[MAX_CONN_TYPES];
		struct qed_ilt_client_cfg clients[ILT_CLI_MAX];
		u32 task_type_size[NUM_TASK_TYPES];
		u32 vf_count;
		struct qed_cid_acquired_map acquired[MAX_CONN_TYPES];
		struct qed_cid_acquired_map acquired_vf[MAX_CONN_TYPES][MAX_NUM_VFS];
		struct qed_dma_mem *ilt_shadow;
		u32 pf_start_line;
		struct mutex mutex;
		struct qed_dma_mem *t2;
		u32 t2_num_pages;
		u64 first_free;
		u64 last_free;
		u32 srq_count;
		u32 arfs_count;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 206 */;
	struct qed_cxt_info *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 2027 */;
	struct qed_cid_acquired_map {
		u32 start_cid;
		u32 max_count;
		unsigned long *cid_map;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 200 */;
	bool cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1997 */;
	void cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1993 */;
	struct qed_cid_acquired_map **cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1955 */;
	enum protocol_type *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1954 */;
	struct qed_dma_mem {
		dma_addr_t p_phys;
		void *p_virt;
		size_t size;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 194 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1904 */;
	struct qed_cid_acquired_map *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1903 */;
	struct qed_cxt_mngr *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1902 */;
	u8 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1900 */;
	enum protocol_type cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1900 */;
	u32 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1900 */;
	struct qed_hwfn *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1899 */;
	int cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1899 */;
	struct qed_ilt_client_cfg {
		bool active;
		struct ilt_cfg_pair first;
		struct ilt_cfg_pair last;
		struct ilt_cfg_pair p_size;
		struct qed_ilt_cli_blk pf_blks[ILT_CLI_PF_BLOCKS];
		u32 pf_total_lines;
		struct qed_ilt_cli_blk vf_blks[ILT_CLI_VF_BLOCKS];
		u32 vf_total_lines;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 172 */;
	struct qed_ilt_cli_blk {
		u32 total_size;
		u32 real_size_in_page;
		u32 start_line;
		u32 dynamic_line_cnt;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 165 */;
	struct qed_hw_sriov_info *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1620 */;
	struct ilt_cfg_pair {
		u32 reg;
		u32 val;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 160 */;
	struct qed_mcp_link_state *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1502 */;
	struct qed_qm_pf_rt_init_params cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1501 */;
	struct qed_qm_info *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1500 */;
	enum ilt_clients{ILT_CLI_CDUC, ILT_CLI_CDUT, ILT_CLI_QM, ILT_CLI_TM, ILT_CLI_SRC, ILT_CLI_TSDM, ILT_CLI_MAX,} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 150 */;
	const u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1449 */[];
	struct qed_tid_seg *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1445 */;
	struct qed_ilt_client_cfg *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1444 */;
	struct qed_conn_type_cfg {
		u32 cid_count;
		u32 cids_per_vf;
		struct qed_tid_seg tid_seg[TASK_SEGMENTS];
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 136 */;
	struct qed_tid_seg {
		u32 count;
		u8 type;
		bool has_fl_mem;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 130 */;
	union type1_task_context cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 124 */;
	union type0_task_context cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 121 */;
	struct rdma_srq_context cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 118 */;
	struct qed_conn_type_cfg *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1176 */;
	union conn_context cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 116 */;
	unsigned long cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1153 */;
	struct src_ent {
		u8 opaque[56];
		u64 next;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 107 */;
	enum ilt_clients cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 1030 */;
	union type1_task_context {
		struct e4_rdma_task_context roce_ctx;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_cxt.c 103 */;
}
