cocci_test_suite() {
	const char **cocci_id/* drivers/usb/dwc3/dwc3-exynos.c 64 */;
	const struct dwc3_exynos_driverdata *cocci_id/* drivers/usb/dwc3/dwc3-exynos.c 54 */;
	struct device_node *cocci_id/* drivers/usb/dwc3/dwc3-exynos.c 53 */;
	struct device *cocci_id/* drivers/usb/dwc3/dwc3-exynos.c 52 */;
	struct dwc3_exynos *cocci_id/* drivers/usb/dwc3/dwc3-exynos.c 51 */;
	struct platform_device *cocci_id/* drivers/usb/dwc3/dwc3-exynos.c 49 */;
	int cocci_id/* drivers/usb/dwc3/dwc3-exynos.c 49 */;
	void *cocci_id/* drivers/usb/dwc3/dwc3-exynos.c 40 */;
	struct dwc3_exynos {
		struct device *dev;
		const char **clk_names;
		struct clk *clks[DWC3_EXYNOS_MAX_CLOCKS];
		int num_clks;
		int suspend_clk_idx;
		struct regulator *vdd33;
		struct regulator *vdd10;
	} cocci_id/* drivers/usb/dwc3/dwc3-exynos.c 28 */;
	struct platform_driver cocci_id/* drivers/usb/dwc3/dwc3-exynos.c 244 */;
	const struct dev_pm_ops cocci_id/* drivers/usb/dwc3/dwc3-exynos.c 235 */;
	struct dwc3_exynos_driverdata {
		const char *clk_names[DWC3_EXYNOS_MAX_CLOCKS];
		int num_clks;
		int suspend_clk_idx;
	} cocci_id/* drivers/usb/dwc3/dwc3-exynos.c 22 */;
	const struct of_device_id cocci_id/* drivers/usb/dwc3/dwc3-exynos.c 177 */[];
	const struct dwc3_exynos_driverdata cocci_id/* drivers/usb/dwc3/dwc3-exynos.c 159 */;
}
