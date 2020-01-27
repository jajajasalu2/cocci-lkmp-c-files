cocci_test_suite() {
	struct ci_hdrc_imx_data {
		struct usb_phy *phy;
		struct platform_device *ci_pdev;
		struct clk *clk;
		struct imx_usbmisc_data *usbmisc_data;
		bool supports_runtime_pm;
		bool override_phy_control;
		bool in_lpm;
		struct pinctrl *pinctrl;
		struct pinctrl_state *pinctrl_hsic_active;
		struct regulator *hsic_pad_regulator;
		bool need_three_clks;
		struct clk *clk_ipg;
		struct clk *clk_ahb;
		struct clk *clk_per;
		struct pm_qos_request pm_qos_req;
		const struct ci_hdrc_imx_platform_flag *plat_data;
	} cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 86 */;
	const struct of_device_id cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 72 */[];
	struct platform_driver cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 646 */;
	int __maybe_unused cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 602 */;
	void cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 510 */;
	struct pinctrl_state *cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 369 */;
	struct device_node *cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 310 */;
	const struct ci_hdrc_imx_platform_flag *cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 309 */;
	const struct of_device_id *cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 308 */;
	struct ci_hdrc_platform_data cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 302 */;
	struct platform_device *cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 299 */;
	struct ci_hdrc_imx_data *cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 272 */;
	struct device *cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 271 */;
	struct ci_hdrc *cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 269 */;
	unsigned int cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 269 */;
	int cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 269 */;
	const struct ci_hdrc_imx_platform_flag cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 25 */;
	struct ci_hdrc_imx_platform_flag {
		unsigned int flags;
	} cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 21 */;
	struct of_phandle_args cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 113 */;
	struct imx_usbmisc_data *cocci_id/* drivers/usb/chipidea/ci_hdrc_imx.c 109 */;
}
