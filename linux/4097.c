cocci_test_suite() {
	size_t cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 968 */;
	unsigned char *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 967 */;
	struct nvmem_cell *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 966 */;
	const struct inno_hdmi_phy_ops cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 958 */;
	const char *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 838 */;
	struct clk_init_data cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 837 */;
	struct device_node *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 836 */;
	struct device *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 835 */;
	int cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 833 */;
	const struct clk_ops cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 675 */;
	u32 cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 623 */;
	unsigned long *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 602 */;
	long cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 600 */;
	u16 cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 572 */;
	u8 cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 543 */;
	struct clk_hw *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 540 */;
	unsigned long cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 525 */;
	const struct pre_pll_config *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 523 */;
	const struct phy_ops cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 517 */;
	struct phy *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 501 */;
	const struct phy_config *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 461 */;
	const struct post_pll_config *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 460 */;
	irqreturn_t cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 424 */;
	u64 cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 418 */;
	struct inno_hdmi_phy cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 373 */;
	const struct phy_config cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 334 */[];
	const struct post_pll_config cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 322 */[];
	const struct pre_pll_config cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 293 */[];
	struct inno_hdmi_phy_drv_data {
		const struct inno_hdmi_phy_ops *ops;
		const struct clk_ops *clk_ops;
		const struct phy_config *phy_cfg_table;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 287 */;
	struct inno_hdmi_phy_ops {
		int (*init)(struct inno_hdmi_phy *inno);
		int (*power_on)(struct inno_hdmi_phy *inno,
				const struct post_pll_config *cfg,
				const struct phy_config *phy_cfg);
		void (*power_off)(struct inno_hdmi_phy *inno);
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 279 */;
	struct phy_config {
		unsigned long tmdsclock;
		u8 regs[14];
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 274 */;
	struct post_pll_config {
		unsigned long tmdsclock;
		u8 prediv;
		u16 fbdiv;
		u8 postdiv;
		u8 version;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 266 */;
	struct pre_pll_config {
		unsigned long pixclock;
		unsigned long tmdsclock;
		u8 prediv;
		u16 fbdiv;
		u8 tmds_div_a;
		u8 tmds_div_b;
		u8 tmds_div_c;
		u8 pclk_div_a;
		u8 pclk_div_b;
		u8 pclk_div_c;
		u8 pclk_div_d;
		u8 vco_div_5_en;
		u32 fracdiv;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 250 */;
	struct inno_hdmi_phy {
		struct device *dev;
		struct regmap *regmap;
		int irq;
		struct phy *phy;
		struct clk *sysclk;
		struct clk *refoclk;
		struct clk *refpclk;
		const struct inno_hdmi_phy_drv_data *plat_data;
		int chip_version;
		struct clk_hw hw;
		struct clk *phyclk;
		unsigned long pixclock;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 230 */;
	struct inno_hdmi_phy_drv_data cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 228 */;
	struct platform_driver cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 1265 */;
	const struct of_device_id cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 1254 */[];
	void __iomem *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 1144 */;
	struct resource *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 1143 */;
	struct phy_provider *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 1142 */;
	struct platform_device *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 1139 */;
	struct inno_hdmi_phy *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 1133 */;
	void *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 1131 */;
	void cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 1131 */;
	const struct regmap_config cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 1124 */;
	const struct inno_hdmi_phy_drv_data cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-hdmi.c 1112 */;
}
