cocci_test_suite() {
	unsigned long long cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 89 */;
	struct pll_params *cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 87 */;
	u32 cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 81 */;
	void __iomem *cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 81 */;
	void cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 81 */;
	struct stm32_usbphyc {
		struct device *dev;
		void __iomem *base;
		struct clk *clk;
		struct reset_control *rst;
		struct stm32_usbphyc_phy **phys;
		int nphys;
		int switch_setup;
	} cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 66 */;
	struct stm32_usbphyc_phy {
		struct phy *phy;
		struct stm32_usbphyc *usbphyc;
		struct regulator_bulk_data supplies[NUM_SUPPLIES];
		u32 index;
		bool active;
	} cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 58 */;
	struct pll_params {
		u8 ndiv;
		u16 frac;
	} cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 53 */;
	struct platform_driver cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 448 */;
	const struct of_device_id cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 442 */[];
	const char *constcocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 39 */[];
	struct phy_provider *cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 315 */;
	struct resource *cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 314 */;
	struct platform_device *cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 309 */;
	struct device_node *cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 273 */;
	struct stm32_usbphyc_phy *cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 272 */;
	struct of_phandle_args *cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 269 */;
	struct phy *cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 268 */;
	struct device *cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 268 */;
	const struct phy_ops cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 248 */;
	int cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 147 */;
	bool cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 145 */;
	struct stm32_usbphyc *cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 145 */;
	struct pll_params cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 115 */;
	u16 cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 110 */;
	u8 cocci_id/* drivers/phy/st/phy-stm32-usbphyc.c 105 */;
}
