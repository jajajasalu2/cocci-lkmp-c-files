cocci_test_suite() {
	struct lpphy_iq_est *cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 988 */;
	struct lpphy_tx_gains cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 845 */;
	struct lpphy_tx_gains {
		u16 gm,pga,pad,dac;
	} cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 789 */;
	struct lpphy_iq_est {
		u32 iq_prod,i_pwr,q_pwr;
	} cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 688 */;
	const struct lpphy_stx_table_entry *cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 653 */;
	const struct lpphy_stx_table_entry cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 619 */[];
	struct lpphy_stx_table_entry {
		u16 phy_offset;
		u16 phy_shift;
		u16 rf_addr;
		u16 rf_shift;
		u16 mask;
	} cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 611 */;
	struct b43_phy *cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 56 */;
	const struct b2062_freqdata cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 509 */[];
	const struct b2062_freqdata *cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 507 */;
	u32 cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 505 */;
	struct ssb_bus *cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 504 */;
	struct b2062_freqdata {
		u16 freq;
		u8 data[6];
	} cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 495 */;
	struct b43_phy_lp *cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 44 */;
	int cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 42 */;
	const u16 cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 377 */[];
	unsigned int cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 35 */;
	const struct b43_phy_operations cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 2676 */;
	bool cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 2655 */;
	enum b43_txpwr_result cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 2654 */;
	struct b43_wldev *cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 2649 */;
	void cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 2649 */;
	const struct b206x_channel *cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 2391 */;
	u8 cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 23 */;
	const struct b206x_channel cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 2003 */[];
	struct ssb_sprom *cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 200 */;
	struct b206x_channel {
		u8 channel;
		u16 freq;
		u8 data[12];
	} cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1997 */;
	u16 cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1965 */;
	enum b43_lpphy_txpctl_mode cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1935 */;
	const struct lpphy_rx_iq_comp *cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1843 */;
	struct lpphy_tx_gains *cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1840 */;
	struct cordic_iq cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1773 */;
	u16 cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1770 */[64];
	s32 cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1767 */;
	struct lpphy_iq_est cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1699 */;
	const struct lpphy_rx_iq_comp cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1691 */;
	const struct lpphy_rx_iq_comp cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1620 */[];
	struct lpphy_rx_iq_comp {
		u8 chan;
		s8 c1,c0;
	} cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1618 */;
	u16 cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 160 */[3];
	s8 cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1570 */;
	const unsigned int cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1568 */;
	u32 *cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1567 */;
	enum tssi_mux_mode cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1458 */;
	u16 cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1362 */[2];
	const u32 cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1177 */[21];
	int cocci_id/* drivers/net/wireless/broadcom/b43/phy_lp.c 1169 */(struct b43_wldev *dev,
									  unsigned int new_channel);
}
