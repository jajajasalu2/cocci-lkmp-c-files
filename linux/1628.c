cocci_test_suite() {
	struct ci_hdrc *cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 79 */;
	unsigned cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 79 */;
	const struct reset_control_ops cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 75 */;
	void __iomem *cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 52 */;
	struct ci_hdrc_msm cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 51 */;
	struct reset_controller_dev *cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 49 */;
	unsigned long cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 49 */;
	struct ci_hdrc_msm {
		struct platform_device *ci;
		struct clk *core_clk;
		struct clk *iface_clk;
		struct clk *fs_clk;
		struct ci_hdrc_platform_data pdata;
		struct reset_controller_dev rcdev;
		bool secondary_phy;
		bool hsic;
		void __iomem *base;
	} cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 36 */;
	struct platform_driver cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 295 */;
	const struct of_device_id cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 289 */[];
	struct device_node *cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 179 */;
	struct reset_control *cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 177 */;
	struct clk *cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 176 */;
	u32 cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 145 */;
	struct of_phandle_args cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 144 */;
	struct device *cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 143 */;
	struct regmap *cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 142 */;
	struct platform_device *cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 140 */;
	struct ci_hdrc_msm *cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 139 */;
	int cocci_id/* drivers/usb/chipidea/ci_hdrc_msm.c 139 */;
}
