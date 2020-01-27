cocci_test_suite() {
	struct qcom_usb_hs_phy cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 97 */;
	void *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 92 */;
	struct notifier_block *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 91 */;
	unsigned long cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 91 */;
	u8 cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 46 */;
	enum phy_mode cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 43 */;
	struct qcom_usb_hs_phy {
		struct ulpi *ulpi;
		struct phy *phy;
		struct clk *ref_clk;
		struct clk *sleep_clk;
		struct regulator *v1p8;
		struct regulator *v3p3;
		struct reset_control *reset;
		struct ulpi_seq *init_seq;
		struct extcon_dev *vbus_edev;
		struct notifier_block vbus_notify;
	} cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 29 */;
	struct ulpi_driver cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 279 */;
	const struct of_device_id cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 273 */[];
	struct ulpi_seq {
		u8 addr;
		u8 val;
	} cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 24 */;
	u8 *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 225 */;
	struct reset_control *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 207 */;
	struct regulator *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 206 */;
	struct clk *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 205 */;
	struct phy_provider *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 204 */;
	const struct phy_ops cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 194 */;
	struct qcom_usb_hs_phy *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 181 */;
	struct phy *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 179 */;
	int cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 179 */;
	const struct ulpi_seq *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 111 */;
	struct ulpi *cocci_id/* drivers/phy/qualcomm/phy-qcom-usb-hs.c 110 */;
}
