cocci_test_suite() {
	struct vmw_resource *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 971 */;
	bool cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 969 */;
	struct ttm_bo_kmap_obj cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 968 */;
	struct vmw_buffer_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 967 */;
	struct ttm_operation_ctx cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 966 */;
	struct list_head *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 964 */;
	size_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 963 */;
	SVGA3dShaderType cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 962 */;
	u32 cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 961 */;
	const void *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 961 */;
	struct vmw_cmdbuf_res_manager *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 960 */;
	struct vmw_private *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 959 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 959 */;
	unsigned cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 905 */;
	const struct vmw_user_resource_conv *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 90 */;
	u64 cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 859 */;
	struct ttm_object_file *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 846 */;
	uint32_t *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 843 */;
	enum drm_vmw_shader_type cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 840 */;
	const struct vmw_user_resource_conv cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 84 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 839 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 839 */;
	u32 cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 81 */(u32 user_key,
								    SVGA3dShaderType shader_type);
	bool cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 80 */(u32 user_key,
								     SVGA3dShaderType shader_type);
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 78 */(struct vmw_resource *res,
								     enum vmw_cmdbuf_res_state state);
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 75 */(struct vmw_resource *res,
								    bool readback,
								    struct ttm_validate_buffer *val_buf);
	struct vmw_user_shader cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 733 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 73 */(struct vmw_resource *res,
								    struct ttm_validate_buffer *val_buf);
	struct vmw_user_shader *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 723 */;
	u32 *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 721 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 72 */(struct vmw_resource *res);
	struct drm_vmw_shader_arg *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 706 */;
	struct ttm_base_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 696 */;
	struct ttm_base_object **cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 694 */;
	struct vmw_resource *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 61 */(struct ttm_base_object *base);
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 60 */(struct vmw_resource *res);
	struct vmw_dx_shader *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 594 */;
	struct vmw_fence_obj *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 513 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDXBindShader body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 475 */;
	struct vmw_dx_shader {
		struct vmw_resource res;
		struct vmw_resource *ctx;
		struct vmw_resource *cotable;
		u32 id;
		bool committed;
		struct list_head cotable_head;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 47 */;
	struct ttm_buffer_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 451 */;
	struct ttm_validate_buffer *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 448 */;
	struct vmw_user_shader {
		struct ttm_base_object base;
		struct vmw_shader shader;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 42 */;
	enum vmw_cmdbuf_res_state cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 357 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 356 */;
	struct vmw_shader {
		struct vmw_resource res;
		SVGA3dShaderType type;
		uint32_t size;
		uint8_t num_input_sig;
		uint8_t num_output_sig;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 34 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDestroyGBShader body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 316 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdBindGBShader body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 251 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDefineGBShader body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 206 */;
	struct vmw_shader *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 204 */;
	void (*cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 167 */)(struct vmw_resource *res);
	uint8_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 164 */;
	uint64_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 162 */;
	uint32_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 161 */;
	struct vmw_dx_shader cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 147 */;
	struct vmw_shader cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 135 */;
	const struct vmw_res_func cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 108 */;
	struct drm_vmw_shader_create_arg *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 1046 */;
	void *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_shader.c 1043 */;
}
