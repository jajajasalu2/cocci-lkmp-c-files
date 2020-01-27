cocci_test_suite() {
	struct fixed_phy_status cocci_id/* drivers/net/phy/fixed_phy.c 82 */;
	struct mii_bus *cocci_id/* drivers/net/phy/fixed_phy.c 75 */;
	bool cocci_id/* drivers/net/phy/fixed_phy.c 50 */;
	struct net_device *cocci_id/* drivers/net/phy/fixed_phy.c 50 */;
	struct fixed_mdio_bus cocci_id/* drivers/net/phy/fixed_phy.c 46 */;
	struct platform_device *cocci_id/* drivers/net/phy/fixed_phy.c 45 */;
	struct fixed_phy *cocci_id/* drivers/net/phy/fixed_phy.c 383 */;
	void __exit cocci_id/* drivers/net/phy/fixed_phy.c 380 */;
	void cocci_id/* drivers/net/phy/fixed_phy.c 380 */;
	int __init cocci_id/* drivers/net/phy/fixed_phy.c 344 */;
	struct fixed_phy {
		int addr;
		struct phy_device *phydev;
		seqcount_t seqcount;
		struct fixed_phy_status status;
		bool no_carrier;
		int (*link_update)(struct net_device *,
				   struct fixed_phy_status *);
		struct list_head node;
		struct gpio_desc *link_gpiod;
	} cocci_id/* drivers/net/phy/fixed_phy.c 34 */;
	struct fixed_mdio_bus {
		struct mii_bus *mii_bus;
		struct list_head phys;
	} cocci_id/* drivers/net/phy/fixed_phy.c 29 */;
	int cocci_id/* drivers/net/phy/fixed_phy.c 242 */;
	struct fixed_mdio_bus *cocci_id/* drivers/net/phy/fixed_phy.c 240 */;
	struct gpio_desc *cocci_id/* drivers/net/phy/fixed_phy.c 238 */;
	struct device_node *cocci_id/* drivers/net/phy/fixed_phy.c 237 */;
	struct fixed_phy_status *cocci_id/* drivers/net/phy/fixed_phy.c 236 */;
	struct phy_device *cocci_id/* drivers/net/phy/fixed_phy.c 235 */;
	unsigned int cocci_id/* drivers/net/phy/fixed_phy.c 235 */;
	int (*cocci_id/* drivers/net/phy/fixed_phy.c 116 */)(struct net_device *,
							     struct fixed_phy_status *);
	u16 cocci_id/* drivers/net/phy/fixed_phy.c 105 */;
}
