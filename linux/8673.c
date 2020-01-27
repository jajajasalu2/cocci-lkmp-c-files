cocci_test_suite() {
	u16 cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 998 */;
	u16 cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 995 */[IXGBE_EEPROM_LAST_WORD + 1];
	u16 *cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 992 */;
	u16 cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 928 */[256];
	s32 cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 9 */(struct ixgbe_hw *,
									  ixgbe_link_speed);
	union {
		struct ixgbe_hic_internal_phy_req cmd;
		struct ixgbe_hic_internal_phy_resp rsp;
	} cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 821 */;
	struct ixgbe_hic_internal_phy_req cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 795 */;
	struct ixgbe_hic_phy_token_req cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 735 */;
	u32 *cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 660 */;
	struct ixgbe_eeprom_info *cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 630 */;
	struct ixgbe_phy_info *cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 47 */;
	const struct {
		u16 fw_speed;
		ixgbe_link_speed phy_speed;
	} cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 469 */[];
	struct ixgbe_mac_info *cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 46 */;
	union {
		struct ixgbe_hic_phy_activity_req cmd;
		struct ixgbe_hic_phy_activity_resp rsp;
	} cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 433 */;
	u32 *cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 431 */[FW_PHY_ACT_DATA_COUNT];
	const struct ixgbe_info cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 4058 */;
	const u32 cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 4036 */[IXGBE_MVALS_IDX_LIMIT];
	const struct ixgbe_link_operations cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 4029 */;
	const struct ixgbe_phy_operations cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 3978 */;
	const struct ixgbe_eeprom_operations cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 3956 */;
	const struct ixgbe_mac_operations cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 3839 */;
	int cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 3701 */;
	u32 cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 3662 */;
	s32 cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 3662 */;
	struct ixgbe_hw *cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 3662 */;
	u64 cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 3533 */;
	unsigned int cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 3531 */;
	enum ixgbe_media_type cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 3278 */;
	u32 cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 3143 */[FW_PHY_ACT_DATA_COUNT];
	ixgbe_link_speed cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 3027 */;
	struct ixgbe_hic_drv_info2 cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 2773 */;
	const char *cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 2771 */;
	u8 cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 230 */;
	void cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 225 */;
	bool cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 1909 */;
	bool *cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 1908 */;
	ixgbe_link_speed *cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 1907 */;
	struct ixgbe_link_info *cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 19 */;
	s32 cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 13 */(struct ixgbe_hw *);
	struct ixgbe_hic_disable_rxen cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 1272 */;
	union ixgbe_hic_hdr2 cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 1220 */;
	u8 *cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 120 */;
	void cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 12 */(struct ixgbe_hw *);
	struct ixgbe_hic_write_shadow_ram cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 1173 */;
	struct ixgbe_hic_read_shadow_ram cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 1084 */;
	const u32 cocci_id/* drivers/net/ethernet/intel/ixgbe/ixgbe_x550.c 1083 */;
}
