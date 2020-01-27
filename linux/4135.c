cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 951 */;
	struct regmap *cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 847 */;
	const struct exynos5_usbdrd_phy_drvdata *cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 846 */;
	struct resource *cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 845 */;
	struct phy_provider *cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 844 */;
	struct device_node *cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 842 */;
	struct device *cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 841 */;
	struct platform_device *cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 839 */;
	const struct of_device_id cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 821 */[];
	const struct exynos5_usbdrd_phy_drvdata cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 802 */;
	const struct exynos5_usbdrd_phy_config cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 780 */[];
	const struct phy_ops cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 720 */;
	struct phy_usb_instance *cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 714 */;
	struct phy *cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 712 */;
	struct of_phandle_args *cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 702 */;
	u32 cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 600 */;
	struct exynos5_usbdrd_phy *cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 599 */;
	int cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 599 */;
	unsigned int cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 560 */;
	void cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 257 */;
	u32 *cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 224 */;
	unsigned long cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 224 */;
	struct exynos5_usbdrd_phy {
		struct device *dev;
		void __iomem *reg_phy;
		struct clk *clk;
		struct clk *pipeclk;
		struct clk *utmiclk;
		struct clk *itpclk;
		const struct exynos5_usbdrd_phy_drvdata *drv_data;
		struct phy_usb_instance {
			struct phy *phy;
			u32 index;
			struct regmap *reg_pmu;
			u32 pmu_offset;
			const struct exynos5_usbdrd_phy_config *phy_cfg;
		} phys[EXYNOS5_DRDPHYS_NUM];
		u32 extrefclk;
		struct clk *ref_clk;
		struct regulator *vbus;
		struct regulator *vbus_boost;
	} cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 192 */;
	struct exynos5_usbdrd_phy_drvdata {
		const struct exynos5_usbdrd_phy_config *phy_cfg;
		u32 pmu_offset_usbdrd0_phy;
		u32 pmu_offset_usbdrd1_phy;
		bool has_common_clk_gate;
	} cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 167 */;
	struct exynos5_usbdrd_phy_config {
		u32 id;
		void (*phy_isol)(struct phy_usb_instance *inst, u32 on);
		void (*phy_init)(struct exynos5_usbdrd_phy *phy_drd);
		unsigned int (*set_refclk)(struct phy_usb_instance *inst);
	} cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 160 */;
	struct exynos5_usbdrd_phy cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 158 */;
	struct phy_usb_instance cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 157 */;
	enum exynos5_usbdrd_phy_id{EXYNOS5_DRDPHY_UTMI, EXYNOS5_DRDPHY_PIPE3, EXYNOS5_DRDPHYS_NUM,} cocci_id/* drivers/phy/samsung/phy-exynos5-usbdrd.c 151 */;
}
