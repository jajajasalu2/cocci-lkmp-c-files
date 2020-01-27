cocci_test_suite() {
	int cocci_id/* drivers/net/phy/swphy.c 71 */;
	const struct swmii_regs cocci_id/* drivers/net/phy/swphy.c 56 */[];
	enum{SWMII_SPEED_10=0, SWMII_SPEED_100, SWMII_SPEED_1000, SWMII_DUPLEX_HALF=0, SWMII_DUPLEX_FULL,} cocci_id/* drivers/net/phy/swphy.c 28 */;
	struct swmii_regs {
		u16 bmsr;
		u16 lpa;
		u16 lpagb;
		u16 estat;
	} cocci_id/* drivers/net/phy/swphy.c 21 */;
	u16 cocci_id/* drivers/net/phy/swphy.c 118 */;
	const struct fixed_phy_status *cocci_id/* drivers/net/phy/swphy.c 115 */;
}
