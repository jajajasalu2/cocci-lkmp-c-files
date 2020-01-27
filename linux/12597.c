cocci_test_suite() {
	unsigned long cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 934 */;
	uint32_t cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 894 */;
	const char *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 893 */;
	const struct dpu_irq_type *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 892 */;
	const struct dpu_intr_reg *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 891 */;
	u32 cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 781 */;
	void *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 775 */;
	void (*cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 774 */)(void *,
										    int);
	enum dpu_intr_type cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 757 */;
	const struct dpu_irq_type cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 252 */[];
	const struct dpu_intr_reg cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 195 */[];
	struct dpu_irq_type {
		u32 intr_type;
		u32 instance_idx;
		u32 irq_mask;
		u32 reg_idx;
	} cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 185 */;
	struct dpu_intr_reg {
		u32 clr_off;
		u32 en_off;
		u32 status_off;
	} cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 172 */;
	struct dpu_hw_blk_reg_map *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 1079 */;
	void __iomem *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 1079 */;
	struct dpu_mdss_cfg *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 1078 */;
	void cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 1078 */;
	struct dpu_hw_intr_ops *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 1065 */;
	bool cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 1033 */;
	int cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 1017 */;
	struct dpu_hw_intr *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_hw_interrupts.c 1016 */;
}
