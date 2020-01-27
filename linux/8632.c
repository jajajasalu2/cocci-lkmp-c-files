cocci_test_suite() {
	s32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 99 */(struct e1000_hw *hw,
									 u32 bank);
	void cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 97 */(struct e1000_hw *hw);
	union ich8_flash_protected_range {
		struct ich8_pr {
			u32 base:13;
			u32 reserved1:2;
			u32 rpe:1;
			u32 limit:13;
			u32 reserved2:2;
			u32 wpe:1;
		} range;
		u32 regval;
	} cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 85 */;
	bool cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 748 */;
	u16 *cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 748 */;
	u16 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 747 */;
	s32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 747 */;
	struct e1000_hw *cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 747 */;
	union ich8_hws_flash_regacc {
		struct ich8_flracc {
			u32 grra:8;
			u32 grwa:8;
			u32 gmrag:8;
			u32 gmwag:8;
		} hsf_flregacc;
		u16 regval;
	} cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 74 */;
	union ich8_hws_flash_ctrl {
		struct ich8_hsflctl {
			u16 flcgo:1;
			u16 flcycle:2;
			u16 reserved:5;
			u16 fldbcount:2;
			u16 flockdn:6;
		} hsf_ctrl;
		u16 regval;
	} cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 62 */;
	struct e1000_dev_spec_ich8lan *cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 589 */;
	const struct e1000_info cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 5829 */;
	const struct e1000_nvm_operations cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 5774 */;
	const struct e1000_phy_operations cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 5760 */;
	const struct e1000_mac_operations cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 5739 */;
	struct e1000_phy_info *cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 509 */;
	struct e1000_bus_info *cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 4622 */;
	const u32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 4558 */;
	union ich8_hws_flash_status {
		struct ich8_hsfsts {
			u16 flcdone:1;
			u16 flcerr:1;
			u16 dael:1;
			u16 berasesz:2;
			u16 flcinprog:1;
			u16 reserved1:2;
			u16 reserved2:6;
			u16 fldesvalid:1;
			u16 flockdn:1;
		} hsf_status;
		u16 regval;
	} cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 45 */;
	union ich8_hws_flash_ctrl cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 4416 */;
	union ich8_hws_flash_status cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 4415 */;
	struct e1000_nvm_info *cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 4414 */;
	union ich8_flash_protected_range cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 4119 */;
	u32 *cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 3637 */;
	u8 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 3546 */;
	u8 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 2548 */[ETH_ALEN];
	int cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 2012 */;
	u8 *cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 1835 */;
	struct e1000_hw __always_unused *cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 1685 */;
	struct e1000_adapter *cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 1620 */;
	void cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 151 */;
	u32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 146 */;
	unsigned long cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 141 */;
	s32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 139 */(struct e1000_hw *hw,
									  bool d0_state);
	s32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 137 */(struct e1000_hw *hw,
									  bool force);
	void cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 136 */(struct e1000_hw *hw,
									   bool gate);
	struct e1000_mac_info *cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 1358 */;
	u32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 134 */(struct e1000_hw *hw);
	int cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 132 */(struct e1000_hw *hw,
									  u8 *addr,
									  u32 index);
	bool cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 130 */(struct e1000_hw *hw);
	s32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 128 */(struct e1000_hw *hw,
									  bool link);
	s32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 125 */(struct e1000_hw *hw,
									  bool active);
	s32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 117 */(struct e1000_hw *hw);
	s32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 114 */(struct e1000_hw *hw,
									  u32 offset,
									  u32 dword);
	s32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 112 */(struct e1000_hw *hw,
									  u32 offset,
									  u32 data);
	s32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 108 */(struct e1000_hw *hw,
									  u32 offset,
									  u32 *data);
	s32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 106 */(struct e1000_hw *hw,
									  u32 offset,
									  u8 size,
									  u16 *data);
	s32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 104 */(struct e1000_hw *hw,
									  u32 offset,
									  u16 *data);
	s32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 102 */(struct e1000_hw *hw,
									  u32 offset,
									  u8 *data);
	u64 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 1007 */;
	s32 cocci_id/* drivers/net/ethernet/intel/e1000e/ich8lan.c 100 */(struct e1000_hw *hw,
									  u32 offset,
									  u8 byte);
}
