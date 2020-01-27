cocci_test_suite() {
	struct fman_ext_pools cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 930 */;
	struct fman_port_bpools cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 925 */;
	u16 cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 923 */[BM_MAX_NUM_OF_POOLS];
	u8 cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 922 */[FMAN_PORT_MAX_EXT_POOLS_NUM];
	struct fman_buf_pool_depletion *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 920 */;
	struct fman_ext_pools *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 919 */;
	const struct fman_port_bpools *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 771 */;
	const struct fman_port *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 770 */;
	struct fman_port_hwp_regs __iomem *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 723 */;
	struct fman_port_qmi_regs __iomem *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 634 */;
	struct fman_port_tx_bmi_regs __iomem *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 568 */;
	struct fman_port_rx_bmi_regs __iomem *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 485 */;
	struct fman_port {
		void *fm;
		struct device *dev;
		struct fman_rev_info rev_info;
		u8 port_id;
		enum fman_port_type port_type;
		u16 port_speed;
		union fman_port_bmi_regs __iomem *bmi_regs;
		struct fman_port_qmi_regs __iomem *qmi_regs;
		struct fman_port_hwp_regs __iomem *hwp_regs;
		struct fman_sp_buffer_offsets buffer_offsets;
		u8 internal_buf_offset;
		struct fman_ext_pools ext_buf_pools;
		u16 max_frame_length;
		struct fman_port_rsrc open_dmas;
		struct fman_port_rsrc tasks;
		struct fman_port_rsrc fifo_bufs;
		struct fman_port_rx_pools_params rx_pools_params;
		struct fman_port_cfg *cfg;
		struct fman_port_dts_params dts_params;
		u8 ext_pools_num;
		u32 max_port_fifo_size;
		u32 max_num_of_ext_pools;
		u32 max_num_of_sub_portals;
		u32 bm_max_num_of_pools;
	} cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 450 */;
	struct fman_port_dts_params {
		void __iomem *base_addr;
		enum fman_port_type type;
		u16 speed;
		u8 id;
		u32 qman_channel_id;
		struct fman *fman;
	} cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 441 */;
	struct fman_port_rx_pools_params {
		u8 num_of_pools;
		u16 largest_buf_size;
	} cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 436 */;
	struct fman_port_cfg {
		u32 dflt_fqid;
		u32 err_fqid;
		u32 pcd_base_fqid;
		u32 pcd_fqs_count;
		u8 deq_sp;
		bool deq_high_priority;
		enum fman_port_deq_type deq_type;
		enum fman_port_deq_prefetch deq_prefetch_option;
		u16 deq_byte_cnt;
		u8 cheksum_last_bytes_ignore;
		u8 rx_cut_end_bytes;
		struct fman_buf_pool_depletion buf_pool_depletion;
		struct fman_ext_pools ext_buf_pools;
		u32 tx_fifo_min_level;
		u32 tx_fifo_low_comf_level;
		u32 rx_pri_elevation;
		u32 rx_fifo_thr;
		struct fman_sp_buf_margins buf_margins;
		u32 int_buf_start_margin;
		struct fman_sp_int_context_data_copy int_context;
		u32 discard_mask;
		u32 err_mask;
		struct fman_buffer_prefix_content buffer_prefix_content;
		bool dont_release_buf;
		u8 rx_fd_bits;
		u32 tx_fifo_deq_pipeline_depth;
		bool errata_A006320;
		bool excessive_threshold_register;
		bool fmbm_tfne_has_features;
		enum fman_port_dma_swap dma_swap_data;
		enum fman_port_color color;
	} cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 400 */;
	struct fman_port_bpools {
		u8 count;
		bool counters_enable;
		u8 grp_bp_depleted_num;
		struct {
			u8 bpid;
			u16 size;
			bool is_backup;
			bool grp_bp_depleted;
			bool single_bp_depleted;
		} bpool[FMAN_PORT_MAX_EXT_POOLS_NUM];
	} cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 380 */;
	enum fman_port_deq_type{FMAN_PORT_DEQ_BY_PRI, FMAN_PORT_DEQ_ACTIVE_FQ, FMAN_PORT_DEQ_ACTIVE_FQ_NO_ICS,} cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 370 */;
	enum fman_port_color{FMAN_PORT_COLOR_GREEN, FMAN_PORT_COLOR_YELLOW, FMAN_PORT_COLOR_RED, FMAN_PORT_COLOR_OVERRIDE,} cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 362 */;
	enum fman_port_dma_swap{FMAN_PORT_DMA_NO_SWAP, FMAN_PORT_DMA_SWAP_LE, FMAN_PORT_DMA_SWAP_BE,} cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 353 */;
	struct fman_port_rsrc {
		u32 num;
		u32 extra;
	} cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 348 */;
	enum fman_port_deq_prefetch{FMAN_PORT_DEQ_NO_PREFETCH, FMAN_PORT_DEQ_PART_PREFETCH, FMAN_PORT_DEQ_FULL_PREFETCH,} cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 341 */;
	struct fman_port_hwp_regs {
		struct {
			u32 ssa;
			u32 lcv;
		} pmda[HWP_HXS_COUNT];
		u32 reserved080[(0x3f8 - 0x080) / 4];
		u32 fmpr_pcac;
	} cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 331 */;
	struct fman_port_qmi_regs {
		u32 fmqm_pnc;
		u32 fmqm_pns;
		u32 fmqm_pnts;
		u32 reserved00c[4];
		u32 fmqm_pnen;
		u32 fmqm_pnetfc;
		u32 reserved024[2];
		u32 fmqm_pndn;
		u32 fmqm_pndc;
		u32 fmqm_pndtfc;
		u32 fmqm_pndfdc;
		u32 fmqm_pndcc;
	} cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 308 */;
	union fman_port_bmi_regs {
		struct fman_port_rx_bmi_regs rx;
		struct fman_port_tx_bmi_regs tx;
	} cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 302 */;
	struct fman_port_tx_bmi_regs {
		u32 fmbm_tcfg;
		u32 fmbm_tst;
		u32 fmbm_tda;
		u32 fmbm_tfp;
		u32 fmbm_tfed;
		u32 fmbm_ticp;
		u32 fmbm_tfdne;
		u32 fmbm_tfca;
		u32 fmbm_tcfqid;
		u32 fmbm_tefqid;
		u32 fmbm_tfene;
		u32 fmbm_trlmts;
		u32 fmbm_trlmt;
		u32 reserved0034[0x0e];
		u32 fmbm_tccb;
		u32 fmbm_tfne;
		u32 fmbm_tpfcm[0x02];
		u32 fmbm_tcmne;
		u32 reserved0080[0x60];
		u32 fmbm_tstc;
		u32 fmbm_tfrc;
		u32 fmbm_tfdc;
		u32 fmbm_tfledc;
		u32 fmbm_tfufdc;
		u32 fmbm_tbdc;
		u32 reserved0218[0x1A];
		u32 fmbm_tpc;
		u32 fmbm_tpcp;
		u32 fmbm_tccn;
		u32 fmbm_ttuc;
		u32 fmbm_ttcquc;
		u32 fmbm_tduc;
		u32 fmbm_tfuc;
		u32 reserved029c[16];
		u32 fmbm_tdcfg[0x3];
		u32 fmbm_tgpr;
		u32 reserved0310[0x3a];
	} cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 260 */;
	struct fman_port_rx_bmi_regs {
		u32 fmbm_rcfg;
		u32 fmbm_rst;
		u32 fmbm_rda;
		u32 fmbm_rfp;
		u32 fmbm_rfed;
		u32 fmbm_ricp;
		u32 fmbm_rim;
		u32 fmbm_rebm;
		u32 fmbm_rfne;
		u32 fmbm_rfca;
		u32 fmbm_rfpne;
		u32 fmbm_rpso;
		u32 fmbm_rpp;
		u32 fmbm_rccb;
		u32 fmbm_reth;
		u32 reserved003c[1];
		u32 fmbm_rprai[PORT_PRS_RESULT_WORDS_NUM];
		u32 fmbm_rfqid;
		u32 fmbm_refqid;
		u32 fmbm_rfsdm;
		u32 fmbm_rfsem;
		u32 fmbm_rfene;
		u32 reserved0074[0x2];
		u32 fmbm_rcmne;
		u32 reserved0080[0x20];
		u32 fmbm_ebmpi[FMAN_PORT_MAX_EXT_POOLS_NUM];
		u32 fmbm_acnt[FMAN_PORT_MAX_EXT_POOLS_NUM];
		u32 reserved0130[8];
		u32 fmbm_rcgm[PORT_CG_MAP_NUM];
		u32 fmbm_mpd;
		u32 reserved0184[0x1F];
		u32 fmbm_rstc;
		u32 fmbm_rfrc;
		u32 fmbm_rfbc;
		u32 fmbm_rlfc;
		u32 fmbm_rffc;
		u32 fmbm_rfdc;
		u32 fmbm_rfldec;
		u32 fmbm_rodc;
		u32 fmbm_rbdc;
		u32 fmbm_rpec;
		u32 reserved0224[0x16];
		u32 fmbm_rpc;
		u32 fmbm_rpcp;
		u32 fmbm_rccn;
		u32 fmbm_rtuc;
		u32 fmbm_rrquc;
		u32 fmbm_rduc;
		u32 fmbm_rfuc;
		u32 fmbm_rpac;
		u32 reserved02a0[0x18];
		u32 fmbm_rdcfg[0x3];
		u32 fmbm_rgpr;
		u32 reserved0310[0x3a];
	} cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 200 */;
	void __exit cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1928 */;
	int __init cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1914 */;
	void cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1914 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1906 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1896 */[];
	u16 cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1775 */;
	enum fman_port_type cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1774 */;
	struct resource *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1771 */;
	struct resource cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1770 */;
	struct device_node *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1769 */;
	struct fman *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1768 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1765 */;
	__be64 *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1758 */;
	const void *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1753 */;
	u64 *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1753 */;
	u32 *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1742 */;
	struct device *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1708 */;
	bool cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1589 */;
	u32 __iomem *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1587 */;
	struct fman_buffer_prefix_content cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1559 */;
	struct fman_buffer_prefix_content *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1551 */;
	struct fman_port_cfg *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1443 */;
	struct fman_keygen *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1442 */;
	struct fman_port_init_params cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1441 */;
	u8 cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1335 */;
	void __iomem *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1322 */;
	struct fman_port_params *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1320 */;
	struct fman_port_dts_params *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1291 */;
	u32 cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1037 */;
	struct fman_port *cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1035 */;
	int cocci_id/* drivers/net/ethernet/freescale/fman/fman_port.c 1035 */;
}
