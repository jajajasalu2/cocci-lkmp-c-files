cocci_test_suite() {
	void cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 97 */;
	struct dpu_rm_requirements cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 612 */;
	struct msm_display_topology cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 567 */;
	struct list_head *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 55 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 538 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 537 */;
	struct dpu_rm_hw_iter *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 53 */;
	u32 cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 520 */;
	struct dpu_encoder_hw_resources *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 517 */;
	unsigned long cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 449 */;
	const struct dpu_hw_ctl *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 448 */;
	struct dpu_rm_hw_blk *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 434 */[MAX_BLOCKS];
	struct dpu_rm_hw_blk {
		struct list_head list;
		uint32_t id;
		uint32_t enc_id;
		struct dpu_hw_blk *hw;
	} cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 36 */;
	struct dpu_rm_hw_iter cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 314 */;
	const struct dpu_lm_cfg *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 313 */;
	struct dpu_rm_hw_blk **cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 310 */;
	struct dpu_rm_hw_blk *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 309 */;
	struct dpu_rm_requirements *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 308 */;
	uint32_t cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 307 */;
	struct dpu_rm *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 306 */;
	bool cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 305 */;
	const struct msm_display_topology *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 285 */;
	struct dpu_rm_requirements {
		struct msm_display_topology topology;
		struct dpu_encoder_hw_resources hw_res;
	} cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 23 */;
	struct dpu_lm_cfg *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 218 */;
	void *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 148 */;
	enum dpu_hw_blk_type cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 146 */;
	void __iomem *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 145 */;
	struct dpu_mdss_cfg *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 144 */;
	int cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_rm.c 142 */;
}
