cocci_test_suite() {
	struct xgbe_phy_impl_if *cocci_id/* drivers/net/ethernet/amd/xgbe/xgbe-phy-v1.c 824 */;
	struct xgbe_phy_if *cocci_id/* drivers/net/ethernet/amd/xgbe/xgbe-phy-v1.c 822 */;
	void cocci_id/* drivers/net/ethernet/amd/xgbe/xgbe-phy-v1.c 822 */;
	int *cocci_id/* drivers/net/ethernet/amd/xgbe/xgbe-phy-v1.c 626 */;
	bool cocci_id/* drivers/net/ethernet/amd/xgbe/xgbe-phy-v1.c 571 */;
	u16 cocci_id/* drivers/net/ethernet/amd/xgbe/xgbe-phy-v1.c 342 */;
	enum xgbe_an_mode cocci_id/* drivers/net/ethernet/amd/xgbe/xgbe-phy-v1.c 313 */;
	int cocci_id/* drivers/net/ethernet/amd/xgbe/xgbe-phy-v1.c 307 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/amd/xgbe/xgbe-phy-v1.c 300 */;
	struct xgbe_prv_data *cocci_id/* drivers/net/ethernet/amd/xgbe/xgbe-phy-v1.c 299 */;
	unsigned int cocci_id/* drivers/net/ethernet/amd/xgbe/xgbe-phy-v1.c 237 */;
	struct xgbe_phy_data *cocci_id/* drivers/net/ethernet/amd/xgbe/xgbe-phy-v1.c 235 */;
	enum xgbe_mode cocci_id/* drivers/net/ethernet/amd/xgbe/xgbe-phy-v1.c 232 */;
	struct xgbe_phy_data {
		unsigned int speed_set;
		u32 blwc[XGBE_SPEEDS];
		u32 cdr_rate[XGBE_SPEEDS];
		u32 pq_skew[XGBE_SPEEDS];
		u32 tx_amp[XGBE_SPEEDS];
		u32 dfe_tap_cfg[XGBE_SPEEDS];
		u32 dfe_tap_ena[XGBE_SPEEDS];
	} cocci_id/* drivers/net/ethernet/amd/xgbe/xgbe-phy-v1.c 204 */;
	const u32 cocci_id/* drivers/net/ethernet/amd/xgbe/xgbe-phy-v1.c 168 */[];
}
