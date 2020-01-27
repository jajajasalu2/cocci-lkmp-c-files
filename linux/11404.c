cocci_test_suite() {
	struct {
		uint32_t header;
		SVGAFifoCmdDefineGMRFB body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 985 */;
	struct vmw_framebuffer_bo cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 982 */;
	struct vmw_buffer_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 981 */;
	struct vmw_framebuffer *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 979 */;
	struct vmw_private *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 978 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 978 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 953 */;
	struct vmw_screen_object_unit {
		struct vmw_display_unit base;
		unsigned long buffer_size;
		struct vmw_buffer_object *buffer;
		bool defined;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 90 */;
	struct drm_plane *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 832 */;
	struct vmw_kms_sou_define_gmrfb {
		uint32_t header;
		SVGAFifoCmdDefineGMRFB body;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 82 */;
	const struct drm_crtc_helper_funcs cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 815 */;
	const struct drm_plane_helper_funcs cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 799 */;
	const struct drm_plane_funcs cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 787 */;
	struct vmw_kms_sou_dirty_cmd {
		SVGA3dCmdHeader header;
		SVGA3dCmdBlitSurfaceToScreen body;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 77 */;
	struct vmw_fence_obj *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 732 */;
	struct drm_pending_vblank_event *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 731 */;
	struct vmw_kms_sou_bo_blit {
		uint32 header;
		SVGAFifoCmdBlitGMRFBToScreen body;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 72 */;
	struct vmw_du_update_plane_surface cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 704 */;
	struct vmw_kms_sou_readback_blit {
		uint32 header;
		SVGAFifoCmdBlitScreenToGMRFB body;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 67 */;
	typeof(*srf_update) cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 648 */;
	struct drm_rect cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 640 */;
	struct vmw_du_update_plane_surface *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 638 */;
	struct vmw_kms_sou_surface_dirty {
		struct vmw_kms_dirty base;
		s32 left,right,top,bottom;
		s32 dst_x,dst_y;
		u32 sid;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 56 */;
	struct vmw_du_update_plane_buffer cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 543 */;
	struct drm_rect *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 502 */;
	struct vmw_kms_sou_define_gmrfb *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 480 */;
	typeof(*vfbbo) cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 479 */;
	struct vmw_framebuffer_bo *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 478 */;
	void *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 476 */;
	struct vmw_du_update_plane *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 475 */;
	struct vmw_kms_sou_define_gmrfb cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 471 */;
	struct vmw_screen_object_unit cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 38 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 357 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 346 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 341 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 333 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 328 */;
	const struct drm_crtc_funcs cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 314 */;
	struct vmw_screen_object_unit *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 295 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 292 */;
	struct vmw_connector_state *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 240 */;
	struct drm_connector_state *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 239 */;
	struct vmw_plane_state *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 219 */;
	struct drm_plane_state *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 218 */;
	struct drm_framebuffer *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 217 */;
	struct {
		struct {
			uint32_t cmdType;
		} header;
		SVGAFifoCmdDestroyScreen body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 172 */;
	SVGAScreenObject cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 141 */;
	struct vmw_kms_sou_readback_blit cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1378 */;
	uint32_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1354 */;
	struct drm_vmw_fence_rep __user *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1352 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1350 */;
	struct vmw_kms_sou_readback_blit *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1318 */;
	struct vmw_kms_sou_bo_blit cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1272 */;
	struct vmw_kms_dirty cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1253 */;
	struct {
		struct {
			uint32_t cmdType;
		} header;
		SVGAScreenObject obj;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 125 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1248 */;
	struct vmw_fence_obj **cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1247 */;
	bool cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1246 */;
	unsigned cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1245 */;
	struct drm_vmw_rect *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1244 */;
	struct drm_clip_rect *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1243 */;
	size_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 123 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 121 */;
	struct vmw_kms_sou_bo_blit *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1208 */;
	struct vmw_kms_dirty *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1206 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1206 */;
	SVGASignedRect cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1158 */;
	struct vmw_kms_sou_dirty_cmd cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1157 */;
	struct vmw_kms_sou_surface_dirty cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1138 */;
	typeof(*vfbs) cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1137 */;
	struct vmw_framebuffer_surface *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1136 */;
	s32 cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1130 */;
	struct vmw_resource *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1129 */;
	SVGASignedRect *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1085 */;
	struct vmw_kms_sou_dirty_cmd *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1084 */;
	typeof(*sdirty) cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1083 */;
	struct vmw_kms_sou_surface_dirty *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_scrn.c 1082 */;
}
