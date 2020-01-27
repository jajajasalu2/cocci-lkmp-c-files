cocci_test_suite() {
	struct device_node *cocci_id/* drivers/clk/mxs/clk-imx23.c 97 */;
	enum imx23_clk cocci_id/* drivers/clk/mxs/clk-imx23.c 93 */[]__initdata;
	struct clk_onecell_data cocci_id/* drivers/clk/mxs/clk-imx23.c 91 */;
	struct clk *cocci_id/* drivers/clk/mxs/clk-imx23.c 90 */[clk_max];
	enum imx23_clk{ref_xtal, pll, ref_cpu, ref_emi, ref_pix, ref_io, saif_sel, lcdif_sel, gpmi_sel, ssp_sel, emi_sel, cpu, etm_sel, cpu_pll, cpu_xtal, hbus, xbus, lcdif_div, ssp_div, gpmi_div, emi_pll, emi_xtal, etm_div, saif_div, clk32k_div, rtc, adc, spdif_div, clk32k, dri, pwm, filt, uart, ssp, gpmi, spdif, emi, saif, lcdif, etm, usb, usb_phy, clk_max,} cocci_id/* drivers/clk/mxs/clk-imx23.c 80 */;
	const char *const cocci_id/* drivers/clk/mxs/clk-imx23.c 77 */[]__initconst;
	u32 cocci_id/* drivers/clk/mxs/clk-imx23.c 46 */;
	void __init cocci_id/* drivers/clk/mxs/clk-imx23.c 44 */;
	void cocci_id/* drivers/clk/mxs/clk-imx23.c 44 */;
	void __iomem *cocci_id/* drivers/clk/mxs/clk-imx23.c 16 */;
}
