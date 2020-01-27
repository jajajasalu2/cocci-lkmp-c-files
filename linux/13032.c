cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/soc/imx/gpcv2.c 647 */;
	const struct of_device_id cocci_id/* drivers/soc/imx/gpcv2.c 641 */[];
	void __iomem *cocci_id/* drivers/soc/imx/gpcv2.c 566 */;
	struct regmap *cocci_id/* drivers/soc/imx/gpcv2.c 565 */;
	struct device_node *cocci_id/* drivers/soc/imx/gpcv2.c 564 */;
	struct device *cocci_id/* drivers/soc/imx/gpcv2.c 563 */;
	struct regmap_config cocci_id/* drivers/soc/imx/gpcv2.c 555 */;
	const struct imx_pgc_domain_data *cocci_id/* drivers/soc/imx/gpcv2.c 552 */;
	struct platform_device *cocci_id/* drivers/soc/imx/gpcv2.c 550 */;
	const struct platform_device_id cocci_id/* drivers/soc/imx/gpcv2.c 535 */[];
	void cocci_id/* drivers/soc/imx/gpcv2.c 472 */;
	struct clk *cocci_id/* drivers/soc/imx/gpcv2.c 450 */;
	const struct imx_pgc_domain_data cocci_id/* drivers/soc/imx/gpcv2.c 275 */;
	const struct regmap_access_table cocci_id/* drivers/soc/imx/gpcv2.c 270 */;
	const struct regmap_range cocci_id/* drivers/soc/imx/gpcv2.c 259 */[];
	const struct imx_pgc_domain cocci_id/* drivers/soc/imx/gpcv2.c 221 */[];
	struct generic_pm_domain *cocci_id/* drivers/soc/imx/gpcv2.c 216 */;
	int cocci_id/* drivers/soc/imx/gpcv2.c 216 */;
	u32 cocci_id/* drivers/soc/imx/gpcv2.c 140 */;
	const bool cocci_id/* drivers/soc/imx/gpcv2.c 137 */;
	unsigned int cocci_id/* drivers/soc/imx/gpcv2.c 135 */;
	struct imx_pgc_domain cocci_id/* drivers/soc/imx/gpcv2.c 133 */;
	struct imx_pgc_domain *cocci_id/* drivers/soc/imx/gpcv2.c 132 */;
	bool cocci_id/* drivers/soc/imx/gpcv2.c 130 */;
	struct imx_pgc_domain_data {
		const struct imx_pgc_domain *domains;
		size_t domains_num;
		const struct regmap_access_table *reg_access_table;
	} cocci_id/* drivers/soc/imx/gpcv2.c 123 */;
	struct imx_pgc_domain {
		struct generic_pm_domain genpd;
		struct regmap *regmap;
		struct regulator *regulator;
		struct clk *clk[GPC_CLK_MAX];
		int num_clks;
		unsigned int pgc;
		const struct {
			u32 pxx;
			u32 map;
			u32 hsk;
		} bits;
		const int voltage;
		struct device *dev;
	} cocci_id/* drivers/soc/imx/gpcv2.c 104 */;
}
