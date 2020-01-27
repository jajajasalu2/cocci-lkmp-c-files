cocci_test_suite() {
	u8 cocci_id/* drivers/phy/ti/phy-tusb1210.c 96 */;
	struct ulpi *cocci_id/* drivers/phy/ti/phy-tusb1210.c 93 */;
	const struct phy_ops cocci_id/* drivers/phy/ti/phy-tusb1210.c 86 */;
	enum phy_mode cocci_id/* drivers/phy/ti/phy-tusb1210.c 53 */;
	struct tusb1210 *cocci_id/* drivers/phy/ti/phy-tusb1210.c 45 */;
	struct phy *cocci_id/* drivers/phy/ti/phy-tusb1210.c 43 */;
	int cocci_id/* drivers/phy/ti/phy-tusb1210.c 43 */;
	struct tusb1210 {
		struct ulpi *ulpi;
		struct phy *phy;
		struct gpio_desc *gpio_reset;
		struct gpio_desc *gpio_cs;
		u8 vendor_specific2;
	} cocci_id/* drivers/phy/ti/phy-tusb1210.c 20 */;
	struct ulpi_driver cocci_id/* drivers/phy/ti/phy-tusb1210.c 165 */;
	const struct ulpi_device_id cocci_id/* drivers/phy/ti/phy-tusb1210.c 158 */[];
	void cocci_id/* drivers/phy/ti/phy-tusb1210.c 149 */;
}
