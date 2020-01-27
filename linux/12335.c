cocci_test_suite() {
	int cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 99 */;
	uint8_t *cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 891 */;
	struct vc4_validated_shader_info *cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 824 */;
	uint16_t *cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 811 */;
	struct drm_gem_cma_object *cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 756 */[ARRAY_SIZE(shader_reloc_offsets) + 8];
	const uint32_t cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 750 */[];
	struct drm_device *cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 744 */;
	enum vc4_texture_data_type cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 581 */;
	uint32_t *cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 567 */;
	struct drm_gem_cma_object *cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 566 */;
	struct vc4_texture_sample_info *cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 563 */;
	void *cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 562 */;
	struct vc4_exec_info *cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 561 */;
	const struct cmd_info *cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 493 */;
	u8 cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 492 */;
	const struct cmd_info {
		uint16_t len;
		const char *name;
		int (*func)(struct vc4_exec_info *exec, void *validated,
			    void *untrusted);
	} cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 435 */[];
	uint8_t cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 353 */;
	struct vc4_dev *cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 352 */;
	struct vc4_shader_state *cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 300 */;
	VALIDATE_ARGS cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 214 */;
	bool cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 147 */;
	uint32_t cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 143 */;
	struct vc4_bo *cocci_id/* drivers/gpu/drm/vc4/vc4_validate.c 109 */;
}
