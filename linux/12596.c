cocci_test_suite() {
	unsigned int cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 77 */;
	irq_hw_number_t cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 76 */;
	u32 cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 69 */;
	struct irq_chip *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 68 */;
	struct irq_desc *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 65 */;
	u64 cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 59 */;
	struct icc_path *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 38 */;
	struct dpu_mdss {
		struct msm_mdss base;
		void __iomem *mmio;
		unsigned long mmio_len;
		struct dss_module_power mp;
		struct dpu_irq_controller irq_controller;
		struct icc_path *path[2];
		u32 num_paths;
	} cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 25 */;
	struct resource *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 239 */;
	const struct msm_mdss_funcs cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 229 */;
	struct dss_module_power *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 208 */;
	struct msm_drm_private *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 206 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 205 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 203 */;
	struct dpu_irq_controller {
		unsigned long enabled_mask;
		struct irq_domain *domain;
	} cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 20 */;
	struct msm_mdss *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 187 */;
	void cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 165 */;
	struct irq_domain *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 148 */;
	struct device *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 147 */;
	struct dpu_mdss *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 145 */;
	int cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 145 */;
	const struct irq_domain_ops cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 140 */;
	struct dpu_mdss cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 13 */;
	struct lock_class_key cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 128 */;
	struct irq_chip cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 122 */;
	struct irq_data *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_mdss.c 100 */;
}
