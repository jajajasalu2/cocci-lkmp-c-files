cocci_test_suite() {
	void *cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 83 */;
	int cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 83 */;
	struct unimac_mdio_priv *cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 78 */;
	unsigned int cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 78 */;
	struct unimac_mdio_priv {
		struct mii_bus *mii_bus;
		void __iomem *base;
		int (*wait_func)(void *wait_func_data);
		void *wait_func_data;
		struct clk *clk;
		u32 clk_freq;
	} cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 40 */;
	struct platform_driver cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 351 */;
	const struct of_device_id cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 340 */[];
	struct device *cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 323 */;
	int __maybe_unused cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 323 */;
	struct resource *cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 223 */;
	struct mii_bus *cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 222 */;
	struct device_node *cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 221 */;
	struct unimac_mdio_pdata *cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 219 */;
	struct platform_device *cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 217 */;
	u32 cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 191 */;
	unsigned long cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 190 */;
	void cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 188 */;
	u16 cocci_id/* drivers/net/phy/mdio-bcm-unimac.c 129 */;
}
