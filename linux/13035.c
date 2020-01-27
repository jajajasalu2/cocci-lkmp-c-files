cocci_test_suite() {
	u32 cocci_id/* drivers/soc/imx/gpc.c 63 */;
	struct imx_pm_domain *cocci_id/* drivers/soc/imx/gpc.c 61 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/imx/gpc.c 59 */;
	int cocci_id/* drivers/soc/imx/gpc.c 59 */;
	struct imx_pm_domain cocci_id/* drivers/soc/imx/gpc.c 56 */;
	struct platform_driver cocci_id/* drivers/soc/imx/gpc.c 544 */;
	struct clk *cocci_id/* drivers/soc/imx/gpc.c 460 */;
	struct imx_pm_domain {
		struct generic_pm_domain base;
		struct regmap *regmap;
		struct regulator *supply;
		struct clk *clk[GPC_CLK_MAX];
		int num_clks;
		unsigned int reg_offs;
		signed char cntr_pdn_bit;
		unsigned int ipg_rate_mhz;
	} cocci_id/* drivers/soc/imx/gpc.c 42 */;
	void __iomem *cocci_id/* drivers/soc/imx/gpc.c 409 */;
	struct device_node *cocci_id/* drivers/soc/imx/gpc.c 407 */;
	const struct imx_gpc_dt_data *cocci_id/* drivers/soc/imx/gpc.c 406 */;
	const struct of_device_id *cocci_id/* drivers/soc/imx/gpc.c 404 */;
	struct platform_device *cocci_id/* drivers/soc/imx/gpc.c 402 */;
	unsigned int cocci_id/* drivers/soc/imx/gpc.c 359 */;
	struct regmap *cocci_id/* drivers/soc/imx/gpc.c 358 */;
	struct device *cocci_id/* drivers/soc/imx/gpc.c 358 */;
	struct genpd_onecell_data cocci_id/* drivers/soc/imx/gpc.c 353 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/imx/gpc.c 348 */[];
	const struct regmap_config cocci_id/* drivers/soc/imx/gpc.c 339 */;
	const struct regmap_access_table cocci_id/* drivers/soc/imx/gpc.c 334 */;
	const struct regmap_range cocci_id/* drivers/soc/imx/gpc.c 327 */[];
	const struct of_device_id cocci_id/* drivers/soc/imx/gpc.c 319 */[];
	const struct imx_gpc_dt_data cocci_id/* drivers/soc/imx/gpc.c 295 */;
	struct imx_gpc_dt_data {
		int num_domains;
		bool err009619_present;
		bool err006287_present;
	} cocci_id/* drivers/soc/imx/gpc.c 289 */;
	struct imx_pm_domain cocci_id/* drivers/soc/imx/gpc.c 251 */[];
	struct genpd_power_state cocci_id/* drivers/soc/imx/gpc.c 246 */;
	const struct platform_device_id cocci_id/* drivers/soc/imx/gpc.c 226 */[];
	void cocci_id/* drivers/soc/imx/gpc.c 155 */;
}
