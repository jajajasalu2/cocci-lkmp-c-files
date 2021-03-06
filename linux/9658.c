cocci_test_suite() {
	unsigned long cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 925 */;
	struct b43_bbatt cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 905 */;
	struct b43_rfatt cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 890 */;
	struct b43_rfatt *cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 878 */;
	u8 cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 850 */;
	u64 cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 815 */;
	bool cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 806 */;
	void cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 806 */;
	u16 cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 734 */;
	struct lo_g_saved_values cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 732 */;
	int cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 730 */;
	struct b43_loctl cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 726 */;
	struct b43_phy_g *cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 725 */;
	struct b43_phy *cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 724 */;
	const struct b43_rfatt *cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 722 */;
	const struct b43_bbatt *cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 721 */;
	struct b43_wldev *cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 720 */;
	struct b43_lo_calib *cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 720 */;
	struct b43_lo_g_statemachine cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 650 */;
	int *cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 646 */;
	const struct b43_loctl cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 580 */[];
	struct b43_lo_g_statemachine *cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 565 */;
	struct b43_lo_g_statemachine {
		int current_state;
		int nr_measured;
		int state_val_multiplier;
		u16 lowest_feedth;
		struct b43_loctl min_loctl;
	} cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 554 */;
	struct lo_g_saved_values *cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 488 */;
	struct b43_loctl *cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 45 */;
	struct ssb_sprom *cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 375 */;
	struct lo_g_saved_values {
		u8 old_channel;
		u16 reg_3F4;
		u16 reg_3E2;
		u16 phy_lo_mask;
		u16 phy_extg_01;
		u16 phy_dacctl_hwpctl;
		u16 phy_dacctl;
		u16 phy_cck_14;
		u16 phy_hpwr_tssictl;
		u16 phy_analogover;
		u16 phy_analogoverval;
		u16 phy_rfover;
		u16 phy_rfoverval;
		u16 phy_classctl;
		u16 phy_cck_3E;
		u16 phy_crs0;
		u16 phy_pgactl;
		u16 phy_cck_2A;
		u16 phy_syncctl;
		u16 phy_cck_30;
		u16 phy_cck_06;
		u16 radio_43;
		u16 radio_7A;
		u16 radio_52;
	} cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 339 */;
	s16 cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 281 */;
	struct b43_txpower_lo_control *cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 27 */;
	const u8 cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 171 */[];
	u16 *cocci_id/* drivers/net/wireless/broadcom/b43/lo.c 129 */;
}
