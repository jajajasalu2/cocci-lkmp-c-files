cocci_test_suite() {
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 98 */(struct vmw_resource *res,
								     bool readback,
								     struct ttm_validate_buffer *val_buf);
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 96 */(struct vmw_resource *res,
								     struct ttm_validate_buffer *val_buf);
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 95 */(struct vmw_resource *res);
	struct ttm_base_object **cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 930 */;
	enum drm_vmw_handle_type cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 929 */;
	struct vmw_resource *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 86 */(struct ttm_base_object *base);
	struct drm_vmw_size __user *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 806 */;
	unsigned long cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 806 */;
	struct vmw_surface_dirty {
		struct svga3dsurface_cache cache;
		size_t size;
		u32 num_subres;
		SVGA3dBox boxes[0];
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 78 */;
	struct vmw_surface_offset cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 768 */;
	struct drm_vmw_size cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 767 */;
	const struct svga3d_surface_desc *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 749 */;
	struct vmw_surface_offset *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 746 */;
	struct ttm_operation_ctx cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 738 */;
	struct drm_vmw_surface_create_req *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 735 */;
	union drm_vmw_surface_create_arg *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 733 */;
	struct vmw_surface_offset {
		uint32_t face;
		uint32_t mip;
		uint32_t bo_offset;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 65 */;
	void (*cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 614 */)(struct vmw_resource *res);
	struct vmw_user_surface {
		struct ttm_prime_object prime;
		struct vmw_surface srf;
		uint32_t size;
		struct drm_master *master;
		struct ttm_base_object *backup_base;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 49 */;
	SVGAGuestPtr cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 485 */;
	uint64_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 36 */;
	const struct vmw_surface_offset *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 315 */;
	SVGA3dCmdSurfaceDMASuffix *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 314 */;
	SVGA3dCopyBox *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 313 */;
	SVGA3dCmdSurfaceDMA *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 312 */;
	SVGA3dCmdHeader *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 311 */;
	struct vmw_surface_dma *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 306 */;
	const SVGAGuestPtr *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 302 */;
	SVGA3dSurface1Flags cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 275 */;
	SVGA3dSize cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 265 */;
	SVGA3dSize *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 261 */;
	struct drm_vmw_size *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 260 */;
	struct vmw_surface_define *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 258 */;
	const struct vmw_surface *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 255 */;
	struct vmw_surface_destroy *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 241 */;
	struct vmw_surface_destroy cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 229 */;
	struct vmw_surface_define cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 216 */;
	struct vmw_resource_dirty *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 2099 */;
	struct vmw_surface_dma cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 202 */;
	const SVGA3dBox *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1993 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdUpdateGBImage body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1985 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDXUpdateSubResource body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1981 */;
	size_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1932 */;
	struct svga3dsurface_loc cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1899 */;
	struct vmw_surface_destroy {
		SVGA3dCmdHeader header;
		SVGA3dCmdDestroySurface body;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 186 */;
	const struct drm_vmw_size *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1833 */;
	u32 cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1832 */;
	SVGA3dBox *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1831 */;
	const struct svga3dsurface_cache *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1830 */;
	const struct svga3dsurface_loc *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1827 */;
	struct vmw_surface_dirty *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1826 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1780 */;
	struct vmw_surface_define {
		SVGA3dCmdHeader header;
		SVGA3dCmdDefineSurface body;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 178 */;
	struct ttm_base_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1757 */;
	struct vmw_buffer_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1686 */;
	struct vmw_surface_dma {
		SVGA3dCmdHeader header;
		SVGA3dCmdSurfaceDMA body;
		SVGA3dCopyBox cb;
		SVGA3dCmdSurfaceDMASuffix suffix;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 168 */;
	struct vmw_user_surface cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1644 */;
	SVGA3dSurfaceAllFlags cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1592 */;
	struct ttm_object_file *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1588 */;
	struct vmw_user_surface *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1584 */;
	struct drm_vmw_gb_surface_ref_ext_rep *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1563 */;
	struct drm_vmw_surface_arg *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1562 */;
	union drm_vmw_gb_surface_reference_ext_arg *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1560 */;
	struct drm_vmw_gb_surface_create_rep *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1544 */;
	struct drm_vmw_gb_surface_create_ext_req *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1543 */;
	union drm_vmw_gb_surface_create_ext_arg *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1541 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1539 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1538 */;
	const struct vmw_res_func cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 146 */;
	struct vmw_surface **cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1398 */;
	SVGA3dMSQualityLevel cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1397 */;
	SVGA3dMSPattern cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1396 */;
	SVGA3dSurfaceFormat cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1390 */;
	struct drm_vmw_gb_surface_ref_ext_rep cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1351 */;
	struct drm_vmw_gb_surface_ref_rep *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1350 */;
	union drm_vmw_gb_surface_reference_arg *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1347 */;
	struct drm_vmw_gb_surface_create_ext_req cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1324 */;
	union drm_vmw_gb_surface_create_arg *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1321 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDestroyGBSurface body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1280 */;
	const struct vmw_user_resource_conv *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 126 */;
	uint8_t *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1230 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdInvalidateGBSurface body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1221 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdReadbackGBSurface body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1217 */;
	struct vmw_fence_obj *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1215 */;
	bool cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1210 */;
	const struct vmw_user_resource_conv cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 120 */;
	void *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1192 */;
	struct ttm_buffer_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1177 */;
	uint32_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1176 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdUpdateGBSurface body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1172 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdBindGBSurface body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1168 */;
	struct vmw_private *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1167 */;
	struct ttm_validate_buffer *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1165 */;
	struct vmw_resource *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1164 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1164 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 116 */(struct vmw_resource *res,
								       size_t start,
								       size_t end);
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 113 */(struct vmw_resource *res);
	typeof(cmd3) cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1104 */;
	typeof(cmd2) cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1103 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 107 */(struct drm_device *dev,
								      struct drm_vmw_surface_arg *req,
								      struct drm_vmw_gb_surface_ref_ext_rep *rep,
								      struct drm_file *file_priv);
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDefineGBSurface_v3 body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1067 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDefineGBSurface_v2 body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1063 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDefineGBSurface body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1059 */;
	struct vmw_surface *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1056 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 102 */(struct drm_device *dev,
								      struct drm_vmw_gb_surface_create_ext_req *req,
								      struct drm_vmw_gb_surface_create_rep *rep,
								      struct drm_file *file_priv);
	union drm_vmw_surface_reference_arg *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_surface.c 1006 */;
}
