cocci_test_suite() {
	struct clk *cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 425 */;
	struct device *cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 423 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 421 */;
	struct clk_init_data cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 413 */;
	const char *constcocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 409 */[];
	const struct clk_ops cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 401 */;
	const struct pll_rate cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 40 */[];
	unsigned long *cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 377 */;
	long cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 376 */;
	int cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 359 */;
	const struct pll_rate *cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 357 */;
	unsigned long cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 357 */;
	unsigned int cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 341 */;
	struct hdmi_phy *cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 340 */;
	struct hdmi_pll_8960 *cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 339 */;
	struct clk_hw *cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 337 */;
	void cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 337 */;
	struct pll_rate {
		unsigned long rate;
		int num_reg;
		struct {
			u32 val;
			u32 reg;
		} conf[32];
	} cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 30 */;
	u32 cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 242 */;
	struct hdmi_pll_8960 cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 21 */;
	struct hdmi_pll_8960 {
		struct platform_device *pdev;
		struct clk_hw clk_hw;
		void __iomem *mmio;
		unsigned long pixclk;
	} cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_pll_8960.c 13 */;
}
