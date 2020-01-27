cocci_test_suite() {
	struct qlcnic_82xx_dcb_param_mbx_le {
		__le32 hdr_prio_pfc_map[2];
		__le32 prio_pg_map[2];
		__le32 pg_bw_map[2];
		__le32 pg_tsa_map[2];
		__le32 app[QLC_DCB_MAX_APP];
	} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 98 */;
	struct qlcnic_dcb_mbx_params {
		struct qlcnic_dcb_param type[3];
		u32 prio_tc_map;
	} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 92 */;
	u8 *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 881 */;
	struct qlcnic_dcb_param {
		u32 hdr_prio_pfc_map[2];
		u32 prio_pg_map[2];
		u32 pg_bw_map[2];
		u32 pg_tsa_map[2];
		u32 app[QLC_DCB_MAX_APP];
	} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 84 */;
	struct qlcnic_dcb_pg_cfg cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 755 */;
	struct qlcnic_dcb_tc_cfg cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 753 */;
	struct qlcnic_dcb_capability {
		bool tsa_capability;
		bool ets_capability;
		u8 max_num_tc;
		u8 max_ets_tc;
		u8 max_pfc_tc;
		u8 dcb_capability;
	} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 75 */;
	struct dcb_app cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 717 */;
	struct qlcnic_dcb_app *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 715 */;
	struct qlcnic_dcb_pg_cfg *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 690 */;
	void cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 68 */(struct qlcnic_dcb *,
									      void *);
	int cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 66 */(struct qlcnic_dcb *,
									     char *,
									     u8);
	int cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 62 */(struct qlcnic_dcb *,
									     char *);
	int cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 61 */(struct qlcnic_dcb *);
	void cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 60 */(struct qlcnic_dcb *);
	struct qlcnic_dcb_param *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 571 */;
	void cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 57 */(struct qlcnic_adapter *);
	void cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 56 */(struct work_struct *);
	const struct dcbnl_rtnl_ops cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 54 */;
	void *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 534 */;
	struct qlcnic_dcb cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 528 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 524 */;
	struct qlcnic_dcb_mbx_params *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 495 */;
	u64 cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 434 */;
	struct qlcnic_dcb_param cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 432 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 431 */;
	struct device *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 430 */;
	struct qlcnic_82xx_dcb_param_mbx_le *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 429 */;
	u16 cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 427 */;
	struct qlcnic_82xx_dcb_param_mbx_le cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 427 */;
	u8 cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 425 */;
	struct qlcnic_dcb_cfg *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 406 */;
	char *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 379 */;
	struct qlcnic_dcb_capability cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 377 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 374 */;
	struct qlcnic_dcb_capability *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 373 */;
	u32 *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 371 */;
	struct qlcnic_cmd_args cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 348 */;
	struct qlcnic_dcb_mbx_params cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 327 */;
	struct qlcnic_dcb_cfg cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 321 */;
	struct qlcnic_dcb *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 308 */;
	int cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 308 */;
	struct qlcnic_adapter *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 277 */;
	void cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 275 */;
	const struct qlcnic_dcb_ops cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 183 */;
	struct qlcnic_dcb_cfg {
		struct qlcnic_dcb_cee type[QLC_DCB_NUM_PARAM];
		struct qlcnic_dcb_capability capability;
		u32 version;
	} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 163 */;
	struct qlcnic_dcb_cee {
		struct qlcnic_dcb_tc_cfg tc_cfg[QLC_DCB_MAX_TC];
		struct qlcnic_dcb_pg_cfg pg_cfg[QLC_DCB_MAX_PG];
		struct qlcnic_dcb_app app[QLC_DCB_MAX_APP];
		bool tc_param_valid;
		bool pfc_mode_enable;
	} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 155 */;
	struct qlcnic_dcb_app {
		bool valid;
		enum qlcnic_dcb_selector selector;
		u16 protocol;
		u8 priority;
	} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 148 */;
	struct qlcnic_dcb_tc_cfg {
		bool valid;
		struct qlcnic_dcb_prio_cfg prio_cfg[QLC_DCB_MAX_PRIO];
		enum qlcnic_dcb_prio_type prio_type;
		u8 link_percent;
		u8 bwg_percent;
		u8 up_tc_map;
		u8 pgid;
	} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 138 */;
	struct qlcnic_dcb_pg_cfg {
		bool valid;
		u8 total_bw_percent;
		u8 prio_count;
		u8 tsa_type;
	} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 131 */;
	struct qlcnic_dcb_prio_cfg {
		bool valid;
		enum qlcnic_dcb_pfc_type pfc_type;
	} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 126 */;
	enum qlcnic_dcb_pfc_type{QLC_PFC_DISABLED=0, QLC_PFC_FULL, QLC_PFC_TX, QLC_PFC_RX,} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 119 */;
	enum qlcnic_dcb_prio_type{QLC_PRIO_NONE=0, QLC_PRIO_GROUP, QLC_PRIO_LINK,} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 113 */;
	struct qlcnic_dcb_cee *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 1102 */;
	struct qlcnic_dcb_tc_cfg *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 1101 */;
	struct cee_pfc *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 1097 */;
	struct net_device *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 1096 */;
	struct cee_pg *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 1066 */;
	enum qlcnic_dcb_selector{QLC_SELECTOR_DEF=0x0, QLC_SELECTOR_ETHER, QLC_SELECTOR_TCP, QLC_SELECTOR_UDP,} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 106 */;
	struct dcb_app *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 1040 */;
	u16 *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 1017 */;
	struct dcb_peer_app_info *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_dcb.c 1016 */;
}
