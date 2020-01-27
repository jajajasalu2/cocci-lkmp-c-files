cocci_test_suite() {
	const struct b2056_inittab_entry cocci_id/* drivers/net/wireless/broadcom/b43/radio_2056.c 370 */[];
	const struct b43_nphy_channeltab_entry_rev3 cocci_id/* drivers/net/wireless/broadcom/b43/radio_2056.c 3076 */[];
	struct b2056_inittabs_pts {
		const struct b2056_inittab_entry *syn;
		unsigned int syn_length;
		const struct b2056_inittab_entry *tx;
		unsigned int tx_length;
		const struct b2056_inittab_entry *rx;
		unsigned int rx_length;
	} cocci_id/* drivers/net/wireless/broadcom/b43/radio_2056.c 29 */;
	struct b2056_inittab_entry {
		u16 ghz5;
		u16 ghz2;
		u8 flags;
	} cocci_id/* drivers/net/wireless/broadcom/b43/radio_2056.c 16 */;
	struct b43_phy *cocci_id/* drivers/net/wireless/broadcom/b43/radio_2056.c 10257 */;
	const struct b43_nphy_channeltab_entry_rev3 *cocci_id/* drivers/net/wireless/broadcom/b43/radio_2056.c 10254 */;
	const struct b2056_inittabs_pts *cocci_id/* drivers/net/wireless/broadcom/b43/radio_2056.c 10218 */;
	unsigned int cocci_id/* drivers/net/wireless/broadcom/b43/radio_2056.c 10197 */;
	const struct b2056_inittab_entry *cocci_id/* drivers/net/wireless/broadcom/b43/radio_2056.c 10196 */;
	u16 cocci_id/* drivers/net/wireless/broadcom/b43/radio_2056.c 10195 */;
	bool cocci_id/* drivers/net/wireless/broadcom/b43/radio_2056.c 10194 */;
	struct b43_wldev *cocci_id/* drivers/net/wireless/broadcom/b43/radio_2056.c 10194 */;
	void cocci_id/* drivers/net/wireless/broadcom/b43/radio_2056.c 10194 */;
}
