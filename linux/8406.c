cocci_test_suite() {
	const struct of_device_id *cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 99 */;
	struct rockchip_priv_data *cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 98 */;
	struct net_device *cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 97 */;
	struct device *cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 96 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 94 */;
	int cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 94 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 76 */[];
	const struct emac_rockchip_soc_data cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 61 */;
	void *cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 37 */;
	unsigned int cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 37 */;
	void cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 37 */;
	struct rockchip_priv_data {
		struct arc_emac_priv emac;
		struct regmap *grf;
		const struct emac_rockchip_soc_data *soc_data;
		struct regulator *regulator;
		struct clk *refclk;
		struct clk *macclk;
	} cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 28 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 269 */;
	struct emac_rockchip_soc_data {
		unsigned int grf_offset;
		unsigned int grf_mode_offset;
		unsigned int grf_speed_offset;
		bool need_div_macclk;
	} cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 21 */;
	struct rockchip_priv_data cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 107 */;
	u32 cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 101 */;
	phy_interface_t cocci_id/* drivers/net/ethernet/arc/emac_rockchip.c 100 */;
}
