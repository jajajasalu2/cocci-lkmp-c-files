cocci_test_suite() {
	int cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 85 */(struct aq_hw_s *self,
											       u32 *addr);
	u32 cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 83 */(struct aq_hw_s *self);
	int cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 80 */(struct aq_hw_s *self,
											       enum hal_atl_utils_fw_state_e state);
	int cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 79 */(struct aq_hw_s *self,
											       u32 speed);
	struct __packed fw2x_msg_wol {
		u32 msg_id;
		u8 hw_addr[ETH_ALEN];
		u8 magic_packet_enabled;
		u8 filter_count;
		struct fw2x_msg_wol_pattern filter[HAL_ATLANTIC_WOL_FILTERS_COUNT];
		u8 link_up_enabled;
		u8 link_down_enabled;
		u16 reserved;
		u32 link_up_timeout;
		u32 link_down_timeout;
	} cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 66 */;
	const struct aq_fw_ops cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 616 */;
	struct __packed fw2x_msg_wol_pattern {
		u8 mask[16];
		u32 crc;
	} cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 61 */;
	bool cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 560 */;
	struct hw_atl_utils_mbox cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 507 */;
	u32 cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 502 */;
	u32 *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 499 */;
	void *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 444 */;
	size_t cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 433 */;
	const struct hw_fw_request_iface *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 432 */;
	struct hw_atl_utils_fw_rpc cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 403 */;
	struct offload_info *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 378 */;
	struct hw_atl_utils_fw_rpc *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 377 */;
	int *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 341 */;
	u8 cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 303 */;
	unsigned int cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 296 */;
	u32 cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 277 */[2];
	u8 *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 274 */;
	struct aq_hw_link_status_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 245 */;
	struct aq_nic_cfg_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 221 */;
	enum hal_atl_utils_fw_state_e cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 218 */;
	void cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 206 */;
	enum hw_atl_fw2x_rate cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 118 */;
	struct aq_hw_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 108 */;
	int cocci_id/* drivers/net/ethernet/aquantia/atlantic/hw_atl/hw_atl_utils_fw2x.c 108 */;
}
