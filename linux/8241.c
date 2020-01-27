cocci_test_suite() {
	bool cocci_id/* drivers/net/ethernet/ti/cpsw-phy-sel.c 46 */;
	u32 cocci_id/* drivers/net/ethernet/ti/cpsw-phy-sel.c 43 */;
	phy_interface_t cocci_id/* drivers/net/ethernet/ti/cpsw-phy-sel.c 41 */;
	int cocci_id/* drivers/net/ethernet/ti/cpsw-phy-sel.c 41 */;
	struct cpsw_phy_sel_priv *cocci_id/* drivers/net/ethernet/ti/cpsw-phy-sel.c 40 */;
	void cocci_id/* drivers/net/ethernet/ti/cpsw-phy-sel.c 40 */;
	struct cpsw_phy_sel_priv {
		struct device *dev;
		u32 __iomem *gmii_sel;
		bool rmii_clock_external;
		void (*cpsw_phy_sel)(struct cpsw_phy_sel_priv *priv,
				     phy_interface_t phy_mode, int slave);
	} cocci_id/* drivers/net/ethernet/ti/cpsw-phy-sel.c 31 */;
	const struct of_device_id *cocci_id/* drivers/net/ethernet/ti/cpsw-phy-sel.c 210 */;
	struct resource *cocci_id/* drivers/net/ethernet/ti/cpsw-phy-sel.c 209 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/ti/cpsw-phy-sel.c 207 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/ti/cpsw-phy-sel.c 191 */[];
	struct device_node *cocci_id/* drivers/net/ethernet/ti/cpsw-phy-sel.c 163 */;
	struct device *cocci_id/* drivers/net/ethernet/ti/cpsw-phy-sel.c 161 */;
	const struct device_node *cocci_id/* drivers/net/ethernet/ti/cpsw-phy-sel.c 156 */;
	const void *cocci_id/* drivers/net/ethernet/ti/cpsw-phy-sel.c 154 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/ti/cpsw-phy-sel.c 153 */;
}
