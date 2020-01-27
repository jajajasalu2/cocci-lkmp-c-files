cocci_test_suite() {
	const struct phy_ops cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hsic.c 96 */;
	struct qcom_usb_hsic_phy *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hsic.c 87 */;
	struct phy *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hsic.c 85 */;
	int cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hsic.c 85 */;
	struct pinctrl_state *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hsic.c 30 */;
	struct ulpi *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hsic.c 29 */;
	struct qcom_usb_hsic_phy {
		struct ulpi *ulpi;
		struct phy *phy;
		struct pinctrl *pctl;
		struct clk *phy_clk;
		struct clk *cal_clk;
		struct clk *cal_sleep_clk;
	} cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hsic.c 17 */;
	struct ulpi_driver cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hsic.c 146 */;
	const struct of_device_id cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hsic.c 140 */[];
	struct clk *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hsic.c 106 */;
	struct phy_provider *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hsic.c 105 */;
}
