cocci_test_suite() {
	int cocci_id/* drivers/gpu/drm/i915/gvt/fb_decoder.c 81 */;
	struct pixel_format cocci_id/* drivers/gpu/drm/i915/gvt/fb_decoder.c 48 */[];
	struct pixel_format {
		int drm_format;
		int bpp;
		char *desc;
	} cocci_id/* drivers/gpu/drm/i915/gvt/fb_decoder.c 42 */;
	struct intel_vgpu_sprite_plane_format *cocci_id/* drivers/gpu/drm/i915/gvt/fb_decoder.c 412 */;
	struct pixel_format cocci_id/* drivers/gpu/drm/i915/gvt/fb_decoder.c 394 */[SPRITE_FORMAT_NUM];
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/gvt/fb_decoder.c 337 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gvt/fb_decoder.c 335 */;
	struct intel_vgpu_cursor_plane_format *cocci_id/* drivers/gpu/drm/i915/gvt/fb_decoder.c 333 */;
	struct cursor_mode_format cocci_id/* drivers/gpu/drm/i915/gvt/fb_decoder.c 288 */[];
	struct cursor_mode_format {
		int drm_format;
		u8 bpp;
		u32 width;
		u32 height;
		char *desc;
	} cocci_id/* drivers/gpu/drm/i915/gvt/fb_decoder.c 280 */;
	struct intel_vgpu_primary_plane_format *cocci_id/* drivers/gpu/drm/i915/gvt/fb_decoder.c 203 */;
	struct intel_vgpu *cocci_id/* drivers/gpu/drm/i915/gvt/fb_decoder.c 182 */;
	bool cocci_id/* drivers/gpu/drm/i915/gvt/fb_decoder.c 112 */;
}
