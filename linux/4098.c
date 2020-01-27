cocci_test_suite() {
	struct rockchip_usb_phy cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 97 */;
	struct rockchip_usb_phy *cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 96 */;
	struct clk_hw *cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 94 */;
	unsigned long cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 88 */;
	bool cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 81 */;
	struct rockchip_usb_phy {
		struct rockchip_usb_phy_base *base;
		struct device_node *np;
		unsigned int reg_offset;
		struct clk *clk;
		struct clk *clk480m;
		struct clk_hw clk480m_hw;
		struct phy *phy;
		bool uart_enabled;
		struct reset_control *reset;
		struct regulator *vbus;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 67 */;
	struct rockchip_usb_phy_base {
		struct device *dev;
		struct regmap *reg_base;
		const struct rockchip_usb_phy_pdata *pdata;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 61 */;
	char *cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 571 */;
	struct rockchip_usb_phy_pdata {
		struct rockchip_usb_phys *phys;
		int (*init_usb_uart)(struct regmap *grf,
				     const struct rockchip_usb_phy_pdata *pdata);
		int usb_uart_phy;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 54 */;
	struct rockchip_usb_phy_base cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 53 */;
	struct device_node *cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 526 */;
	const struct of_device_id *cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 524 */;
	void cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 522 */;
	struct platform_driver cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 511 */;
	const struct of_device_id cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 502 */[];
	struct rockchip_usb_phys {
		int reg;
		const char *pll_name;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 48 */;
	struct phy_provider *cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 460 */;
	struct device *cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 458 */;
	struct platform_device *cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 456 */;
	u32 cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 377 */;
	const struct rockchip_usb_phy_pdata *cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 375 */;
	struct regmap *cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 374 */;
	int __init cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 374 */;
	struct rockchip_usb_phys cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 317 */[];
	const struct rockchip_usb_phy_pdata cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 316 */;
	int cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 26 */;
	struct clk_init_data cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 208 */;
	const char *cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 207 */;
	unsigned int cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 206 */;
	struct rockchip_usb_phy_base *cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 202 */;
	void *cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 189 */;
	const struct phy_ops cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 182 */;
	struct phy *cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 139 */;
	const struct clk_ops cocci_id/* drivers/phy/rockchip/phy-rockchip-usb.c 132 */;
}
