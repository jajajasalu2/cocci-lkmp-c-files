cocci_test_suite() {
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDXSetVertexBuffers body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 977 */;
	SVGA3dVertexBuffer *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 940 */;
	const struct vmw_ctx_bindinfo_vb *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 937 */;
	unsigned long *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 934 */;
	struct vmw_ctx_binding_state {
		struct vmw_private *dev_priv;
		struct list_head list;
		struct vmw_ctx_bindinfo_view render_targets[SVGA3D_RT_MAX];
		struct vmw_ctx_bindinfo_tex texture_units[SVGA3D_NUM_TEXTURE_UNITS];
		struct vmw_ctx_bindinfo_view ds_view;
		struct vmw_ctx_bindinfo_so so_targets[SVGA3D_DX_MAX_SOTARGETS];
		struct vmw_ctx_bindinfo_vb vertex_buffers[SVGA3D_DX_MAX_VERTEXBUFFERS];
		struct vmw_ctx_bindinfo_ib index_buffer;
		struct vmw_dx_shader_bindings per_shader[SVGA3D_NUM_SHADERTYPE_DX10];
		unsigned long dirty;
	DECLARE_BITMAP(dirty_vb,SVGA3D_DX_MAX_VERTEXBUFFERS)
		;
		u32 bind_cmd_buffer[VMW_MAX_VIEW_BINDINGS];
		u32 bind_cmd_count;
		u32 bind_first_slot;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 92 */;
	struct vmw_dx_shader_bindings *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 899 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDXSetSOTargets body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 864 */;
	SVGA3dSoTarget *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 834 */;
	const struct vmw_ctx_bindinfo_so *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 831 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDXSetRenderTargets body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 783 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDXSetShaderResources body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 742 */;
	const struct vmw_ctx_bindinfo_view *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 709 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDXSetSingleConstantBuffer body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 628 */;
	struct vmw_private *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 627 */;
	typeof(*binding) cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 626 */;
	struct vmw_ctx_bindinfo_cb *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 625 */;
	bool cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 623 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDXSetShader body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 599 */;
	struct vmw_ctx_bindinfo_shader *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 596 */;
	struct {
		SVGA3dCmdHeader header;
		struct {
			SVGA3dCmdSetTextureState c;
			SVGA3dTextureState s1;
		} body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 565 */;
	struct vmw_ctx_bindinfo_tex *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 562 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdSetRenderTarget body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 529 */;
	struct vmw_ctx_bindinfo_view *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 526 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdSetShader body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 497 */;
	struct list_head *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 393 */;
	const struct vmw_ctx_binding_state *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 322 */;
	const struct vmw_binding_info *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 303 */;
	struct vmw_ctx_bindinfo *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 301 */;
	u32 cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 299 */;
	const struct vmw_ctx_bindinfo *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 298 */;
	struct vmw_ctx_binding_state *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 297 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 297 */;
	u8 *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 268 */;
	size_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 266 */;
	struct vmw_ctx_bindinfo cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 249 */;
	const struct vmw_resource *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 243 */;
	struct vmw_ctx_bindinfo_ib cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 226 */;
	struct vmw_ctx_bindinfo_vb cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 222 */;
	struct vmw_ctx_bindinfo_so cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 218 */;
	struct vmw_ctx_bindinfo_cb cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 198 */;
	struct vmw_ctx_bindinfo_tex cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 194 */;
	struct vmw_ctx_bindinfo_view cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 190 */;
	struct vmw_ctx_bindinfo_shader cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 186 */;
	const struct vmw_binding_info cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 184 */[];
	struct vmw_ctx_binding_state cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 162 */;
	const size_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 161 */[];
	struct vmw_binding_info {
		size_t size;
		const size_t *offsets;
		vmw_scrub_func scrub_func;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 140 */;
	SVGA3dVertexBuffer cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 1294 */;
	SVGA3dSoTarget cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 1292 */;
	int (*cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 126 */)(struct vmw_ctx_bindinfo *,
									 bool);
	u32 cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 1258 */[vmw_ctx_binding_max];
	enum vmw_ctx_binding_type cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 1256 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 124 */(void)__attribute__((unused));
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 119 */(struct vmw_ctx_binding_state *cbs);
	struct ttm_operation_ctx cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 1177 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 115 */(struct vmw_ctx_bindinfo *bi,
								      bool rebind);
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDXSetIndexBuffer body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 1139 */;
	struct vmw_ctx_bindinfo_ib *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 1136 */;
	struct vmw_ctx_bindinfo_vb *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 1117 */;
	unsigned long cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 1021 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_binding.c 1018 */;
}
