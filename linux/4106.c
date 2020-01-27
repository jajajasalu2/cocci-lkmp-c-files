cocci_test_suite() {
	struct device *cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-utmi.c 89 */;
	struct mvebu_a3700_utmi {
		void __iomem *regs;
		struct regmap *usb_misc;
		const struct mvebu_a3700_utmi_caps *caps;
		struct phy *phy;
	} cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-utmi.c 79 */;
	struct mvebu_a3700_utmi_caps {
		int usb32;
		const struct phy_ops *ops;
	} cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-utmi.c 66 */;
	struct platform_driver cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-utmi.c 258 */;
	struct phy_provider *cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-utmi.c 218 */;
	struct platform_device *cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-utmi.c 214 */;
	const struct of_device_id cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-utmi.c 201 */[];
	const struct mvebu_a3700_utmi_caps cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-utmi.c 196 */;
	const struct phy_ops cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-utmi.c 185 */;
	u32 cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-utmi.c 168 */;
	struct mvebu_a3700_utmi *cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-utmi.c 166 */;
	struct phy *cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-utmi.c 164 */;
	int cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-utmi.c 164 */;
}
