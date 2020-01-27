cocci_test_suite() {
	struct hw_atl_utils_fw_rpc *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 967 */;
	u8 *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 965 */;
	struct aq_hw_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 964 */;
	unsigned int cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 964 */;
	int cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 964 */;
	struct hw_atl_utils_fw_rpc cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 935 */;
	bool cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 921 */;
	const struct aq_hw_caps_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 902 */;
	const u32 cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 876 */[];
	struct aq_stats_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 871 */;
	struct hw_atl_utils_mbox cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 833 */;
	void cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 795 */;
	u32 cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 710 */[2];
	struct aq_hw_link_status_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 665 */;
	const struct aq_fw_ops **cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 66 */;
	enum hal_atl_utils_fw_state_e cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 625 */;
	u32 cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 60 */(struct aq_hw_s *self);
	struct hw_atl_utils_mbox *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 589 */;
	struct hw_atl_utils_mbox_header *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 580 */;
	int cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 57 */(struct aq_hw_s *self,
											  enum hal_atl_utils_fw_state_e state);
	int cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 55 */(u32 ver_expected,
											  u32 ver_actual);
	struct hw_atl_utils_fw_rpc **cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 519 */;
	u16 cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 511 */;
	u8 cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 506 */;
	void *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 504 */;
	enum mcp_area{MCP_AREA_CONFIG=0x80000000, MCP_AREA_SETTINGS=0x20000000,} cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 50 */;
	struct aq_hw_atl_utils_fw_rpc_tid_s cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 497 */;
	struct aq_hw_atl_utils_fw_rpc_tid_s {
		union {
			u32 val;
			struct {
				u16 tid;
				u16 len;
			};
		};
	} cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 483 */;
	const u32 cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 443 */;
	enum mcp_area cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 401 */;
	u32 *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 291 */;
	u32 cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 290 */;
	const struct aq_fw_ops cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 1030 */;
	struct hw_atl_utils_mbox_header cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils.c 1003 */;
}
