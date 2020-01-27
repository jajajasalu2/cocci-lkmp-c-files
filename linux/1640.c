cocci_test_suite() {
	void __iomem *cocci_id/* drivers/usb/dwc3/dwc3-st.c 98 */;
	struct st_dwc3 {
		struct device *dev;
		void __iomem *glue_base;
		struct regmap *regmap;
		int syscfg_reg_off;
		enum usb_dr_mode dr_mode;
		struct reset_control *rstc_pwrdn;
		struct reset_control *rstc_rst;
	} cocci_id/* drivers/usb/dwc3/dwc3-st.c 88 */;
	struct platform_driver cocci_id/* drivers/usb/dwc3/dwc3-st.c 365 */;
	const struct of_device_id cocci_id/* drivers/usb/dwc3/dwc3-st.c 358 */[];
	struct regmap *cocci_id/* drivers/usb/dwc3/dwc3-st.c 202 */;
	struct device_node *cocci_id/* drivers/usb/dwc3/dwc3-st.c 200 */;
	struct device *cocci_id/* drivers/usb/dwc3/dwc3-st.c 199 */;
	struct resource *cocci_id/* drivers/usb/dwc3/dwc3-st.c 198 */;
	struct platform_device *cocci_id/* drivers/usb/dwc3/dwc3-st.c 195 */;
	void cocci_id/* drivers/usb/dwc3/dwc3-st.c 173 */;
	u32 cocci_id/* drivers/usb/dwc3/dwc3-st.c 117 */;
	struct st_dwc3 *cocci_id/* drivers/usb/dwc3/dwc3-st.c 115 */;
	int cocci_id/* drivers/usb/dwc3/dwc3-st.c 115 */;
}
