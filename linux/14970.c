cocci_test_suite() {
	const struct imx8qxp_ss_lpcg cocci_id/* drivers/clk/imx/clk-imx8qxp-lpcg.c 82 */;
	const struct imx8qxp_lpcg_data cocci_id/* drivers/clk/imx/clk-imx8qxp-lpcg.c 58 */[];
	struct imx8qxp_ss_lpcg {
		const struct imx8qxp_lpcg_data *lpcg;
		u8 num_lpcg;
		u8 num_max;
	} cocci_id/* drivers/clk/imx/clk-imx8qxp-lpcg.c 52 */;
	struct imx8qxp_lpcg_data {
		int id;
		char *name;
		char *parent;
		unsigned long flags;
		u32 offset;
		u8 bit_idx;
		bool hw_gate;
	} cocci_id/* drivers/clk/imx/clk-imx8qxp-lpcg.c 33 */;
	struct platform_driver cocci_id/* drivers/clk/imx/clk-imx8qxp-lpcg.c 214 */;
	const struct of_device_id cocci_id/* drivers/clk/imx/clk-imx8qxp-lpcg.c 207 */[];
	void __iomem *cocci_id/* drivers/clk/imx/clk-imx8qxp-lpcg.c 169 */;
	struct clk_hw **cocci_id/* drivers/clk/imx/clk-imx8qxp-lpcg.c 168 */;
	struct resource *cocci_id/* drivers/clk/imx/clk-imx8qxp-lpcg.c 167 */;
	const struct imx8qxp_lpcg_data *cocci_id/* drivers/clk/imx/clk-imx8qxp-lpcg.c 166 */;
	const struct imx8qxp_ss_lpcg *cocci_id/* drivers/clk/imx/clk-imx8qxp-lpcg.c 165 */;
	struct clk_hw_onecell_data *cocci_id/* drivers/clk/imx/clk-imx8qxp-lpcg.c 164 */;
	struct device_node *cocci_id/* drivers/clk/imx/clk-imx8qxp-lpcg.c 163 */;
	struct device *cocci_id/* drivers/clk/imx/clk-imx8qxp-lpcg.c 162 */;
	struct platform_device *cocci_id/* drivers/clk/imx/clk-imx8qxp-lpcg.c 160 */;
	int cocci_id/* drivers/clk/imx/clk-imx8qxp-lpcg.c 160 */;
}
