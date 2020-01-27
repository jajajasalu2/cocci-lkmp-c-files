cocci_test_suite() {
	struct brcm_usb_phy_data cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 97 */;
	struct brcm_usb_phy *cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 95 */;
	struct brcm_usb_phy_data {
		struct brcm_usb_init_params ini;
		bool has_eohci;
		bool has_xhci;
		struct clk *usb_20_clk;
		struct clk *usb_30_clk;
		struct mutex mutex;
		int init_count;
		struct brcm_usb_phy phys[BRCM_USB_PHY_ID_MAX];
	} cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 54 */;
	struct brcm_usb_phy {
		struct phy *phy;
		unsigned int id;
		bool inited;
	} cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 48 */;
	struct platform_driver cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 441 */;
	const struct of_device_id cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 434 */[];
	const struct dev_pm_ops cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 430 */;
	struct value_to_name_map cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 35 */[];
	struct value_to_name_map {
		int value;
		const char *name;
	} cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 30 */;
	const char *cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 289 */;
	struct phy_provider *cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 286 */;
	struct resource *cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 283 */;
	struct platform_device *cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 281 */;
	enum brcm_usb_phy_id{BRCM_USB_PHY_2_0=0, BRCM_USB_PHY_3_0, BRCM_USB_PHY_ID_MAX,} cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 24 */;
	struct phy *cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 235 */;
	struct device_node *cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 233 */;
	struct brcm_usb_phy_data *cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 232 */;
	struct device *cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 231 */;
	int cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 231 */;
	const struct attribute_group cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 227 */;
	struct attribute *cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 221 */[];
	size_t cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 187 */;
	char *cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 174 */;
	struct device_attribute *cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 173 */;
	ssize_t cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 172 */;
	int *cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 150 */;
	struct value_to_name_map *cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 149 */;
	struct of_phandle_args *cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 124 */;
	struct phy_ops cocci_id/* drivers/phy/broadcom/phy-brcm-usb.c 117 */;
}
