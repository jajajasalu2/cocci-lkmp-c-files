cocci_test_suite() {
	unsigned long cocci_id/* drivers/gpu/drm/vc4/vc4_validate_shaders.c 796 */;
	struct vc4_shader_validation_state cocci_id/* drivers/gpu/drm/vc4/vc4_validate_shaders.c 786 */;
	struct drm_gem_cma_object *cocci_id/* drivers/gpu/drm/vc4/vc4_validate_shaders.c 779 */;
	void cocci_id/* drivers/gpu/drm/vc4/vc4_validate_shaders.c 722 */;
	uint32_t cocci_id/* drivers/gpu/drm/vc4/vc4_validate_shaders.c 581 */;
	int32_t cocci_id/* drivers/gpu/drm/vc4/vc4_validate_shaders.c 580 */;
	int cocci_id/* drivers/gpu/drm/vc4/vc4_validate_shaders.c 578 */;
	struct vc4_shader_validation_state *cocci_id/* drivers/gpu/drm/vc4/vc4_validate_shaders.c 577 */;
	struct vc4_validated_shader_info *cocci_id/* drivers/gpu/drm/vc4/vc4_validate_shaders.c 576 */;
	uint64_t cocci_id/* drivers/gpu/drm/vc4/vc4_validate_shaders.c 575 */;
	bool cocci_id/* drivers/gpu/drm/vc4/vc4_validate_shaders.c 574 */;
	struct vc4_shader_validation_state {
		uint32_t ip;
		uint32_t max_ip;
		uint64_t *shader;
		struct vc4_texture_sample_info tmu_setup[2];
		int tmu_write_count[2];
		uint32_t live_min_clamp_offsets[LIVE_REG_COUNT];
		bool live_max_clamp_regs[LIVE_REG_COUNT];
		uint32_t live_immediates[LIVE_REG_COUNT];
		unsigned long *branch_targets;
		bool needs_uniform_address_update;
		bool needs_uniform_address_for_loop;
		bool all_registers_used;
	} cocci_id/* drivers/gpu/drm/vc4/vc4_validate_shaders.c 49 */;
	u32 cocci_id/* drivers/gpu/drm/vc4/vc4_validate_shaders.c 397 */;
	struct vc4_texture_sample_info *cocci_id/* drivers/gpu/drm/vc4/vc4_validate_shaders.c 161 */;
}
