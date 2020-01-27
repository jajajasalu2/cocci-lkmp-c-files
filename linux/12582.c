cocci_test_suite() {
	irq_hw_number_t cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 97 */;
	struct irq_domain *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 96 */;
	unsigned int cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 96 */;
	struct irq_chip cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 90 */;
	struct irq_data *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 72 */;
	u32 cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 44 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 41 */;
	void *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 41 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 206 */;
	const struct msm_mdss_funcs cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 198 */;
	struct mdp5_mdss *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 185 */;
	struct msm_drm_private *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 184 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 182 */;
	void cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 182 */;
	struct msm_mdss *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 148 */;
	int cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 148 */;
	struct mdp5_mdss {
		struct msm_mdss base;
		void __iomem *mmio,*vbif;
		struct regulator *vdd;
		struct clk *ahb_clk;
		struct clk *axi_clk;
		struct clk *vsync_clk;
		struct {
			volatile unsigned long enabled_mask;
			struct irq_domain *domain;
		} irqcontroller;
	} cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 14 */;
	struct mdp5_mdss cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 12 */;
	struct device *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 118 */;
	const struct irq_domain_ops cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_mdss.c 110 */;
}
