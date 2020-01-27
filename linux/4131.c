cocci_test_suite() {
	const char *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 99 */;
	unsigned int *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 99 */;
	u32 *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 85 */;
	struct uniphier_u3hsphy_soc_data {
		int nparams;
		const struct uniphier_u3hsphy_param param[MAX_PHY_PARAMS];
		u32 config0;
		u32 config1;
		void (*trim_func)(struct uniphier_u3hsphy_priv *priv,
				  u32 *pconfig,
				  struct uniphier_u3hsphy_trim_param *pt);
	} cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 75 */;
	struct uniphier_u3hsphy_priv {
		struct device *dev;
		void __iomem *base;
		struct clk *clk,*clk_parent,*clk_ext;
		struct reset_control *rst,*rst_parent;
		struct regulator *vbus;
		const struct uniphier_u3hsphy_soc_data *data;
	} cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 66 */;
	struct uniphier_u3hsphy_trim_param {
		unsigned int rterm;
		unsigned int sel_t;
		unsigned int hs_i;
	} cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 58 */;
	struct uniphier_u3hsphy_param {
		struct {
			int reg_no;
			int msb;
			int lsb;
		} field;
		u8 value;
	} cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 49 */;
	struct platform_driver cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 406 */;
	const struct of_device_id cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 389 */[];
	const struct uniphier_u3hsphy_soc_data cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 371 */;
	struct resource *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 312 */;
	struct phy_provider *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 311 */;
	struct device *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 309 */;
	struct platform_device *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 307 */;
	const struct phy_ops cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 299 */;
	struct uniphier_u3hsphy_priv *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 291 */;
	struct phy *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 289 */;
	int cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 289 */;
	u32 cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 252 */;
	u8 cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 177 */;
	const struct uniphier_u3hsphy_param *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 173 */;
	void cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 172 */;
	struct uniphier_u3hsphy_trim_param cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 142 */;
	struct uniphier_u3hsphy_trim_param *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 120 */;
	u8 *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 102 */;
	struct nvmem_cell *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3hs.c 101 */;
}
